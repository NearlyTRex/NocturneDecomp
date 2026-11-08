; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e420(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005db4b0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e420
        ;   Label: FUN_0040e420
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e421
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e425
    JNZ 0x0040e446                      ; 0040e42a
        ;   XREF to: 0040e446 (CONDITIONAL_JUMP)  ; LAB_0040e446
    PUSH 0x1                            ; 0040e42c
    PUSH EBX                            ; 0040e42e
    CALL FUN_00408770                   ; 0040e42f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0040e434
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e437
    MOV EBX,EAX                         ; 0040e43b
    TEST DL,0x2                         ; 0040e43d
    JNZ 0x0040e461                      ; 0040e440
        ;   XREF to: 0040e461 (CONDITIONAL_JUMP)  ; LAB_0040e461
    MOV EAX,EBX                         ; 0040e442
    POP EBX                             ; 0040e444
    RET                                 ; 0040e445
    PUSH 0x5db4b0                       ; 0040e446 | DAT_005db4b0
        ;   Label: LAB_0040e446
    PUSH EBX                            ; 0040e44b
    CALL FUN_005a308f                   ; 0040e44c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040e451
    PUSH EAX                            ; 0040e454
    CALL FUN_005a30b6                   ; 0040e455
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040e45a
    MOV EAX,EBX                         ; 0040e45d
    POP EBX                             ; 0040e45f
    RET                                 ; 0040e460
    PUSH EAX                            ; 0040e461
        ;   Label: LAB_0040e461
    CALL FUN_005a30c4                   ; 0040e462
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040e467
    MOV EAX,EBX                         ; 0040e46a
    POP EBX                             ; 0040e46c
    RET                                 ; 0040e46d

