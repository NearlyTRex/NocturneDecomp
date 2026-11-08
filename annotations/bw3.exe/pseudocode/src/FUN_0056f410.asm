; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f410(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e59b0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f410
        ;   Label: FUN_0056f410
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f411
    TEST byte ptr [ESP + 0xc],0x4       ; 0056f415
    JNZ 0x0056f436                      ; 0056f41a
        ;   XREF to: 0056f436 (CONDITIONAL_JUMP)  ; LAB_0056f436
    PUSH 0x1                            ; 0056f41c
    PUSH EBX                            ; 0056f41e
    CALL FUN_00408770                   ; 0056f41f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0056f424
    MOV DL,byte ptr [ESP + 0xc]         ; 0056f427
    MOV EBX,EAX                         ; 0056f42b
    TEST DL,0x2                         ; 0056f42d
    JNZ 0x0056f451                      ; 0056f430
        ;   XREF to: 0056f451 (CONDITIONAL_JUMP)  ; LAB_0056f451
    MOV EAX,EBX                         ; 0056f432
    POP EBX                             ; 0056f434
    RET                                 ; 0056f435
    PUSH 0x5e59b0                       ; 0056f436 | DAT_005e59b0
        ;   Label: LAB_0056f436
    PUSH EBX                            ; 0056f43b
    CALL FUN_005a308f                   ; 0056f43c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0056f441
    PUSH EAX                            ; 0056f444
    CALL FUN_005a30b6                   ; 0056f445
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056f44a
    MOV EAX,EBX                         ; 0056f44d
    POP EBX                             ; 0056f44f
    RET                                 ; 0056f450
    PUSH EAX                            ; 0056f451
        ;   Label: LAB_0056f451
    CALL FUN_005a30c4                   ; 0056f452
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0056f457
    MOV EAX,EBX                         ; 0056f45a
    POP EBX                             ; 0056f45c
    RET                                 ; 0056f45d

