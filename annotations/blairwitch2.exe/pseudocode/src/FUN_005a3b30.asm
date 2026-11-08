; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a3b30(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f01de
;   TerminatedCString s_Animation_005f01e4
;
; Called Functions:
;   FUN_005035c0
;   FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3b30
        ;   Label: FUN_005a3b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3b31
    PUSH 0x5f01de                       ; 005a3b35 | = "Death"
    ADD EBX,0x10af8                     ; 005a3b3a
    PUSH EBX                            ; 005a3b40
    CALL FUN_0059daa0                   ; 005a3b41
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a3b46
    TEST EAX,EAX                        ; 005a3b49
    JNZ 0x005a3b5f                      ; 005a3b4b
        ;   XREF to: 005a3b5f (CONDITIONAL_JUMP)  ; LAB_005a3b5f
    PUSH 0x5f01e4                       ; 005a3b4d | = "Animation"
    PUSH EBX                            ; 005a3b52
    CALL FUN_0059daa0                   ; 005a3b53
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a3b58
    TEST EAX,EAX                        ; 005a3b5b
    JZ 0x005a3b8e                       ; 005a3b5d
        ;   XREF to: 005a3b8e (CONDITIONAL_JUMP)  ; LAB_005a3b8e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3b5f
        ;   Label: LAB_005a3b5f
    ADD EAX,0x2b4                       ; 005a3b63
    PUSH EAX                            ; 005a3b68
    CALL FUN_005035c0                   ; 005a3b69
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a3b6e
    ADD ESP,0x4                         ; 005a3b71
    CMP EAX,0x7                         ; 005a3b74
    JC 0x005a3b8e                       ; 005a3b77
        ;   XREF to: 005a3b8e (CONDITIONAL_JUMP)  ; LAB_005a3b8e
    JBE 0x005a3b87                      ; 005a3b79
        ;   XREF to: 005a3b87 (CONDITIONAL_JUMP)  ; LAB_005a3b87
    CMP EAX,0x8                         ; 005a3b7b
    JNZ 0x005a3b8e                      ; 005a3b7e
        ;   XREF to: 005a3b8e (CONDITIONAL_JUMP)  ; LAB_005a3b8e
    MOV EAX,0x2                         ; 005a3b80
    POP EBX                             ; 005a3b85
    RET                                 ; 005a3b86
    MOV EAX,0x1                         ; 005a3b87
        ;   Label: LAB_005a3b87
    POP EBX                             ; 005a3b8c
    RET                                 ; 005a3b8d
    XOR EAX,EAX                         ; 005a3b8e
        ;   Label: LAB_005a3b8e
    POP EBX                             ; 005a3b90
    RET                                 ; 005a3b91

