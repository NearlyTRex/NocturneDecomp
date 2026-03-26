; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x94]:48  local_94
; CMatrix3x4f      Stack[-0x64]:48  local_64
; CVector3f        Stack[-0x34]:12  local_34
; CVector3f        Stack[-0x28]:12  local_28
; CSkeleton *      Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043d341
;   core_cloth.cpp_CCloth_setup_FUN_00439710 at 00439c9b
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_00618460
;   TerminatedCString s_Can_t_orient_bone_with_n_00618472
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a110
        ;   Label: core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110
    PUSH ESI                            ; 0043a111
    PUSH EDI                            ; 0043a112
    PUSH EBP                            ; 0043a113
    MOV EBP,ESP                         ; 0043a114
    SUB ESP,0x84                        ; 0043a116
    SUB EBP,0x76                        ; 0043a11c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0043a11f
    PUSH EDX                            ; 0043a125
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0043a126
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0043a12b
    MOV EDI,EAX                         ; 0043a131
    MOV dword ptr [EBP + 0x6a],EAX      ; 0043a133
    IMUL EAX,ECX,0xac                   ; 0043a136
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0043a13c
    ADD ESP,0x4                         ; 0043a142
    ADD EBX,0x3ce90                     ; 0043a145
    PUSH 0x1                            ; 0043a14b
    ADD EBX,EAX                         ; 0043a14d
    PUSH EBX                            ; 0043a14f
    PUSH EDI                            ; 0043a150
    MOV ESI,0xffffffff                  ; 0043a151
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043a156
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x44],0x0      ; 0043a15b
    MOV dword ptr [EBP + 0x6e],ESI      ; 0043a162
    MOV dword ptr [EBX + 0x40],EAX      ; 0043a165
    ADD ESP,0xc                         ; 0043a168
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0043a16b
    XOR ECX,ECX                         ; 0043a171
    TEST EAX,EAX                        ; 0043a173
    JLE 0x0043a1a3                      ; 0043a175
        ;   XREF to: 0043a1a3 (CONDITIONAL_JUMP)  ; LAB_0043a1a3
    MOV ESI,dword ptr [EBP + 0x92]      ; 0043a177
    ADD ESI,0x58                        ; 0043a17d
    MOV EDX,dword ptr [EBX + 0x40]      ; 0043a180
        ;   Label: LAB_0043a180
    CMP EDX,dword ptr [EDI + 0x2857c]   ; 0043a183
    JZ 0x0043a271                       ; 0043a189
        ;   XREF to: 0043a271 (CONDITIONAL_JUMP)  ; LAB_0043a271
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0043a18f
        ;   Label: LAB_0043a18f
    ADD EDI,0x24                        ; 0043a192
    INC ECX                             ; 0043a195
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0043a196
    ADD ESI,0xc                         ; 0043a19c
    CMP ECX,EDX                         ; 0043a19f
    JL 0x0043a180                       ; 0043a1a1
        ;   XREF to: 0043a180 (CONDITIONAL_JUMP)  ; LAB_0043a180
    CMP dword ptr [EBP + 0x6e],0x0      ; 0043a1a3
        ;   Label: LAB_0043a1a3
    JGE 0x0043a1cc                      ; 0043a1a7
        ;   XREF to: 0043a1cc (CONDITIONAL_JUMP)  ; LAB_0043a1cc
    MOV ESI,0x618460                    ; 0043a1a9 | = "..\\core\\cloth.cpp"
    MOV EDI,0x2bf                       ; 0043a1ae
    PUSH 0x618472                       ; 0043a1b3 | = "Can't orient bone with no children!"
    MOV dword ptr [0x02f0ca48],ESI      ; 0043a1b8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0043a1be | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043a1c4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043a1c9
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0043a1cc
        ;   Label: LAB_0043a1cc
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043a1cf
    SUB EAX,ECX                         ; 0043a1d6
    MOV ECX,dword ptr [EBP + 0x92]      ; 0043a1d8
    SHL EAX,0x2                         ; 0043a1de
    ADD ECX,0x58                        ; 0043a1e1
    ADD EAX,ECX                         ; 0043a1e4
    PUSH EAX                            ; 0043a1e6
    LEA EAX,[EBP + 0x52]                ; 0043a1e7
    PUSH EAX                            ; 0043a1ea
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0043a1eb
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0043a1f0
    LEA EAX,[EBP + 0x52]                ; 0043a1f3
    PUSH EAX                            ; 0043a1f6
    XOR EAX,EAX                         ; 0043a1f7
    MOV dword ptr [EBP + 0x5e],EAX      ; 0043a1f9
    MOV dword ptr [EBP + 0x62],EAX      ; 0043a1fc
    MOV dword ptr [EBP + 0x66],EAX      ; 0043a1ff
    LEA EAX,[EBP + 0x5e]                ; 0043a202
    PUSH EAX                            ; 0043a205
    LEA ESI,[EBX + 0x48]                ; 0043a206
    PUSH ESI                            ; 0043a209
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0043a20a
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0043a20f
    LEA EAX,[EBX + 0x28]                ; 0043a212
    PUSH EAX                            ; 0043a215
    LEA EAX,[EBX + 0x1c]                ; 0043a216
    PUSH EAX                            ; 0043a219
    LEA EAX,[EBP + -0xe]                ; 0043a21a
    PUSH EAX                            ; 0043a21d
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0043a21e
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0043a223
    LEA EAX,[EBP + -0xe]                ; 0043a226
    PUSH EAX                            ; 0043a229
    PUSH ESI                            ; 0043a22a
    LEA ESI,[EBP + 0x22]                ; 0043a22b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0043a22e
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc4607                      ; 0043a233
        ;   XREF to: 03fc4607 (UNCONDITIONAL_JUMP)  ; LAB_03fc4607
    FLD float ptr [EBX + 0x14]          ; 0043a240
        ;   Label: LAB_0043a240
    FLD1                                ; 0043a243
    FDIVRP                              ; 0043a245
    FLD float ptr [EBX + 0x18]          ; 0043a247
    FLD1                                ; 0043a24a
    FDIVRP                              ; 0043a24c
    ADD ESP,0x8                         ; 0043a24e
    FLD float ptr [EBX + 0x34]          ; 0043a251
    FLDZ                                ; 0043a254
    FXCH ST3                            ; 0043a256
    FSTP float ptr [EBX + 0x38]         ; 0043a258
    FXCH                                ; 0043a25b
    FSTP float ptr [EBX + 0x3c]         ; 0043a25d
    FXCH                                ; 0043a260
    FCOMPP                              ; 0043a262
    FNSTSW AX                           ; 0043a264
    SAHF                                ; 0043a266
    JC 0x0043a2a2                       ; 0043a267
        ;   XREF to: 0043a2a2 (CONDITIONAL_JUMP)  ; LAB_0043a2a2
    LEA ESP,[EBP + 0x76]                ; 0043a269
    POP EBP                             ; 0043a26c
    POP EDI                             ; 0043a26d
    POP ESI                             ; 0043a26e
    POP EBX                             ; 0043a26f
    RET                                 ; 0043a270
    FLD float ptr [ESI + 0x4]           ; 0043a271
        ;   Label: LAB_0043a271
    FMUL ST0                            ; 0043a274
    FLD float ptr [ESI]                 ; 0043a276
    FMUL ST0                            ; 0043a278
    FADDP                               ; 0043a27a
    FLD float ptr [ESI + 0x8]           ; 0043a27c
    FMUL ST0                            ; 0043a27f
    FADDP                               ; 0043a281
    FSQRT                               ; 0043a283
    FST float ptr [EBP + 0x72]          ; 0043a285
    FCOMP float ptr [EBX + 0x44]        ; 0043a288
    FNSTSW AX                           ; 0043a28b
    SAHF                                ; 0043a28d
    JBE 0x0043a18f                      ; 0043a28e
        ;   XREF to: 0043a18f (CONDITIONAL_JUMP)  ; LAB_0043a18f
    MOV EAX,dword ptr [EBP + 0x72]      ; 0043a294
    MOV dword ptr [EBP + 0x6e],ECX      ; 0043a297
    MOV dword ptr [EBX + 0x44],EAX      ; 0043a29a
    JMP 0x0043a18f                      ; 0043a29d
        ;   XREF to: 0043a18f (UNCONDITIONAL_JUMP)  ; LAB_0043a18f
    MOV EAX,dword ptr [EBX + 0x34]      ; 0043a2a2
        ;   Label: LAB_0043a2a2
    MOV dword ptr [EBX + 0x44],EAX      ; 0043a2a5
    LEA ESP,[EBP + 0x76]                ; 0043a2a8
    POP EBP                             ; 0043a2ab
    POP EDI                             ; 0043a2ac
    POP ESI                             ; 0043a2ad
    POP EBX                             ; 0043a2ae
    RET                                 ; 0043a2af
    MOV ECX,0xc                         ; 03fc4607
        ;   Label: LAB_03fc4607
    LEA ESI,[EBP + 0x22]                ; 03fc460c
    LEA EDI,[EBX + 0x48]                ; 03fc460f
    MOV ECX,dword ptr [ESI]             ; 03fc4612
    MOV dword ptr [EDI],ECX             ; 03fc4614
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4616
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4619
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc461c
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc461f
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4622
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4625
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4628
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc462b
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc462e
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4631
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4634
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc4637
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc463a
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc463d
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4640
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4643
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4646
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc4649
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc464c
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc464f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4652
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4655
    ADD ESI,0x30                        ; 03fc4658
    ADD EDI,0x30                        ; 03fc465b
    XOR ECX,ECX                         ; 03fc465e
    JMP 0x0043a240                      ; 03fc4660
        ;   XREF to: 0043a240 (UNCONDITIONAL_JUMP)  ; LAB_0043a240

