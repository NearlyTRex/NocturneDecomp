; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005409c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604c00
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005409c0
        ;   Label: FUN_005409c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005409c1
    TEST byte ptr [ESP + 0xc],0x4       ; 005409c5
    JNZ 0x005409e6                      ; 005409ca
        ;   XREF to: 005409e6 (CONDITIONAL_JUMP)  ; LAB_005409e6
    PUSH 0x1                            ; 005409cc
    PUSH EBX                            ; 005409ce
    CALL FUN_005ad5d0                   ; 005409cf
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 005409d4
    MOV DL,byte ptr [ESP + 0xc]         ; 005409d7
    MOV EBX,EAX                         ; 005409db
    TEST DL,0x2                         ; 005409dd
    JNZ 0x00540a01                      ; 005409e0
        ;   XREF to: 00540a01 (CONDITIONAL_JUMP)  ; LAB_00540a01
    MOV EAX,EBX                         ; 005409e2
    POP EBX                             ; 005409e4
    RET                                 ; 005409e5
    PUSH 0x604c00                       ; 005409e6 | DAT_00604c00
        ;   Label: LAB_005409e6
    PUSH EBX                            ; 005409eb
    CALL FUN_005c030f                   ; 005409ec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005409f1
    PUSH EAX                            ; 005409f4
    CALL FUN_005c0336                   ; 005409f5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005409fa
    MOV EAX,EBX                         ; 005409fd
    POP EBX                             ; 005409ff
    RET                                 ; 00540a00
    PUSH EAX                            ; 00540a01
        ;   Label: LAB_00540a01
    CALL FUN_005c0344                   ; 00540a02
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00540a07
    MOV EAX,EBX                         ; 00540a0a
    POP EBX                             ; 00540a0c
    RET                                 ; 00540a0d

