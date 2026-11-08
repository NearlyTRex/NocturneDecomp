; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a9a80(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0997
;   TerminatedCString s_Animation_005f099d
;
; Called Functions:
;   FUN_005035c0
;   FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9a80
        ;   Label: FUN_005a9a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9a81
    PUSH 0x5f0997                       ; 005a9a85 | = "Death"
    ADD EBX,0x10af8                     ; 005a9a8a
    PUSH EBX                            ; 005a9a90
    CALL FUN_0059daa0                   ; 005a9a91
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9a96
    TEST EAX,EAX                        ; 005a9a99
    JNZ 0x005a9aaf                      ; 005a9a9b
        ;   XREF to: 005a9aaf (CONDITIONAL_JUMP)  ; LAB_005a9aaf
    PUSH 0x5f099d                       ; 005a9a9d | = "Animation"
    PUSH EBX                            ; 005a9aa2
    CALL FUN_0059daa0                   ; 005a9aa3
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a9aa8
    TEST EAX,EAX                        ; 005a9aab
    JZ 0x005a9ade                       ; 005a9aad
        ;   XREF to: 005a9ade (CONDITIONAL_JUMP)  ; LAB_005a9ade
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a9aaf
        ;   Label: LAB_005a9aaf
    ADD EAX,0x2b4                       ; 005a9ab3
    PUSH EAX                            ; 005a9ab8
    CALL FUN_005035c0                   ; 005a9ab9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a9abe
    ADD ESP,0x4                         ; 005a9ac1
    CMP EAX,0xa                         ; 005a9ac4
    JC 0x005a9ade                       ; 005a9ac7
        ;   XREF to: 005a9ade (CONDITIONAL_JUMP)  ; LAB_005a9ade
    JBE 0x005a9ad7                      ; 005a9ac9
        ;   XREF to: 005a9ad7 (CONDITIONAL_JUMP)  ; LAB_005a9ad7
    CMP EAX,0xb                         ; 005a9acb
    JNZ 0x005a9ade                      ; 005a9ace
        ;   XREF to: 005a9ade (CONDITIONAL_JUMP)  ; LAB_005a9ade
    MOV EAX,0x2                         ; 005a9ad0
    POP EBX                             ; 005a9ad5
    RET                                 ; 005a9ad6
    MOV EAX,0x1                         ; 005a9ad7
        ;   Label: LAB_005a9ad7
    POP EBX                             ; 005a9adc
    RET                                 ; 005a9add
    XOR EAX,EAX                         ; 005a9ade
        ;   Label: LAB_005a9ade
    POP EBX                             ; 005a9ae0
    RET                                 ; 005a9ae1

