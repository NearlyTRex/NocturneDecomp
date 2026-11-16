; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_httpReaderInit_FUN_00570320(void *reader,CSocket *socket)
;
; Parameters:
; void *           Stack[0x4]:4   reader
; CSocket *        Stack[0x8]:4   socket
;
; XREF[1]:
;   support_trisock.cpp_httpReceiveResponse_FUN_005704a0 at 005704be
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00570320
        ;   Label: support_trisock.cpp_httpReaderInit_FUN_00570320
    MOV dword ptr [EAX + 0x808],0x0     ; 00570324
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057032e
    MOV dword ptr [EAX],0x0             ; 00570332
    MOV dword ptr [EAX + 0x4],EDX       ; 00570338
    LEA EDX,[EAX + 0x8]                 ; 0057033b
    MOV dword ptr [EAX + 0x80c],EDX     ; 0057033e
    RET                                 ; 00570344

