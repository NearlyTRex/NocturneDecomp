; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc690(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_mobster-die-?.wav_0058a488+1
;   string s_mobster-hit-?.wav_0058a49b
;   undefined4 DAT_02dd1008
;
; Called Functions:
;   FUN_0040d890
;   FUN_0040dea0
;   FUN_00479f70
;   FUN_004dc2d0
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_00526c50
;   FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc690
        ;   Label: FUN_004dc690
    PUSH ESI                            ; 004dc691
    PUSH EDI                            ; 004dc692
    PUSH EBP                            ; 004dc693
    MOV EBX,dword ptr [ESP + 0x14]      ; 004dc694
    MOV EDI,dword ptr [ESP + 0x18]      ; 004dc698
    MOV EDX,dword ptr [EBX + 0xbdc4]    ; 004dc69c
    PUSH EDX                            ; 004dc6a2
    CALL FUN_00527230                   ; 004dc6a3
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004dc6a8
    MOV ECX,dword ptr [EBX + 0xbdbc]    ; 004dc6ab
    PUSH ECX                            ; 004dc6b1
    CALL FUN_00527230                   ; 004dc6b2
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004dc6b7
    PUSH EDI                            ; 004dc6ba
    PUSH EBX                            ; 004dc6bb
    CALL FUN_004dc2d0                   ; 004dc6bc
        ;   XREF to: 004dc2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc2d0()
    MOV EAX,dword ptr [EBX + 0xbdcc]    ; 004dc6c1
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004dc6c7
    ADD ESP,0x8                         ; 004dc6ce
    TEST ESI,ESI                        ; 004dc6d1
    JNZ 0x004dc6ec                      ; 004dc6d3
        ;   XREF to: 004dc6ec (CONDITIONAL_JUMP)  ; LAB_004dc6ec
    MOV EAX,dword ptr [EBX + 0xbdd4]    ; 004dc6d5
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004dc6db
    JNZ 0x004dc6ec                      ; 004dc6e3
        ;   XREF to: 004dc6ec (CONDITIONAL_JUMP)  ; LAB_004dc6ec
    MOV dword ptr [EDI + 0x4],0x461c3f9a ; 004dc6e5
    FLD float ptr [EDI + 0x4]           ; 004dc6ec
        ;   Label: LAB_004dc6ec
    FSUBR float ptr [EBX + 0x2434]      ; 004dc6ef
    LEA ESI,[EBX + 0x150]               ; 004dc6f5
    FST float ptr [EBX + 0x2434]        ; 004dc6fb
    FLDZ                                ; 004dc701
    FCOMPP                              ; 004dc703
    FNSTSW AX                           ; 004dc705
    SAHF                                ; 004dc707
    JNC 0x004dc764                      ; 004dc708
        ;   XREF to: 004dc764 (CONDITIONAL_JUMP)  ; LAB_004dc764
    MOV EAX,[0x02dd1008]                ; 004dc70a | DAT_02dd1008
    PUSH EAX                            ; 004dc70f
    MOV EDX,dword ptr [EDI + 0x34]      ; 004dc710
    PUSH EDX                            ; 004dc713
    CALL FUN_0040d890                   ; 004dc714
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004dc719
    TEST EAX,EAX                        ; 004dc71c
    JZ 0x004dc731                       ; 004dc71e
        ;   XREF to: 004dc731 (CONDITIONAL_JUMP)  ; LAB_004dc731
    PUSH 0x3f000000                     ; 004dc720
    CALL FUN_0040dea0                   ; 004dc725
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 004dc72a
    TEST EAX,EAX                        ; 004dc72d
    JZ 0x004dc73e                       ; 004dc72f
        ;   XREF to: 004dc73e (CONDITIONAL_JUMP)  ; LAB_004dc73e
    PUSH 0x1                            ; 004dc731
        ;   Label: LAB_004dc731
    PUSH 0x3                            ; 004dc733
    PUSH ESI                            ; 004dc735
    CALL FUN_004e16b0                   ; 004dc736
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004dc73b
    MOV ECX,dword ptr [EBX + 0xbdb8]    ; 004dc73e
        ;   Label: LAB_004dc73e
    PUSH ECX                            ; 004dc744
    CALL FUN_00526c50                   ; 004dc745
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 004dc74a
    TEST EAX,EAX                        ; 004dc74d
    JZ 0x004dc7ef                       ; 004dc74f
        ;   XREF to: 004dc7ef (CONDITIONAL_JUMP)  ; LAB_004dc7ef
    PUSH EDI                            ; 004dc755
        ;   Label: LAB_004dc755
    PUSH EBX                            ; 004dc756
    CALL FUN_00479f70                   ; 004dc757
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004dc75c
    POP EBP                             ; 004dc75f
    POP EDI                             ; 004dc760
    POP ESI                             ; 004dc761
    POP EBX                             ; 004dc762
    RET                                 ; 004dc763
    PUSH ESI                            ; 004dc764
        ;   Label: LAB_004dc764
    MOV dword ptr [EBX + 0x2434],0x0    ; 004dc765
    CALL FUN_004e1660                   ; 004dc76f
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dc774
    ADD ESP,0x4                         ; 004dc777
    CMP EAX,0x5                         ; 004dc77a
    JZ 0x004dc755                       ; 004dc77d
        ;   XREF to: 004dc755 (CONDITIONAL_JUMP)  ; LAB_004dc755
    CMP EAX,0x4                         ; 004dc77f
    JZ 0x004dc755                       ; 004dc782
        ;   XREF to: 004dc755 (CONDITIONAL_JUMP)  ; LAB_004dc755
    PUSH 0x1                            ; 004dc784
    PUSH 0x4                            ; 004dc786
    PUSH ESI                            ; 004dc788
    CALL FUN_004e16b0                   ; 004dc789
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004dc78e
    PUSH 0x0                            ; 004dc791
    PUSH 0x1                            ; 004dc793
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc795
    PUSH EBX                            ; 004dc79b
    CALL dword ptr [EAX + 0x120]        ; 004dc79c
    MOV ESI,dword ptr [EBX + 0xbdc0]    ; 004dc7a2
    ADD ESP,0xc                         ; 004dc7a8
    TEST ESI,ESI                        ; 004dc7ab
    JNZ 0x004dc755                      ; 004dc7ad
        ;   XREF to: 004dc755 (CONDITIONAL_JUMP)  ; LAB_004dc755
    MOV EBP,dword ptr [EBX + 0xbdb8]    ; 004dc7af
    PUSH EBP                            ; 004dc7b5
    CALL FUN_00527230                   ; 004dc7b6
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004dc7bb
    PUSH 0x58a489                       ; 004dc7be | s_mobster-die-?.wav_0058a488+1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc7c3
    PUSH EBX                            ; 004dc7c9
    CALL dword ptr [EAX + 0x24]         ; 004dc7ca
    MOV dword ptr [EBX + 0xbdc0],0x1    ; 004dc7cd
    ADD ESP,0x8                         ; 004dc7d7
    MOV dword ptr [EBX + 0xbdb8],EAX    ; 004dc7da
    PUSH EDI                            ; 004dc7e0
    PUSH EBX                            ; 004dc7e1
    CALL FUN_00479f70                   ; 004dc7e2
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004dc7e7
    POP EBP                             ; 004dc7ea
    POP EDI                             ; 004dc7eb
    POP ESI                             ; 004dc7ec
    POP EBX                             ; 004dc7ed
    RET                                 ; 004dc7ee
    PUSH 0x58a49b                       ; 004dc7ef | = "mobster-hit-?.wav"
        ;   Label: LAB_004dc7ef
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dc7f4
    PUSH EBX                            ; 004dc7fa
    CALL dword ptr [EAX + 0x24]         ; 004dc7fb
    ADD ESP,0x8                         ; 004dc7fe
    MOV dword ptr [EBX + 0xbdb8],EAX    ; 004dc801
    PUSH EDI                            ; 004dc807
    PUSH EBX                            ; 004dc808
    CALL FUN_00479f70                   ; 004dc809
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004dc80e
    POP EBP                             ; 004dc811
    POP EDI                             ; 004dc812
    POP ESI                             ; 004dc813
    POP EBX                             ; 004dc814
    RET                                 ; 004dc815

