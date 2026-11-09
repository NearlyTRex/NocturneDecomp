; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_FUN_00539810(CPlatform *this_ptr,float delta_time)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x3b4]:4  local_3b4
; undefined        Stack[-0x3a4]:1  local_3a4
; undefined1       Stack[-0x3a3]:1  local_3a3
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   core_minecar.cpp_CMineCar_process_FUN_00510e20 at 00510e2a
;
; Referenced Globals:
;   undefined1* switchdataD_005397fc = 00539861
;   undefined4 DAT_005ed423
;   undefined4 DAT_005ed42b
;   undefined4 DAT_005ed433
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;   undefined4 g_CDemonSetInstance.field1372332_0x14f0ac
;   undefined4 g_CDemonSetInstance.field1420984_0x15aeb8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040cd60
;   core_box.cpp_FUN_00421af0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0053ab00
;   core_platfrm.cpp_FUN_0053a340
;   core_platfrm.cpp_FUN_0053aef0
;   core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;   core_setdir.cpp_FUN_0055b1e0
;   core_setdir.cpp_FUN_0055b200
;   core_sound.cpp_FUN_0057d9c0
;   core_sound.cpp_FUN_0057d9d0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539810
        ;   Label: core_platfrm.cpp_FUN_00539810
    PUSH ESI                            ; 00539811
    PUSH EDI                            ; 00539812
    PUSH EBP                            ; 00539813
    MOV EBP,ESP                         ; 00539814
    SUB ESP,0x39c                       ; 00539816
    AND ESP,0xfffffff8                  ; 0053981c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053981f
    CMP dword ptr [EAX + 0x4c0],0x2     ; 00539822
    JGE 0x0053a32e                      ; 00539829
        ;   XREF to: 0053a32e (CONDITIONAL_JUMP)  ; LAB_0053a32e
    MOV EAX,dword ptr [EAX + 0x2dc]     ; 0053982f
    XOR EBX,EBX                         ; 00539835
    MOV dword ptr [ESP + 0x378],EAX     ; 00539837
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053983e
    MOV dword ptr [ESP + 0x380],EBX     ; 00539841
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00539848
    MOV dword ptr [ESP + 0x37c],EBX     ; 0053984e
    CMP EAX,0x4                         ; 00539855
    JA 0x005398af                       ; 00539858
        ;   XREF to: 005398af (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5397fc]  ; 0053985a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539861
        ;   Label: caseD_0
    ADD EAX,0x3b8                       ; 00539864
    PUSH EAX                            ; 00539869
    MOV EAX,[0x0061b4d0]                ; 0053986a | DAT_0061b4d0
    PUSH EAX                            ; 0053986f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00539870
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00539875
    TEST EAX,EAX                        ; 00539878
    JZ 0x005398a2                       ; 0053987a
        ;   XREF to: 005398a2 (CONDITIONAL_JUMP)  ; LAB_005398a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053987c
    FLD float ptr [EAX + 0x2e8]         ; 0053987f
    FLD1                                ; 00539885
    FDIVRP                              ; 00539887
    SUB ESP,0x4                         ; 00539889
    FSTP float ptr [ESP]                ; 0053988c
    PUSH 0x3f800000                     ; 0053988f
    PUSH EAX                            ; 00539894
    MOV EBX,0x1                         ; 00539895
    CALL core_platfrm.cpp_FUN_0053a340  ; 0053989a
        ;   XREF to: 0053a340 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_0053a340(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 0053989f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005398a2
        ;   Label: LAB_005398a2
    MOV dword ptr [EAX + 0x2dc],0x0     ; 005398a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005398af
        ;   Label: default
    CMP dword ptr [EAX + 0x4c8],0x0     ; 005398b2
    JZ 0x005399a9                       ; 005398b9
        ;   XREF to: 005399a9 (CONDITIONAL_JUMP)  ; LAB_005399a9
    TEST EBX,EBX                        ; 005398bf
    JZ 0x00539990                       ; 005398c1
        ;   XREF to: 00539990 (CONDITIONAL_JUMP)  ; LAB_00539990
    LEA EDI,[ESP + 0xc]                 ; 005398c7
    LEA ESI,[EAX + 0x4cc]               ; 005398cb
    LEA EBX,[ESP + 0xc]                 ; 005398d1
    PUSH EDI                            ; 005398d5
    MOV AL,byte ptr [ESI]               ; 005398d6
        ;   Label: LAB_005398d6
    MOV byte ptr [EDI],AL               ; 005398d8
    CMP AL,0x0                          ; 005398da
    JZ 0x005398ee                       ; 005398dc
        ;   XREF to: 005398ee (CONDITIONAL_JUMP)  ; LAB_005398ee
    MOV AL,byte ptr [ESI + 0x1]         ; 005398de
    ADD ESI,0x2                         ; 005398e1
    MOV byte ptr [EDI + 0x1],AL         ; 005398e4
    ADD EDI,0x2                         ; 005398e7
    CMP AL,0x0                          ; 005398ea
    JNZ 0x005398d6                      ; 005398ec
        ;   XREF to: 005398d6 (CONDITIONAL_JUMP)  ; LAB_005398d6
    POP EDI                             ; 005398ee
        ;   Label: LAB_005398ee
    MOV CL,byte ptr [ESP + 0xc]         ; 005398ef
    LEA ESI,[ESP + 0xc]                 ; 005398f3
    TEST CL,CL                          ; 005398f7
    JZ 0x00539950                       ; 005398f9
        ;   XREF to: 00539950 (CONDITIONAL_JUMP)  ; LAB_00539950
    CMP byte ptr [EBX],0x3b             ; 005398fb
        ;   Label: LAB_005398fb
    JNZ 0x00539d8b                      ; 005398fe
        ;   XREF to: 00539d8b (CONDITIONAL_JUMP)  ; LAB_00539d8b
    PUSH ESI                            ; 00539904
    MOV EDI,dword ptr [0x00622c18]      ; 00539905 | g_CDemonSetPtr
    PUSH EDI                            ; 0053990b | g_CDemonSetInstance
    MOV byte ptr [EBX],0x0              ; 0053990c
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0 ; 0053990f
        ;   XREF to: 0054fba0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 00539914
    CMP EAX,-0x1                        ; 00539917
    JZ 0x00539d7a                       ; 0053991a
        ;   XREF to: 00539d7a (CONDITIONAL_JUMP)  ; LAB_00539d7a
    MOV EDX,dword ptr [0x00622c18]      ; 00539920 | g_CDemonSetPtr
    MOV ECX,dword ptr [EDX + 0x15aeb8]  ; 00539926 | g_CDemonSetInstance.field1420984_0x15aeb8
    CMP EAX,ECX                         ; 0053992c
    JZ 0x00539d7a                       ; 0053992e
        ;   XREF to: 00539d7a (CONDITIONAL_JUMP)  ; LAB_00539d7a
    PUSH 0x4479c000                     ; 00539934
    PUSH EAX                            ; 00539939
    PUSH EDX                            ; 0053993a | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0055b1e0   ; 0053993b
        ;   XREF to: 0055b1e0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_0055b1e0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 00539940
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539943
    MOV dword ptr [EAX + 0x724],0x0     ; 00539946
    PUSH ESI                            ; 00539950
        ;   Label: LAB_00539950
    MOV EAX,[0x00622c18]                ; 00539951 | g_CDemonSetPtr
    PUSH EAX                            ; 00539956 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0 ; 00539957
        ;   XREF to: 0054fba0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 0053995c
    CMP EAX,-0x1                        ; 0053995f
    JZ 0x00539990                       ; 00539962
        ;   XREF to: 00539990 (CONDITIONAL_JUMP)  ; LAB_00539990
    MOV EDX,dword ptr [0x00622c18]      ; 00539964 | g_CDemonSetPtr
    MOV ECX,dword ptr [EDX + 0x15aeb8]  ; 0053996a | g_CDemonSetInstance.field1420984_0x15aeb8
    CMP EAX,ECX                         ; 00539970
    JZ 0x00539990                       ; 00539972
        ;   XREF to: 00539990 (CONDITIONAL_JUMP)  ; LAB_00539990
    PUSH 0x4479c000                     ; 00539974
    PUSH EAX                            ; 00539979
    PUSH EDX                            ; 0053997a | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0055b1e0   ; 0053997b
        ;   XREF to: 0055b1e0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_0055b1e0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 00539980
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539983
    MOV dword ptr [EAX + 0x724],0x0     ; 00539986
    CMP dword ptr [ESP + 0x380],0x0     ; 00539990
        ;   Label: LAB_00539990
    JZ 0x005399a9                       ; 00539998
        ;   XREF to: 005399a9 (CONDITIONAL_JUMP)  ; LAB_005399a9
    MOV ECX,dword ptr [0x00622c18]      ; 0053999a | g_CDemonSetPtr
    PUSH ECX                            ; 005399a0 | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_0055b200   ; 005399a1
        ;   XREF to: 0055b200 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_FUN_0055b200(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005399a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005399a9
        ;   Label: LAB_005399a9
    FLD float ptr [EAX + 0x2dc]         ; 005399ac
    FCOMP float ptr [ESP + 0x378]       ; 005399b2
    FNSTSW AX                           ; 005399b9
    SAHF                                ; 005399bb
    JZ 0x0053a32e                       ; 005399bc
        ;   XREF to: 0053a32e (CONDITIONAL_JUMP)  ; LAB_0053a32e
    CMP dword ptr [ESP + 0x37c],0x0     ; 005399c2
    JZ 0x00539dc1                       ; 005399ca
        ;   XREF to: 00539dc1 (CONDITIONAL_JUMP)  ; LAB_00539dc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005399d0
    CMP byte ptr [EAX + 0x4a8],0x0      ; 005399d3
    JZ 0x00539dc1                       ; 005399da
        ;   XREF to: 00539dc1 (CONDITIONAL_JUMP)  ; LAB_00539dc1
    MOV EDX,dword ptr [EAX + 0x4bc]     ; 005399e0
    PUSH EDX                            ; 005399e6
    MOV ECX,dword ptr [0x006236b8]      ; 005399e7 | DAT_006236b8
    PUSH ECX                            ; 005399ed
    CALL core_sound.cpp_FUN_0057d9c0    ; 005399ee
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005399f3
    TEST EAX,EAX                        ; 005399f6
    JZ 0x00539d9a                       ; 005399f8
        ;   XREF to: 00539d9a (CONDITIONAL_JUMP)  ; LAB_00539d9a
    MOV EBX,dword ptr [EBP + 0x14]      ; 005399fe
        ;   Label: LAB_005399fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539a01
    ADD EBX,0x30                        ; 00539a04
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539a07
    PUSH EBX                            ; 00539a0a
    ADD ESI,0x20                        ; 00539a0b
    MOV EAX,dword ptr [EAX + 0x24]      ; 00539a0e
    PUSH ESI                            ; 00539a11
    MOV dword ptr [ESP + 0x37c],EAX     ; 00539a12
    LEA EAX,[ESP + 0x144]               ; 00539a19
    PUSH EAX                            ; 00539a20
    CALL core_xform.cpp_FUN_005b5620    ; 00539a21
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00539a26
    MOV EDI,dword ptr [EBP + 0x14]      ; 00539a29
    PUSH EDI                            ; 00539a2c
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660 ; 00539a2d
        ;   XREF to: 00539660 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00539a32
    PUSH EBX                            ; 00539a35
    PUSH ESI                            ; 00539a36
    LEA EAX,[ESP + 0x114]               ; 00539a37
    PUSH EAX                            ; 00539a3e
    CALL core_xform.cpp_FUN_005b5760    ; 00539a3f
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00539a44
    MOV EAX,dword ptr [EDI + 0x154]     ; 00539a47
    PUSH EDI                            ; 00539a4d
    LEA ESI,[ESP + 0x288]               ; 00539a4e
    CALL dword ptr [EAX + 0x1c]         ; 00539a55
    MOV ECX,0x6                         ; 00539a58
    LEA EDI,[ESP + 0x2a0]               ; 00539a5d
    LEA ESI,[ESP + 0x288]               ; 00539a64
    ADD ESP,0x4                         ; 00539a6b
    MOVSD.REP ES:EDI,ESI                ; 00539a6e
    XOR ECX,ECX                         ; 00539a70
    MOV dword ptr [ESP + 0x390],ECX     ; 00539a72
    MOV dword ptr [ESP + 0x388],ECX     ; 00539a79
    MOV EAX,[0x00622c18]                ; 00539a80 | g_CDemonSetPtr
        ;   Label: LAB_00539a80
    MOV EDX,dword ptr [ESP + 0x390]     ; 00539a85
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 00539a8c | g_CDemonSetInstance.field1372328_0x14f0a8
    JL 0x00539ddf                       ; 00539a92
        ;   XREF to: 00539ddf (CONDITIONAL_JUMP)  ; LAB_00539ddf
    XOR EDI,EDI                         ; 00539a98
    MOV dword ptr [ESP + 0x38c],EDI     ; 00539a9a
    MOV dword ptr [ESP + 0x384],EDI     ; 00539aa1
        ;   Label: LAB_00539aa1
    MOV EAX,[0x00622c18]                ; 00539aa8 | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x38c]     ; 00539aad
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 00539ab4 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0053a322                      ; 00539aba
        ;   XREF to: 0053a322 (CONDITIONAL_JUMP)  ; LAB_0053a322
    ADD EAX,dword ptr [ESP + 0x384]     ; 00539ac0
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00539ac7 | g_CDemonSetInstance.field1364328_0x14d168
    MOV ECX,dword ptr [EBP + 0x14]      ; 00539acd
    CMP ECX,dword ptr [EBX + 0xdc]      ; 00539ad0
    JZ 0x0053a171                       ; 00539ad6
        ;   XREF to: 0053a171 (CONDITIONAL_JUMP)  ; LAB_0053a171
    MOV EAX,dword ptr [ESP + 0x38c]     ; 00539adc
        ;   Label: LAB_00539adc
    MOV EDI,dword ptr [ESP + 0x384]     ; 00539ae3
    INC EAX                             ; 00539aea
    ADD EDI,0x4                         ; 00539aeb
    MOV dword ptr [ESP + 0x38c],EAX     ; 00539aee
    JMP 0x00539aa1                      ; 00539af5
        ;   XREF to: 00539aa1 (UNCONDITIONAL_JUMP)  ; LAB_00539aa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539af7
        ;   Label: caseD_1
    ADD EAX,0x354                       ; 00539afa
    PUSH EAX                            ; 00539aff
    MOV ESI,dword ptr [0x0061b4d0]      ; 00539b00 | DAT_0061b4d0
    PUSH ESI                            ; 00539b06
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00539b07
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00539b0c
    TEST EAX,EAX                        ; 00539b0f
    JZ 0x00539b36                       ; 00539b11
        ;   XREF to: 00539b36 (CONDITIONAL_JUMP)  ; LAB_00539b36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539b13
    FLD float ptr [EAX + 0x2ec]         ; 00539b16
    FLD1                                ; 00539b1c
    FDIVRP                              ; 00539b1e
    SUB ESP,0x4                         ; 00539b20
    FSTP float ptr [ESP]                ; 00539b23
    PUSH 0x0                            ; 00539b26
    PUSH EAX                            ; 00539b28
    MOV EBX,0x1                         ; 00539b29
    CALL core_platfrm.cpp_FUN_0053a340  ; 00539b2e
        ;   XREF to: 0053a340 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_0053a340(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00539b33
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539b36
        ;   Label: LAB_00539b36
    MOV dword ptr [EAX + 0x2dc],0x3f800000 ; 00539b39
    JMP 0x005398af                      ; 00539b43
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539b48
        ;   Label: caseD_2
    ADD EAX,0x3b8                       ; 00539b4b
    PUSH EAX                            ; 00539b50
    MOV EDI,dword ptr [0x0061b4d0]      ; 00539b51 | DAT_0061b4d0
    PUSH EDI                            ; 00539b57
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00539b58
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00539b5d
    TEST EAX,EAX                        ; 00539b60
    JZ 0x00539b8a                       ; 00539b62
        ;   XREF to: 00539b8a (CONDITIONAL_JUMP)  ; LAB_00539b8a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539b64
    FLD float ptr [EAX + 0x2e8]         ; 00539b67
    FLD1                                ; 00539b6d
    FDIVRP                              ; 00539b6f
    SUB ESP,0x4                         ; 00539b71
    FSTP float ptr [ESP]                ; 00539b74
    PUSH 0x3f800000                     ; 00539b77
    PUSH EAX                            ; 00539b7c
    CALL core_platfrm.cpp_FUN_0053a340  ; 00539b7d
        ;   XREF to: 0053a340 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_0053a340(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00539b82
    JMP 0x005398af                      ; 00539b85
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539b8a
        ;   Label: LAB_00539b8a
    ADD EAX,0x354                       ; 00539b8d
    PUSH EAX                            ; 00539b92
    MOV EAX,[0x0061b4d0]                ; 00539b93 | DAT_0061b4d0
    PUSH EAX                            ; 00539b98
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00539b99
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00539b9e
    TEST EAX,EAX                        ; 00539ba1
    JZ 0x005398af                       ; 00539ba3
        ;   XREF to: 005398af (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539ba9
    FLD float ptr [EAX + 0x2ec]         ; 00539bac
    FLD1                                ; 00539bb2
    FDIVRP                              ; 00539bb4
    SUB ESP,0x4                         ; 00539bb6
    FSTP float ptr [ESP]                ; 00539bb9
    PUSH 0x0                            ; 00539bbc
    PUSH EAX                            ; 00539bbe
    CALL core_platfrm.cpp_FUN_0053a340  ; 00539bbf
        ;   XREF to: 0053a340 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_0053a340(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 00539bc4
    JMP 0x005398af                      ; 00539bc7
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539bcc
        ;   Label: caseD_3
    ADD EAX,0x41c                       ; 00539bcf
    PUSH EAX                            ; 00539bd4
    MOV EDI,dword ptr [0x0061b4d0]      ; 00539bd5 | DAT_0061b4d0
    PUSH EDI                            ; 00539bdb
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00539bdc
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00539be1
    TEST EAX,EAX                        ; 00539be4
    JZ 0x00539c1e                       ; 00539be6
        ;   XREF to: 00539c1e (CONDITIONAL_JUMP)  ; LAB_00539c1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539be8
    MOV DH,byte ptr [EAX + 0x494]       ; 00539beb
    MOV dword ptr [EAX + 0x2d4],0x2     ; 00539bf1
    TEST DH,DH                          ; 00539bfb
    JZ 0x005398af                       ; 00539bfd
        ;   XREF to: 005398af (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x494                       ; 00539c03
    PUSH EAX                            ; 00539c08
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539c09
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 00539c0c
    PUSH ESI                            ; 00539c12
    CALL dword ptr [EDX + 0x2c]         ; 00539c13
    ADD ESP,0x8                         ; 00539c16
    JMP 0x005398af                      ; 00539c19
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539c1e
        ;   Label: LAB_00539c1e
    FLD float ptr [EBP + 0x18]          ; 00539c21
    FMUL float ptr [EAX + 0x2e4]        ; 00539c24
    FADD float ptr [EAX + 0x2dc]        ; 00539c2a
    FST float ptr [EAX + 0x2dc]         ; 00539c30
    FCOMP float ptr [EAX + 0x2e0]       ; 00539c36
    FNSTSW AX                           ; 00539c3c
    SAHF                                ; 00539c3e
    JBE 0x00539ca2                      ; 00539c3f
        ;   XREF to: 00539ca2 (CONDITIONAL_JUMP)  ; LAB_00539ca2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539c41
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00539c44
    MOV dword ptr [EAX + 0x2dc],EDX     ; 00539c4a
    FLD float ptr [EAX + 0x2dc]         ; 00539c50
    FLD1                                ; 00539c56
    FCOMPP                              ; 00539c58
    FNSTSW AX                           ; 00539c5a
    SAHF                                ; 00539c5c
    JA 0x00539c90                       ; 00539c5d
        ;   XREF to: 00539c90 (CONDITIONAL_JUMP)  ; LAB_00539c90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539c5f
    MOV EDX,dword ptr [EAX + 0x4c0]     ; 00539c62
    MOV dword ptr [EAX + 0x2d4],0x1     ; 00539c68
    TEST EDX,EDX                        ; 00539c72
    JZ 0x00539c80                       ; 00539c74
        ;   XREF to: 00539c80 (CONDITIONAL_JUMP)  ; LAB_00539c80
    MOV dword ptr [EAX + 0x4c0],0x2     ; 00539c76
    MOV dword ptr [ESP + 0x380],0x1     ; 00539c80
        ;   Label: LAB_00539c80
    JMP 0x005398af                      ; 00539c8b
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539c90
        ;   Label: LAB_00539c90
    MOV dword ptr [EAX + 0x2d4],0x2     ; 00539c93
    JMP 0x005398af                      ; 00539c9d
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x37c],0x1     ; 00539ca2
        ;   Label: LAB_00539ca2
    JMP 0x005398af                      ; 00539cad
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539cb2
        ;   Label: caseD_4
    ADD EAX,0x41c                       ; 00539cb5
    PUSH EAX                            ; 00539cba
    MOV EDI,dword ptr [0x0061b4d0]      ; 00539cbb | DAT_0061b4d0
    PUSH EDI                            ; 00539cc1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00539cc2
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00539cc7
    TEST EAX,EAX                        ; 00539cca
    JZ 0x00539d04                       ; 00539ccc
        ;   XREF to: 00539d04 (CONDITIONAL_JUMP)  ; LAB_00539d04
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539cce
    MOV DL,byte ptr [EAX + 0x494]       ; 00539cd1
    MOV dword ptr [EAX + 0x2d4],0x2     ; 00539cd7
    TEST DL,DL                          ; 00539ce1
    JZ 0x005398af                       ; 00539ce3
        ;   XREF to: 005398af (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x494                       ; 00539ce9
    PUSH EAX                            ; 00539cee
    MOV ESI,dword ptr [EBP + 0x14]      ; 00539cef
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 00539cf2
    PUSH ESI                            ; 00539cf8
    CALL dword ptr [EDX + 0x2c]         ; 00539cf9
    ADD ESP,0x8                         ; 00539cfc
    JMP 0x005398af                      ; 00539cff
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539d04
        ;   Label: LAB_00539d04
    FLD float ptr [EBP + 0x18]          ; 00539d07
    FMUL float ptr [EAX + 0x2e4]        ; 00539d0a
    FSUBR float ptr [EAX + 0x2dc]       ; 00539d10
    FST float ptr [EAX + 0x2dc]         ; 00539d16
    FCOMP float ptr [EAX + 0x2e0]       ; 00539d1c
    FNSTSW AX                           ; 00539d22
    SAHF                                ; 00539d24
    JNC 0x00539ca2                      ; 00539d25
        ;   XREF to: 00539ca2 (CONDITIONAL_JUMP)  ; LAB_00539ca2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539d2b
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00539d2e
    MOV dword ptr [EAX + 0x2dc],EDX     ; 00539d34
    FLD float ptr [EAX + 0x2dc]         ; 00539d3a
    FLDZ                                ; 00539d40
    FCOMPP                              ; 00539d42
    FNSTSW AX                           ; 00539d44
    SAHF                                ; 00539d46
    JC 0x00539c90                       ; 00539d47
        ;   XREF to: 00539c90 (CONDITIONAL_JUMP)  ; LAB_00539c90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539d4d
    MOV EDX,dword ptr [EAX + 0x4c0]     ; 00539d50
    MOV dword ptr [EAX + 0x2d4],EBX     ; 00539d56
    TEST EDX,EDX                        ; 00539d5c
    JZ 0x00539d6a                       ; 00539d5e
        ;   XREF to: 00539d6a (CONDITIONAL_JUMP)  ; LAB_00539d6a
    MOV dword ptr [EAX + 0x4c0],0x2     ; 00539d60
    MOV dword ptr [ESP + 0x380],0x1     ; 00539d6a
        ;   Label: LAB_00539d6a
    JMP 0x005398af                      ; 00539d75
        ;   XREF to: 005398af (UNCONDITIONAL_JUMP)  ; default
    INC EBX                             ; 00539d7a
        ;   Label: LAB_00539d7a
    MOV ESI,EBX                         ; 00539d7b
    CMP byte ptr [EBX],0x0              ; 00539d7d
    JNZ 0x005398fb                      ; 00539d80
        ;   XREF to: 005398fb (CONDITIONAL_JUMP)  ; LAB_005398fb
    JMP 0x00539950                      ; 00539d86
        ;   XREF to: 00539950 (UNCONDITIONAL_JUMP)  ; LAB_00539950
    INC EBX                             ; 00539d8b
        ;   Label: LAB_00539d8b
    CMP byte ptr [EBX],0x0              ; 00539d8c
    JNZ 0x005398fb                      ; 00539d8f
        ;   XREF to: 005398fb (CONDITIONAL_JUMP)  ; LAB_005398fb
    JMP 0x00539950                      ; 00539d95
        ;   XREF to: 00539950 (UNCONDITIONAL_JUMP)  ; LAB_00539950
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539d9a
        ;   Label: LAB_00539d9a
    ADD EAX,0x4a8                       ; 00539d9d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00539da2
    PUSH EAX                            ; 00539da5
    MOV EBX,dword ptr [EBP + 0x14]      ; 00539da6
    MOV EDX,dword ptr [EDX + 0x154]     ; 00539da9
    PUSH EBX                            ; 00539daf
    CALL dword ptr [EDX + 0x30]         ; 00539db0
    ADD ESP,0x8                         ; 00539db3
    MOV dword ptr [EBX + 0x4bc],EAX     ; 00539db6
    JMP 0x005399fe                      ; 00539dbc
        ;   XREF to: 005399fe (UNCONDITIONAL_JUMP)  ; LAB_005399fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539dc1
        ;   Label: LAB_00539dc1
    MOV ESI,dword ptr [EAX + 0x4bc]     ; 00539dc4
    PUSH ESI                            ; 00539dca
    MOV EDI,dword ptr [0x006236b8]      ; 00539dcb | DAT_006236b8
    PUSH EDI                            ; 00539dd1
    CALL core_sound.cpp_FUN_0057d9d0    ; 00539dd2
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00539dd7
    JMP 0x005399fe                      ; 00539dda
        ;   XREF to: 005399fe (UNCONDITIONAL_JUMP)  ; LAB_005399fe
    ADD EAX,dword ptr [ESP + 0x388]     ; 00539ddf
        ;   Label: LAB_00539ddf
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00539de6 | g_CDemonSetInstance.field1372332_0x14f0ac
    PUSH EBX                            ; 00539dec
    MOV EAX,dword ptr [EBX + 0x154]     ; 00539ded
    CALL dword ptr [EAX + 0x10c]        ; 00539df3
    ADD ESP,0x4                         ; 00539df9
    TEST EAX,EAX                        ; 00539dfc
    JG 0x0053a14c                       ; 00539dfe
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    PUSH EBX                            ; 00539e04
    MOV EAX,dword ptr [EBX + 0x154]     ; 00539e05
    CALL dword ptr [EAX + 0x70]         ; 00539e0b
    ADD ESP,0x4                         ; 00539e0e
    TEST EAX,EAX                        ; 00539e11
    JNZ 0x0053a14c                      ; 00539e13
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00539e19
    CMP dword ptr [EAX + 0x510],0x0     ; 00539e1c
    JZ 0x0053a113                       ; 00539e23
        ;   XREF to: 0053a113 (CONDITIONAL_JUMP)  ; LAB_0053a113
    LEA EAX,[EBX + 0x20]                ; 00539e29
    PUSH EAX                            ; 00539e2c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00539e2d
    PUSH EDI                            ; 00539e30
    LEA ESI,[ESP + 0x31c]               ; 00539e31
    CALL core_actor.cpp_FUN_00408bb0    ; 00539e38
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA EDI,[ESP + 0x2ec]               ; 00539e3d
    LEA ESI,[ESP + 0x31c]               ; 00539e44
    ADD ESP,0x8                         ; 00539e4b
    MOVSD ES:EDI,ESI                    ; 00539e4e
    MOVSD ES:EDI,ESI                    ; 00539e4f
    MOVSD ES:EDI,ESI                    ; 00539e50
    FLD float ptr [ESP + 0x2e8]         ; 00539e51
    FCOMP float ptr [ESP + 0x2ac]       ; 00539e58
    FNSTSW AX                           ; 00539e5f
    SAHF                                ; 00539e61
    JA 0x0053a14c                       ; 00539e62
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x2a0]         ; 00539e68
    FADD double ptr [0x005ed423]        ; 00539e6f | DAT_005ed423
    FLD float ptr [ESP + 0x2e8]         ; 00539e75
    FCOMPP                              ; 00539e7c
    FNSTSW AX                           ; 00539e7e
    SAHF                                ; 00539e80
    JC 0x0053a14c                       ; 00539e81
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    LEA EAX,[ESP + 0x2e4]               ; 00539e87
    PUSH EAX                            ; 00539e8e
    LEA EAX,[ESP + 0x2a0]               ; 00539e8f
    PUSH EAX                            ; 00539e96
    LEA ESI,[ESP + 0x2f8]               ; 00539e97
    LEA EDI,[ESP + 0x304]               ; 00539e9e
    CALL core_box.cpp_FUN_00421af0      ; 00539ea5
        ;   XREF to: 00421af0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00421af0()
    ADD ESP,0x8                         ; 00539eaa
    LEA ESI,[ESP + 0x2f0]               ; 00539ead
    FLD float ptr [ESP + 0x2e4]         ; 00539eb4
    FLD float ptr [ESP + 0x2e8]         ; 00539ebb
    MOVSD ES:EDI,ESI                    ; 00539ec2
    MOVSD ES:EDI,ESI                    ; 00539ec3
    MOVSD ES:EDI,ESI                    ; 00539ec4
    FLD float ptr [ESP + 0x2ec]         ; 00539ec5
    LEA EDI,[ESP + 0x35c]               ; 00539ecc
    LEA ESI,[ESP + 0x2c0]               ; 00539ed3
    FXCH ST2                            ; 00539eda
    FSUB float ptr [ESP + 0x2fc]        ; 00539edc
    FXCH                                ; 00539ee3
    FSUB float ptr [ESP + 0x300]        ; 00539ee5
    FXCH ST2                            ; 00539eec
    FSUB float ptr [ESP + 0x304]        ; 00539eee
    FXCH                                ; 00539ef5
    FSTP float ptr [ESP + 0x2c0]        ; 00539ef7
    FXCH                                ; 00539efe
    FSTP float ptr [ESP + 0x2c4]        ; 00539f00
    FSTP float ptr [ESP + 0x2c8]        ; 00539f07
    MOVSD ES:EDI,ESI                    ; 00539f0e
    MOVSD ES:EDI,ESI                    ; 00539f0f
    MOVSD ES:EDI,ESI                    ; 00539f10
    FLD float ptr [ESP + 0x35c]         ; 00539f11
    FABS                                ; 00539f18
    FCOMP double ptr [0x005ed42b]       ; 00539f1a | DAT_005ed42b
    FNSTSW AX                           ; 00539f20
    SAHF                                ; 00539f22
    JA 0x0053a14c                       ; 00539f23
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x364]         ; 00539f29
    FABS                                ; 00539f30
    FCOMP double ptr [0x005ed42b]       ; 00539f32 | DAT_005ed42b
    FNSTSW AX                           ; 00539f38
    SAHF                                ; 00539f3a
    JA 0x0053a14c                       ; 00539f3b
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    XOR EAX,EAX                         ; 00539f41
    MOV dword ptr [ESP + 0x360],EAX     ; 00539f43
    LEA EAX,[ESP + 0x25c]               ; 00539f4a
    PUSH EAX                            ; 00539f51
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00539f52
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00539f57
    LEA EAX,[ESP + 0x25c]               ; 00539f5a
    XOR EDX,EDX                         ; 00539f61
    PUSH EAX                            ; 00539f63
    MOV dword ptr [ESP + 0x260],EDX     ; 00539f64
    PUSH EBX                            ; 00539f6b
    MOV EDX,dword ptr [EBX + 0x154]     ; 00539f6c
    CALL dword ptr [EDX + 0x3c]         ; 00539f72
    ADD ESP,0x8                         ; 00539f75
    CMP EAX,0x2                         ; 00539f78
    JNZ 0x0053a14c                      ; 00539f7b
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x2e8]         ; 00539f81
    FADD float ptr [ESP + 0x270]        ; 00539f88
    FCOMP float ptr [ESP + 0x2ac]       ; 00539f8f
    FNSTSW AX                           ; 00539f96
    SAHF                                ; 00539f98
    JA 0x0053a14c                       ; 00539f99
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x2e8]         ; 00539f9f
    FADD float ptr [ESP + 0x274]        ; 00539fa6
    FCOMP float ptr [ESP + 0x2a0]       ; 00539fad
    FNSTSW AX                           ; 00539fb4
    SAHF                                ; 00539fb6
    JC 0x0053a14c                       ; 00539fb7
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x364]         ; 00539fbd
    FMUL ST0                            ; 00539fc4
    FLD float ptr [ESP + 0x35c]         ; 00539fc6
    FMUL ST0                            ; 00539fcd
    FLD float ptr [ESP + 0x278]         ; 00539fcf
    FXCH                                ; 00539fd6
    FADDP ST2,ST0                       ; 00539fd8
    FMUL float ptr [ESP + 0x278]        ; 00539fda
    FXCH                                ; 00539fe1
    FSTP float ptr [ESP + 0x8]          ; 00539fe3
    FCOMP float ptr [ESP + 0x8]         ; 00539fe7
    FNSTSW AX                           ; 00539feb
    SAHF                                ; 00539fed
    JC 0x0053a14c                       ; 00539fee
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x8]           ; 00539ff4
    FSQRT                               ; 00539ff8
    FLDZ                                ; 00539ffa
    FXCH                                ; 00539ffc
    FST float ptr [ESP + 0x8]           ; 00539ffe
    FSTP double ptr [ESP]               ; 0053a002
    FCOMP double ptr [ESP]              ; 0053a005
    FNSTSW AX                           ; 0053a008
    SAHF                                ; 0053a00a
    JNC 0x0053a14c                      ; 0053a00b
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [ESP + 0x278]         ; 0053a011
    FADD double ptr [0x005ed433]        ; 0053a018 | DAT_005ed433
    FDIV double ptr [ESP]               ; 0053a01e
    FLD float ptr [ESP + 0x35c]         ; 0053a021
    FXCH                                ; 0053a028
    FSTP float ptr [ESP + 0x394]        ; 0053a02a
    FMUL float ptr [ESP + 0x394]        ; 0053a031
    FLDZ                                ; 0053a038
    FMUL float ptr [ESP + 0x394]        ; 0053a03a
    FLD float ptr [ESP + 0x364]         ; 0053a041
    FMUL float ptr [ESP + 0x394]        ; 0053a048
    FLD float ptr [ESP + 0x2fc]         ; 0053a04f
    FLD float ptr [ESP + 0x300]         ; 0053a056
    FLD float ptr [ESP + 0x304]         ; 0053a05d
    LEA EDI,[ESP + 0x308]               ; 0053a064
    LEA ESI,[ESP + 0x338]               ; 0053a06b
    LEA EAX,[ESP + 0x308]               ; 0053a072
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053a079
    PUSH EAX                            ; 0053a07c
    FXCH ST5                            ; 0053a07d
    FSTP float ptr [ESP + 0x360]        ; 0053a07f
    FXCH ST3                            ; 0053a086
    FSTP float ptr [ESP + 0x364]        ; 0053a088
    FXCH                                ; 0053a08f
    FSTP float ptr [ESP + 0x368]        ; 0053a091
    FADD float ptr [ESP + 0x360]        ; 0053a098
    FXCH                                ; 0053a09f
    FADD float ptr [ESP + 0x364]        ; 0053a0a1
    FXCH ST2                            ; 0053a0a8
    FADD float ptr [ESP + 0x368]        ; 0053a0aa
    FXCH                                ; 0053a0b1
    FSTP float ptr [ESP + 0x33c]        ; 0053a0b3
    FXCH                                ; 0053a0ba
    FSTP float ptr [ESP + 0x340]        ; 0053a0bc
    FSTP float ptr [ESP + 0x344]        ; 0053a0c3
    MOVSD ES:EDI,ESI                    ; 0053a0ca
    MOVSD ES:EDI,ESI                    ; 0053a0cb
    MOVSD ES:EDI,ESI                    ; 0053a0cc
    PUSH ECX                            ; 0053a0cd
    LEA ESI,[ESP + 0x370]               ; 0053a0ce
    LEA EDI,[ESP + 0x328]               ; 0053a0d5
    CALL core_actor.cpp_FUN_00408b40    ; 0053a0dc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x370]               ; 0053a0e1
    ADD ESP,0x8                         ; 0053a0e8
    MOVSD ES:EDI,ESI                    ; 0053a0eb
    MOVSD ES:EDI,ESI                    ; 0053a0ec
    MOVSD ES:EDI,ESI                    ; 0053a0ed
    MOV EAX,dword ptr [EBX + 0x24]      ; 0053a0ee
    MOV dword ptr [ESP + 0x324],EAX     ; 0053a0f1
    LEA EAX,[EBX + 0x30]                ; 0053a0f8
    PUSH EAX                            ; 0053a0fb
    LEA EAX,[ESP + 0x324]               ; 0053a0fc
    PUSH EAX                            ; 0053a103
    MOV EDX,dword ptr [EBX + 0x154]     ; 0053a104
    PUSH EBX                            ; 0053a10a
    CALL dword ptr [EDX + 0x68]         ; 0053a10b
    ADD ESP,0xc                         ; 0053a10e
    JMP 0x0053a14c                      ; 0053a111
        ;   XREF to: 0053a14c (UNCONDITIONAL_JUMP)  ; LAB_0053a14c
    FLD float ptr [EAX + 0x24]          ; 0053a113
        ;   Label: LAB_0053a113
    FCOMP float ptr [ESP + 0x374]       ; 0053a116
    FNSTSW AX                           ; 0053a11d
    SAHF                                ; 0053a11f
    JNC 0x0053a14c                      ; 0053a120
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    PUSH EBX                            ; 0053a122
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053a123
    PUSH ESI                            ; 0053a126
    CALL core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0053ab00 ; 0053a127
        ;   XREF to: 0053ab00 (UNCONDITIONAL_CALL)  ; int core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0053ab00(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053a12c
    TEST EAX,EAX                        ; 0053a12f
    JZ 0x0053a14c                       ; 0053a131
        ;   XREF to: 0053a14c (CONDITIONAL_JUMP)  ; LAB_0053a14c
    PUSH 0xbf800000                     ; 0053a133
    PUSH 0x0                            ; 0053a138
    PUSH 0x8                            ; 0053a13a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053a13c
    PUSH EBX                            ; 0053a142
    CALL dword ptr [EAX + 0xdc]         ; 0053a143
    ADD ESP,0x10                        ; 0053a149
    MOV ESI,dword ptr [ESP + 0x390]     ; 0053a14c
        ;   Label: LAB_0053a14c
    MOV EBX,dword ptr [ESP + 0x388]     ; 0053a153
    INC ESI                             ; 0053a15a
    ADD EBX,0x4                         ; 0053a15b
    MOV dword ptr [ESP + 0x390],ESI     ; 0053a15e
    MOV dword ptr [ESP + 0x388],EBX     ; 0053a165
    JMP 0x00539a80                      ; 0053a16c
        ;   XREF to: 00539a80 (UNCONDITIONAL_JUMP)  ; LAB_00539a80
    LEA EAX,[EBX + 0x30]                ; 0053a171
        ;   Label: LAB_0053a171
    PUSH EAX                            ; 0053a174
    LEA EAX,[EBX + 0x20]                ; 0053a175
    PUSH EAX                            ; 0053a178
    MOV dword ptr [ESP + 0x3a0],EAX     ; 0053a179
    LEA EAX,[ESP + 0x1a4]               ; 0053a180
    PUSH EAX                            ; 0053a187
    CALL core_xform.cpp_FUN_005b5760    ; 0053a188
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0053a18d
    LEA EAX,[ESP + 0x13c]               ; 0053a190
    PUSH EAX                            ; 0053a197
    LEA EAX,[ESP + 0x1a0]               ; 0053a198
    PUSH EAX                            ; 0053a19f
    LEA ESI,[ESP + 0x204]               ; 0053a1a0
    LEA EDI,[ESP + 0x1d4]               ; 0053a1a7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0053a1ae
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0053a1b3
    ADD ESP,0x8                         ; 0053a1b8
    LEA EAX,[ESP + 0x10c]               ; 0053a1bb
    LEA ESI,[ESP + 0x1fc]               ; 0053a1c2
    PUSH EAX                            ; 0053a1c9
    LEA EAX,[ESP + 0x1d0]               ; 0053a1ca
    MOVSD.REP ES:EDI,ESI                ; 0053a1d1
    PUSH EAX                            ; 0053a1d3
    LEA ESI,[ESP + 0x234]               ; 0053a1d4
    LEA EDI,[ESP + 0x174]               ; 0053a1db
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0053a1e2
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0053a1e7
    LEA ESI,[ESP + 0x234]               ; 0053a1ec
    ADD ESP,0x8                         ; 0053a1f3
    MOVSD.REP ES:EDI,ESI                ; 0053a1f6
    MOV EAX,dword ptr [ESP + 0x178]     ; 0053a1f8
    MOV dword ptr [ESP + 0x32c],EAX     ; 0053a1ff
    MOV EAX,dword ptr [ESP + 0x188]     ; 0053a206
    LEA EDI,[ESP + 0x344]               ; 0053a20d
    MOV dword ptr [ESP + 0x330],EAX     ; 0053a214
    MOV EAX,dword ptr [ESP + 0x198]     ; 0053a21b
    LEA ESI,[ESP + 0x32c]               ; 0053a222
    MOV dword ptr [ESP + 0x334],EAX     ; 0053a229
    LEA EAX,[ESP + 0x16c]               ; 0053a230
    MOVSD ES:EDI,ESI                    ; 0053a237
    MOVSD ES:EDI,ESI                    ; 0053a238
    MOVSD ES:EDI,ESI                    ; 0053a239
    PUSH EAX                            ; 0053a23a
    LEA ESI,[ESP + 0x2dc]               ; 0053a23b
    LEA EDI,[ESP + 0x354]               ; 0053a242
    CALL core_xform.cpp_FUN_005b5930    ; 0053a249
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    LEA ESI,[ESP + 0x2dc]               ; 0053a24e
    ADD ESP,0x4                         ; 0053a255
    LEA EDX,[EBX + 0xe0]                ; 0053a258
    FLD float ptr [ESP + 0x344]         ; 0053a25e
    FLD float ptr [ESP + 0x348]         ; 0053a265
    FLD float ptr [ESP + 0x34c]         ; 0053a26c
    MOVSD ES:EDI,ESI                    ; 0053a273
    MOVSD ES:EDI,ESI                    ; 0053a274
    MOVSD ES:EDI,ESI                    ; 0053a275
    MOV EAX,dword ptr [ESP + 0x398]     ; 0053a276
    LEA EDI,[ESP + 0x2b4]               ; 0053a27d
    LEA ESI,[ESP + 0x2cc]               ; 0053a284
    FXCH ST2                            ; 0053a28b
    FSUB float ptr [EAX]                ; 0053a28d
    FXCH                                ; 0053a28f
    FSUB float ptr [EAX + 0x4]          ; 0053a291
    FXCH ST2                            ; 0053a294
    FSUB float ptr [EAX + 0x8]          ; 0053a296
    FXCH                                ; 0053a299
    FSTP float ptr [ESP + 0x2cc]        ; 0053a29b
    FXCH                                ; 0053a2a2
    FSTP float ptr [ESP + 0x2d0]        ; 0053a2a4
    FSTP float ptr [ESP + 0x2d4]        ; 0053a2ab
    LEA EAX,[ESP + 0x2b4]               ; 0053a2b2
    MOVSD ES:EDI,ESI                    ; 0053a2b9
    MOVSD ES:EDI,ESI                    ; 0053a2ba
    MOVSD ES:EDI,ESI                    ; 0053a2bb
    CMP EDX,EAX                         ; 0053a2bc
    JZ 0x0053a2dd                       ; 0053a2be
        ;   XREF to: 0053a2dd (CONDITIONAL_JUMP)  ; LAB_0053a2dd
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 0053a2c0
    MOV dword ptr [EDX],EAX             ; 0053a2c7
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 0053a2c9
    MOV dword ptr [EDX + 0x4],EAX       ; 0053a2d0
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 0053a2d3
    MOV dword ptr [EDX + 0x8],EAX       ; 0053a2da
    MOV dword ptr [EBX + 0xec],0x0      ; 0053a2dd
        ;   Label: LAB_0053a2dd
    MOV dword ptr [EBX + 0xf4],0x0      ; 0053a2e7
    FLD float ptr [ESP + 0x354]         ; 0053a2f1
    FSUB float ptr [EBX + 0x34]         ; 0053a2f8
    SUB ESP,0x4                         ; 0053a2fb
    FSTP float ptr [ESP]                ; 0053a2fe
    CALL core_actor.cpp_FUN_0040cd60    ; 0053a301
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x39c],EAX     ; 0053a306
    MOV EAX,dword ptr [ESP + 0x39c]     ; 0053a30d
    MOV dword ptr [EBX + 0xf0],EAX      ; 0053a314
    ADD ESP,0x4                         ; 0053a31a
    JMP 0x00539adc                      ; 0053a31d
        ;   XREF to: 00539adc (UNCONDITIONAL_JUMP)  ; LAB_00539adc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053a322
        ;   Label: LAB_0053a322
    PUSH EAX                            ; 0053a325
    CALL core_platfrm.cpp_FUN_0053aef0  ; 0053a326
        ;   XREF to: 0053aef0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_0053aef0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0053a32b
    MOV ESP,EBP                         ; 0053a32e
        ;   Label: LAB_0053a32e
    POP EBP                             ; 0053a330
    POP EDI                             ; 0053a331
    POP ESI                             ; 0053a332
    POP EBX                             ; 0053a333
    RET                                 ; 0053a334

