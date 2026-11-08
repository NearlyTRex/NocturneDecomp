; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ca660(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7da0
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca660
        ;   Label: FUN_004ca660
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca661
    TEST byte ptr [ESP + 0xc],0x4       ; 004ca665
    JNZ 0x004ca686                      ; 004ca66a
        ;   XREF to: 004ca686 (CONDITIONAL_JUMP)  ; LAB_004ca686
    PUSH 0x1                            ; 004ca66c
    PUSH EBX                            ; 004ca66e
    CALL FUN_00408930                   ; 004ca66f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004ca674
    MOV DL,byte ptr [ESP + 0xc]         ; 004ca677
    MOV EBX,EAX                         ; 004ca67b
    TEST DL,0x2                         ; 004ca67d
    JNZ 0x004ca6a1                      ; 004ca680
        ;   XREF to: 004ca6a1 (CONDITIONAL_JUMP)  ; LAB_004ca6a1
    MOV EAX,EBX                         ; 004ca682
    POP EBX                             ; 004ca684
    RET                                 ; 004ca685
    PUSH 0x5f7da0                       ; 004ca686 | DAT_005f7da0
        ;   Label: LAB_004ca686
    PUSH EBX                            ; 004ca68b
    CALL FUN_005b7fa7                   ; 004ca68c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004ca691
    PUSH EAX                            ; 004ca694
    CALL FUN_005b7fce                   ; 004ca695
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004ca69a
    MOV EAX,EBX                         ; 004ca69d
    POP EBX                             ; 004ca69f
    RET                                 ; 004ca6a0
    PUSH EAX                            ; 004ca6a1
        ;   Label: LAB_004ca6a1
    CALL FUN_005b7fdc                   ; 004ca6a2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004ca6a7
    MOV EAX,EBX                         ; 004ca6aa
    POP EBX                             ; 004ca6ac
    RET                                 ; 004ca6ad

