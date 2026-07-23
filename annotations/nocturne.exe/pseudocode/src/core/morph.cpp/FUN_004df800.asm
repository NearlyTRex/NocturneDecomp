; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df800(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7,int param_8)
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
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 at 004df452
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0058abd4
;   TerminatedCString s_CMorphModel_setFaceList_0058abe6
;   TerminatedCString s_core_morph_cpp_0058ac14
;   TerminatedCString s_CMorphModel_setFaceList_0058ac26
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cd4314
;
; Called Functions:
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df800
        ;   Label: FUN_004df800
    PUSH ESI                            ; 004df801
    PUSH EDI                            ; 004df802
    PUSH EBP                            ; 004df803
    SUB ESP,0x18                        ; 004df804
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004df807
    MOV ESI,dword ptr [ESP + 0x30]      ; 004df80b
    MOV EDI,dword ptr [ESP + 0x44]      ; 004df80f
    TEST ESI,ESI                        ; 004df813
    JL 0x004df81b                       ; 004df815
        ;   XREF to: 004df81b (CONDITIONAL_JUMP)  ; LAB_004df81b
    CMP ESI,dword ptr [EBX]             ; 004df817
    JL 0x004df83e                       ; 004df819
        ;   XREF to: 004df83e (CONDITIONAL_JUMP)  ; LAB_004df83e
    MOV ECX,0x58abd4                    ; 004df81b | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df81b
    MOV EBP,0x152                       ; 004df820
    PUSH 0x58abe6                       ; 004df825 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01cc4800],ECX      ; 004df82a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004df830 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df836
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df83b
    MOV EAX,ESI                         ; 004df83e
        ;   Label: LAB_004df83e
    SHL EAX,0x4                         ; 004df840
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 004df843
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004df847
    MOV EAX,dword ptr [ESP + 0x48]      ; 004df84b
    ADD EDI,EDX                         ; 004df84f
    ADD EDX,ECX                         ; 004df851
    ADD EAX,EDI                         ; 004df853
    CMP EAX,EDX                         ; 004df855
    JLE 0x004df87b                      ; 004df857
        ;   XREF to: 004df87b (CONDITIONAL_JUMP)  ; LAB_004df87b
    MOV EBP,0x58ac14                    ; 004df859 | = "..\\core\\morph.cpp"
    MOV EAX,0x159                       ; 004df85e
    PUSH 0x58ac26                       ; 004df863 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01cc4800],EBP      ; 004df868 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004df86e | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df873
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df878
    MOV ECX,dword ptr [ESP + 0x48]      ; 004df87b
        ;   Label: LAB_004df87b
    MOV EBP,dword ptr [ESP + 0x34]      ; 004df87f
    XOR EDX,EDX                         ; 004df883
    MOV dword ptr [ESP + 0x10],EDI      ; 004df885
    MOV dword ptr [ESP + 0x8],EDX       ; 004df889
    TEST ECX,ECX                        ; 004df88d
    JLE 0x004df9a7                      ; 004df88f
        ;   XREF to: 004df9a7 (CONDITIONAL_JUMP)  ; LAB_004df9a7
    SHL ESI,0x4                         ; 004df895
    LEA EAX,[EBX + ESI*0x1]             ; 004df898
    MOV dword ptr [ESP + 0x14],EAX      ; 004df89b
    MOV EAX,dword ptr [ESP + 0x40]      ; 004df89f
    MOV dword ptr [ESP + 0x4],EAX       ; 004df8a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004df8a7
        ;   Label: LAB_004df8a7
    IMUL EAX,dword ptr [EAX],0x48       ; 004df8ab
    ADD EAX,dword ptr [ESP + 0x3c]      ; 004df8ae
    ADD EAX,0x8                         ; 004df8b2
    PUSH EAX                            ; 004df8b5
    PUSH EBX                            ; 004df8b6
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0 ; 004df8b7
        ;   XREF to: 004dfba0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0()
    MOV ECX,0x2                         ; 004df8bc
    ADD ESP,0x8                         ; 004df8c1
    MOV EDI,dword ptr [EBP + 0x4]       ; 004df8c4
    MOV dword ptr [ESP + 0xc],EAX       ; 004df8c7
    CMP EDI,ECX                         ; 004df8cb
    JLE 0x004df981                      ; 004df8cd
        ;   XREF to: 004df981 (CONDITIONAL_JUMP)  ; LAB_004df981
    MOV ESI,dword ptr [ESP + 0x10]      ; 004df8d3
    LEA EDX,[EBP + 0x18]                ; 004df8d7
    IMUL EAX,ESI,0x3c                   ; 004df8da
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df8dd
        ;   Label: LAB_004df8dd
    MOV EDI,dword ptr [0x01cd4314]      ; 004df8e0 | DAT_01cd4314
    MOV dword ptr [ESI + EAX*0x1 + 0x4],0x3 ; 004df8e6
    TEST EDI,EDI                        ; 004df8ee
    JZ 0x004df9af                       ; 004df8f0
        ;   XREF to: 004df9af (CONDITIONAL_JUMP)  ; LAB_004df9af
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df8f6
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 004df8f9
    LEA ESI,[EDX + 0x18]                ; 004df8fd
    MOVSD ES:EDI,ESI                    ; 004df900
    MOVSD ES:EDI,ESI                    ; 004df901
    MOVSD ES:EDI,ESI                    ; 004df902
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df903
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 004df906
    LEA ESI,[EDX + 0xc]                 ; 004df90a
    MOVSD ES:EDI,ESI                    ; 004df90d
    MOVSD ES:EDI,ESI                    ; 004df90e
    MOVSD ES:EDI,ESI                    ; 004df90f
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df910
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 004df913
    LEA ESI,[EBP + 0x18]                ; 004df917
    MOVSD ES:EDI,ESI                    ; 004df91a
        ;   Label: LAB_004df91a
    MOVSD ES:EDI,ESI                    ; 004df91b
    MOVSD ES:EDI,ESI                    ; 004df91c
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df91d
    MOV EDI,dword ptr [ESP + 0xc]       ; 004df920
    MOV dword ptr [ESI + EAX*0x1],EDI   ; 004df924
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df927
    ADD ESI,EAX                         ; 004df92a
    MOV dword ptr [ESP],ESI             ; 004df92c
    MOV ESI,dword ptr [ESP + 0x14]      ; 004df92f
    MOV EDI,dword ptr [ESP]             ; 004df933
    MOV ESI,dword ptr [ESI + 0xc]       ; 004df936
    ADD dword ptr [EDI + 0x18],ESI      ; 004df939
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df93c
    ADD ESI,EAX                         ; 004df93f
    MOV dword ptr [ESP],ESI             ; 004df941
    MOV ESI,dword ptr [ESP + 0x14]      ; 004df944
    MOV EDI,dword ptr [ESP]             ; 004df948
    MOV ESI,dword ptr [ESI + 0xc]       ; 004df94b
    ADD dword ptr [EDI + 0x24],ESI      ; 004df94e
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df951
    ADD ESI,EAX                         ; 004df954
    MOV dword ptr [ESP],ESI             ; 004df956
    MOV ESI,dword ptr [ESP + 0x14]      ; 004df959
    ADD EDX,0xc                         ; 004df95d
    MOV EDI,dword ptr [ESP]             ; 004df960
    MOV ESI,dword ptr [ESI + 0xc]       ; 004df963
    INC ECX                             ; 004df966
    ADD dword ptr [EDI + 0x30],ESI      ; 004df967
    MOV ESI,dword ptr [ESP + 0x10]      ; 004df96a
    ADD EAX,0x3c                        ; 004df96e
    INC ESI                             ; 004df971
    MOV EDI,dword ptr [EBP + 0x4]       ; 004df972
    MOV dword ptr [ESP + 0x10],ESI      ; 004df975
    CMP ECX,EDI                         ; 004df979
    JL 0x004df8dd                       ; 004df97b
        ;   XREF to: 004df8dd (CONDITIONAL_JUMP)  ; LAB_004df8dd
    MOV ESI,dword ptr [ESP + 0x38]      ; 004df981
        ;   Label: LAB_004df981
    MOV EDI,dword ptr [ESP + 0x4]       ; 004df985
    MOV EAX,dword ptr [ESP + 0x8]       ; 004df989
    MOV EDX,dword ptr [ESP + 0x48]      ; 004df98d
    ADD EDI,0x4                         ; 004df991
    INC EAX                             ; 004df994
    ADD EBP,ESI                         ; 004df995
    MOV dword ptr [ESP + 0x4],EDI       ; 004df997
    MOV dword ptr [ESP + 0x8],EAX       ; 004df99b
    CMP EAX,EDX                         ; 004df99f
    JL 0x004df8a7                       ; 004df9a1
        ;   XREF to: 004df8a7 (CONDITIONAL_JUMP)  ; LAB_004df8a7
    ADD ESP,0x18                        ; 004df9a7
        ;   Label: LAB_004df9a7
    POP EBP                             ; 004df9aa
    POP EDI                             ; 004df9ab
    POP ESI                             ; 004df9ac
    POP EBX                             ; 004df9ad
    RET                                 ; 004df9ae
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df9af
        ;   Label: LAB_004df9af
    LEA EDI,[ESI + EAX*0x1 + 0x18]      ; 004df9b2
    LEA ESI,[EBP + 0x18]                ; 004df9b6
    MOVSD ES:EDI,ESI                    ; 004df9b9
    MOVSD ES:EDI,ESI                    ; 004df9ba
    MOVSD ES:EDI,ESI                    ; 004df9bb
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df9bc
    LEA EDI,[ESI + EAX*0x1 + 0x24]      ; 004df9bf
    LEA ESI,[EDX + 0xc]                 ; 004df9c3
    MOVSD ES:EDI,ESI                    ; 004df9c6
    MOVSD ES:EDI,ESI                    ; 004df9c7
    MOVSD ES:EDI,ESI                    ; 004df9c8
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df9c9
    LEA EDI,[ESI + EAX*0x1 + 0x30]      ; 004df9cc
    LEA ESI,[EDX + 0x18]                ; 004df9d0
    JMP 0x004df91a                      ; 004df9d3
        ;   XREF to: 004df91a (UNCONDITIONAL_JUMP)  ; LAB_004df91a

