; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042a830(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CVector3f        Stack[-0x68]:12  local_68
; CVector3f        Stack[-0x5c]:12  local_5c
; float            Stack[-0x4c]:4  local_4c
; CFlame *         Stack[-0x48]:4  local_48
; CDeformableModelInstance * Stack[-0x44]:4  local_44
; CMatrix3x4f *    Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; CSkeleton *      Stack[-0x38]:4  local_38
; CDeformableModel * Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; CCharacter *     Stack[-0x24]:4  local_24
; SFire *          Stack[-0x20]:4  local_20
; SFire *          Stack[-0x1c]:4  local_1c
; CSkeleton *      Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_process_FUN_00429870 at 004298a2
;
; Referenced Globals:
;   TerminatedCString s_character_onfire_fallapa_006170ca
;   TerminatedCString s_character_onfire_loop_wa_006170e9
;   double DOUBLE_0061710a = 65535
;   double DOUBLE_00617112 = 0.600000000000000
;   double DOUBLE_0061711a = 0.0200000000000000
;   double DOUBLE_00617122 = 0.400000000000000
;   double DOUBLE_0061712a = 0.5
;   float FLOAT_0065b82c = 2
;   float FLOAT_0065b830 = 3
;   float[100] g_BoneBurnIntensity
;   undefined4 DAT_00823c58
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
;   sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a830
        ;   Label: core_charactr.cpp_CCharacter_processFire_FUN_0042a830
    PUSH ESI                            ; 0042a831
    PUSH EDI                            ; 0042a832
    PUSH EBP                            ; 0042a833
    MOV EBP,ESP                         ; 0042a834
    SUB ESP,0x54                        ; 0042a836
    AND ESP,0xfffffff8                  ; 0042a839
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042a83c
    LEA EDI,[EBX + 0x158]               ; 0042a83f
    PUSH EDI                            ; 0042a845
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042a846
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a84b
    MOV EDX,dword ptr [EBX + 0xb7d8]    ; 0042a84e
    MOV dword ptr [ESP + 0x50],EAX      ; 0042a854
    TEST EDX,EDX                        ; 0042a858
    JNZ 0x0042ab50                      ; 0042a85a
        ;   XREF to: 0042ab50 (CONDITIONAL_JUMP)  ; LAB_0042ab50
    CMP dword ptr [EBX + 0x2f10],0x0    ; 0042a860
    JLE 0x0042a9e5                      ; 0042a867
        ;   XREF to: 0042a9e5 (CONDITIONAL_JUMP)  ; LAB_0042a9e5
    PUSH EDI                            ; 0042a86d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042a86e
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a873
    PUSH EDI                            ; 0042a876
    MOV ESI,EAX                         ; 0042a877
    MOV dword ptr [ESP + 0x34],EAX      ; 0042a879
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042a87d
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a882
    MOV EDI,EAX                         ; 0042a885
    MOV EAX,dword ptr [ESI + 0x28558]   ; 0042a887
    XOR EDX,EDX                         ; 0042a88d
    TEST EAX,EAX                        ; 0042a88f
    JLE 0x0042a8b0                      ; 0042a891
        ;   XREF to: 0042a8b0 (CONDITIONAL_JUMP)  ; LAB_0042a8b0
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042a893
    XOR EAX,EAX                         ; 0042a897
    XOR ECX,ECX                         ; 0042a899
        ;   Label: LAB_0042a899
    MOV dword ptr [EAX + 0x823c54],ECX  ; 0042a89b | g_BoneBurnIntensity | DAT_00823c58
    INC EDX                             ; 0042a8a1
    MOV ECX,dword ptr [ESI + 0x28558]   ; 0042a8a2
    ADD EAX,0x4                         ; 0042a8a8
    CMP EDX,ECX                         ; 0042a8ab
    JL 0x0042a899                       ; 0042a8ad
        ;   XREF to: 0042a899 (CONDITIONAL_JUMP)  ; LAB_0042a899
    NOP                                 ; 0042a8af
    MOV ESI,dword ptr [EBX + 0x2f10]    ; 0042a8b0
        ;   Label: LAB_0042a8b0
    XOR EAX,EAX                         ; 0042a8b6
    TEST ESI,ESI                        ; 0042a8b8
    JLE 0x0042a8fe                      ; 0042a8ba
        ;   XREF to: 0042a8fe (CONDITIONAL_JUMP)  ; LAB_0042a8fe
    FLD float ptr [0x0065b830]          ; 0042a8bc | FLOAT_0065b830
    FLD double ptr [0x0061710a]         ; 0042a8c2 | DOUBLE_0061710a
    MOV ESI,EBX                         ; 0042a8c8
    FLD float ptr [ESI + 0x2f30]        ; 0042a8ca
        ;   Label: LAB_0042a8ca
    MOV EDX,dword ptr [ESI + 0x2f20]    ; 0042a8d0
    FMUL ST1                            ; 0042a8d6
    FLD float ptr [EDX*0x4 + 0x823c54]  ; 0042a8d8 | g_BoneBurnIntensity
    FLD ST3                             ; 0042a8df
    FDIVP ST2,ST0                       ; 0042a8e1
    FADDP                               ; 0042a8e3
    INC EAX                             ; 0042a8e5
    FSTP float ptr [EDX*0x4 + 0x823c54] ; 0042a8e6 | g_BoneBurnIntensity
    MOV EDX,dword ptr [EBX + 0x2f10]    ; 0042a8ed
    ADD ESI,0x18                        ; 0042a8f3
    CMP EAX,EDX                         ; 0042a8f6
    JL 0x0042a8ca                       ; 0042a8f8
        ;   XREF to: 0042a8ca (CONDITIONAL_JUMP)  ; LAB_0042a8ca
    FSTP ST0                            ; 0042a8fa
    FSTP ST0                            ; 0042a8fc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042a8fe
        ;   Label: LAB_0042a8fe
    XOR ESI,ESI                         ; 0042a902
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0042a904
    MOV dword ptr [ESP + 0x3c],ESI      ; 0042a90a
    TEST EDX,EDX                        ; 0042a90e
    JLE 0x0042a98e                      ; 0042a910
        ;   XREF to: 0042a98e (CONDITIONAL_JUMP)  ; LAB_0042a98e
    LEA EAX,[EBX + 0x158]               ; 0042a916
    MOV dword ptr [ESP + 0x34],EDI      ; 0042a91c
    MOV dword ptr [ESP + 0x24],EAX      ; 0042a920
    XOR EDI,EDI                         ; 0042a924
    FLD float ptr [EDI + 0x823c54]      ; 0042a926 | g_BoneBurnIntensity | DAT_00823c58
        ;   Label: LAB_0042a926
    FCOMP double ptr [0x0061710a]       ; 0042a92c | DOUBLE_0061710a
    FNSTSW AX                           ; 0042a932
    SAHF                                ; 0042a934
    JC 0x0042a938                       ; 0042a935
        ;   XREF to: 0042a938 (CONDITIONAL_JUMP)  ; LAB_0042a938
    INC ESI                             ; 0042a937
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042a938
        ;   Label: LAB_0042a938
    CMP dword ptr [EAX + 0x8dcc],-0x1   ; 0042a93c
    JNZ 0x0042a946                      ; 0042a943
        ;   XREF to: 0042a946 (CONDITIONAL_JUMP)  ; LAB_0042a946
    INC ESI                             ; 0042a945
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042a946
        ;   Label: LAB_0042a946
    PUSH ECX                            ; 0042a94a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042a94b
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x8c3c] ; 0042a950
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0042a957
    ADD ESP,0x4                         ; 0042a95e
    TEST EDX,EDX                        ; 0042a961
    JZ 0x0042aba4                       ; 0042a963
        ;   XREF to: 0042aba4 (CONDITIONAL_JUMP)  ; LAB_0042aba4
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042a969
        ;   Label: LAB_0042a969
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042a96d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042a971
    ADD EDI,0x4                         ; 0042a975
    ADD ECX,0x4                         ; 0042a978
    INC EAX                             ; 0042a97b
    MOV dword ptr [ESP + 0x34],ECX      ; 0042a97c
    MOV ECX,dword ptr [EDX + 0x28558]   ; 0042a980
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042a986
    CMP EAX,ECX                         ; 0042a98a
    JL 0x0042a926                       ; 0042a98c
        ;   XREF to: 0042a926 (CONDITIONAL_JUMP)  ; LAB_0042a926
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042a98e
        ;   Label: LAB_0042a98e
    CMP ESI,dword ptr [EAX + 0x28558]   ; 0042a992
    JNZ 0x0042a9ae                      ; 0042a998
        ;   XREF to: 0042a9ae (CONDITIONAL_JUMP)  ; LAB_0042a9ae
    MOV dword ptr [EBX + 0xb7dc],0x3f800000 ; 0042a99a
    MOV dword ptr [EBX + 0xb7d8],0x1    ; 0042a9a4
    FILD dword ptr [EBX + 0x2f10]       ; 0042a9ae
        ;   Label: LAB_0042a9ae
    FMUL double ptr [0x00617112]        ; 0042a9b4 | DOUBLE_00617112
    FMUL double ptr [0x0061711a]        ; 0042a9ba | DOUBLE_0061711a
    FADD double ptr [0x00617122]        ; 0042a9c0 | DOUBLE_00617122
    MOV EAX,dword ptr [EBX + 0xb7d4]    ; 0042a9c6
    FSTP float ptr [ESP + 0x1c]         ; 0042a9cc
    PUSH dword ptr [ESP + 0x1c]         ; 0042a9d0
    PUSH EAX                            ; 0042a9d4
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 0042a9d5
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 0042a9da
    TEST EAX,EAX                        ; 0042a9dd
    JZ 0x0042abaa                       ; 0042a9df
        ;   XREF to: 0042abaa (CONDITIONAL_JUMP)  ; LAB_0042abaa
    XOR ECX,ECX                         ; 0042a9e5
        ;   Label: LAB_0042a9e5
    MOV ESI,dword ptr [EBX + 0x2f10]    ; 0042a9e7
    MOV dword ptr [ESP + 0x40],ECX      ; 0042a9ed
    TEST ESI,ESI                        ; 0042a9f1
    JLE 0x0042aae4                      ; 0042a9f3
        ;   XREF to: 0042aae4 (CONDITIONAL_JUMP)  ; LAB_0042aae4
    LEA EAX,[EBX + 0xfd8]               ; 0042a9f9
    MOV dword ptr [ESP + 0x28],EAX      ; 0042a9ff
    LEA EAX,[EBX + 0x33cc]              ; 0042aa03
    LEA ESI,[EBX + 0x2f1c]              ; 0042aa09
    MOV dword ptr [ESP + 0x20],EAX      ; 0042aa0f
    MOV dword ptr [ESP + 0x44],EBX      ; 0042aa13
    LEA EDI,[EBX + 0x33ec]              ; 0042aa17
    MOV EAX,dword ptr [ESI]             ; 0042aa1d
        ;   Label: LAB_0042aa1d
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042aa1f
    JZ 0x0042aab7                       ; 0042aa27
        ;   XREF to: 0042aab7 (CONDITIONAL_JUMP)  ; LAB_0042aab7
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042aa2d
    IMUL EAX,dword ptr [ESI + 0x4],0x30 ; 0042aa37
    ADD EAX,dword ptr [ESP + 0x28]      ; 0042aa3b
    PUSH EAX                            ; 0042aa3f
    LEA EAX,[ESI + 0x8]                 ; 0042aa40
    PUSH EAX                            ; 0042aa43
    LEA EAX,[ESP + 0x14]                ; 0042aa44
    PUSH EAX                            ; 0042aa48
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042aa49
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042aa4e
    PUSH EAX                            ; 0042aa51
    LEA EAX,[ESP + 0x4]                 ; 0042aa52
    PUSH EAX                            ; 0042aa56
    PUSH EBX                            ; 0042aa57
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042aa58
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042aa5d
    IMUL EDX,dword ptr [ESP + 0x40],0x2a4 ; 0042aa60
    MOV ECX,dword ptr [EAX]             ; 0042aa68
    MOV dword ptr [EDI],ECX             ; 0042aa6a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042aa6c
    MOV dword ptr [EDI + 0x4],ECX       ; 0042aa6f
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042aa72
    MOV dword ptr [EDI + 0x8],ECX       ; 0042aa75
    FLD double ptr [0x0061712a]         ; 0042aa78 | DOUBLE_0061712a
    FLD float ptr [ESI + 0x14]          ; 0042aa7e
    FMUL ST1                            ; 0042aa81
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042aa83
    FSTP float ptr [EAX + 0x3524]       ; 0042aa87
    MOV ECX,dword ptr [ESI + 0x14]      ; 0042aa8d
    MOV dword ptr [EAX + 0x3528],ECX    ; 0042aa90
    FLD float ptr [ESI + 0x14]          ; 0042aa96
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042aa99
    FMULP                               ; 0042aa9d
    ADD EDX,ECX                         ; 0042aa9f
    PUSH dword ptr [EBP + 0x18]         ; 0042aaa1
    PUSH EDX                            ; 0042aaa4
    FSTP float ptr [EAX + 0x352c]       ; 0042aaa5
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042aaab
    CALL dword ptr [EAX + 0x4]          ; 0042aab1
    ADD ESP,0x8                         ; 0042aab4
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042aab7
        ;   Label: LAB_0042aab7
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042aabb
    ADD ESI,0x18                        ; 0042aabf
    ADD EDI,0x2a4                       ; 0042aac2
    MOV ECX,dword ptr [EBX + 0x2f10]    ; 0042aac8
    ADD EAX,0x2a4                       ; 0042aace
    INC EDX                             ; 0042aad3
    MOV dword ptr [ESP + 0x44],EAX      ; 0042aad4
    MOV dword ptr [ESP + 0x40],EDX      ; 0042aad8
    CMP EDX,ECX                         ; 0042aadc
    JL 0x0042aa1d                       ; 0042aade
        ;   XREF to: 0042aa1d (CONDITIONAL_JUMP)  ; LAB_0042aa1d
    MOV ESI,dword ptr [EBX + 0x2614]    ; 0042aae4
        ;   Label: LAB_0042aae4
    TEST ESI,ESI                        ; 0042aaea
    JNZ 0x0042ab49                      ; 0042aaec
        ;   XREF to: 0042ab49 (CONDITIONAL_JUMP)  ; LAB_0042ab49
    MOV EAX,dword ptr [EBX + 0x2f10]    ; 0042aaee
    MOV dword ptr [ESP + 0x38],ESI      ; 0042aaf4
    TEST EAX,EAX                        ; 0042aaf8
    JLE 0x0042ab49                      ; 0042aafa
        ;   XREF to: 0042ab49 (CONDITIONAL_JUMP)  ; LAB_0042ab49
    FLD float ptr [EBP + 0x18]          ; 0042aafc
    LEA EAX,[EBX + 0x2f1c]              ; 0042aaff
    FMUL float ptr [0x0065b82c]         ; 0042ab05 | FLOAT_0065b82c
    MOV dword ptr [ESP + 0x48],EAX      ; 0042ab0b
    FSTP float ptr [ESP + 0x2c]         ; 0042ab0f
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042ab13
        ;   Label: LAB_0042ab13
    MOV dword ptr [ESP + 0x4c],EAX      ; 0042ab17
    MOV EAX,dword ptr [EAX]             ; 0042ab1b
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042ab1d
    JNZ 0x0042abdd                      ; 0042ab25
        ;   XREF to: 0042abdd (CONDITIONAL_JUMP)  ; LAB_0042abdd
    MOV ESI,dword ptr [ESP + 0x48]      ; 0042ab2b
        ;   Label: LAB_0042ab2b
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042ab2f
    MOV EDX,dword ptr [EBX + 0x2f10]    ; 0042ab33
    ADD ESI,0x18                        ; 0042ab39
    INC EDI                             ; 0042ab3c
    MOV dword ptr [ESP + 0x48],ESI      ; 0042ab3d
    MOV dword ptr [ESP + 0x38],EDI      ; 0042ab41
    CMP EDI,EDX                         ; 0042ab45
    JL 0x0042ab13                       ; 0042ab47
        ;   XREF to: 0042ab13 (CONDITIONAL_JUMP)  ; LAB_0042ab13
    MOV ESP,EBP                         ; 0042ab49
        ;   Label: LAB_0042ab49
    POP EBP                             ; 0042ab4b
    POP EDI                             ; 0042ab4c
    POP ESI                             ; 0042ab4d
    POP EBX                             ; 0042ab4e
    RET                                 ; 0042ab4f
    FLD float ptr [EBX + 0xb7dc]        ; 0042ab50
        ;   Label: LAB_0042ab50
    FSUB float ptr [EBP + 0x18]         ; 0042ab56
    FST float ptr [EBX + 0xb7dc]        ; 0042ab59
    FLDZ                                ; 0042ab5f
    FCOMPP                              ; 0042ab61
    FNSTSW AX                           ; 0042ab63
    SAHF                                ; 0042ab65
    JBE 0x0042a9e5                      ; 0042ab66
        ;   XREF to: 0042a9e5 (CONDITIONAL_JUMP)  ; LAB_0042a9e5
    MOV EDX,dword ptr [EBX + 0xb7d4]    ; 0042ab6c
    PUSH EDX                            ; 0042ab72
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0042ab73
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0042ab78
    PUSH 0x6170ca                       ; 0042ab7b | = "character-onfire-fallapart.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042ab80
    PUSH EBX                            ; 0042ab86
    CALL dword ptr [EAX + 0x24]         ; 0042ab87
    ADD ESP,0x8                         ; 0042ab8a
    PUSH 0x0                            ; 0042ab8d
    PUSH 0xbf800000                     ; 0042ab8f
    PUSH 0x0                            ; 0042ab94
    PUSH EBX                            ; 0042ab96
    CALL core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 ; 0042ab97
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0042ab9c
    JMP 0x0042a9e5                      ; 0042ab9f
        ;   XREF to: 0042a9e5 (UNCONDITIONAL_JUMP)  ; LAB_0042a9e5
    INC ESI                             ; 0042aba4
        ;   Label: LAB_0042aba4
    JMP 0x0042a969                      ; 0042aba5
        ;   XREF to: 0042a969 (UNCONDITIONAL_JUMP)  ; LAB_0042a969
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0042abaa
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_0042abaa
    PUSH dword ptr [ESP + 0x1c]         ; 0042abaf
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 0042abb3
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 0042abb8
    PUSH 0x6170e9                       ; 0042abbb | = "character-onfire-loop.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042abc0
    PUSH EBX                            ; 0042abc6
    CALL dword ptr [EAX + 0x28]         ; 0042abc7
    ADD ESP,0x8                         ; 0042abca
    MOV dword ptr [EBX + 0xb7d4],EAX    ; 0042abcd
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0042abd3
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x0042a9e5                      ; 0042abd8
        ;   XREF to: 0042a9e5 (UNCONDITIONAL_JUMP)  ; LAB_0042a9e5
    FLD float ptr [ESP + 0x2c]          ; 0042abdd
        ;   Label: LAB_0042abdd
    FMUL float ptr [EBX + 0x2f18]       ; 0042abe1
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042abe7
    FADD float ptr [EAX + 0x14]         ; 0042abeb
    FST float ptr [EAX + 0x14]          ; 0042abee
    FCOMP float ptr [0x0065b830]        ; 0042abf1 | FLOAT_0065b830
    FNSTSW AX                           ; 0042abf7
    SAHF                                ; 0042abf9
    JBE 0x0042ab2b                      ; 0042abfa
        ;   XREF to: 0042ab2b (CONDITIONAL_JUMP)  ; LAB_0042ab2b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042ac00
    MOV EDX,dword ptr [0x0065b830]      ; 0042ac04 | FLOAT_0065b830
    MOV dword ptr [EAX + 0x14],EDX      ; 0042ac0a
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042ac0d
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0042ac11
    XOR ESI,ESI                         ; 0042ac17
    TEST EDI,EDI                        ; 0042ac19
    JLE 0x0042ac68                      ; 0042ac1b
        ;   XREF to: 0042ac68 (CONDITIONAL_JUMP)  ; LAB_0042ac68
    MOV EDI,EAX                         ; 0042ac1d
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042ac1f
        ;   Label: LAB_0042ac1f
    MOV EAX,dword ptr [EDI + 0x2857c]   ; 0042ac23
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042ac29
    CMP EAX,ECX                         ; 0042ac2c
    JNZ 0x0042ac56                      ; 0042ac2e
        ;   XREF to: 0042ac56 (CONDITIONAL_JUMP)  ; LAB_0042ac56
    MOV EDX,dword ptr [EBX + 0x2f10]    ; 0042ac30
    XOR EAX,ECX                         ; 0042ac36
    TEST EDX,EDX                        ; 0042ac38
    JLE 0x0042ac4a                      ; 0042ac3a
        ;   XREF to: 0042ac4a (CONDITIONAL_JUMP)  ; LAB_0042ac4a
    MOV EDX,EBX                         ; 0042ac3c
    CMP ESI,dword ptr [EDX + 0x2f20]    ; 0042ac3e
        ;   Label: LAB_0042ac3e
    JNZ 0x0042acc0                      ; 0042ac44
        ;   XREF to: 0042acc0 (CONDITIONAL_JUMP)  ; LAB_0042acc0
    CMP EAX,dword ptr [EBX + 0x2f10]    ; 0042ac4a
        ;   Label: LAB_0042ac4a
    JZ 0x0042acd7                       ; 0042ac50
        ;   XREF to: 0042acd7 (CONDITIONAL_JUMP)  ; LAB_0042acd7
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042ac56
        ;   Label: LAB_0042ac56
    INC ESI                             ; 0042ac5a
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0042ac5b
    ADD EDI,0x24                        ; 0042ac61
    CMP ESI,EDX                         ; 0042ac64
    JL 0x0042ac1f                       ; 0042ac66
        ;   XREF to: 0042ac1f (CONDITIONAL_JUMP)  ; LAB_0042ac1f
    MOV ECX,dword ptr [EBX + 0x2f10]    ; 0042ac68
        ;   Label: LAB_0042ac68
    XOR EAX,EAX                         ; 0042ac6e
    TEST ECX,ECX                        ; 0042ac70
    JLE 0x0042ac90                      ; 0042ac72
        ;   XREF to: 0042ac90 (CONDITIONAL_JUMP)  ; LAB_0042ac90
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042ac74
    IMUL EDI,dword ptr [EDX + 0x4],0x24 ; 0042ac78
    ADD EDI,dword ptr [ESP + 0x50]      ; 0042ac7c
    MOV EDX,EBX                         ; 0042ac80
    MOV ECX,dword ptr [EDI + 0x2857c]   ; 0042ac82
        ;   Label: LAB_0042ac82
    CMP ECX,dword ptr [EDX + 0x2f20]    ; 0042ac88
    JNZ 0x0042aceb                      ; 0042ac8e
        ;   XREF to: 0042aceb (CONDITIONAL_JUMP)  ; LAB_0042aceb
    CMP EAX,dword ptr [EBX + 0x2f10]    ; 0042ac90
        ;   Label: LAB_0042ac90
    JNZ 0x0042ab2b                      ; 0042ac96
        ;   XREF to: 0042ab2b (CONDITIONAL_JUMP)  ; LAB_0042ab2b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042ac9c
    IMUL EAX,dword ptr [EAX + 0x4],0x24 ; 0042aca0
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042aca4
    ADD EAX,EDX                         ; 0042aca8
    MOV ECX,dword ptr [EAX + 0x2857c]   ; 0042acaa
    PUSH ECX                            ; 0042acb0
    PUSH EDX                            ; 0042acb1
    PUSH EBX                            ; 0042acb2
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520 ; 0042acb3
        ;   XREF to: 0042a520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042acb8
    JMP 0x0042ab2b                      ; 0042acbb
        ;   XREF to: 0042ab2b (UNCONDITIONAL_JUMP)  ; LAB_0042ab2b
    INC EAX                             ; 0042acc0
        ;   Label: LAB_0042acc0
    MOV ECX,dword ptr [EBX + 0x2f10]    ; 0042acc1
    ADD EDX,0x18                        ; 0042acc7
    CMP EAX,ECX                         ; 0042acca
    JL 0x0042ac3e                       ; 0042accc
        ;   XREF to: 0042ac3e (CONDITIONAL_JUMP)  ; LAB_0042ac3e
    JMP 0x0042ac4a                      ; 0042acd2
        ;   XREF to: 0042ac4a (UNCONDITIONAL_JUMP)  ; LAB_0042ac4a
    PUSH ESI                            ; 0042acd7
        ;   Label: LAB_0042acd7
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042acd8
    PUSH ECX                            ; 0042acdc
    PUSH EBX                            ; 0042acdd
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520 ; 0042acde
        ;   XREF to: 0042a520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042ace3
    JMP 0x0042ac56                      ; 0042ace6
        ;   XREF to: 0042ac56 (UNCONDITIONAL_JUMP)  ; LAB_0042ac56
    INC EAX                             ; 0042aceb
        ;   Label: LAB_0042aceb
    MOV ECX,dword ptr [EBX + 0x2f10]    ; 0042acec
    ADD EDX,0x18                        ; 0042acf2
    CMP EAX,ECX                         ; 0042acf5
    JL 0x0042ac82                       ; 0042acf7
        ;   XREF to: 0042ac82 (CONDITIONAL_JUMP)  ; LAB_0042ac82
    JMP 0x0042ac90                      ; 0042acf9
        ;   XREF to: 0042ac90 (UNCONDITIONAL_JUMP)  ; LAB_0042ac90

