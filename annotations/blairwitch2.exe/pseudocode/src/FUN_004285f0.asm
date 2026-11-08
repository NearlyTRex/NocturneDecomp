; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004285f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_0053df10 at 0053df34
;   FUN_0058d020 at 0058d04d
;
; Referenced Globals:
;   undefined4 s_STAND_005ccebd+1
;   TerminatedCString s_STAND_005ccec4
;   TerminatedCString s_CCharacter_005cceca
;   undefined4 DAT_005cced6
;   undefined4 DAT_005ccede
;   undefined4 DAT_005ccee2
;   undefined4 DAT_005ccee6
;   undefined4 DAT_02668498
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040c8f0
;   FUN_00502fa0
;   FUN_005036b0
;   FUN_00503860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004285f0
        ;   Label: FUN_004285f0
    PUSH ESI                            ; 004285f1
    PUSH EDI                            ; 004285f2
    SUB ESP,0x10                        ; 004285f3
    MOV EBX,dword ptr [ESP + 0x20]      ; 004285f6
    MOV EDI,dword ptr [ESP + 0x24]      ; 004285fa
    TEST EDI,EDI                        ; 004285fe
    JNZ 0x00428695                      ; 00428600
        ;   XREF to: 00428695 (CONDITIONAL_JUMP)  ; LAB_00428695
    CMP dword ptr [EBX + 0x27ac],0x0    ; 00428606
    JZ 0x00428655                       ; 0042860d
        ;   XREF to: 00428655 (CONDITIONAL_JUMP)  ; LAB_00428655
    CMP dword ptr [EBX + 0x2774],0x0    ; 0042860f
    JZ 0x00428655                       ; 00428616
        ;   XREF to: 00428655 (CONDITIONAL_JUMP)  ; LAB_00428655
    LEA ESI,[EBX + 0x2b4]               ; 00428618
    LEA EAX,[EBX + 0x2514]              ; 0042861e
    CMP byte ptr [EAX],0x0              ; 00428624
    JZ 0x00428655                       ; 00428627
        ;   XREF to: 00428655 (CONDITIONAL_JUMP)  ; LAB_00428655
    PUSH EDI                            ; 00428629
    PUSH 0x5ccebe                       ; 0042862a | s_STAND_005ccebd+1
    PUSH ESI                            ; 0042862f
    CALL FUN_00503860                   ; 00428630
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 00428635
    PUSH EAX                            ; 00428638
    CALL FUN_00502fa0                   ; 00428639
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502fa0()
    ADD ESP,0xc                         ; 0042863e
    TEST EAX,EAX                        ; 00428641
    JL 0x00428655                       ; 00428643
        ;   XREF to: 00428655 (CONDITIONAL_JUMP)  ; LAB_00428655
    PUSH 0x1                            ; 00428645
    PUSH 0x5ccec4                       ; 00428647 | = "STAND"
    PUSH ESI                            ; 0042864c
    CALL FUN_005036b0                   ; 0042864d
        ;   XREF to: 005036b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005036b0()
    ADD ESP,0xc                         ; 00428652
    PUSH 0xbf800000                     ; 00428655
        ;   Label: LAB_00428655
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042865a
    PUSH EBX                            ; 00428660
    MOV dword ptr [EBX + 0x27ac],0x0    ; 00428661
    CALL dword ptr [EAX + 0x140]        ; 0042866b
        ;   Label: LAB_0042866b
    ADD ESP,0x8                         ; 00428671
    MOV EAX,dword ptr [ESP + 0x28]      ; 00428674
    MOV dword ptr [EBX + 0x2774],EDI    ; 00428678
    MOV dword ptr [EBX + 0x2778],EAX    ; 0042867e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00428684
    MOV dword ptr [EBX + 0x277c],EAX    ; 00428688
    ADD ESP,0x10                        ; 0042868e
    POP EDI                             ; 00428691
    POP ESI                             ; 00428692
    POP EBX                             ; 00428693
    RET                                 ; 00428694
    PUSH 0x5cceca                       ; 00428695 | = "CCharacter"
        ;   Label: LAB_00428695
    PUSH EDI                            ; 0042869a
    MOV dword ptr [EBX + 0x27ac],0x1    ; 0042869b
    CALL FUN_0040c840                   ; 004286a5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004286aa
    TEST EAX,EAX                        ; 004286ad
    JNZ 0x00428724                      ; 004286af
        ;   XREF to: 00428724 (CONDITIONAL_JUMP)  ; LAB_00428724
    LEA EDX,[EBX + 0x20]                ; 004286b1
    LEA EAX,[EDI + 0x20]                ; 004286b4
    FLD float ptr [EDX]                 ; 004286b7
    FSUB float ptr [EAX]                ; 004286b9
    FMUL ST0                            ; 004286bb
    FLD float ptr [EDX + 0x4]           ; 004286bd
    FSUB float ptr [EAX + 0x4]          ; 004286c0
    FMUL ST0                            ; 004286c3
    FLD float ptr [EDX + 0x8]           ; 004286c5
    FXCH                                ; 004286c8
    FADDP ST2,ST0                       ; 004286ca
    FSUB float ptr [EAX + 0x8]          ; 004286cc
    FMUL ST0                            ; 004286cf
    FADDP                               ; 004286d1
    FSQRT                               ; 004286d3
    FMUL double ptr [0x005cced6]        ; 004286d5 | DAT_005cced6
    FST float ptr [ESP + 0x4]           ; 004286db
    FCOMP float ptr [0x005ccede]        ; 004286df | DAT_005ccede
    FNSTSW AX                           ; 004286e5
    SAHF                                ; 004286e7
    JNC 0x00428735                      ; 004286e8
        ;   XREF to: 00428735 (CONDITIONAL_JUMP)  ; LAB_00428735
    MOV dword ptr [ESP + 0x4],0x40a00000 ; 004286ea
    MOV ESI,dword ptr [0x02668498]      ; 004286f2 | DAT_02668498
        ;   Label: LAB_004286f2
    PUSH ESI                            ; 004286f8
    PUSH EBX                            ; 004286f9
    CALL FUN_0040c8f0                   ; 004286fa
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004286ff
    TEST EAX,EAX                        ; 00428702
    JZ 0x00428714                       ; 00428704
        ;   XREF to: 00428714 (CONDITIONAL_JUMP)  ; LAB_00428714
    FLD float ptr [ESP + 0x4]           ; 00428706
    FMUL float ptr [0x005ccee6]         ; 0042870a | DAT_005ccee6
    FSTP float ptr [ESP + 0x4]          ; 00428710
    PUSH dword ptr [ESP + 0x4]          ; 00428714
        ;   Label: LAB_00428714
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00428718
    PUSH EBX                            ; 0042871e
    JMP 0x0042866b                      ; 0042871f
        ;   XREF to: 0042866b (UNCONDITIONAL_JUMP)  ; LAB_0042866b
    PUSH 0xbf800000                     ; 00428724
        ;   Label: LAB_00428724
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00428729
    PUSH EBX                            ; 0042872f
    JMP 0x0042866b                      ; 00428730
        ;   XREF to: 0042866b (UNCONDITIONAL_JUMP)  ; LAB_0042866b
    FLD float ptr [ESP + 0x4]           ; 00428735
        ;   Label: LAB_00428735
    FCOMP float ptr [0x005ccee2]        ; 00428739 | DAT_005ccee2
    FNSTSW AX                           ; 0042873f
    SAHF                                ; 00428741
    JBE 0x004286f2                      ; 00428742
        ;   XREF to: 004286f2 (CONDITIONAL_JUMP)  ; LAB_004286f2
    MOV dword ptr [ESP + 0x4],0x42700000 ; 00428744
    JMP 0x004286f2                      ; 0042874c
        ;   XREF to: 004286f2 (UNCONDITIONAL_JUMP)  ; LAB_004286f2

