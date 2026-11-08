; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00589e50(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005801e0 at 005801fc
;
; Referenced Globals:
;   undefined4 DAT_005ee52a
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589e50
        ;   Label: FUN_00589e50
    PUSH EBP                            ; 00589e51
    MOV EBP,ESP                         ; 00589e52
    AND ESP,0xfffffff8                  ; 00589e54
    MOV EBX,dword ptr [EBP + 0xc]       ; 00589e57
    CMP dword ptr [EBX + 0x460],0x0     ; 00589e5a
    JNZ 0x00589e9a                      ; 00589e61
        ;   XREF to: 00589e9a (CONDITIONAL_JUMP)  ; LAB_00589e9a
    CMP dword ptr [EBX + 0x430],0x0     ; 00589e63
    JNZ 0x00589e9a                      ; 00589e6a
        ;   XREF to: 00589e9a (CONDITIONAL_JUMP)  ; LAB_00589e9a
    CMP dword ptr [EBX + 0x6b8],0x0     ; 00589e6c
    JZ 0x00589e9a                       ; 00589e73
        ;   XREF to: 00589e9a (CONDITIONAL_JUMP)  ; LAB_00589e9a
    LEA EAX,[EBX + 0x4b0]               ; 00589e75
    FLD float ptr [EAX + 0x4]           ; 00589e7b
    FMUL ST0                            ; 00589e7e
    FLD float ptr [EAX]                 ; 00589e80
    FMUL ST0                            ; 00589e82
    FADDP                               ; 00589e84
    FLD float ptr [EAX + 0x8]           ; 00589e86
    FMUL ST0                            ; 00589e89
    FADDP                               ; 00589e8b
    FSQRT                               ; 00589e8d
    FCOMP double ptr [0x005ee52a]       ; 00589e8f | DAT_005ee52a
    FNSTSW AX                           ; 00589e95
    SAHF                                ; 00589e97
    JA 0x00589ea3                       ; 00589e98
        ;   XREF to: 00589ea3 (CONDITIONAL_JUMP)  ; LAB_00589ea3
    CMP dword ptr [EBX + 0x460],0x0     ; 00589e9a
        ;   Label: LAB_00589e9a
    JZ 0x00589eaa                       ; 00589ea1
        ;   XREF to: 00589eaa (CONDITIONAL_JUMP)  ; LAB_00589eaa
    XOR EAX,EAX                         ; 00589ea3
        ;   Label: LAB_00589ea3
    MOV ESP,EBP                         ; 00589ea5
    POP EBP                             ; 00589ea7
    POP EBX                             ; 00589ea8
    RET                                 ; 00589ea9
    PUSH 0x5ee51b                       ; 00589eaa
        ;   Label: LAB_00589eaa
    MOV EAX,dword ptr [EBP + 0x10]      ; 00589eaf
    PUSH EAX                            ; 00589eb2
    CALL FUN_0040c840                   ; 00589eb3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00589eb8
    TEST EAX,EAX                        ; 00589ebb
    JZ 0x00589ec9                       ; 00589ebd
        ;   XREF to: 00589ec9 (CONDITIONAL_JUMP)  ; LAB_00589ec9
    MOV EAX,0x3                         ; 00589ebf
        ;   Label: LAB_00589ebf
    MOV ESP,EBP                         ; 00589ec4
    POP EBP                             ; 00589ec6
    POP EBX                             ; 00589ec7
    RET                                 ; 00589ec8
    PUSH 0x5ee524                       ; 00589ec9
        ;   Label: LAB_00589ec9
    MOV EDX,dword ptr [EBP + 0x10]      ; 00589ece
    PUSH EDX                            ; 00589ed1
    CALL FUN_0040c840                   ; 00589ed2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00589ed7
    TEST EAX,EAX                        ; 00589eda
    JNZ 0x00589ef2                      ; 00589edc
        ;   XREF to: 00589ef2 (CONDITIONAL_JUMP)  ; LAB_00589ef2
    MOV ECX,dword ptr [EBX + 0x430]     ; 00589ede
    TEST ECX,ECX                        ; 00589ee4
    JZ 0x00589ebf                       ; 00589ee6
        ;   XREF to: 00589ebf (CONDITIONAL_JUMP)  ; LAB_00589ebf
    CMP ECX,0x3                         ; 00589ee8
    JZ 0x00589ebf                       ; 00589eeb
        ;   XREF to: 00589ebf (CONDITIONAL_JUMP)  ; LAB_00589ebf
    MOV ESP,EBP                         ; 00589eed
    POP EBP                             ; 00589eef
    POP EBX                             ; 00589ef0
    RET                                 ; 00589ef1
    MOV EAX,0x2                         ; 00589ef2
        ;   Label: LAB_00589ef2
    MOV ESP,EBP                         ; 00589ef7
    POP EBP                             ; 00589ef9
    POP EBX                             ; 00589efa
    RET                                 ; 00589efb

