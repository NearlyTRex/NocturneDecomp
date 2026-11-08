; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005763a0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fcf80
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005763a0
        ;   Label: FUN_005763a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005763a1
    TEST byte ptr [ESP + 0xc],0x4       ; 005763a5
    JNZ 0x005763c6                      ; 005763aa
        ;   XREF to: 005763c6 (CONDITIONAL_JUMP)  ; LAB_005763c6
    PUSH 0x1                            ; 005763ac
    PUSH EBX                            ; 005763ae
    CALL FUN_00589ae0                   ; 005763af
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 005763b4
    MOV DL,byte ptr [ESP + 0xc]         ; 005763b7
    MOV EBX,EAX                         ; 005763bb
    TEST DL,0x2                         ; 005763bd
    JNZ 0x005763e1                      ; 005763c0
        ;   XREF to: 005763e1 (CONDITIONAL_JUMP)  ; LAB_005763e1
    MOV EAX,EBX                         ; 005763c2
    POP EBX                             ; 005763c4
    RET                                 ; 005763c5
    PUSH 0x5fcf80                       ; 005763c6 | DAT_005fcf80
        ;   Label: LAB_005763c6
    PUSH EBX                            ; 005763cb
    CALL FUN_005b7fa7                   ; 005763cc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005763d1
    PUSH EAX                            ; 005763d4
    CALL FUN_005b7fce                   ; 005763d5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005763da
    MOV EAX,EBX                         ; 005763dd
    POP EBX                             ; 005763df
    RET                                 ; 005763e0
    PUSH EAX                            ; 005763e1
        ;   Label: LAB_005763e1
    CALL FUN_005b7fdc                   ; 005763e2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005763e7
    MOV EAX,EBX                         ; 005763ea
    POP EBX                             ; 005763ec
    RET                                 ; 005763ed

