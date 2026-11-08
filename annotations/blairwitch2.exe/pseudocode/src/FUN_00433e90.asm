; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00433e90(undefined4 *param_1,uint param_2)
;
;
; XREF[8]:
;   FUN_00435400 at 0043540f
;   FUN_00435450 at 0043545f
;   FUN_004354a0 at 004354af
;   FUN_004354f0 at 00435510
;   FUN_00435550 at 00435570
;   FUN_00441f50 at 00442514
;   FUN_004bb9b0 at 004bbd98
;   FUN_004bbf70 at 004bc340
;
; Referenced Globals:
;   void* PTR_FUN_005f4224 = 00433e90
;   undefined4 DAT_005f4370
;
; Called Functions:
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433e90
        ;   Label: FUN_00433e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00433e91
    MOV EAX,dword ptr [ESP + 0xc]       ; 00433e95
    TEST AL,0x4                         ; 00433e99
    JNZ 0x00433eb1                      ; 00433e9b
        ;   XREF to: 00433eb1 (CONDITIONAL_JUMP)  ; LAB_00433eb1
    MOV dword ptr [EBX],0x5f4224        ; 00433e9d | PTR_FUN_005f4224
    TEST AL,0x2                         ; 00433ea3
    JNZ 0x00433ecc                      ; 00433ea5
        ;   XREF to: 00433ecc (CONDITIONAL_JUMP)  ; LAB_00433ecc
    MOV EAX,EBX                         ; 00433ea7
    POP EBX                             ; 00433ea9
    LEA EAX,[EAX]                       ; 00433eaa
    RET                                 ; 00433eb0
    PUSH 0x5f4370                       ; 00433eb1 | DAT_005f4370
        ;   Label: LAB_00433eb1
    PUSH EBX                            ; 00433eb6
    CALL FUN_005b7fa7                   ; 00433eb7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00433ebc
    PUSH EAX                            ; 00433ebf
    CALL FUN_005b7fce                   ; 00433ec0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00433ec5
    MOV EAX,EBX                         ; 00433ec8
    POP EBX                             ; 00433eca
    RET                                 ; 00433ecb
    PUSH EBX                            ; 00433ecc
        ;   Label: LAB_00433ecc
    CALL FUN_005b7fdc                   ; 00433ecd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00433ed2
    MOV EAX,EBX                         ; 00433ed5
    POP EBX                             ; 00433ed7
    RET                                 ; 00433ed8

