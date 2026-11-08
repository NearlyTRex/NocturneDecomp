; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e470(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db4d0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e470
        ;   Label: FUN_0040e470
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e471
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e475
    JNZ 0x0040e496                      ; 0040e47a
        ;   XREF to: 0040e496 (CONDITIONAL_JUMP)  ; LAB_0040e496
    PUSH 0x1                            ; 0040e47c
    PUSH EBX                            ; 0040e47e
    CALL FUN_00408770                   ; 0040e47f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0040e484
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e487
    MOV EBX,EAX                         ; 0040e48b
    TEST DL,0x2                         ; 0040e48d
    JNZ 0x0040e4b1                      ; 0040e490
        ;   XREF to: 0040e4b1 (CONDITIONAL_JUMP)  ; LAB_0040e4b1
    MOV EAX,EBX                         ; 0040e492
    POP EBX                             ; 0040e494
    RET                                 ; 0040e495
    PUSH 0x5db4d0                       ; 0040e496 | DAT_005db4d0
        ;   Label: LAB_0040e496
    PUSH EBX                            ; 0040e49b
    CALL FUN_005a308f                   ; 0040e49c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040e4a1
    PUSH EAX                            ; 0040e4a4
    CALL FUN_005a30b6                   ; 0040e4a5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040e4aa
    MOV EAX,EBX                         ; 0040e4ad
    POP EBX                             ; 0040e4af
    RET                                 ; 0040e4b0
    PUSH EAX                            ; 0040e4b1
        ;   Label: LAB_0040e4b1
    CALL FUN_005a30c4                   ; 0040e4b2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040e4b7
    MOV EAX,EBX                         ; 0040e4ba
    POP EBX                             ; 0040e4bc
    RET                                 ; 0040e4bd

