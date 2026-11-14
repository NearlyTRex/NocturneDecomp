; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_004e57f0(CMansionPuzzleCircle *this_ptr,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_game.cpp_CGame_setFudgeTarget_FUN_004b39b0
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20
;   core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580
;   core_manpuz.cpp_FUN_004e6240
;   core_manpuz.cpp_FUN_004e7600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e57f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004e57f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e57f1
    LEA EAX,[EBX + 0x20]                ; 004e57f5
    PUSH 0x41f00000                     ; 004e57f8
    PUSH EAX                            ; 004e57fd
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 004e57fe
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 004e5803
    TEST EAX,EAX                        ; 004e5806
    JZ 0x004e58fc                       ; 004e5808
        ;   XREF to: 004e58fc (CONDITIONAL_JUMP)  ; LAB_004e58fc
    PUSH ESI                            ; 004e580e
    XOR ESI,ESI                         ; 004e580f
    PUSH dword ptr [ESP + 0x10]         ; 004e5811
        ;   Label: LAB_004e5811
    PUSH ESI                            ; 004e5815
    PUSH EBX                            ; 004e5816
    CALL core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0 ; 004e5817
        ;   XREF to: 004e68c0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0(CMansionPuzzleCircle * this_ptr, int panel_index, float delta_time)
    INC ESI                             ; 004e581c
    ADD ESP,0xc                         ; 004e581d
    CMP ESI,0xc                         ; 004e5820
    JL 0x004e5811                       ; 004e5823
        ;   XREF to: 004e5811 (CONDITIONAL_JUMP)  ; LAB_004e5811
    XOR ESI,ESI                         ; 004e5825
    PUSH dword ptr [ESP + 0x10]         ; 004e5827
        ;   Label: LAB_004e5827
    PUSH ESI                            ; 004e582b
    PUSH EBX                            ; 004e582c
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580 ; 004e582d
        ;   XREF to: 004e7580 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580(CMansionPuzzleCircle * this_ptr, int reflector_index, float delta_time)
    INC ESI                             ; 004e5832
    ADD ESP,0xc                         ; 004e5833
    CMP ESI,0x2                         ; 004e5836
    JL 0x004e5827                       ; 004e5839
        ;   XREF to: 004e5827 (CONDITIONAL_JUMP)  ; LAB_004e5827
    XOR ESI,ESI                         ; 004e583b
    PUSH dword ptr [ESP + 0x10]         ; 004e583d
        ;   Label: LAB_004e583d
    PUSH ESI                            ; 004e5841
    PUSH EBX                            ; 004e5842
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20 ; 004e5843
        ;   XREF to: 004e6f20 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20(CMansionPuzzleCircle * this_ptr, int panel_index, float delta_time)
    INC ESI                             ; 004e5848
    ADD ESP,0xc                         ; 004e5849
    CMP ESI,0xc                         ; 004e584c
    JL 0x004e583d                       ; 004e584f
        ;   XREF to: 004e583d (CONDITIONAL_JUMP)  ; LAB_004e583d
    XOR ESI,ESI                         ; 004e5851
    PUSH dword ptr [ESP + 0x10]         ; 004e5853
        ;   Label: LAB_004e5853
    PUSH ESI                            ; 004e5857
    PUSH EBX                            ; 004e5858
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 ; 004e5859
        ;   XREF to: 004e6c40 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40(CMansionPuzzleCircle * this_ptr, int gem_index, float delta_time)
    INC ESI                             ; 004e585e
    ADD ESP,0xc                         ; 004e585f
    CMP ESI,0xc                         ; 004e5862
    JL 0x004e5853                       ; 004e5865
        ;   XREF to: 004e5853 (CONDITIONAL_JUMP)  ; LAB_004e5853
    XOR ESI,ESI                         ; 004e5867
    PUSH ESI                            ; 004e5869
        ;   Label: LAB_004e5869
    PUSH EBX                            ; 004e586a
    CALL core_manpuz.cpp_FUN_004e6240   ; 004e586b
        ;   XREF to: 004e6240 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_004e6240()
    INC ESI                             ; 004e5870
    ADD ESP,0x8                         ; 004e5871
    CMP ESI,0xc                         ; 004e5874
    JL 0x004e5869                       ; 004e5877
        ;   XREF to: 004e5869 (CONDITIONAL_JUMP)  ; LAB_004e5869
    XOR ESI,ESI                         ; 004e5879
    PUSH ESI                            ; 004e587b
        ;   Label: LAB_004e587b
    PUSH EBX                            ; 004e587c
    CALL core_manpuz.cpp_FUN_004e7600   ; 004e587d
        ;   XREF to: 004e7600 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_004e7600()
    INC ESI                             ; 004e5882
    ADD ESP,0x8                         ; 004e5883
    CMP ESI,0x2                         ; 004e5886
    JL 0x004e587b                       ; 004e5889
        ;   XREF to: 004e587b (CONDITIONAL_JUMP)  ; LAB_004e587b
    LEA ESI,[EBX + 0x1524]              ; 004e588b
    LEA EAX,[EBX + 0x14c4]              ; 004e5891
    CMP ESI,EAX                         ; 004e5897
    JZ 0x004e58ab                       ; 004e5899
        ;   XREF to: 004e58ab (CONDITIONAL_JUMP)  ; LAB_004e58ab
    MOV EDX,dword ptr [EAX]             ; 004e589b
    MOV dword ptr [ESI],EDX             ; 004e589d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e589f
    MOV dword ptr [ESI + 0x4],EDX       ; 004e58a2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e58a5
    MOV dword ptr [ESI + 0x8],EDX       ; 004e58a8
    MOV AH,byte ptr [EBX + 0x152b]      ; 004e58ab
        ;   Label: LAB_004e58ab
    LEA ESI,[EBX + 0x14c4]              ; 004e58b1
    XOR AH,0x80                         ; 004e58b7
    PUSH ESI                            ; 004e58ba
    MOV byte ptr [EBX + 0x152b],AH      ; 004e58bb
    LEA EAX,[EBX + 0x14d0]              ; 004e58c1
    PUSH EAX                            ; 004e58c7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004e58c8
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004e58cd
    LEA EAX,[EBX + 0x1524]              ; 004e58d0
    PUSH EAX                            ; 004e58d6
    ADD EBX,0x1530                      ; 004e58d7
    PUSH EBX                            ; 004e58dd
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004e58de
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004e58e3
    PUSH 0x3c8efa35                     ; 004e58e6
    PUSH ESI                            ; 004e58eb
    MOV EDX,dword ptr [0x00616494]      ; 004e58ec | g_CGamePtr
    PUSH EDX                            ; 004e58f2
    CALL core_game.cpp_CGame_setFudgeTarget_FUN_004b39b0 ; 004e58f3
        ;   XREF to: 004b39b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setFudgeTarget_FUN_004b39b0(CGame * this_ptr, CVector3f * fudge_target, float fudge_step)
    ADD ESP,0xc                         ; 004e58f8
    POP ESI                             ; 004e58fb
    POP EBX                             ; 004e58fc
        ;   Label: LAB_004e58fc
    RET                                 ; 004e58fd

