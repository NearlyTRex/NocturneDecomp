; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4400(void)
;
;
; XREF[1]:
;   FUN_004ea4d0 at 004ea861
;
; Referenced Globals:
;   TerminatedCString s_Blair_Witch_3_Debug_edit_005c6b4a
;   TerminatedCString s_s_1_Play_a_mission_005c6b6a
;   TerminatedCString s_Z_Display_memory_usage_i_005c6b7c
;   undefined4 DAT_005fb140
;   undefined4 DAT_005fe9dc
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004032b0
;   FUN_0047ce80
;   FUN_004819e0
;   FUN_004be8d0
;   FUN_00560d70
;   FUN_0057a8a0
;   FUN_00580790
;   FUN_005a4120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4400
        ;   Label: FUN_004e4400
    PUSH ESI                            ; 004e4401
    PUSH EDI                            ; 004e4402
    SUB ESP,0x100                       ; 004e4403
    XOR ESI,ESI                         ; 004e4409
    CALL FUN_00560d70                   ; 004e440b
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
        ;   Label: LAB_004e440b
    PUSH ESI                            ; 004e4410
    PUSH ESI                            ; 004e4411
    PUSH 0x5c6b4a                       ; 004e4412 | = "Blair Witch 3 Debug/editor Menu"
    CALL FUN_00401fe0                   ; 004e4417
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004e441c
    PUSH 0x16                           ; 004e441f
    PUSH ESI                            ; 004e4421
    PUSH 0x5c6b6a                       ; 004e4422 | = "1. Play a mission"
    CALL FUN_00401fe0                   ; 004e4427
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004e442c
    PUSH 0xbb                           ; 004e442f
    PUSH ESI                            ; 004e4434
    PUSH 0x5c6b7c                       ; 004e4435 | = "Z. Display memory usage info"
    CALL FUN_00401fe0                   ; 004e443a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004e443f
    CALL FUN_0057a8a0                   ; 004e4442
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    CALL FUN_004032b0                   ; 004e4447
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_00580790                   ; 004e444c
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; undefined FUN_00580790()
    AND EAX,0xff                        ; 004e4451
    PUSH EAX                            ; 004e4456
    CALL FUN_005a4120                   ; 004e4457
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4120()
    ADD ESP,0x4                         ; 004e445c
    MOV EBX,EAX                         ; 004e445f
    CMP EAX,0x34                        ; 004e4461
    JNC 0x004e44b7                      ; 004e4464
        ;   XREF to: 004e44b7 (CONDITIONAL_JUMP)  ; LAB_004e44b7
    CMP EAX,0x31                        ; 004e4466
    JNC 0x004e44c7                      ; 004e4469
        ;   XREF to: 004e44c7 (CONDITIONAL_JUMP)  ; LAB_004e44c7
    CMP EBX,0x1b                        ; 004e446b
        ;   Label: LAB_004e446b
    JNZ 0x004e440b                      ; 004e446e
        ;   XREF to: 004e440b (CONDITIONAL_JUMP)  ; LAB_004e440b
    CALL FUN_004032b0                   ; 004e4470
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    ADD ESP,0x100                       ; 004e4475
    POP EDI                             ; 004e447b
    POP ESI                             ; 004e447c
    POP EBX                             ; 004e447d
    RET                                 ; 004e447e
    PUSH ESI                            ; 004e447f
        ;   Label: LAB_004e447f
    MOV EDI,dword ptr [0x005fe9dc]      ; 004e4480 | DAT_005fe9dc
    PUSH EDI                            ; 004e4486
    CALL FUN_004be8d0                   ; 004e4487
        ;   XREF to: 004be8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004be8d0()
    ADD ESP,0x8                         ; 004e448c
    JMP 0x004e446b                      ; 004e448f
        ;   XREF to: 004e446b (UNCONDITIONAL_JUMP)  ; LAB_004e446b
    MOV EAX,ESP                         ; 004e4491
        ;   Label: LAB_004e4491
    PUSH EAX                            ; 004e4493
    MOV EDX,dword ptr [0x005fb140]      ; 004e4494 | DAT_005fb140
    PUSH EDX                            ; 004e449a
    CALL FUN_004819e0                   ; 004e449b
        ;   XREF to: 004819e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004819e0()
    ADD ESP,0x8                         ; 004e44a0
    MOV EAX,ESP                         ; 004e44a3
    PUSH EAX                            ; 004e44a5
    MOV ECX,dword ptr [0x005fb140]      ; 004e44a6 | DAT_005fb140
    PUSH ECX                            ; 004e44ac
    CALL FUN_0047ce80                   ; 004e44ad
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ce80()
    ADD ESP,0x8                         ; 004e44b2
    JMP 0x004e446b                      ; 004e44b5
        ;   XREF to: 004e446b (UNCONDITIONAL_JUMP)  ; LAB_004e446b
    JBE 0x004e446b                      ; 004e44b7
        ;   XREF to: 004e446b (CONDITIONAL_JUMP)  ; LAB_004e446b
        ;   Label: LAB_004e44b7
    CMP EAX,0x41                        ; 004e44b9
    JC 0x004e446b                       ; 004e44bc
        ;   XREF to: 004e446b (CONDITIONAL_JUMP)  ; LAB_004e446b
    JBE 0x004e446b                      ; 004e44be
        ;   XREF to: 004e446b (CONDITIONAL_JUMP)  ; LAB_004e446b
    CMP EAX,0x5a                        ; 004e44c0
    JZ 0x004e4491                       ; 004e44c3
        ;   XREF to: 004e4491 (CONDITIONAL_JUMP)  ; LAB_004e4491
    JMP 0x004e446b                      ; 004e44c5
        ;   XREF to: 004e446b (UNCONDITIONAL_JUMP)  ; LAB_004e446b
    JBE 0x004e447f                      ; 004e44c7
        ;   XREF to: 004e447f (CONDITIONAL_JUMP)  ; LAB_004e447f
        ;   Label: LAB_004e44c7
    JMP 0x004e446b                      ; 004e44c9
        ;   XREF to: 004e446b (UNCONDITIONAL_JUMP)  ; LAB_004e446b

