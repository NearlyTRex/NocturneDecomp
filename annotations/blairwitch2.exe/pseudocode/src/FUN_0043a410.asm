; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043a410(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4c50
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a410
        ;   Label: FUN_0043a410
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043a411
    TEST byte ptr [ESP + 0xc],0x4       ; 0043a415
    JNZ 0x0043a436                      ; 0043a41a
        ;   XREF to: 0043a436 (CONDITIONAL_JUMP)  ; LAB_0043a436
    PUSH 0x1                            ; 0043a41c
    PUSH EBX                            ; 0043a41e
    CALL FUN_00408930                   ; 0043a41f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0043a424
    MOV DL,byte ptr [ESP + 0xc]         ; 0043a427
    MOV EBX,EAX                         ; 0043a42b
    TEST DL,0x2                         ; 0043a42d
    JNZ 0x0043a451                      ; 0043a430
        ;   XREF to: 0043a451 (CONDITIONAL_JUMP)  ; LAB_0043a451
    MOV EAX,EBX                         ; 0043a432
    POP EBX                             ; 0043a434
    RET                                 ; 0043a435
    PUSH 0x5f4c50                       ; 0043a436 | DAT_005f4c50
        ;   Label: LAB_0043a436
    PUSH EBX                            ; 0043a43b
    CALL FUN_005b7fa7                   ; 0043a43c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0043a441
    PUSH EAX                            ; 0043a444
    CALL FUN_005b7fce                   ; 0043a445
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0043a44a
    MOV EAX,EBX                         ; 0043a44d
    POP EBX                             ; 0043a44f
    RET                                 ; 0043a450
    PUSH EAX                            ; 0043a451
        ;   Label: LAB_0043a451
    CALL FUN_005b7fdc                   ; 0043a452
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043a457
    MOV EAX,EBX                         ; 0043a45a
    POP EBX                             ; 0043a45c
    RET                                 ; 0043a45d

