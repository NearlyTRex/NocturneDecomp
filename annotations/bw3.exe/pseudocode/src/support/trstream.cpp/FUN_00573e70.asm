; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_00573e70(int param_1)
;
;
; XREF[2]:
;   support_trstream.cpp_FUN_00573e00 at 00573e06
;   unkafter_turret.cpp_FUN_00573db0 at 00573dd2
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573e70
        ;   Label: support_trstream.cpp_FUN_00573e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573e71
    MOV EDX,dword ptr [EBX + 0x14]      ; 00573e75
    TEST EDX,EDX                        ; 00573e78
    JNZ 0x00573e9a                      ; 00573e7a
        ;   XREF to: 00573e9a (CONDITIONAL_JUMP)  ; LAB_00573e9a
    MOV dword ptr [EBX + 0x1c],0x0      ; 00573e7c
        ;   Label: LAB_00573e7c
    MOV dword ptr [EBX + 0x20],0x0      ; 00573e83
    MOV dword ptr [EBX + 0x24],0x0      ; 00573e8a
    MOV dword ptr [EBX + 0x18],0x0      ; 00573e91
    POP EBX                             ; 00573e98
    RET                                 ; 00573e99
    PUSH EDX                            ; 00573e9a
        ;   Label: LAB_00573e9a
    CALL crt_unknown.c_FUN_005a3770     ; 00573e9b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00573ea0
    MOV dword ptr [EBX + 0x14],0x0      ; 00573ea3
    JMP 0x00573e7c                      ; 00573eaa
        ;   XREF to: 00573e7c (UNCONDITIONAL_JUMP)  ; LAB_00573e7c

