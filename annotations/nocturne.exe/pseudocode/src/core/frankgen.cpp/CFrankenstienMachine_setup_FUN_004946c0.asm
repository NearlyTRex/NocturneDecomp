; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_0049469c = 004946f3
;   TerminatedCString s_frankxbed_kfm_00581b0d
;   TerminatedCString s_frankxbed_pth_00581b1b
;   undefined4 s_frankxbed_pth_00581b1b+1
;   undefined4 s_frankxbed_pth_00581b1b+2
;   undefined4 s_frankxbed_pth_00581b1b+3
;   TerminatedCString s_frankxbody_kfm_00581b29
;   TerminatedCString s_frankxcrn1_kfm_00581b38
;   TerminatedCString s_frankxcrn2_kfm_00581b47
;   TerminatedCString s_frankxcrn3_kfm_00581b56
;   TerminatedCString s_frankxstch_kfm_00581b65
;   TerminatedCString s_frankxarm_kfm_00581b74
;   TerminatedCString s_frankxflap1_kfm_00581b82
;   TerminatedCString s_frankxflap1_pth_00581b92
;   undefined4 s_frankxflap1_pth_00581b92+1
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_course.cpp_CCourse_load_FUN_0043b690
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004950a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004946c0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004946c0
    PUSH ESI                            ; 004946c1
    PUSH EDI                            ; 004946c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004946c3
    PUSH EBX                            ; 004946c7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004946c8
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    MOV byte ptr [EBX + 0x158],0x0      ; 004946cd
    ADD ESP,0x4                         ; 004946d4
    MOV EDI,dword ptr [EBX + 0x150]     ; 004946d7
    MOV dword ptr [EBX + 0x480],0x0     ; 004946dd
    CMP EDI,0x8                         ; 004946e7
    JA 0x00494749                       ; 004946ea
        ;   XREF to: 00494749 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x49469c]  ; 004946ec | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x581b0d                       ; 004946f3 | = "frankxbed.kfm"
        ;   Label: caseD_0
    LEA EDI,[EBX + 0x17c]               ; 004946f8
    PUSH EDI                            ; 004946fe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004946ff
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00494704
    MOV ESI,0x581b1b                    ; 00494707 | = "frankxbed.pth"
    LEA EDI,[EBX + 0x158]               ; 0049470c
    PUSH EDI                            ; 00494712
    MOV AL,byte ptr [ESI]               ; 00494713 | = "frankxbed.pth" | s_frankxbed_pth_00581b1b+2
        ;   Label: LAB_00494713
    MOV byte ptr [EDI],AL               ; 00494715
    CMP AL,0x0                          ; 00494717
    JZ 0x0049472b                       ; 00494719
        ;   XREF to: 0049472b (CONDITIONAL_JUMP)  ; LAB_0049472b
    MOV AL,byte ptr [ESI + 0x1]         ; 0049471b | s_frankxbed_pth_00581b1b+1 | s_frankxbed_pth_00581b1b+3
    ADD ESI,0x2                         ; 0049471e
    MOV byte ptr [EDI + 0x1],AL         ; 00494721
    ADD EDI,0x2                         ; 00494724
    CMP AL,0x0                          ; 00494727
    JNZ 0x00494713                      ; 00494729
        ;   XREF to: 00494713 (CONDITIONAL_JUMP)  ; LAB_00494713
    POP EDI                             ; 0049472b
        ;   Label: LAB_0049472b
    PUSH 0x581b29                       ; 0049472c | = "frankxbody.kfm"
    LEA EDI,[EBX + 0x304]               ; 00494731
    PUSH EDI                            ; 00494737
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00494738
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0049473d
    PUSH EDI                            ; 00494740
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00494741
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00494746
    LEA EDI,[EBX + 0x17c]               ; 00494749
        ;   Label: default
    PUSH EDI                            ; 0049474f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00494750
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    MOV AH,byte ptr [EBX + 0x158]       ; 00494755
    ADD ESP,0x4                         ; 0049475b
    TEST AH,AH                          ; 0049475e
    JNZ 0x004948c2                      ; 00494760
        ;   XREF to: 004948c2 (CONDITIONAL_JUMP)  ; LAB_004948c2
    PUSH EBX                            ; 00494766
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004950a0 ; 00494767
        ;   XREF to: 004950a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004950a0(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 0049476c
    POP EDI                             ; 0049476f
    POP ESI                             ; 00494770
    POP EBX                             ; 00494771
    RET                                 ; 00494772
    PUSH 0x581b38                       ; 00494773 | = "frankxcrn1.kfm"
        ;   Label: caseD_1
    LEA EDI,[EBX + 0x17c]               ; 00494778
    PUSH EDI                            ; 0049477e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0049477f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00494784
    MOV dword ptr [EBX + 0x480],0xae    ; 00494787
    JMP 0x00494749                      ; 00494791
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581b47                       ; 00494793 | = "frankxcrn2.kfm"
        ;   Label: caseD_2
    LEA EDI,[EBX + 0x17c]               ; 00494798
    PUSH EDI                            ; 0049479e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0049479f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004947a4
    MOV dword ptr [EBX + 0x480],0x8c    ; 004947a7
    JMP 0x00494749                      ; 004947b1
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581b56                       ; 004947b3 | = "frankxcrn3.kfm"
        ;   Label: caseD_3
    LEA EDI,[EBX + 0x17c]               ; 004947b8
    PUSH EDI                            ; 004947be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004947bf
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004947c4
    MOV dword ptr [EBX + 0x480],0x16a   ; 004947c7
    JMP 0x00494749                      ; 004947d1
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581b65                       ; 004947d6 | = "frankxstch.kfm"
        ;   Label: caseD_4
    LEA EDI,[EBX + 0x17c]               ; 004947db
    PUSH EDI                            ; 004947e1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004947e2
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004947e7
    JMP 0x00494749                      ; 004947ea
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581b74                       ; 004947ef | = "frankxarm.kfm"
        ;   Label: caseD_5
    LEA EDI,[EBX + 0x17c]               ; 004947f4
    PUSH EDI                            ; 004947fa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004947fb
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00494800
    JMP 0x00494749                      ; 00494803
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581b82                       ; 00494808 | = "frankxflap1.kfm"
        ;   Label: caseD_6
    LEA EDI,[EBX + 0x17c]               ; 0049480d
    PUSH EDI                            ; 00494813
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00494814
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00494819
    MOV ESI,0x581b92                    ; 0049481c | = "frankxflap1.pth"
    LEA EDI,[EBX + 0x158]               ; 00494821
    PUSH EDI                            ; 00494827
    MOV AL,byte ptr [ESI]               ; 00494828 | = "frankxflap1.pth" | s_frankxflap1_pth_00581b92+2
        ;   Label: LAB_00494828
    MOV byte ptr [EDI],AL               ; 0049482a
    CMP AL,0x0                          ; 0049482c
    JZ 0x00494840                       ; 0049482e
        ;   XREF to: 00494840 (CONDITIONAL_JUMP)  ; LAB_00494840
    MOV AL,byte ptr [ESI + 0x1]         ; 00494830 | s_frankxflap1_pth_00581b92+1 | s_frankxflap1_pth_00581b92+3
    ADD ESI,0x2                         ; 00494833
    MOV byte ptr [EDI + 0x1],AL         ; 00494836
    ADD EDI,0x2                         ; 00494839
    CMP AL,0x0                          ; 0049483c
    JNZ 0x00494828                      ; 0049483e
        ;   XREF to: 00494828 (CONDITIONAL_JUMP)  ; LAB_00494828
    POP EDI                             ; 00494840
        ;   Label: LAB_00494840
    JMP 0x00494749                      ; 00494841
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581ba2                       ; 00494846 | = "frankxflap2.kfm"
        ;   Label: caseD_7
    LEA EDI,[EBX + 0x17c]               ; 0049484b
    PUSH EDI                            ; 00494851
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00494852
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00494857
    MOV ESI,0x581bb2                    ; 0049485a | = "frankxflap2.pth"
    LEA EDI,[EBX + 0x158]               ; 0049485f
    PUSH EDI                            ; 00494865
    MOV AL,byte ptr [ESI]               ; 00494866 | = "frankxflap2.pth" | s_frankxflap2_pth_00581bb2+2
        ;   Label: LAB_00494866
    MOV byte ptr [EDI],AL               ; 00494868
    CMP AL,0x0                          ; 0049486a
    JZ 0x0049487e                       ; 0049486c
        ;   XREF to: 0049487e (CONDITIONAL_JUMP)  ; LAB_0049487e
    MOV AL,byte ptr [ESI + 0x1]         ; 0049486e | s_frankxflap2_pth_00581bb2+1 | s_frankxflap2_pth_00581bb2+3
    ADD ESI,0x2                         ; 00494871
    MOV byte ptr [EDI + 0x1],AL         ; 00494874
    ADD EDI,0x2                         ; 00494877
    CMP AL,0x0                          ; 0049487a
    JNZ 0x00494866                      ; 0049487c
        ;   XREF to: 00494866 (CONDITIONAL_JUMP)  ; LAB_00494866
    POP EDI                             ; 0049487e
        ;   Label: LAB_0049487e
    JMP 0x00494749                      ; 0049487f
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x581bc2                       ; 00494884 | = "frankxramp.kfm"
        ;   Label: caseD_8
    LEA EDI,[EBX + 0x17c]               ; 00494889
    PUSH EDI                            ; 0049488f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00494890
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00494895
    MOV ESI,0x581bd1                    ; 00494898 | = "frankxramp.pth"
    LEA EDI,[EBX + 0x158]               ; 0049489d
    PUSH EDI                            ; 004948a3
    MOV AL,byte ptr [ESI]               ; 004948a4 | = "frankxramp.pth" | s_frankxramp_pth_00581bd1+2
        ;   Label: LAB_004948a4
    MOV byte ptr [EDI],AL               ; 004948a6
    CMP AL,0x0                          ; 004948a8
    JZ 0x004948bc                       ; 004948aa
        ;   XREF to: 004948bc (CONDITIONAL_JUMP)  ; LAB_004948bc
    MOV AL,byte ptr [ESI + 0x1]         ; 004948ac | s_frankxramp_pth_00581bd1+1 | s_frankxramp_pth_00581bd1+3
    ADD ESI,0x2                         ; 004948af
    MOV byte ptr [EDI + 0x1],AL         ; 004948b2
    ADD EDI,0x2                         ; 004948b5
    CMP AL,0x0                          ; 004948b8
    JNZ 0x004948a4                      ; 004948ba
        ;   XREF to: 004948a4 (CONDITIONAL_JUMP)  ; LAB_004948a4
    POP EDI                             ; 004948bc
        ;   Label: LAB_004948bc
    JMP 0x00494749                      ; 004948bd
        ;   XREF to: 00494749 (UNCONDITIONAL_JUMP)  ; default
    LEA EDI,[EBX + 0x158]               ; 004948c2
        ;   Label: LAB_004948c2
    PUSH EDI                            ; 004948c8
    LEA EDI,[EBX + 0x2f8]               ; 004948c9
    PUSH EDI                            ; 004948cf
    CALL core_course.cpp_CCourse_load_FUN_0043b690 ; 004948d0
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_0043b690(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004948d5
    PUSH EBX                            ; 004948d8
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004950a0 ; 004948d9
        ;   XREF to: 004950a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004950a0(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004948de
    POP EDI                             ; 004948e1
    POP ESI                             ; 004948e2
    POP EBX                             ; 004948e3
    RET                                 ; 004948e4

