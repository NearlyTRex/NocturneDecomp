; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c9a88(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c9ae4 at 005c9b0e
;
; Called Functions:
;   crt_unknown.c_FUN_005c9988
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9a88
        ;   Label: crt_unknown.c_FUN_005c9a88
    PUSH ESI                            ; 005c9a89
    PUSH EBP                            ; 005c9a8a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c9a8b
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c9a8f
    CMP dword ptr [EAX + 0x20],0x0      ; 005c9a93
    JNZ 0x005c9ab4                      ; 005c9a97
        ;   XREF to: 005c9ab4 (CONDITIONAL_JUMP)  ; LAB_005c9ab4
    CMP dword ptr [ESI + 0x20],0x0      ; 005c9a99
    JNZ 0x005c9ab4                      ; 005c9a9d
        ;   XREF to: 005c9ab4 (CONDITIONAL_JUMP)  ; LAB_005c9ab4
    MOV EBX,dword ptr [EAX + 0x10]      ; 005c9a9f
    MOV ECX,dword ptr [ESI + 0x10]      ; 005c9aa2
    CMP EBX,ECX                         ; 005c9aa5
    JLE 0x005c9ab2                      ; 005c9aa7
        ;   XREF to: 005c9ab2 (CONDITIONAL_JUMP)  ; LAB_005c9ab2
    MOV EAX,0x1                         ; 005c9aa9
    POP EBP                             ; 005c9aae
    POP ESI                             ; 005c9aaf
    POP EBX                             ; 005c9ab0
    RET                                 ; 005c9ab1
    JL 0x005c9adb                       ; 005c9ab2
        ;   XREF to: 005c9adb (CONDITIONAL_JUMP)  ; LAB_005c9adb
        ;   Label: LAB_005c9ab2
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c9ab4
        ;   Label: LAB_005c9ab4
    PUSH EBP                            ; 005c9ab8
    PUSH EAX                            ; 005c9ab9
    CALL crt_unknown.c_FUN_005c9988     ; 005c9aba
        ;   XREF to: 005c9988 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9988()
    ADD ESP,0x8                         ; 005c9abf
    PUSH EBP                            ; 005c9ac2
    PUSH ESI                            ; 005c9ac3
    MOV EBX,EAX                         ; 005c9ac4
    CALL crt_unknown.c_FUN_005c9988     ; 005c9ac6
        ;   XREF to: 005c9988 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9988()
    ADD ESP,0x8                         ; 005c9acb
    CMP EBX,EAX                         ; 005c9ace
    JLE 0x005c9adb                      ; 005c9ad0
        ;   XREF to: 005c9adb (CONDITIONAL_JUMP)  ; LAB_005c9adb
    MOV EAX,0x1                         ; 005c9ad2
    POP EBP                             ; 005c9ad7
    POP ESI                             ; 005c9ad8
    POP EBX                             ; 005c9ad9
    RET                                 ; 005c9ada
    XOR EAX,EAX                         ; 005c9adb
        ;   Label: LAB_005c9adb
    POP EBP                             ; 005c9add
    POP ESI                             ; 005c9ade
    POP EBX                             ; 005c9adf
    RET                                 ; 005c9ae0

