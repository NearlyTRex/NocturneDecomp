; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x5c]:24  local_5c
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; CVector3f        Stack[-0x38]:12  local_38
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; CSkeleton *      Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064af7a
;   TerminatedCString s_CDeformableModel_calcRoo_0064af8f
;   TerminatedCString s_core_skeledit_cpp_0064aff0
;   TerminatedCString s_core_skeledit_cpp_0064b005
;   TerminatedCString s_CDeformableModel_calcRoo_0064b01a
;   TerminatedCString s_core_skeledit_cpp_0064b051
;   double DOUBLE_0064b06a = -9999
;   float FLOAT_00662e44 = 0.00390625
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
;   crt_stack.c___STK_FUN_005ff9f3
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x6c                           ; 0058e690
        ;   Label: core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058e695
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058e69a
    PUSH ESI                            ; 0058e69b
    PUSH EDI                            ; 0058e69c
    PUSH EBP                            ; 0058e69d
    SUB ESP,0x4c                        ; 0058e69e
    MOV EDX,dword ptr [ESP + 0x60]      ; 0058e6a1
    PUSH EDX                            ; 0058e6a5
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0058e6a6
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    FLD float ptr [EAX + 0x2937c]       ; 0058e6ab
    ADD ESP,0x4                         ; 0058e6b1
    MOV EDX,EAX                         ; 0058e6b4
    MOV dword ptr [ESP + 0x48],EAX      ; 0058e6b6
    FCOMP double ptr [0x0064b06a]       ; 0058e6ba | DOUBLE_0064b06a
    FNSTSW AX                           ; 0058e6c0
    SAHF                                ; 0058e6c2
    JC 0x0058ea6c                       ; 0058e6c3
        ;   XREF to: 0058ea6c (CONDITIONAL_JUMP)  ; LAB_0058ea6c
    PUSH 0x9fd                          ; 0058e6c9
        ;   Label: LAB_0058e6c9
    PUSH 0x64aff0                       ; 0058e6ce | = "..\\core\\skeledit.cpp"
    PUSH 0x22b4                         ; 0058e6d3
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0058e6d8
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0058e6dd
    TEST EAX,EAX                        ; 0058e6e0
    JZ 0x0058e6ed                       ; 0058e6e2
        ;   XREF to: 0058e6ed (CONDITIONAL_JUMP)  ; LAB_0058e6ed
    PUSH EAX                            ; 0058e6e4
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 0058e6e5
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058e6ea
    MOV EBP,EAX                         ; 0058e6ed
        ;   Label: LAB_0058e6ed
    TEST EAX,EAX                        ; 0058e6ef
    JNZ 0x0058e716                      ; 0058e6f1
        ;   XREF to: 0058e716 (CONDITIONAL_JUMP)  ; LAB_0058e716
    MOV ESI,0x64b005                    ; 0058e6f3 | = "..\\core\\skeledit.cpp"
    MOV EDI,0x9fe                       ; 0058e6f8
    PUSH 0x64b01a                       ; 0058e6fd | = "CDeformableModel::calcRootOffsetScale..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0058e702 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0058e708 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058e70e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058e713
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058e716
        ;   Label: LAB_0058e716
    PUSH EAX                            ; 0058e71a
    PUSH EBP                            ; 0058e71b
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 ; 0058e71c
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0058e721
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058e724
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0058e728
    XOR EDX,EDX                         ; 0058e72e
    TEST ECX,ECX                        ; 0058e730
    JLE 0x0058e766                      ; 0058e732
        ;   XREF to: 0058e766 (CONDITIONAL_JUMP)  ; LAB_0058e766
    LEA EBX,[EAX + 0x2937c]             ; 0058e734
    MOV ESI,dword ptr [ESP + 0x48]      ; 0058e73a
    LEA EAX,[EBP + 0x58]                ; 0058e73e
    CMP EAX,EBX                         ; 0058e741
        ;   Label: LAB_0058e741
    JZ 0x0058e755                       ; 0058e743
        ;   XREF to: 0058e755 (CONDITIONAL_JUMP)  ; LAB_0058e755
    MOV ECX,dword ptr [EBX]             ; 0058e745
    MOV dword ptr [EAX],ECX             ; 0058e747
    MOV ECX,dword ptr [EBX + 0x4]       ; 0058e749
    MOV dword ptr [EAX + 0x4],ECX       ; 0058e74c
    MOV ECX,dword ptr [EBX + 0x8]       ; 0058e74f
    MOV dword ptr [EAX + 0x8],ECX       ; 0058e752
    ADD EAX,0xc                         ; 0058e755
        ;   Label: LAB_0058e755
    INC EDX                             ; 0058e758
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0058e759
    ADD EBX,0xc                         ; 0058e75f
    CMP EDX,EDI                         ; 0058e762
    JL 0x0058e741                       ; 0058e764
        ;   XREF to: 0058e741 (CONDITIONAL_JUMP)  ; LAB_0058e741
    PUSH 0x0                            ; 0058e766
        ;   Label: LAB_0058e766
    PUSH 0x0                            ; 0058e768
    PUSH EBP                            ; 0058e76a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 ; 0058e76b
        ;   XREF to: 0059e070 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 0058e770
    PUSH 0x0                            ; 0058e773
    PUSH EBP                            ; 0058e775
    LEA EBX,[ESP + 0x2c]                ; 0058e776
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0058e77a
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0058e77f
    MOV EAX,dword ptr [EBP + 0x2234]    ; 0058e782
    MOV EDX,ESP                         ; 0058e788
    FILD dword ptr [EAX]                ; 0058e78a
    FMUL float ptr [0x00662e44]         ; 0058e78c | FLOAT_00662e44
    FSTP float ptr [EBX]                ; 0058e792
    FILD dword ptr [EAX + 0x4]          ; 0058e794
    FMUL float ptr [0x00662e44]         ; 0058e797 | FLOAT_00662e44
    FSTP float ptr [EBX + 0x4]          ; 0058e79d
    FILD dword ptr [EAX + 0x8]          ; 0058e7a0
    FMUL float ptr [0x00662e44]         ; 0058e7a3 | FLOAT_00662e44
    FSTP float ptr [EBX + 0x8]          ; 0058e7a9
    LEA EAX,[ESP + 0x24]                ; 0058e7ac
    CMP EDX,EAX                         ; 0058e7b0
    JZ 0x0058e7cb                       ; 0058e7b2
        ;   XREF to: 0058e7cb (CONDITIONAL_JUMP)  ; LAB_0058e7cb
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058e7b4
    MOV dword ptr [ESP],EAX             ; 0058e7b8
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058e7bb
    MOV dword ptr [ESP + 0x4],EAX       ; 0058e7bf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058e7c3
    MOV dword ptr [ESP + 0x8],EAX       ; 0058e7c7
    LEA EDX,[ESP + 0xc]                 ; 0058e7cb
        ;   Label: LAB_0058e7cb
    LEA EAX,[ESP + 0x24]                ; 0058e7cf
    CMP EDX,EAX                         ; 0058e7d3
    JZ 0x0058e7ef                       ; 0058e7d5
        ;   XREF to: 0058e7ef (CONDITIONAL_JUMP)  ; LAB_0058e7ef
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058e7d7
    MOV dword ptr [ESP + 0xc],EAX       ; 0058e7db
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058e7df
    MOV dword ptr [ESP + 0x10],EAX      ; 0058e7e3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058e7e7
    MOV dword ptr [ESP + 0x14],EAX      ; 0058e7eb
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058e7ef
        ;   Label: LAB_0058e7ef
    MOV EDI,0x1                         ; 0058e7f3
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0058e7f8
    JGE 0x0058e860                      ; 0058e7fb
        ;   XREF to: 0058e860 (CONDITIONAL_JUMP)  ; LAB_0058e860
    MOV ESI,0xc                         ; 0058e7fd
    MOV EAX,dword ptr [EBP + 0x2234]    ; 0058e802
        ;   Label: LAB_0058e802
    LEA EBX,[ESP + 0x24]                ; 0058e808
    ADD EAX,ESI                         ; 0058e80c
    FILD dword ptr [EAX]                ; 0058e80e
    FMUL float ptr [0x00662e44]         ; 0058e810 | FLOAT_00662e44
    FSTP float ptr [EBX]                ; 0058e816
    FILD dword ptr [EAX + 0x4]          ; 0058e818
    FMUL float ptr [0x00662e44]         ; 0058e81b | FLOAT_00662e44
    FSTP float ptr [EBX + 0x4]          ; 0058e821
    FILD dword ptr [EAX + 0x8]          ; 0058e824
    FMUL float ptr [0x00662e44]         ; 0058e827 | FLOAT_00662e44
    FSTP float ptr [EBX + 0x8]          ; 0058e82d
    LEA EAX,[ESP + 0x24]                ; 0058e830
    PUSH EAX                            ; 0058e834
    LEA EAX,[ESP + 0x4]                 ; 0058e835
    PUSH EAX                            ; 0058e839
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0058e83a
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0058e83f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058e842
    INC EDI                             ; 0058e846
    MOV ECX,dword ptr [EAX + 0x2c]      ; 0058e847
    ADD ESI,0xc                         ; 0058e84a
    CMP EDI,ECX                         ; 0058e84d
    JL 0x0058e802                       ; 0058e84f
        ;   XREF to: 0058e802 (CONDITIONAL_JUMP)  ; LAB_0058e802
    LEA EAX,[EAX]                       ; 0058e851
    LEA EDX,[EDX]                       ; 0058e857
    LEA EAX,[EAX]                       ; 0058e85d
    FLD float ptr [ESP + 0xc]           ; 0058e860
        ;   Label: LAB_0058e860
    FLD float ptr [ESP + 0x10]          ; 0058e864
    FLD float ptr [ESP + 0x14]          ; 0058e868
    MOV EBX,0x3f800000                  ; 0058e86c
    LEA EAX,[ESP + 0x3c]                ; 0058e871
    LEA EDX,[EBP + 0x508]               ; 0058e875
    FXCH ST2                            ; 0058e87b
    FSUB float ptr [ESP]                ; 0058e87d
    FXCH                                ; 0058e880
    FSUB float ptr [ESP + 0x4]          ; 0058e882
    FXCH ST2                            ; 0058e886
    FSUB float ptr [ESP + 0x8]          ; 0058e888
    MOV dword ptr [ESP + 0x3c],EBX      ; 0058e88c
    MOV dword ptr [ESP + 0x40],EBX      ; 0058e890
    MOV dword ptr [ESP + 0x44],EBX      ; 0058e894
    FXCH ST2                            ; 0058e898
    FSTP float ptr [ESP + 0x34]         ; 0058e89a
    FXCH                                ; 0058e89e
    FSTP float ptr [ESP + 0x38]         ; 0058e8a0
    FSTP float ptr [ESP + 0x30]         ; 0058e8a4
    CMP EDX,EAX                         ; 0058e8a8
    JZ 0x0058e8b4                       ; 0058e8aa
        ;   XREF to: 0058e8b4 (CONDITIONAL_JUMP)  ; LAB_0058e8b4
    MOV dword ptr [EDX + 0x4],EBX       ; 0058e8ac
    MOV dword ptr [EDX + 0x8],EBX       ; 0058e8af
    MOV dword ptr [EDX],EBX             ; 0058e8b2
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058e8b4
        ;   Label: LAB_0058e8b4
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0058e8b8
    XOR ESI,ESI                         ; 0058e8be
    TEST EDX,EDX                        ; 0058e8c0
    JLE 0x0058e8f9                      ; 0058e8c2
        ;   XREF to: 0058e8f9 (CONDITIONAL_JUMP)  ; LAB_0058e8f9
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058e8c4
    MOV EDX,dword ptr [ESP + 0x48]      ; 0058e8c8
    LEA EBX,[EBP + 0x58]                ; 0058e8cc
    ADD EAX,0x7c90                      ; 0058e8cf
    CMP EBX,EAX                         ; 0058e8d4
        ;   Label: LAB_0058e8d4
    JZ 0x0058e8e8                       ; 0058e8d6
        ;   XREF to: 0058e8e8 (CONDITIONAL_JUMP)  ; LAB_0058e8e8
    MOV ECX,dword ptr [EAX]             ; 0058e8d8
    MOV dword ptr [EBX],ECX             ; 0058e8da
    MOV ECX,dword ptr [EAX + 0x4]       ; 0058e8dc
    MOV dword ptr [EBX + 0x4],ECX       ; 0058e8df
    MOV ECX,dword ptr [EAX + 0x8]       ; 0058e8e2
    MOV dword ptr [EBX + 0x8],ECX       ; 0058e8e5
    ADD EBX,0xc                         ; 0058e8e8
        ;   Label: LAB_0058e8e8
    INC ESI                             ; 0058e8eb
    MOV ECX,dword ptr [EDX + 0x28558]   ; 0058e8ec
    ADD EAX,0xc                         ; 0058e8f2
    CMP ESI,ECX                         ; 0058e8f5
    JL 0x0058e8d4                       ; 0058e8f7
        ;   XREF to: 0058e8d4 (CONDITIONAL_JUMP)  ; LAB_0058e8d4
    PUSH 0x0                            ; 0058e8f9
        ;   Label: LAB_0058e8f9
    PUSH 0x0                            ; 0058e8fb
    PUSH EBP                            ; 0058e8fd
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 ; 0058e8fe
        ;   XREF to: 0059e070 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 0058e903
    PUSH 0x0                            ; 0058e906
    PUSH EBP                            ; 0058e908
    LEA EBX,[ESP + 0x2c]                ; 0058e909
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0058e90d
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0058e912
    MOV EAX,dword ptr [EBP + 0x2234]    ; 0058e915
    MOV EDX,ESP                         ; 0058e91b
    FILD dword ptr [EAX]                ; 0058e91d
    FMUL float ptr [0x00662e44]         ; 0058e91f | FLOAT_00662e44
    FSTP float ptr [EBX]                ; 0058e925
    FILD dword ptr [EAX + 0x4]          ; 0058e927
    FMUL float ptr [0x00662e44]         ; 0058e92a | FLOAT_00662e44
    FSTP float ptr [EBX + 0x4]          ; 0058e930
    FILD dword ptr [EAX + 0x8]          ; 0058e933
    FMUL float ptr [0x00662e44]         ; 0058e936 | FLOAT_00662e44
    FSTP float ptr [EBX + 0x8]          ; 0058e93c
    LEA EAX,[ESP + 0x24]                ; 0058e93f
    CMP EDX,EAX                         ; 0058e943
    JZ 0x0058e95e                       ; 0058e945
        ;   XREF to: 0058e95e (CONDITIONAL_JUMP)  ; LAB_0058e95e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058e947
    MOV dword ptr [ESP],EAX             ; 0058e94b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058e94e
    MOV dword ptr [ESP + 0x4],EAX       ; 0058e952
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058e956
    MOV dword ptr [ESP + 0x8],EAX       ; 0058e95a
    LEA EAX,[ESP + 0xc]                 ; 0058e95e
        ;   Label: LAB_0058e95e
    LEA EDX,[ESP + 0x24]                ; 0058e962
    CMP EAX,EDX                         ; 0058e966
    JZ 0x0058e982                       ; 0058e968
        ;   XREF to: 0058e982 (CONDITIONAL_JUMP)  ; LAB_0058e982
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058e96a
    MOV dword ptr [ESP + 0xc],EAX       ; 0058e96e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058e972
    MOV dword ptr [ESP + 0x10],EAX      ; 0058e976
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058e97a
    MOV dword ptr [ESP + 0x14],EAX      ; 0058e97e
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058e982
        ;   Label: LAB_0058e982
    MOV EDI,0x1                         ; 0058e986
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0058e98b
    JGE 0x0058e9f0                      ; 0058e98e
        ;   XREF to: 0058e9f0 (CONDITIONAL_JUMP)  ; LAB_0058e9f0
    MOV ESI,0xc                         ; 0058e990
    MOV EAX,dword ptr [EBP + 0x2234]    ; 0058e995
        ;   Label: LAB_0058e995
    LEA EBX,[ESP + 0x24]                ; 0058e99b
    ADD EAX,ESI                         ; 0058e99f
    FILD dword ptr [EAX]                ; 0058e9a1
    FMUL float ptr [0x00662e44]         ; 0058e9a3 | FLOAT_00662e44
    FSTP float ptr [EBX]                ; 0058e9a9
    FILD dword ptr [EAX + 0x4]          ; 0058e9ab
    FMUL float ptr [0x00662e44]         ; 0058e9ae | FLOAT_00662e44
    FSTP float ptr [EBX + 0x4]          ; 0058e9b4
    FILD dword ptr [EAX + 0x8]          ; 0058e9b7
    FMUL float ptr [0x00662e44]         ; 0058e9ba | FLOAT_00662e44
    FSTP float ptr [EBX + 0x8]          ; 0058e9c0
    LEA EAX,[ESP + 0x24]                ; 0058e9c3
    PUSH EAX                            ; 0058e9c7
    LEA EAX,[ESP + 0x4]                 ; 0058e9c8
    PUSH EAX                            ; 0058e9cc
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0058e9cd
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0058e9d2
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058e9d5
    INC EDI                             ; 0058e9d9
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0058e9da
    ADD ESI,0xc                         ; 0058e9dd
    CMP EDI,EDX                         ; 0058e9e0
    JL 0x0058e995                       ; 0058e9e2
        ;   XREF to: 0058e995 (CONDITIONAL_JUMP)  ; LAB_0058e995
    LEA EAX,[EAX]                       ; 0058e9e4
    LEA EDX,[EDX]                       ; 0058e9ea
    FLD float ptr [ESP + 0xc]           ; 0058e9f0
        ;   Label: LAB_0058e9f0
    FSUB float ptr [ESP]                ; 0058e9f4
    FST float ptr [ESP + 0x18]          ; 0058e9f7
    FDIV float ptr [ESP + 0x30]         ; 0058e9fb
    FLD float ptr [ESP + 0x10]          ; 0058e9ff
    FLD float ptr [ESP + 0x14]          ; 0058ea03
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058ea07
    FXCH                                ; 0058ea0b
    FSUB float ptr [ESP + 0x4]          ; 0058ea0d
    FXCH                                ; 0058ea11
    FSUB float ptr [ESP + 0x8]          ; 0058ea13
    FXCH                                ; 0058ea17
    FSTP float ptr [ESP + 0x1c]         ; 0058ea19
    FSTP float ptr [ESP + 0x20]         ; 0058ea1d
    FSTP float ptr [EAX + 0x7c84]       ; 0058ea21
    FLD float ptr [ESP + 0x1c]          ; 0058ea27
    FDIV float ptr [ESP + 0x34]         ; 0058ea2b
    FSTP float ptr [EAX + 0x7c88]       ; 0058ea2f
    FLD float ptr [ESP + 0x20]          ; 0058ea35
    FDIV float ptr [ESP + 0x38]         ; 0058ea39
    PUSH 0x2                            ; 0058ea3d
    MOV ECX,0x64b051                    ; 0058ea3f | = "..\\core\\skeledit.cpp"
    MOV EBX,0xa32                       ; 0058ea44
    PUSH EBP                            ; 0058ea49
    FSTP float ptr [EAX + 0x7c8c]       ; 0058ea4a
    MOV EAX,dword ptr [EBP + 0x50]      ; 0058ea50
    MOV dword ptr [0x0067d20c],ECX      ; 0058ea53 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 0058ea59 | g_CurrentDebugLine
    CALL dword ptr [EAX]                ; 0058ea5f
    ADD ESP,0x8                         ; 0058ea61
    ADD ESP,0x4c                        ; 0058ea64
    POP EBP                             ; 0058ea67
    POP EDI                             ; 0058ea68
    POP ESI                             ; 0058ea69
    POP EBX                             ; 0058ea6a
    RET                                 ; 0058ea6b
    ADD EDX,0x28508                     ; 0058ea6c
        ;   Label: LAB_0058ea6c
    PUSH EDX                            ; 0058ea72
    MOV ECX,0x64af7a                    ; 0058ea73 | = "..\\core\\skeledit.cpp"
    MOV EBX,0x9f8                       ; 0058ea78
    PUSH 0x64af8f                       ; 0058ea7d | = "CDeformableModel::calcRootOffsetScale..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0058ea82 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058ea88 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ea8e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058ea93
    JMP 0x0058e6c9                      ; 0058ea96
        ;   XREF to: 0058e6c9 (UNCONDITIONAL_JUMP)  ; LAB_0058e6c9

