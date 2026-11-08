; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b8250(void)
;
;
; XREF[7]:
;   FUN_004b6170 at 004b651e
;   FUN_004b7050 at 004b708b
;   FUN_004bcbf0 at 004bcfb0
;   FUN_005216e0 at 00521763
;   FUN_00522200 at 0052229d
;   FUN_00522350 at 005265ff
;   FUN_0059ab70 at 0059ab9e
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00616044
;   undefined4 DAT_0061b120
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01caf5ac
;   undefined4 DAT_01cb7528
;   undefined4 DAT_01cb7780
;   undefined4 DAT_01cb7784
;   undefined4 DAT_01d34cb0
;   undefined4 DAT_01fc1070
;   undefined4 DAT_026677e0
;
; Called Functions:
;   FUN_0050f430
;   FUN_0058ed10
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH 0x34                           ; 004b8250
        ;   Label: FUN_004b8250
    PUSH 0x0                            ; 004b8252
    MOV EDX,dword ptr [0x0061b120]      ; 004b8254 | DAT_0061b120
    PUSH EDX                            ; 004b825a | DAT_01d34cb0
    CALL FUN_0050f430                   ; 004b825b
        ;   XREF to: 0050f430 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f430()
    ADD ESP,0x4                         ; 004b8260
    PUSH EAX                            ; 004b8263
    CALL FUN_005b77c0                   ; 004b8264
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 004b8269
    PUSH 0x258                          ; 004b826c
    PUSH 0x0                            ; 004b8271
    PUSH 0x1cb7528                      ; 004b8273 | DAT_01cb7528
    CALL FUN_005b77c0                   ; 004b8278
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV EAX,[0x0061b5a8]                ; 004b827d | DAT_0061b5a8
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b8282 | DAT_01fc1070
    MOV [0x01cb7784],EAX                ; 004b8288 | DAT_01cb7784
    MOV EAX,[0x00616044]                ; 004b828d | DAT_00616044
    MOV ECX,dword ptr [EAX + 0x40]      ; 004b8292 | DAT_01caf5ac
    ADD ESP,0xc                         ; 004b8295
    TEST ECX,ECX                        ; 004b8298
    JNZ 0x004b82a5                      ; 004b829a
        ;   XREF to: 004b82a5 (CONDITIONAL_JUMP)  ; LAB_004b82a5
    CMP dword ptr [0x026677e0],0x0      ; 004b829c | DAT_026677e0
    JZ 0x004b82a6                       ; 004b82a3
        ;   XREF to: 004b82a6 (CONDITIONAL_JUMP)  ; LAB_004b82a6
    RET                                 ; 004b82a5
        ;   Label: LAB_004b82a5
    MOV EAX,[0x006141bc]                ; 004b82a6 | DAT_006141bc
        ;   Label: LAB_004b82a6
    MOV EDX,EAX                         ; 004b82ab
    SAR EDX,0x1f                        ; 004b82ad
    SUB EAX,EDX                         ; 004b82b0
    SAR EAX,0x1                         ; 004b82b2
    PUSH EAX                            ; 004b82b4
    MOV EAX,[0x006141b8]                ; 004b82b5 | DAT_006141b8
    MOV EDX,EAX                         ; 004b82ba
    SAR EDX,0x1f                        ; 004b82bc
    SUB EAX,EDX                         ; 004b82bf
    SAR EAX,0x1                         ; 004b82c1
    PUSH EAX                            ; 004b82c3
    MOV dword ptr [0x01cb7780],ECX      ; 004b82c4 | DAT_01cb7780
    CALL FUN_0058ed10                   ; 004b82ca
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ed10()
    ADD ESP,0x8                         ; 004b82cf
    RET                                 ; 004b82d2

