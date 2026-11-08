; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041d830(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f3c40
;
; Called Functions:
;   FUN_00408930
;   FUN_005b1c70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d830
        ;   Label: FUN_0041d830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d831
    TEST byte ptr [ESP + 0xc],0x4       ; 0041d835
    JNZ 0x0041d86d                      ; 0041d83a
        ;   XREF to: 0041d86d (CONDITIONAL_JUMP)  ; LAB_0041d86d
    PUSH 0x0                            ; 0041d83c
    ADD EBX,0x4f0                       ; 0041d83e
    PUSH EBX                            ; 0041d844
    CALL FUN_005b1c70                   ; 0041d845
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 0041d84a
    PUSH 0x1                            ; 0041d84d
    LEA EBX,[EAX + 0xfffffb10]          ; 0041d84f
    PUSH EBX                            ; 0041d855
    CALL FUN_00408930                   ; 0041d856
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0041d85b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041d85e
    MOV EBX,EAX                         ; 0041d862
    TEST DL,0x2                         ; 0041d864
    JNZ 0x0041d888                      ; 0041d867
        ;   XREF to: 0041d888 (CONDITIONAL_JUMP)  ; LAB_0041d888
    MOV EAX,EBX                         ; 0041d869
    POP EBX                             ; 0041d86b
    RET                                 ; 0041d86c
    PUSH 0x5f3c40                       ; 0041d86d | DAT_005f3c40
        ;   Label: LAB_0041d86d
    PUSH EBX                            ; 0041d872
    CALL FUN_005b7fa7                   ; 0041d873
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0041d878
    PUSH EAX                            ; 0041d87b
    CALL FUN_005b7fce                   ; 0041d87c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0041d881
    MOV EAX,EBX                         ; 0041d884
    POP EBX                             ; 0041d886
    RET                                 ; 0041d887
    PUSH EAX                            ; 0041d888
        ;   Label: LAB_0041d888
    CALL FUN_005b7fdc                   ; 0041d889
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041d88e
    MOV EAX,EBX                         ; 0041d891
    POP EBX                             ; 0041d893
    RET                                 ; 0041d894

