; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00410320(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbca0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410320
        ;   Label: FUN_00410320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410321
    TEST byte ptr [ESP + 0xc],0x4       ; 00410325
    JNZ 0x00410346                      ; 0041032a
        ;   XREF to: 00410346 (CONDITIONAL_JUMP)  ; LAB_00410346
    PUSH 0x1                            ; 0041032c
    PUSH EBX                            ; 0041032e
    CALL FUN_00408770                   ; 0041032f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00410334
    MOV DL,byte ptr [ESP + 0xc]         ; 00410337
    MOV EBX,EAX                         ; 0041033b
    TEST DL,0x2                         ; 0041033d
    JNZ 0x00410361                      ; 00410340
        ;   XREF to: 00410361 (CONDITIONAL_JUMP)  ; LAB_00410361
    MOV EAX,EBX                         ; 00410342
    POP EBX                             ; 00410344
    RET                                 ; 00410345
    PUSH 0x5dbca0                       ; 00410346 | DAT_005dbca0
        ;   Label: LAB_00410346
    PUSH EBX                            ; 0041034b
    CALL FUN_005a308f                   ; 0041034c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00410351
    PUSH EAX                            ; 00410354
    CALL FUN_005a30b6                   ; 00410355
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041035a
    MOV EAX,EBX                         ; 0041035d
    POP EBX                             ; 0041035f
    RET                                 ; 00410360
    PUSH EAX                            ; 00410361
        ;   Label: LAB_00410361
    CALL FUN_005a30c4                   ; 00410362
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00410367
    MOV EAX,EBX                         ; 0041036a
    POP EBX                             ; 0041036c
    RET                                 ; 0041036d

