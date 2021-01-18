/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS NT User-Mode DLL
 * FILE:            lib/ntdll/rtl/uilist.c
 * PURPOSE:         RTL UI to API network computers list conversion.
 *                  Helper for NETAPI32.DLL
 * PROGRAMMERS:     Hermes Belusca-Maito
 */

/* INCLUDES *****************************************************************/

#include <ntdll.h>

#define NDEBUG
#include <debug.h>

/* FUNCTIONS ***************************************************************/

/*
 * @unimplemented
 */
NTSTATUS
NTAPI
RtlConvertUiListToApiList(
    IN PUNICODE_STRING UiList,
    OUT PUNICODE_STRING ApiList,
    IN BOOLEAN SpaceAsSeparator)
{
    DPRINT1("RtlConvertUiListToApiList(%wZ, 0x%p, %s) called\n",
            UiList, &ApiList, SpaceAsSeparator ? "true" : "false");
    UNIMPLEMENTED;
    /*
     * Experiments show that returning a success code but setting the
     * ApiList length to zero is better than returning a failure code.
     */
    RtlInitEmptyUnicodeString(ApiList, NULL, 0);
    return STATUS_SUCCESS;
}

/**********************************************************************
 *           RtlGetCurrentProcessorNumberEx [NTDLL.@]
 */
VOID WINAPI RtlGetCurrentProcessorNumberEx(PROCESSOR_NUMBER *Processor)
{
    DPRINT1("RtlGetCurrentProcessorNumberEx: processor number (%p)\n", Processor);
    Processor->Group = 0;
    Processor->Number = NtGetCurrentProcessorNumber();
    Processor->Reserved = 0;
}

NTSTATUS
WINAPI
WinSqmEndSession(HANDLE session)
{
    UNIMPLEMENTED;
    return STATUS_NOT_IMPLEMENTED;
}

VOID
WINAPI
WinSqmIncrementDWORD(DWORD dwUnk1, DWORD dwUnk2, DWORD dwUnk3)
{
    UNIMPLEMENTED;
}

BOOL
WINAPI
WinSqmIsOptedIn(VOID)
{
    UNIMPLEMENTED;
    return FALSE;
}

VOID
WINAPI
WinSqmSetDWORD(HANDLE hSession, DWORD DatapointID, DWORD DatapointValue)
{
    UNIMPLEMENTED;
}

VOID
WINAPI
WinSqmSetString(VOID)
{
    UNIMPLEMENTED;
}

HANDLE
WINAPI
WinSqmStartSession(GUID *sessionguid, DWORD sessionid, DWORD unknown1)
{
    UNIMPLEMENTED;
    return INVALID_HANDLE_VALUE;
}

NTSTATUS
NTAPI
NtAlpcConnectPort(OUT PHANDLE PortHandle,
                  IN PUNICODE_STRING PortName, 
                  IN OPTIONAL POBJECT_ATTRIBUTES ObjectAttributes,
                  IN OPTIONAL PVOID PortAttributes, // PALPC_PORT_ATTRIBUTES
                  IN ULONG Flags,
                  IN OPTIONAL PSID RequiredServerSid,
                  _Inout_updates_bytes_to_opt_(*BufferLength,*BufferLength) PPORT_MESSAGE ConnectionMessage,
                  IN OUT OPTIONAL PULONG BufferLength,
                  IN OUT OPTIONAL PVOID OutMessageAttributes, // PALPC_MESSAGE_ATTRIBUTES
                  IN OUT OPTIONAL PVOID InMessageAttributes, // PALPC_MESSAGE_ATTRIBUTES
                  IN OPTIONAL PLARGE_INTEGER Timeout)
{
    UNIMPLEMENTED;
    return STATUS_SUCCESS;
}

NTSTATUS
NTAPI
NtAlpcSendWaitReceivePort(IN HANDLE PortHandle,
                          IN ULONG Flags,
                          _In_reads_bytes_opt_(SendMessage->u1.s1.TotalLength) PPORT_MESSAGE SendMessage,
                          IN OUT OPTIONAL PVOID SendMessageAttributes, // PALPC_MESSAGE_ATTRIBUTES
                          _Out_writes_bytes_to_opt_(*BufferLength,*BufferLength) PPORT_MESSAGE ReceiveMessage,
                          IN OUT OPTIONAL PSIZE_T BufferLength,
                          IN OUT OPTIONAL PVOID ReceiveMessageAttributes, // PALPC_MESSAGE_ATTRIBUTES
                          IN OPTIONAL PLARGE_INTEGER Timeout)
{
    UNIMPLEMENTED;
    return STATUS_SUCCESS;
}

VOID
NTAPI
NtFlushProcessWriteBuffers(VOID)
{
    UNIMPLEMENTED;
}

NTSTATUS
NTAPI
NtQueryLicenseValue(
    PUNICODE_STRING Name,
    ULONG *Type,
    PVOID Buffer,
    ULONG Length,
    ULONG *DataLength)
{
    UNIMPLEMENTED;
    return 0;
}

VOID
NTAPI
TpPostWork(
    IN OUT PTP_WORK Work)
{
    UNIMPLEMENTED;
}

/* EOF */
