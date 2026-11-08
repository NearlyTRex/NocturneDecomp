; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd630(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_gargoyle_shatter_wav_005e39f3+1
;   TerminatedCString s_gargoyle_hurt_wav_005e3a09
;   undefined4 DAT_0061c010
;
; Called Functions:
;   FUN_00408b40
;   FUN_00430d90
;   FUN_004a0f00
;   FUN_004b59e0
;   FUN_004dd390
;   FUN_00524770
;   FUN_005247c0
;   FUN_005735a0
;   FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd630
        ;   Label: FUN_004dd630
    PUSH ESI                            ; 004dd631
    PUSH EDI                            ; 004dd632
    PUSH EBP                            ; 004dd633
    SUB ESP,0x18                        ; 004dd634
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004dd637
    MOV EAX,dword ptr [ESP + 0x30]      ; 004dd63b
    ADD EAX,0x1c                        ; 004dd63f
    PUSH EAX                            ; 004dd642
    PUSH EBP                            ; 004dd643
    LEA ESI,[ESP + 0x14]                ; 004dd644
    LEA EDI,[ESP + 0x8]                 ; 004dd648
    CALL FUN_00408b40                   ; 004dd64c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 004dd651
    ADD ESP,0x8                         ; 004dd655
    XOR EBX,EBX                         ; 004dd658
    MOVSD ES:EDI,ESI                    ; 004dd65a
    MOVSD ES:EDI,ESI                    ; 004dd65b
    MOVSD ES:EDI,ESI                    ; 004dd65c
    XOR ESI,ESI                         ; 004dd65d
    PUSH 0xffff                         ; 004dd65f
        ;   Label: LAB_004dd65f
    PUSH ESI                            ; 004dd664
    PUSH 0x8000                         ; 004dd665
    PUSH 0x10000                        ; 004dd66a
    PUSH ESI                            ; 004dd66f
    LEA EAX,[ESP + 0x14]                ; 004dd670
    PUSH EAX                            ; 004dd674
    MOV EDX,dword ptr [0x0061c010]      ; 004dd675 | DAT_0061c010
    PUSH EDX                            ; 004dd67b
    INC EBX                             ; 004dd67c
    CALL FUN_004b59e0                   ; 004dd67d
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b59e0()
    ADD ESP,0x1c                        ; 004dd682
    CMP EBX,0x3                         ; 004dd685
    JL 0x004dd65f                       ; 004dd688
        ;   XREF to: 004dd65f (CONDITIONAL_JUMP)  ; LAB_004dd65f
    LEA EBX,[EBP + 0x158]               ; 004dd68a
    PUSH EBX                            ; 004dd690
    CALL FUN_00524770                   ; 004dd691
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dd696
    ADD ESP,0x4                         ; 004dd699
    CMP EAX,0x5                         ; 004dd69c
    JZ 0x004dd744                       ; 004dd69f
        ;   XREF to: 004dd744 (CONDITIONAL_JUMP)  ; LAB_004dd744
    MOV ECX,dword ptr [ESP + 0x30]      ; 004dd6a5
    PUSH ECX                            ; 004dd6a9
    PUSH EBP                            ; 004dd6aa
    CALL FUN_004dd390                   ; 004dd6ab
        ;   XREF to: 004dd390 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd390()
    ADD ESP,0x8                         ; 004dd6b0
    MOV EAX,dword ptr [ESP + 0x30]      ; 004dd6b3
    FLD float ptr [EAX + 0x4]           ; 004dd6b7
    FSUBR float ptr [EBP + 0x2538]      ; 004dd6ba
    FST float ptr [EBP + 0x2538]        ; 004dd6c0
    FLDZ                                ; 004dd6c6
    FCOMPP                              ; 004dd6c8
    FNSTSW AX                           ; 004dd6ca
    SAHF                                ; 004dd6cc
    JC 0x004dd761                       ; 004dd6cd
        ;   XREF to: 004dd761 (CONDITIONAL_JUMP)  ; LAB_004dd761
    MOV ESI,dword ptr [EBP + 0xc2a8]    ; 004dd6d3
    PUSH ESI                            ; 004dd6d9
    CALL FUN_00573a80                   ; 004dd6da
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 004dd6df
    PUSH EBX                            ; 004dd6e2
    MOV dword ptr [EBP + 0x2538],0x0    ; 004dd6e3
    CALL FUN_00524770                   ; 004dd6ed
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dd6f2
    ADD ESP,0x4                         ; 004dd6f5
    CMP EAX,0x8                         ; 004dd6f8
    JZ 0x004dd72e                       ; 004dd6fb
        ;   XREF to: 004dd72e (CONDITIONAL_JUMP)  ; LAB_004dd72e
    PUSH 0x1                            ; 004dd6fd
    PUSH 0x8                            ; 004dd6ff
    PUSH EBX                            ; 004dd701
    CALL FUN_005247c0                   ; 004dd702
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dd707
    PUSH 0x5e39f4                       ; 004dd70a | s_gargoyle_shatter_wav_005e39f3+1
    MOV EAX,dword ptr [EBP + 0x154]     ; 004dd70f
    PUSH EBP                            ; 004dd715
    CALL dword ptr [EAX + 0x2c]         ; 004dd716
    ADD ESP,0x8                         ; 004dd719
    PUSH 0x1                            ; 004dd71c
    PUSH 0xbf800000                     ; 004dd71e
    PUSH 0x0                            ; 004dd723
    PUSH EBP                            ; 004dd725
    CALL FUN_00430d90                   ; 004dd726
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00430d90()
    ADD ESP,0x10                        ; 004dd72b
    MOV EDI,dword ptr [ESP + 0x30]      ; 004dd72e
        ;   Label: LAB_004dd72e
    PUSH EDI                            ; 004dd732
    PUSH EBP                            ; 004dd733
    CALL FUN_004a0f00                   ; 004dd734
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 004dd739
    ADD ESP,0x18                        ; 004dd73c
    POP EBP                             ; 004dd73f
    POP EDI                             ; 004dd740
    POP ESI                             ; 004dd741
    POP EBX                             ; 004dd742
    RET                                 ; 004dd743
    MOV EAX,dword ptr [ESP + 0x30]      ; 004dd744
        ;   Label: LAB_004dd744
    PUSH EAX                            ; 004dd748
    PUSH EBP                            ; 004dd749
    MOV dword ptr [EAX + 0x4],0x0       ; 004dd74a
    CALL FUN_004a0f00                   ; 004dd751
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 004dd756
    ADD ESP,0x18                        ; 004dd759
    POP EBP                             ; 004dd75c
    POP EDI                             ; 004dd75d
    POP ESI                             ; 004dd75e
    POP EBX                             ; 004dd75f
    RET                                 ; 004dd760
    MOV EBX,dword ptr [EBP + 0xc2a8]    ; 004dd761
        ;   Label: LAB_004dd761
    PUSH EBX                            ; 004dd767
    CALL FUN_005735a0                   ; 004dd768
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 004dd76d
    TEST EAX,EAX                        ; 004dd770
    JNZ 0x004dd72e                      ; 004dd772
        ;   XREF to: 004dd72e (CONDITIONAL_JUMP)  ; LAB_004dd72e
    PUSH 0x5e3a09                       ; 004dd774 | = "gargoyle-hurt?.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 004dd779
    PUSH EBP                            ; 004dd77f
    CALL dword ptr [EAX + 0x2c]         ; 004dd780
    ADD ESP,0x8                         ; 004dd783
    MOV dword ptr [EBP + 0xc2a8],EAX    ; 004dd786
    JMP 0x004dd72e                      ; 004dd78c
        ;   XREF to: 004dd72e (UNCONDITIONAL_JUMP)  ; LAB_004dd72e

