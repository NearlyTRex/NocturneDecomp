; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ba490(void)
;
;
; XREF[7]:
;   FUN_004119a0 at 004119ce
;   FUN_004b7f90 at 004b833c
;   FUN_004b92e0 at 004b9325
;   FUN_004bec20 at 004befbf
;   FUN_00528e00 at 00528e83
;   FUN_00529920 at 005299bd
;   FUN_00529a70 at 0052dd0f
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fe4b0
;   undefined4 DAT_00603450
;   undefined4 DAT_00603b28
;   undefined4 DAT_007dffb4
;   undefined4 DAT_01d1a05c
;   undefined4 DAT_01d1a09c
;   undefined4 DAT_01d21fa0
;   undefined4 DAT_01d221f8
;   undefined4 DAT_01d221fc
;   undefined4 DAT_01d22b48
;   undefined4 DAT_01da62f0
;   undefined4 DAT_02032780
;
; Called Functions:
;   FUN_00507f10
;   FUN_005809d0
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH 0x34                           ; 004ba490
        ;   Label: FUN_004ba490
    PUSH 0x0                            ; 004ba492
    MOV EDX,dword ptr [0x00603450]      ; 004ba494 | DAT_00603450
    PUSH EDX                            ; 004ba49a | DAT_01da62f0
    CALL FUN_00507f10                   ; 004ba49b
        ;   XREF to: 00507f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00507f10()
    ADD ESP,0x4                         ; 004ba4a0
    PUSH EAX                            ; 004ba4a3
    CALL FUN_005a28f0                   ; 004ba4a4
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 004ba4a9
    PUSH 0x258                          ; 004ba4ac
    PUSH 0x0                            ; 004ba4b1
    PUSH 0x1d21fa0                      ; 004ba4b3 | DAT_01d21fa0
    CALL FUN_005a28f0                   ; 004ba4b8
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV EAX,[0x00603b28]                ; 004ba4bd | DAT_00603b28
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004ba4c2 | DAT_02032780
    MOV [0x01d221fc],EAX                ; 004ba4c8 | DAT_01d221fc
    MOV EAX,[0x005fe4b0]                ; 004ba4cd | DAT_005fe4b0
    MOV ECX,dword ptr [EAX + 0x40]      ; 004ba4d2 | DAT_01d1a09c
    ADD ESP,0xc                         ; 004ba4d5
    TEST ECX,ECX                        ; 004ba4d8
    JZ 0x004ba4fb                       ; 004ba4da
        ;   XREF to: 004ba4fb (CONDITIONAL_JUMP)  ; LAB_004ba4fb
    MOV EAX,[0x005fe4b0]                ; 004ba4dc | DAT_005fe4b0 | DAT_01d1a05c
        ;   Label: LAB_004ba4dc
    CMP dword ptr [EAX + 0x40],0x0      ; 004ba4e1 | DAT_01d1a09c
    JZ 0x004ba4f1                       ; 004ba4e5
        ;   XREF to: 004ba4f1 (CONDITIONAL_JUMP)  ; LAB_004ba4f1
    MOV dword ptr [0x01d22b48],0xffffffff ; 004ba4e7 | DAT_01d22b48
    CMP dword ptr [0x007dffb4],0x0      ; 004ba4f1 | DAT_007dffb4
        ;   Label: LAB_004ba4f1
    JNZ 0x004ba532                      ; 004ba4f8
        ;   XREF to: 004ba532 (CONDITIONAL_JUMP)  ; LAB_004ba532
    RET                                 ; 004ba4fa
    CMP dword ptr [0x007dffb4],0x0      ; 004ba4fb | DAT_007dffb4
        ;   Label: LAB_004ba4fb
    JNZ 0x004ba4dc                      ; 004ba502
        ;   XREF to: 004ba4dc (CONDITIONAL_JUMP)  ; LAB_004ba4dc
    MOV EAX,[0x005fba1c]                ; 004ba504 | DAT_005fba1c
    MOV EDX,EAX                         ; 004ba509
    SAR EDX,0x1f                        ; 004ba50b
    SUB EAX,EDX                         ; 004ba50e
    SAR EAX,0x1                         ; 004ba510
    PUSH EAX                            ; 004ba512
    MOV EAX,[0x005fba18]                ; 004ba513 | DAT_005fba18
    MOV EDX,EAX                         ; 004ba518
    SAR EDX,0x1f                        ; 004ba51a
    SUB EAX,EDX                         ; 004ba51d
    SAR EAX,0x1                         ; 004ba51f
    PUSH EAX                            ; 004ba521
    MOV dword ptr [0x01d221f8],ECX      ; 004ba522 | DAT_01d221f8
    CALL FUN_005809d0                   ; 004ba528
        ;   XREF to: 005809d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005809d0()
    ADD ESP,0x8                         ; 004ba52d
    JMP 0x004ba4dc                      ; 004ba530
        ;   XREF to: 004ba4dc (UNCONDITIONAL_JUMP)  ; LAB_004ba4dc
    MOV dword ptr [0x01d22b48],0xffffffff ; 004ba532 | DAT_01d22b48
        ;   Label: LAB_004ba532
    RET                                 ; 004ba53c

