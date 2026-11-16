; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_httpReaderInit_FUN_00579cc0(void *reader,CSocket *socket)
;
; Parameters:
; void *           Stack[0x4]:4   reader
; CSocket *        Stack[0x8]:4   socket
;
; XREF[1]:
;   support_trisock.cpp_httpReceiveResponse_FUN_00579e40 at 00579e5e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00579cc0
        ;   Label: support_trisock.cpp_httpReaderInit_FUN_00579cc0
    MOV dword ptr [EAX + 0x808],0x0     ; 00579cc4
    MOV EDX,dword ptr [ESP + 0x8]       ; 00579cce
    MOV dword ptr [EAX],0x0             ; 00579cd2
    MOV dword ptr [EAX + 0x4],EDX       ; 00579cd8
    LEA EDX,[EAX + 0x8]                 ; 00579cdb
    MOV dword ptr [EAX + 0x80c],EDX     ; 00579cde
    RET                                 ; 00579ce4

