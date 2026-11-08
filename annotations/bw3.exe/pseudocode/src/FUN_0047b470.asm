; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047b470(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005defd0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b470
        ;   Label: FUN_0047b470
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047b471
    TEST byte ptr [ESP + 0xc],0x4       ; 0047b475
    JNZ 0x0047b496                      ; 0047b47a
        ;   XREF to: 0047b496 (CONDITIONAL_JUMP)  ; LAB_0047b496
    PUSH 0x1                            ; 0047b47c
    PUSH EBX                            ; 0047b47e
    CALL FUN_0057aed0                   ; 0047b47f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 0047b484
    MOV DL,byte ptr [ESP + 0xc]         ; 0047b487
    MOV EBX,EAX                         ; 0047b48b
    TEST DL,0x2                         ; 0047b48d
    JNZ 0x0047b4b1                      ; 0047b490
        ;   XREF to: 0047b4b1 (CONDITIONAL_JUMP)  ; LAB_0047b4b1
    MOV EAX,EBX                         ; 0047b492
    POP EBX                             ; 0047b494
    RET                                 ; 0047b495
    PUSH 0x5defd0                       ; 0047b496 | DAT_005defd0
        ;   Label: LAB_0047b496
    PUSH EBX                            ; 0047b49b
    CALL FUN_005a308f                   ; 0047b49c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0047b4a1
    PUSH EAX                            ; 0047b4a4
    CALL FUN_005a30b6                   ; 0047b4a5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0047b4aa
    MOV EAX,EBX                         ; 0047b4ad
    POP EBX                             ; 0047b4af
    RET                                 ; 0047b4b0
    PUSH EAX                            ; 0047b4b1
        ;   Label: LAB_0047b4b1
    CALL FUN_005a30c4                   ; 0047b4b2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0047b4b7
    MOV EAX,EBX                         ; 0047b4ba
    POP EBX                             ; 0047b4bc
    RET                                 ; 0047b4bd

