; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl crt_stdio_c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData *embedded_data,uint error_code)
;
; Parameters:
; FileEmbeddedData * Stack[0x4]:4   embedded_data
; uint             Stack[0x8]:4   error_code
;
; XREF[2]:
;   crt_fstream.cpp_openFile_FUN_00600e85 at 00600edd
;   engine_dosio.c_reopenFileStream_FUN_00481b50 at 00481b7a
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600e64
        ;   Label: crt_stdio.c_clear_and_preserve_state_FUN_00600e64
    MOV EAX,dword ptr [ESP + 0x8]       ; 00600e65
    MOV EDX,dword ptr [ESP + 0xc]       ; 00600e69
    PUSH EDX                            ; 00600e6d
    PUSH EAX                            ; 00600e6e
    MOV EBX,dword ptr [EAX + 0x10]      ; 00600e6f
    MOV dword ptr [EAX + 0x10],0x0      ; 00600e72
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00600e79
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 00600e7e
    MOV EAX,EBX                         ; 00600e81
    POP EBX                             ; 00600e83
    RET                                 ; 00600e84

