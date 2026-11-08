; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00562b00(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00605840
;
; Called Functions:
;   FUN_00408730
;   FUN_0041dab0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562b00
        ;   Label: FUN_00562b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562b01
    TEST byte ptr [ESP + 0xc],0x4       ; 00562b05
    JNZ 0x00562b3d                      ; 00562b0a
        ;   XREF to: 00562b3d (CONDITIONAL_JUMP)  ; LAB_00562b3d
    PUSH 0x0                            ; 00562b0c
    ADD EBX,0x358                       ; 00562b0e
    PUSH EBX                            ; 00562b14
    CALL FUN_0041dab0                   ; 00562b15
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dab0()
    ADD ESP,0x8                         ; 00562b1a
    PUSH 0x1                            ; 00562b1d
    LEA EBX,[EAX + 0xfffffca8]          ; 00562b1f
    PUSH EBX                            ; 00562b25
    CALL FUN_00408730                   ; 00562b26
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00562b2b
    MOV DL,byte ptr [ESP + 0xc]         ; 00562b2e
    MOV EBX,EAX                         ; 00562b32
    TEST DL,0x2                         ; 00562b34
    JNZ 0x00562b58                      ; 00562b37
        ;   XREF to: 00562b58 (CONDITIONAL_JUMP)  ; LAB_00562b58
    MOV EAX,EBX                         ; 00562b39
    POP EBX                             ; 00562b3b
    RET                                 ; 00562b3c
    PUSH 0x605840                       ; 00562b3d | DAT_00605840
        ;   Label: LAB_00562b3d
    PUSH EBX                            ; 00562b42
    CALL FUN_005c030f                   ; 00562b43
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00562b48
    PUSH EAX                            ; 00562b4b
    CALL FUN_005c0336                   ; 00562b4c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00562b51
    MOV EAX,EBX                         ; 00562b54
    POP EBX                             ; 00562b56
    RET                                 ; 00562b57
    PUSH EAX                            ; 00562b58
        ;   Label: LAB_00562b58
    CALL FUN_005c0344                   ; 00562b59
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00562b5e
    MOV EAX,EBX                         ; 00562b61
    POP EBX                             ; 00562b63
    RET                                 ; 00562b64

