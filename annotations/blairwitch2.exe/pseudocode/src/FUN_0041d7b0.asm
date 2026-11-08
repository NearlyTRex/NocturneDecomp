; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041d7b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f3c20
;
; Called Functions:
;   FUN_00408930
;   FUN_00449d30
;   FUN_005b1c70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d7b0
        ;   Label: FUN_0041d7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d7b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041d7b5
    JNZ 0x0041d7fd                      ; 0041d7ba
        ;   XREF to: 0041d7fd (CONDITIONAL_JUMP)  ; LAB_0041d7fd
    PUSH 0x0                            ; 0041d7bc
    ADD EBX,0x7d8                       ; 0041d7be
    PUSH EBX                            ; 0041d7c4
    CALL FUN_00449d30                   ; 0041d7c5
        ;   XREF to: 00449d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00449d30()
    ADD ESP,0x8                         ; 0041d7ca
    PUSH 0x0                            ; 0041d7cd
    SUB EAX,0x2e8                       ; 0041d7cf
    PUSH EAX                            ; 0041d7d4
    CALL FUN_005b1c70                   ; 0041d7d5
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 0041d7da
    PUSH 0x1                            ; 0041d7dd
    LEA EBX,[EAX + 0xfffffb10]          ; 0041d7df
    PUSH EBX                            ; 0041d7e5
    CALL FUN_00408930                   ; 0041d7e6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0041d7eb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041d7ee
    MOV EBX,EAX                         ; 0041d7f2
    TEST DL,0x2                         ; 0041d7f4
    JNZ 0x0041d818                      ; 0041d7f7
        ;   XREF to: 0041d818 (CONDITIONAL_JUMP)  ; LAB_0041d818
    MOV EAX,EBX                         ; 0041d7f9
    POP EBX                             ; 0041d7fb
    RET                                 ; 0041d7fc
    PUSH 0x5f3c20                       ; 0041d7fd | DAT_005f3c20
        ;   Label: LAB_0041d7fd
    PUSH EBX                            ; 0041d802
    CALL FUN_005b7fa7                   ; 0041d803
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0041d808
    PUSH EAX                            ; 0041d80b
    CALL FUN_005b7fce                   ; 0041d80c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0041d811
    MOV EAX,EBX                         ; 0041d814
    POP EBX                             ; 0041d816
    RET                                 ; 0041d817
    PUSH EAX                            ; 0041d818
        ;   Label: LAB_0041d818
    CALL FUN_005b7fdc                   ; 0041d819
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041d81e
    MOV EAX,EBX                         ; 0041d821
    POP EBX                             ; 0041d823
    RET                                 ; 0041d824

