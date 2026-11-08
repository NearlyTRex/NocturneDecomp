; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea480(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e45bc
;   TerminatedCString s_useCount_005e45c6
;   TerminatedCString s_hpRestored_005e45cf
;   TerminatedCString s_descriptiveName_005e45da
;   undefined4 DAT_0061ef08
;
; Called Functions:
;   FUN_0040b560
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea480
        ;   Label: FUN_004ea480
    SUB ESP,0x100                       ; 004ea481
    MOV EBX,dword ptr [ESP + 0x108]     ; 004ea487
    PUSH EBX                            ; 004ea48e
    CALL FUN_0040c040                   ; 004ea48f
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004ea494
    PUSH 0x5e45bc                       ; 004ea497 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004ea49c
    PUSH EAX                            ; 004ea4a2
    CALL FUN_0040b770                   ; 004ea4a3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 004ea4a8
    PUSH 0x5e45c6                       ; 004ea4ab | = "useCount"
    LEA EAX,[EBX + 0x2d4]               ; 004ea4b0
    PUSH EAX                            ; 004ea4b6
    CALL FUN_0040b670                   ; 004ea4b7
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004ea4bc
    PUSH 0x5e45cf                       ; 004ea4bf | = "hpRestored"
    ADD EBX,0x2d8                       ; 004ea4c4
    PUSH EBX                            ; 004ea4ca
    CALL FUN_0040b5f0                   ; 004ea4cb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x0061ef08]      ; 004ea4d0 | DAT_0061ef08
    ADD ESP,0x8                         ; 004ea4d6
    CMP EDX,0x2                         ; 004ea4d9
    JZ 0x004ea4e6                       ; 004ea4dc
        ;   XREF to: 004ea4e6 (CONDITIONAL_JUMP)  ; LAB_004ea4e6
    ADD ESP,0x100                       ; 004ea4de
    POP EBX                             ; 004ea4e4
    RET                                 ; 004ea4e5
    PUSH 0x5e45da                       ; 004ea4e6 | = "descriptiveName"
        ;   Label: LAB_004ea4e6
    LEA EAX,[ESP + 0x4]                 ; 004ea4eb
    PUSH EAX                            ; 004ea4ef
    CALL FUN_0040b560                   ; 004ea4f0
        ;   XREF to: 0040b560 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b560()
    ADD ESP,0x8                         ; 004ea4f5
    ADD ESP,0x100                       ; 004ea4f8
    POP EBX                             ; 004ea4fe
    RET                                 ; 004ea4ff

