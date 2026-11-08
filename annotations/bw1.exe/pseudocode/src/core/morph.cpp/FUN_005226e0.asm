; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005226e0(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7,int param_8)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005221d0 at 00522332
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea742
;   TerminatedCString s_CMorphModel_setFaceList_005ea754
;   TerminatedCString s_core_morph_cpp_005ea782
;   TerminatedCString s_CMorphModel_setFaceList_005ea794
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d39d30
;
; Called Functions:
;   FUN_005030e0
;   FUN_00522a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005226e0
        ;   Label: FUN_005226e0
    PUSH ESI                            ; 005226e1
    PUSH EDI                            ; 005226e2
    PUSH EBP                            ; 005226e3
    SUB ESP,0x18                        ; 005226e4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005226e7
    MOV ESI,dword ptr [ESP + 0x30]      ; 005226eb
    MOV EDI,dword ptr [ESP + 0x44]      ; 005226ef
    TEST ESI,ESI                        ; 005226f3
    JL 0x005226fb                       ; 005226f5
        ;   XREF to: 005226fb (CONDITIONAL_JUMP)  ; LAB_005226fb
    CMP ESI,dword ptr [EBX]             ; 005226f7
    JL 0x0052271e                       ; 005226f9
        ;   XREF to: 0052271e (CONDITIONAL_JUMP)  ; LAB_0052271e
    MOV ECX,0x5ea742                    ; 005226fb | = "..\\core\\morph.cpp"
        ;   Label: LAB_005226fb
    MOV EBP,0x152                       ; 00522700
    PUSH 0x5ea754                       ; 00522705 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01d1d400],ECX      ; 0052270a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00522710 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00522716
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052271b
    MOV EAX,ESI                         ; 0052271e
        ;   Label: LAB_0052271e
    SHL EAX,0x4                         ; 00522720
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00522723
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00522727
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052272b
    ADD EDI,EDX                         ; 0052272f
    ADD EDX,ECX                         ; 00522731
    ADD EAX,EDI                         ; 00522733
    CMP EAX,EDX                         ; 00522735
    JLE 0x0052275b                      ; 00522737
        ;   XREF to: 0052275b (CONDITIONAL_JUMP)  ; LAB_0052275b
    MOV EBP,0x5ea782                    ; 00522739 | = "..\\core\\morph.cpp"
    MOV EAX,0x159                       ; 0052273e
    PUSH 0x5ea794                       ; 00522743 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01d1d400],EBP      ; 00522748 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052274e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00522753
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00522758
    MOV ECX,dword ptr [ESP + 0x48]      ; 0052275b
        ;   Label: LAB_0052275b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0052275f
    XOR EDX,EDX                         ; 00522763
    MOV dword ptr [ESP + 0x10],EDI      ; 00522765
    MOV dword ptr [ESP + 0x8],EDX       ; 00522769
    TEST ECX,ECX                        ; 0052276d
    JLE 0x00522887                      ; 0052276f
        ;   XREF to: 00522887 (CONDITIONAL_JUMP)  ; LAB_00522887
    SHL ESI,0x4                         ; 00522775
    LEA EAX,[EBX + ESI*0x1]             ; 00522778
    MOV dword ptr [ESP + 0x14],EAX      ; 0052277b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052277f
    MOV dword ptr [ESP + 0x4],EAX       ; 00522783
    MOV EAX,dword ptr [ESP + 0x4]       ; 00522787
        ;   Label: LAB_00522787
    IMUL EAX,dword ptr [EAX],0x48       ; 0052278b
    ADD EAX,dword ptr [ESP + 0x3c]      ; 0052278e
    ADD EAX,0x8                         ; 00522792
    PUSH EAX                            ; 00522795
    PUSH EBX                            ; 00522796
    CALL FUN_00522a80                   ; 00522797
        ;   XREF to: 00522a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00522a80()
    MOV ECX,0x2                         ; 0052279c
    ADD ESP,0x8                         ; 005227a1
    MOV EDI,dword ptr [EBP + 0x4]       ; 005227a4
    MOV dword ptr [ESP + 0xc],EAX       ; 005227a7
    CMP EDI,ECX                         ; 005227ab
    JLE 0x00522861                      ; 005227ad
        ;   XREF to: 00522861 (CONDITIONAL_JUMP)  ; LAB_00522861
    MOV ESI,dword ptr [ESP + 0x10]      ; 005227b3
    LEA EDX,[EBP + 0x18]                ; 005227b7
    IMUL EAX,ESI,0x3c                   ; 005227ba
    MOV ESI,dword ptr [EBX + 0x60]      ; 005227bd
        ;   Label: LAB_005227bd
    MOV EDI,dword ptr [0x01d39d30]      ; 005227c0 | DAT_01d39d30
    MOV dword ptr [ESI + EAX*0x1 + 0x4],0x3 ; 005227c6
    TEST EDI,EDI                        ; 005227ce
    JZ 0x0052288f                       ; 005227d0
        ;   XREF to: 0052288f (CONDITIONAL_JUMP)  ; LAB_0052288f
    MOV ESI,dword ptr [EBX + 0x60]      ; 005227d6
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 005227d9
    LEA ESI,[EDX + 0x18]                ; 005227dd
    MOVSD ES:EDI,ESI                    ; 005227e0
    MOVSD ES:EDI,ESI                    ; 005227e1
    MOVSD ES:EDI,ESI                    ; 005227e2
    MOV ESI,dword ptr [EBX + 0x60]      ; 005227e3
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 005227e6
    LEA ESI,[EDX + 0xc]                 ; 005227ea
    MOVSD ES:EDI,ESI                    ; 005227ed
    MOVSD ES:EDI,ESI                    ; 005227ee
    MOVSD ES:EDI,ESI                    ; 005227ef
    MOV ESI,dword ptr [EBX + 0x60]      ; 005227f0
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 005227f3
    LEA ESI,[EBP + 0x18]                ; 005227f7
    MOVSD ES:EDI,ESI                    ; 005227fa
        ;   Label: LAB_005227fa
    MOVSD ES:EDI,ESI                    ; 005227fb
    MOVSD ES:EDI,ESI                    ; 005227fc
    MOV ESI,dword ptr [EBX + 0x60]      ; 005227fd
    MOV EDI,dword ptr [ESP + 0xc]       ; 00522800
    MOV dword ptr [ESI + EAX*0x1],EDI   ; 00522804
    MOV ESI,dword ptr [EBX + 0x60]      ; 00522807
    ADD ESI,EAX                         ; 0052280a
    MOV dword ptr [ESP],ESI             ; 0052280c
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052280f
    MOV EDI,dword ptr [ESP]             ; 00522813
    MOV ESI,dword ptr [ESI + 0xc]       ; 00522816
    ADD dword ptr [EDI + 0x18],ESI      ; 00522819
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052281c
    ADD ESI,EAX                         ; 0052281f
    MOV dword ptr [ESP],ESI             ; 00522821
    MOV ESI,dword ptr [ESP + 0x14]      ; 00522824
    MOV EDI,dword ptr [ESP]             ; 00522828
    MOV ESI,dword ptr [ESI + 0xc]       ; 0052282b
    ADD dword ptr [EDI + 0x24],ESI      ; 0052282e
    MOV ESI,dword ptr [EBX + 0x60]      ; 00522831
    ADD ESI,EAX                         ; 00522834
    MOV dword ptr [ESP],ESI             ; 00522836
    MOV ESI,dword ptr [ESP + 0x14]      ; 00522839
    ADD EDX,0xc                         ; 0052283d
    MOV EDI,dword ptr [ESP]             ; 00522840
    MOV ESI,dword ptr [ESI + 0xc]       ; 00522843
    INC ECX                             ; 00522846
    ADD dword ptr [EDI + 0x30],ESI      ; 00522847
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052284a
    ADD EAX,0x3c                        ; 0052284e
    INC ESI                             ; 00522851
    MOV EDI,dword ptr [EBP + 0x4]       ; 00522852
    MOV dword ptr [ESP + 0x10],ESI      ; 00522855
    CMP ECX,EDI                         ; 00522859
    JL 0x005227bd                       ; 0052285b
        ;   XREF to: 005227bd (CONDITIONAL_JUMP)  ; LAB_005227bd
    MOV ESI,dword ptr [ESP + 0x38]      ; 00522861
        ;   Label: LAB_00522861
    MOV EDI,dword ptr [ESP + 0x4]       ; 00522865
    MOV EAX,dword ptr [ESP + 0x8]       ; 00522869
    MOV EDX,dword ptr [ESP + 0x48]      ; 0052286d
    ADD EDI,0x4                         ; 00522871
    INC EAX                             ; 00522874
    ADD EBP,ESI                         ; 00522875
    MOV dword ptr [ESP + 0x4],EDI       ; 00522877
    MOV dword ptr [ESP + 0x8],EAX       ; 0052287b
    CMP EAX,EDX                         ; 0052287f
    JL 0x00522787                       ; 00522881
        ;   XREF to: 00522787 (CONDITIONAL_JUMP)  ; LAB_00522787
    ADD ESP,0x18                        ; 00522887
        ;   Label: LAB_00522887
    POP EBP                             ; 0052288a
    POP EDI                             ; 0052288b
    POP ESI                             ; 0052288c
    POP EBX                             ; 0052288d
    RET                                 ; 0052288e
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052288f
        ;   Label: LAB_0052288f
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 00522892
    LEA ESI,[EBP + 0x18]                ; 00522896
    MOVSD ES:EDI,ESI                    ; 00522899
    MOVSD ES:EDI,ESI                    ; 0052289a
    MOVSD ES:EDI,ESI                    ; 0052289b
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052289c
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 0052289f
    LEA ESI,[EDX + 0xc]                 ; 005228a3
    MOVSD ES:EDI,ESI                    ; 005228a6
    MOVSD ES:EDI,ESI                    ; 005228a7
    MOVSD ES:EDI,ESI                    ; 005228a8
    MOV ESI,dword ptr [EBX + 0x60]      ; 005228a9
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 005228ac
    LEA ESI,[EDX + 0x18]                ; 005228b0
    JMP 0x005227fa                      ; 005228b3
        ;   XREF to: 005227fa (UNCONDITIONAL_JUMP)  ; LAB_005227fa

