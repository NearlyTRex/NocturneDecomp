; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_005516c0(CDemonSet *param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00550580 at 00550906
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 g_CGameInstance.field532_0x244
;   undefined4 DAT_01d06ab4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02026358
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590
;   core_set.cpp_CDemonSet_setFlatColor_FUN_00555770
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005516c0
        ;   Label: core_set.cpp_FUN_005516c0
    PUSH ESI                            ; 005516c1
    PUSH EDI                            ; 005516c2
    PUSH EBP                            ; 005516c3
    SUB ESP,0x50                        ; 005516c4
    MOV EBP,dword ptr [ESP + 0x64]      ; 005516c7
    MOV EAX,[0x0061d95c]                ; 005516cb | g_CGamePtr
    XOR EDX,EDX                         ; 005516d0
    MOV ECX,dword ptr [EAX + 0x244]     ; 005516d2 | g_CGameInstance.field532_0x244
    MOV dword ptr [0x02026358],EDX      ; 005516d8 | DAT_02026358
    TEST ECX,ECX                        ; 005516de
    JNZ 0x0055170b                      ; 005516e0
        ;   XREF to: 0055170b (CONDITIONAL_JUMP)  ; LAB_0055170b
    MOV EAX,[0x01d06ab4]                ; 005516e2 | DAT_01d06ab4
    SHL EAX,0x2                         ; 005516e7
    MOV EBX,dword ptr [EAX + 0x1d06aa4] ; 005516ea
    TEST EBX,EBX                        ; 005516f0
    JZ 0x0055170b                       ; 005516f2
        ;   XREF to: 0055170b (CONDITIONAL_JUMP)  ; LAB_0055170b
    MOV ESI,dword ptr [EBX + 0x1ff60]   ; 005516f4
    MOV EAX,EBX                         ; 005516fa
    TEST ESI,ESI                        ; 005516fc
    JZ 0x0055170b                       ; 005516fe
        ;   XREF to: 0055170b (CONDITIONAL_JUMP)  ; LAB_0055170b
    MOV EAX,dword ptr [EBX + 0x1ff68]   ; 00551700
    MOV [0x02026358],EAX                ; 00551706 | DAT_02026358
    MOV EAX,dword ptr [EBP + 0x15f6fc]  ; 0055170b
        ;   Label: LAB_0055170b
    DEC EAX                             ; 00551711
    MOV dword ptr [ESP + 0x48],EAX      ; 00551712
    TEST EAX,EAX                        ; 00551716
    JL 0x00551755                       ; 00551718
        ;   XREF to: 00551755 (CONDITIONAL_JUMP)  ; LAB_00551755
    SHL EAX,0x2                         ; 0055171a
    ADD EAX,EBP                         ; 0055171d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0055171f
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00551723
        ;   Label: LAB_00551723
    MOV EBX,dword ptr [EBX + 0x15f700]  ; 00551727
    CMP dword ptr [EBX + 0xfc],0x0      ; 0055172d
    JNZ 0x0055175d                      ; 00551734
        ;   XREF to: 0055175d (CONDITIONAL_JUMP)  ; LAB_0055175d
    AND byte ptr [EBX + 0x144],0xf7     ; 00551736
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0055173d
        ;   Label: LAB_0055173d
    MOV EDX,dword ptr [ESP + 0x48]      ; 00551741
    SUB EAX,0x4                         ; 00551745
    DEC EDX                             ; 00551748
    MOV dword ptr [ESP + 0x4c],EAX      ; 00551749
    MOV dword ptr [ESP + 0x48],EDX      ; 0055174d
    TEST EDX,EDX                        ; 00551751
    JGE 0x00551723                      ; 00551753
        ;   XREF to: 00551723 (CONDITIONAL_JUMP)  ; LAB_00551723
    ADD ESP,0x50                        ; 00551755
        ;   Label: LAB_00551755
    POP EBP                             ; 00551758
    POP EDI                             ; 00551759
    POP ESI                             ; 0055175a
    POP EBX                             ; 0055175b
    RET                                 ; 0055175c
    PUSH EBX                            ; 0055175d
        ;   Label: LAB_0055175d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055175e
    LEA ESI,[ESP + 0x34]                ; 00551764
    LEA EDI,[ESP + 0x4]                 ; 00551768
    CALL dword ptr [EAX + 0x1c]         ; 0055176c
    MOV ECX,0x6                         ; 0055176f
    LEA ESI,[ESP + 0x34]                ; 00551774
    ADD ESP,0x4                         ; 00551778
    MOVSD.REP ES:EDI,ESI                ; 0055177b
    LEA EDX,[ESP + 0x18]                ; 0055177d
    MOV ECX,ESP                         ; 00551781
    CMP EDX,ECX                         ; 00551783
    JZ 0x0055179e                       ; 00551785
        ;   XREF to: 0055179e (CONDITIONAL_JUMP)  ; LAB_0055179e
    MOV EAX,dword ptr [ESP]             ; 00551787
    MOV dword ptr [ESP + 0x18],EAX      ; 0055178a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055178e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00551792
    MOV EAX,dword ptr [ESP + 0x8]       ; 00551796
    MOV dword ptr [ESP + 0x20],EAX      ; 0055179a
    LEA EAX,[ESP + 0x24]                ; 0055179e
        ;   Label: LAB_0055179e
    LEA EDX,[ECX + 0xc]                 ; 005517a2
    CMP EAX,EDX                         ; 005517a5
    JZ 0x005517bd                       ; 005517a7
        ;   XREF to: 005517bd (CONDITIONAL_JUMP)  ; LAB_005517bd
    MOV EAX,dword ptr [EDX]             ; 005517a9
    MOV dword ptr [ESP + 0x24],EAX      ; 005517ab
    MOV EAX,dword ptr [EDX + 0x4]       ; 005517af
    MOV dword ptr [ESP + 0x28],EAX      ; 005517b2
    MOV EAX,dword ptr [EDX + 0x8]       ; 005517b6
    MOV dword ptr [ESP + 0x2c],EAX      ; 005517b9
    LEA EAX,[EBX + 0x3c]                ; 005517bd
        ;   Label: LAB_005517bd
    PUSH EAX                            ; 005517c0
    LEA EAX,[ESP + 0x28]                ; 005517c1
    PUSH EAX                            ; 005517c5
    LEA EAX,[ESP + 0x20]                ; 005517c6
    PUSH EAX                            ; 005517ca
    LEA EAX,[EBX + 0x30]                ; 005517cb
    PUSH EAX                            ; 005517ce
    LEA EAX,[EBX + 0x20]                ; 005517cf
    PUSH EAX                            ; 005517d2
    PUSH EBP                            ; 005517d3
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30 ; 005517d4
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    MOV EAX,[0x02026358]                ; 005517d9 | DAT_02026358
    ADD ESP,0x18                        ; 005517de
    MOV ESI,dword ptr [EBX + 0x108]     ; 005517e1
    MOV ECX,dword ptr [EBX + 0x10c]     ; 005517e7
    MOV EDI,dword ptr [EBX + 0x110]     ; 005517ed
    CMP EBX,EAX                         ; 005517f3
    JNZ 0x00551821                      ; 005517f5
        ;   XREF to: 00551821 (CONDITIONAL_JUMP)  ; LAB_00551821
    LEA EDX,[ESI + ESI*0x2]             ; 005517f7
    MOV EAX,EDX                         ; 005517fa
    SAR EDX,0x1f                        ; 005517fc
    SUB EAX,EDX                         ; 005517ff
    SAR EAX,0x1                         ; 00551801
    LEA EDX,[ECX + ECX*0x2]             ; 00551803
    MOV ESI,EAX                         ; 00551806
    MOV EAX,EDX                         ; 00551808
    SAR EDX,0x1f                        ; 0055180a
    SUB EAX,EDX                         ; 0055180d
    SAR EAX,0x1                         ; 0055180f
    LEA EDX,[EDI + EDI*0x2]             ; 00551811
    MOV ECX,EAX                         ; 00551814
    MOV EAX,EDX                         ; 00551816
    SAR EDX,0x1f                        ; 00551818
    SUB EAX,EDX                         ; 0055181b
    SAR EAX,0x1                         ; 0055181d
    MOV EDI,EAX                         ; 0055181f
    PUSH EDI                            ; 00551821
        ;   Label: LAB_00551821
    PUSH ECX                            ; 00551822
    PUSH ESI                            ; 00551823
    MOV EDX,dword ptr [0x00622c18]      ; 00551824 | g_CDemonSetPtr
    PUSH EDX                            ; 0055182a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00555770 ; 0055182b
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00551830
    MOV EAX,dword ptr [EBX + 0x154]     ; 00551833
    PUSH EBX                            ; 00551839
    CALL dword ptr [EAX + 0x14]         ; 0055183a
    ADD ESP,0x4                         ; 0055183d
    TEST EAX,EAX                        ; 00551840
    JZ 0x005518d1                       ; 00551842
        ;   XREF to: 005518d1 (CONDITIONAL_JUMP)  ; LAB_005518d1
    OR byte ptr [EBX + 0x144],0x8       ; 00551848
    PUSH 0x1                            ; 0055184f
        ;   Label: LAB_0055184f
    MOV ECX,dword ptr [0x00612560]      ; 00551851 | DAT_00612560
    PUSH ECX                            ; 00551857 | DAT_01bc120c
    XOR ESI,ESI                         ; 00551858
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0055185a
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    MOV EDI,dword ptr [EBP + 0x15acc8]  ; 0055185f
    ADD ESP,0x8                         ; 00551865
    TEST EDI,EDI                        ; 00551868
    JLE 0x005518b4                      ; 0055186a
        ;   XREF to: 005518b4 (CONDITIONAL_JUMP)  ; LAB_005518b4
    PUSH 0x0                            ; 0055186c
        ;   Label: LAB_0055186c
    PUSH ESI                            ; 0055186e
    PUSH EBP                            ; 0055186f
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 00551870
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00551875
    MOV EAX,dword ptr [EBX + 0x154]     ; 00551878
    PUSH EBX                            ; 0055187e
    CALL dword ptr [EAX + 0x14]         ; 0055187f
    ADD ESP,0x4                         ; 00551882
    TEST EAX,EAX                        ; 00551885
    JZ 0x00551890                       ; 00551887
        ;   XREF to: 00551890 (CONDITIONAL_JUMP)  ; LAB_00551890
    OR byte ptr [EBX + 0x144],0x8       ; 00551889
    PUSH 0x1                            ; 00551890
        ;   Label: LAB_00551890
    MOV EAX,[0x00612560]                ; 00551892 | DAT_00612560
    PUSH EAX                            ; 00551897 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00551898
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0055189d
    PUSH EBP                            ; 005518a0
    INC ESI                             ; 005518a1
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 005518a2
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBP + 0x15acc8]  ; 005518a7
    ADD ESP,0x4                         ; 005518ad
    CMP ESI,EDX                         ; 005518b0
    JL 0x0055186c                       ; 005518b2
        ;   XREF to: 0055186c (CONDITIONAL_JUMP)  ; LAB_0055186c
    PUSH 0x10000                        ; 005518b4
        ;   Label: LAB_005518b4
    PUSH 0x10000                        ; 005518b9
    PUSH 0x10000                        ; 005518be
    PUSH EBP                            ; 005518c3
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00555770 ; 005518c4
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 005518c9
    JMP 0x0055173d                      ; 005518cc
        ;   XREF to: 0055173d (UNCONDITIONAL_JUMP)  ; LAB_0055173d
    AND byte ptr [EBX + 0x144],0xf7     ; 005518d1
        ;   Label: LAB_005518d1
    JMP 0x0055184f                      ; 005518d8
        ;   XREF to: 0055184f (UNCONDITIONAL_JUMP)  ; LAB_0055184f

