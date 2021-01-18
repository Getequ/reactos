/*
 * PROJECT:     shell32
 * LICENSE:     LGPL-2.1-or-later (https://spdx.org/licenses/LGPL-2.1-or-later)
 * PURPOSE:     IShellLibrary header
 * COPYRIGHT:   Copyright 2021 Oleg Dubinskiy (oleg.dubinskij2013@yandex.ua)
 */

#ifndef _CSHELLLIBRARY_H_
#define _CSHELLLIBRARY_H_

class CShellLibrary :
    public CComCoClass<CShellLibrary, &CLSID_ShellLibrary>,
    public CComObjectRootEx<CComMultiThreadModelNoCS>,
    public IShellLibrary
{
public:
    CShellLibrary();
    ~CShellLibrary();

    /*** IShellLibrary methods ***/
    STDMETHODIMP AddFolder(IShellItem *psiLocation);
    STDMETHODIMP Commit();
    STDMETHODIMP GetDefaultSaveFolder(DEFAULTSAVEFOLDERTYPE dsft, REFIID riid, void **ppv);
    STDMETHODIMP GetFolders(LIBRARYFOLDERFILTER lff, REFIID riid, void **ppv);
    STDMETHODIMP GetFolderType(FOLDERTYPEID *pftid);
    STDMETHODIMP GetIcon(LPWSTR *ppszIcon);
    STDMETHODIMP GetOptions(LIBRARYOPTIONFLAGS *plofOptions);
    STDMETHODIMP LoadLibraryFromItem(IShellItem *psiLibrary, DWORD grfMode);
    STDMETHODIMP LoadLibraryFromKnownFolder(REFKNOWNFOLDERID kfidLibrary, DWORD grfMode);
    STDMETHODIMP RemoveFolder(IShellItem *psiLocation);
    STDMETHODIMP ResolveFolder(IShellItem *psiFolderToResolve, DWORD dwTimeout, REFIID riid, void **ppv);
    STDMETHODIMP Save(IShellItem *psiFolderToSaveIn, LPCWSTR pszLibraryName, LIBRARYSAVEFLAGS lsf, IShellItem **ppsiSavedTo);
    STDMETHODIMP SaveInKnownFolder(REFKNOWNFOLDERID kfidToSaveIn, LPCWSTR pszLibraryName, LIBRARYSAVEFLAGS lsf, IShellItem **ppsiSavedTo);
    STDMETHODIMP SetDefaultSaveFolder(DEFAULTSAVEFOLDERTYPE dsft, IShellItem *psi);
    STDMETHODIMP SetFolderType(REFFOLDERTYPEID ftid);
    STDMETHODIMP SetIcon(LPCWSTR pszIcon);
    STDMETHODIMP SetOptions(LIBRARYOPTIONFLAGS lofMask, LIBRARYOPTIONFLAGS lofOptions);


DECLARE_REGISTRY_RESOURCEID(IDR_SHELLLIBRARY)
DECLARE_NOT_AGGREGATABLE(CShellLibrary)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CShellLibrary)
    COM_INTERFACE_ENTRY_IID(IID_IShellLibrary, IShellLibrary)
END_COM_MAP()
};

#endif // _CSHELLLIBRARY_H_
