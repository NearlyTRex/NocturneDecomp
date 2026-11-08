; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e45e0(void)
;
;
; XREF[1]:
;   FUN_004ee3f0 at 004ee774
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_R_Debug_editor_005dc13d
;   TerminatedCString s_s_1_Play_a_mission_005dc15b
;   TerminatedCString s_Z_Display_memory_usage_i_005dc16d
;   undefined4 DAT_006138e0
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6900
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004032b0
;   FUN_0047bda0
;   FUN_004807e0
;   FUN_004bc840
;   FUN_0055b1f0
;   FUN_00589560
;   FUN_0058ead0
;   FUN_005b8e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e45e0
        ;   Label: FUN_004e45e0
    PUSH ESI                            ; 004e45e1
    PUSH EDI                            ; 004e45e2
    SUB ESP,0x100                       ; 004e45e3
    CALL FUN_004032b0                   ; 004e45e9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    XOR ESI,ESI                         ; 004e45ee
    CALL FUN_0055b1f0                   ; 004e45f0
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
        ;   Label: LAB_004e45f0
    PUSH ESI                            ; 004e45f5
    PUSH ESI                            ; 004e45f6
    PUSH 0x5dc13d                       ; 004e45f7 | = "Nocturne(R) Debug/editor Menu"
    CALL FUN_00401fe0                   ; 004e45fc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004e4601
    PUSH 0x16                           ; 004e4604
    PUSH ESI                            ; 004e4606
    PUSH 0x5dc15b                       ; 004e4607 | = "1. Play a mission"
    CALL FUN_00401fe0                   ; 004e460c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004e4611
    PUSH 0xbb                           ; 004e4614
    PUSH ESI                            ; 004e4619
    PUSH 0x5dc16d                       ; 004e461a | = "Z. Display memory usage info"
    CALL FUN_00401fe0                   ; 004e461f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 004e4624
    CALL FUN_00589560                   ; 004e4627
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CALL FUN_004032b0                   ; 004e462c
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0058ead0                   ; 004e4631
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
    AND EAX,0xff                        ; 004e4636
    PUSH EAX                            ; 004e463b
    CALL FUN_005b8e40                   ; 004e463c
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004e4641
    MOV EBX,EAX                         ; 004e4644
    CMP EAX,0x34                        ; 004e4646
    JNC 0x004e469c                      ; 004e4649
        ;   XREF to: 004e469c (CONDITIONAL_JUMP)  ; LAB_004e469c
    CMP EAX,0x31                        ; 004e464b
    JNC 0x004e46ac                      ; 004e464e
        ;   XREF to: 004e46ac (CONDITIONAL_JUMP)  ; LAB_004e46ac
    CMP EBX,0x1b                        ; 004e4650
        ;   Label: LAB_004e4650
    JNZ 0x004e45f0                      ; 004e4653
        ;   XREF to: 004e45f0 (CONDITIONAL_JUMP)  ; LAB_004e45f0
    CALL FUN_004032b0                   ; 004e4655
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    ADD ESP,0x100                       ; 004e465a
    POP EDI                             ; 004e4660
    POP ESI                             ; 004e4661
    POP EBX                             ; 004e4662
    RET                                 ; 004e4663
    PUSH ESI                            ; 004e4664
        ;   Label: LAB_004e4664
    MOV EDI,dword ptr [0x00616494]      ; 004e4665 | DAT_00616494
    PUSH EDI                            ; 004e466b | DAT_01cb6900
    CALL FUN_004bc840                   ; 004e466c
        ;   XREF to: 004bc840 (UNCONDITIONAL_CALL)  ; undefined FUN_004bc840()
    ADD ESP,0x8                         ; 004e4671
    JMP 0x004e4650                      ; 004e4674
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650
    MOV EAX,ESP                         ; 004e4676
        ;   Label: LAB_004e4676
    PUSH EAX                            ; 004e4678
    MOV EDX,dword ptr [0x006138e0]      ; 004e4679 | DAT_006138e0
    PUSH EDX                            ; 004e467f
    CALL FUN_004807e0                   ; 004e4680
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004807e0()
    ADD ESP,0x8                         ; 004e4685
    MOV EAX,ESP                         ; 004e4688
    PUSH EAX                            ; 004e468a
    MOV ECX,dword ptr [0x006138e0]      ; 004e468b | DAT_006138e0
    PUSH ECX                            ; 004e4691
    CALL FUN_0047bda0                   ; 004e4692
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bda0()
    ADD ESP,0x8                         ; 004e4697
    JMP 0x004e4650                      ; 004e469a
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650
    JBE 0x004e4650                      ; 004e469c
        ;   XREF to: 004e4650 (CONDITIONAL_JUMP)  ; LAB_004e4650
        ;   Label: LAB_004e469c
    CMP EAX,0x41                        ; 004e469e
    JC 0x004e4650                       ; 004e46a1
        ;   XREF to: 004e4650 (CONDITIONAL_JUMP)  ; LAB_004e4650
    JBE 0x004e4650                      ; 004e46a3
        ;   XREF to: 004e4650 (CONDITIONAL_JUMP)  ; LAB_004e4650
    CMP EAX,0x5a                        ; 004e46a5
    JZ 0x004e4676                       ; 004e46a8
        ;   XREF to: 004e4676 (CONDITIONAL_JUMP)  ; LAB_004e4676
    JMP 0x004e4650                      ; 004e46aa
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650
    JBE 0x004e4664                      ; 004e46ac
        ;   XREF to: 004e4664 (CONDITIONAL_JUMP)  ; LAB_004e4664
        ;   Label: LAB_004e46ac
    JMP 0x004e4650                      ; 004e46ae
        ;   XREF to: 004e4650 (UNCONDITIONAL_JUMP)  ; LAB_004e4650

