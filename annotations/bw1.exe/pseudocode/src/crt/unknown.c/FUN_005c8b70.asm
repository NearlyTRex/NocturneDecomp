; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c8b70(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c7280 at 005c728b
;
; Referenced Globals:
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;   undefined4 DAT_0062683c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8b70
        ;   Label: crt_unknown.c_FUN_005c8b70
    MOV ECX,dword ptr [0x00626838]      ; 005c8b71 | DAT_00626838
    MOV EAX,[0x0062683c]                ; 005c8b77 | DAT_0062683c
    CMP EAX,dword ptr [0x006267e0]      ; 005c8b7c | DAT_006267e0
    JNC 0x005c8b88                      ; 005c8b82
        ;   XREF to: 005c8b88 (CONDITIONAL_JUMP)  ; LAB_005c8b88
    XOR EAX,EAX                         ; 005c8b84
    JMP 0x005c8bb5                      ; 005c8b86
        ;   XREF to: 005c8bb5 (UNCONDITIONAL_JUMP)  ; LAB_005c8bb5
    TEST EAX,EAX                        ; 005c8b88
        ;   Label: LAB_005c8b88
    JLE 0x005c8bb0                      ; 005c8b8a
        ;   XREF to: 005c8bb0 (CONDITIONAL_JUMP)  ; LAB_005c8bb0
    MOV EBX,dword ptr [0x0062683c]      ; 005c8b8c | DAT_0062683c
    MOV EDX,ECX                         ; 005c8b92
    XOR EAX,EAX                         ; 005c8b94
    SHL EBX,0x2                         ; 005c8b96
    CMP dword ptr [EDX + EAX*0x1],0x0   ; 005c8b99
        ;   Label: LAB_005c8b99
    JNZ 0x005c8ba9                      ; 005c8b9d
        ;   XREF to: 005c8ba9 (CONDITIONAL_JUMP)  ; LAB_005c8ba9
    XOR EAX,EAX                         ; 005c8b9f
    MOV dword ptr [0x00626838],ECX      ; 005c8ba1 | DAT_00626838
    POP EBX                             ; 005c8ba7
    RET                                 ; 005c8ba8
    ADD EAX,0x4                         ; 005c8ba9
        ;   Label: LAB_005c8ba9
    CMP EAX,EBX                         ; 005c8bac
    JL 0x005c8b99                       ; 005c8bae
        ;   XREF to: 005c8b99 (CONDITIONAL_JUMP)  ; LAB_005c8b99
    MOV EAX,0x1                         ; 005c8bb0
        ;   Label: LAB_005c8bb0
    MOV dword ptr [0x00626838],ECX      ; 005c8bb5 | DAT_00626838
        ;   Label: LAB_005c8bb5
    POP EBX                             ; 005c8bbb
    RET                                 ; 005c8bbc

