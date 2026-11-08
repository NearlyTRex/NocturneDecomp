; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521ad0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604200
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521ad0
        ;   Label: FUN_00521ad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521ad1
    TEST byte ptr [ESP + 0xc],0x4       ; 00521ad5
    JNZ 0x00521b2d                      ; 00521ada
        ;   XREF to: 00521b2d (CONDITIONAL_JUMP)  ; LAB_00521b2d
    PUSH 0x0                            ; 00521adc
    ADD EBX,0x35dc                      ; 00521ade
    PUSH EBX                            ; 00521ae4
    CALL FUN_0040ee30                   ; 00521ae5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00521aea
    PUSH 0x0                            ; 00521aed
    SUB EAX,0x93c                       ; 00521aef
    PUSH EAX                            ; 00521af4
    CALL FUN_00441ca0                   ; 00521af5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00521afa
    PUSH 0x0                            ; 00521afd
    SUB EAX,0x2b48                      ; 00521aff
    PUSH EAX                            ; 00521b04
    CALL FUN_005673f0                   ; 00521b05
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00521b0a
    PUSH 0x1                            ; 00521b0d
    LEA EBX,[EAX + 0xfffffea8]          ; 00521b0f
    PUSH EBX                            ; 00521b15
    CALL FUN_00408730                   ; 00521b16
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00521b1b
    MOV DL,byte ptr [ESP + 0xc]         ; 00521b1e
    MOV EBX,EAX                         ; 00521b22
    TEST DL,0x2                         ; 00521b24
    JNZ 0x00521b48                      ; 00521b27
        ;   XREF to: 00521b48 (CONDITIONAL_JUMP)  ; LAB_00521b48
    MOV EAX,EBX                         ; 00521b29
    POP EBX                             ; 00521b2b
    RET                                 ; 00521b2c
    PUSH 0x604200                       ; 00521b2d | DAT_00604200
        ;   Label: LAB_00521b2d
    PUSH EBX                            ; 00521b32
    CALL FUN_005c030f                   ; 00521b33
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00521b38
    PUSH EAX                            ; 00521b3b
    CALL FUN_005c0336                   ; 00521b3c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00521b41
    MOV EAX,EBX                         ; 00521b44
    POP EBX                             ; 00521b46
    RET                                 ; 00521b47
    PUSH EAX                            ; 00521b48
        ;   Label: LAB_00521b48
    CALL FUN_005c0344                   ; 00521b49
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00521b4e
    MOV EAX,EBX                         ; 00521b51
    POP EBX                             ; 00521b53
    RET                                 ; 00521b54

