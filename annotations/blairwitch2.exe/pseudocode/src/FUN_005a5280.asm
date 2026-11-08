; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a5280(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_BDeath_005f0571+1
;   TerminatedCString s_Animation_005f0578
;
; Called Functions:
;   FUN_005035c0
;   FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5280
        ;   Label: FUN_005a5280
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5281
    PUSH 0x5f0572                       ; 005a5285 | s_BDeath_005f0571+1
    ADD EBX,0x10af8                     ; 005a528a
    PUSH EBX                            ; 005a5290
    CALL FUN_0059daa0                   ; 005a5291
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a5296
    TEST EAX,EAX                        ; 005a5299
    JNZ 0x005a52af                      ; 005a529b
        ;   XREF to: 005a52af (CONDITIONAL_JUMP)  ; LAB_005a52af
    PUSH 0x5f0578                       ; 005a529d | = "Animation"
    PUSH EBX                            ; 005a52a2
    CALL FUN_0059daa0                   ; 005a52a3
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a52a8
    TEST EAX,EAX                        ; 005a52ab
    JZ 0x005a52de                       ; 005a52ad
        ;   XREF to: 005a52de (CONDITIONAL_JUMP)  ; LAB_005a52de
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a52af
        ;   Label: LAB_005a52af
    ADD EAX,0x2b4                       ; 005a52b3
    PUSH EAX                            ; 005a52b8
    CALL FUN_005035c0                   ; 005a52b9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a52be
    ADD ESP,0x4                         ; 005a52c1
    CMP EAX,0x6                         ; 005a52c4
    JC 0x005a52de                       ; 005a52c7
        ;   XREF to: 005a52de (CONDITIONAL_JUMP)  ; LAB_005a52de
    JBE 0x005a52d7                      ; 005a52c9
        ;   XREF to: 005a52d7 (CONDITIONAL_JUMP)  ; LAB_005a52d7
    CMP EAX,0x7                         ; 005a52cb
    JNZ 0x005a52de                      ; 005a52ce
        ;   XREF to: 005a52de (CONDITIONAL_JUMP)  ; LAB_005a52de
    MOV EAX,0x2                         ; 005a52d0
    POP EBX                             ; 005a52d5
    RET                                 ; 005a52d6
    MOV EAX,0x1                         ; 005a52d7
        ;   Label: LAB_005a52d7
    POP EBX                             ; 005a52dc
    RET                                 ; 005a52dd
    XOR EAX,EAX                         ; 005a52de
        ;   Label: LAB_005a52de
    POP EBX                             ; 005a52e0
    RET                                 ; 005a52e1

