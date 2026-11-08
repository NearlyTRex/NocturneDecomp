; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476510(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CGoggles_005da66f
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf5d4
;   undefined4 DAT_01ccf5ec
;   undefined4 DAT_01ccfe90
;   undefined4 DAT_01cd0e38
;
; Called Functions:
;   FUN_0040c600
;   FUN_004f8c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cd0e38]      ; 00476510 | DAT_01cd0e38
        ;   Label: FUN_00476510
    PUSH EDX                            ; 00476516
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476517
    PUSH 0x5da66f                       ; 0047651b | = "CGoggles"
    ADD EAX,0x1fae8                     ; 00476520
    PUSH EAX                            ; 00476525
    CALL FUN_004f8c90                   ; 00476526
        ;   XREF to: 004f8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8c90()
    ADD ESP,0x8                         ; 0047652b
    PUSH EAX                            ; 0047652e
    CALL FUN_0040c600                   ; 0047652f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 00476534
    MOV ECX,EAX                         ; 00476537
    TEST EAX,EAX                        ; 00476539
    JZ 0x00476554                       ; 0047653b
        ;   XREF to: 00476554 (CONDITIONAL_JUMP)  ; LAB_00476554
    MOV EDX,dword ptr [0x0061d95c]      ; 0047653d | DAT_0061d95c
    CMP dword ptr [EDX + 0x244],0x0     ; 00476543 | DAT_01ccf5d4
    JZ 0x00476584                       ; 0047654a
        ;   XREF to: 00476584 (CONDITIONAL_JUMP)  ; LAB_00476584
    XOR EAX,EAX                         ; 0047654c
        ;   Label: LAB_0047654c
    MOV dword ptr [ECX + 0x2d4],EAX     ; 0047654e
        ;   Label: LAB_0047654e
    MOV EAX,[0x0061d95c]                ; 00476554 | DAT_0061d95c
        ;   Label: LAB_00476554
    CMP dword ptr [EAX + 0x25c],0x0     ; 00476559 | DAT_01ccf5ec
    JZ 0x00476594                       ; 00476560
        ;   XREF to: 00476594 (CONDITIONAL_JUMP)  ; LAB_00476594
    PUSH 0x0                            ; 00476562
        ;   Label: LAB_00476562
    MOV EAX,[0x0061d95c]                ; 00476564 | DAT_0061d95c
    PUSH EAX                            ; 00476569 | DAT_01ccf390
    MOV EDX,dword ptr [EAX + 0xb00]     ; 0047656a | DAT_01ccfe90
    CALL dword ptr [EDX]                ; 00476570
    ADD ESP,0x8                         ; 00476572
    MOV EAX,[0x0061d95c]                ; 00476575 | DAT_0061d95c | DAT_01ccf390
    CMP dword ptr [EAX + 0x244],0x0     ; 0047657a | DAT_01ccf5d4
    JNZ 0x004765ac                      ; 00476581
        ;   XREF to: 004765ac (CONDITIONAL_JUMP)  ; LAB_004765ac
    RET                                 ; 00476583
    CMP dword ptr [EAX + 0x2d4],0x0     ; 00476584
        ;   Label: LAB_00476584
    JNZ 0x0047654c                      ; 0047658b
        ;   XREF to: 0047654c (CONDITIONAL_JUMP)  ; LAB_0047654c
    MOV EAX,0x1                         ; 0047658d
    JMP 0x0047654e                      ; 00476592
        ;   XREF to: 0047654e (UNCONDITIONAL_JUMP)  ; LAB_0047654e
    CMP dword ptr [EAX + 0x244],0x0     ; 00476594 | DAT_01ccf5d4
        ;   Label: LAB_00476594
    JNZ 0x00476562                      ; 0047659b
        ;   XREF to: 00476562 (CONDITIONAL_JUMP)  ; LAB_00476562
    MOV EAX,[0x0061d95c]                ; 0047659d | DAT_0061d95c | DAT_01ccf390
    CMP dword ptr [EAX + 0x244],0x0     ; 004765a2 | DAT_01ccf5d4
    JNZ 0x004765ac                      ; 004765a9
        ;   XREF to: 004765ac (CONDITIONAL_JUMP)  ; LAB_004765ac
    RET                                 ; 004765ab
    MOV EAX,dword ptr [ESP + 0x4]       ; 004765ac
        ;   Label: LAB_004765ac
    MOV dword ptr [EAX + 0x1ff58],0x0   ; 004765b0
    RET                                 ; 004765ba

