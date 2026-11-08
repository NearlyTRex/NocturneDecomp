; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd560(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_model_005e6b83
;   TerminatedCString s_ladderSize_005e6b89
;   TerminatedCString s_masterActor_005e6b94
;   TerminatedCString s_groundType_005e6ba0
;   undefined4 DAT_0061f2a8
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;   FUN_004fd750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd560
        ;   Label: FUN_004fd560
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fd561
    PUSH EBX                            ; 004fd565
    CALL FUN_0040c040                   ; 004fd566
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004fd56b
    PUSH 0x5e6b83                       ; 004fd56e | = "model"
    LEA EAX,[EBX + 0x158]               ; 004fd573
    PUSH EAX                            ; 004fd579
    CALL FUN_0040b770                   ; 004fd57a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 004fd57f
    PUSH 0x5e6b89                       ; 004fd582 | = "ladderSize"
    LEA EAX,[EBX + 0x2d4]               ; 004fd587
    PUSH EAX                            ; 004fd58d
    CALL FUN_0040b1c0                   ; 004fd58e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 004fd593
    PUSH 0x5e6b94                       ; 004fd596 | = "masterActor"
    LEA EAX,[EBX + 0x2e0]               ; 004fd59b
    PUSH EAX                            ; 004fd5a1
    CALL FUN_0040b6f0                   ; 004fd5a2
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004fd5a7
    PUSH EBX                            ; 004fd5aa
    CALL FUN_004fd750                   ; 004fd5ab
        ;   XREF to: 004fd750 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd750()
    MOV EDX,dword ptr [0x0061f2a8]      ; 004fd5b0 | DAT_0061f2a8
    ADD ESP,0x4                         ; 004fd5b6
    CMP EDX,0x2                         ; 004fd5b9
    JGE 0x004fd5c0                      ; 004fd5bc
        ;   XREF to: 004fd5c0 (CONDITIONAL_JUMP)  ; LAB_004fd5c0
    POP EBX                             ; 004fd5be
    RET                                 ; 004fd5bf
    PUSH 0x5e6ba0                       ; 004fd5c0 | = "groundType"
        ;   Label: LAB_004fd5c0
    ADD EBX,0x2fc                       ; 004fd5c5
    PUSH EBX                            ; 004fd5cb
    CALL FUN_0040b670                   ; 004fd5cc
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004fd5d1
    POP EBX                             ; 004fd5d4
    RET                                 ; 004fd5d5

