; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_00565e94(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_fstream.cpp_openFile_FUN_00565eb5 at 00565f0d
;   engine_dosio.cpp_FUN_00456b20 at 00456b4a
;
; Called Functions:
;   FUN_0056b327
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565e94
        ;   Label: crt_unknown.c_FUN_00565e94
    MOV EAX,dword ptr [ESP + 0x8]       ; 00565e95
    MOV EDX,dword ptr [ESP + 0xc]       ; 00565e99
    PUSH EDX                            ; 00565e9d
    PUSH EAX                            ; 00565e9e
    MOV EBX,dword ptr [EAX + 0x10]      ; 00565e9f
    MOV dword ptr [EAX + 0x10],0x0      ; 00565ea2
    CALL FUN_0056b327                   ; 00565ea9
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 00565eae
    MOV EAX,EBX                         ; 00565eb1
    POP EBX                             ; 00565eb3
    RET                                 ; 00565eb4

