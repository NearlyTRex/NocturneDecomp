; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_005af200(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_cloth.cpp_FUN_005ae680 at 005aecd8
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f10ac
;   TerminatedCString s_Can_t_orient_bone_with_n_005f10be
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af200
        ;   Label: core_cloth.cpp_CCloth_orientBoneToChild_FUN_005af200
    PUSH ESI                            ; 005af201
    PUSH EDI                            ; 005af202
    PUSH EBP                            ; 005af203
    MOV EBP,ESP                         ; 005af204
    SUB ESP,0x90                        ; 005af206
    SUB EBP,0x76                        ; 005af20c
    MOV EDX,dword ptr [EBP + 0x92]      ; 005af20f
    PUSH EDX                            ; 005af215
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005af216
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005af21b
    MOV ESI,EAX                         ; 005af221
    MOV dword ptr [EBP + 0x6a],EAX      ; 005af223
    IMUL EAX,ECX,0xac                   ; 005af226
    MOV EBX,dword ptr [EBP + 0x8a]      ; 005af22c
    ADD ESP,0x4                         ; 005af232
    ADD EBX,0x37b50                     ; 005af235
    PUSH 0x1                            ; 005af23b
    ADD EBX,EAX                         ; 005af23d
    PUSH EBX                            ; 005af23f
    PUSH ESI                            ; 005af240
    MOV EDI,0xffffffff                  ; 005af241
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005af246
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x44],0x0      ; 005af24b
    MOV dword ptr [EBP + 0x6e],EDI      ; 005af252
    MOV dword ptr [EBX + 0x40],EAX      ; 005af255
    XOR EDI,EDI                         ; 005af258
    MOV EAX,dword ptr [ESI + 0x1d1f8]   ; 005af25a
    ADD ESP,0xc                         ; 005af260
    TEST EAX,EAX                        ; 005af263
    JLE 0x005af297                      ; 005af265
        ;   XREF to: 005af297 (CONDITIONAL_JUMP)  ; LAB_005af297
    MOV EAX,dword ptr [EBP + 0x92]      ; 005af267
    ADD EAX,0x58                        ; 005af26d
    MOV ECX,ESI                         ; 005af270
    MOV ESI,EAX                         ; 005af272
    MOV EDX,dword ptr [EBX + 0x40]      ; 005af274
        ;   Label: LAB_005af274
    CMP EDX,dword ptr [ECX + 0x1d21c]   ; 005af277
    JZ 0x005af36d                       ; 005af27d
        ;   XREF to: 005af36d (CONDITIONAL_JUMP)  ; LAB_005af36d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005af283
        ;   Label: LAB_005af283
    ADD ECX,0x24                        ; 005af286
    INC EDI                             ; 005af289
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 005af28a
    ADD ESI,0xc                         ; 005af290
    CMP EDI,EDX                         ; 005af293
    JL 0x005af274                       ; 005af295
        ;   XREF to: 005af274 (CONDITIONAL_JUMP)  ; LAB_005af274
    CMP dword ptr [EBP + 0x6e],0x0      ; 005af297
        ;   Label: LAB_005af297
    JGE 0x005af2c0                      ; 005af29b
        ;   XREF to: 005af2c0 (CONDITIONAL_JUMP)  ; LAB_005af2c0
    MOV ESI,0x5f10ac                    ; 005af29d | = "..\\core\\cloth.cpp"
    MOV EDI,0x2bf                       ; 005af2a2
    PUSH 0x5f10be                       ; 005af2a7 | = "Can't orient bone with no children!"
    MOV dword ptr [0x01d046a0],ESI      ; 005af2ac | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005af2b2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005af2b8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005af2bd
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005af2c0
        ;   Label: LAB_005af2c0
    LEA EAX,[ECX*0x4 + 0x0]             ; 005af2c3
    SUB EAX,ECX                         ; 005af2ca
    MOV ECX,dword ptr [EBP + 0x92]      ; 005af2cc
    SHL EAX,0x2                         ; 005af2d2
    ADD ECX,0x58                        ; 005af2d5
    ADD EAX,ECX                         ; 005af2d8
    PUSH EAX                            ; 005af2da
    LEA ESI,[EBP + 0x52]                ; 005af2db
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005af2de
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 005af2e3
    LEA EAX,[EBP + 0x5e]                ; 005af2e6
    LEA EDI,[EBP + 0x5e]                ; 005af2e9
    PUSH EAX                            ; 005af2ec
    XOR EAX,EAX                         ; 005af2ed
    LEA ESI,[EBP + 0x52]                ; 005af2ef
    MOV dword ptr [EBP + 0x46],EAX      ; 005af2f2
    MOV dword ptr [EBP + 0x4a],EAX      ; 005af2f5
    MOV dword ptr [EBP + 0x4e],EAX      ; 005af2f8
    LEA EAX,[EBP + 0x46]                ; 005af2fb
    MOVSD ES:EDI,ESI                    ; 005af2fe
    MOVSD ES:EDI,ESI                    ; 005af2ff
    MOVSD ES:EDI,ESI                    ; 005af300
    PUSH EAX                            ; 005af301
    LEA ESI,[EBX + 0x48]                ; 005af302
    PUSH ESI                            ; 005af305
    CALL core_xform.cpp_FUN_00591ad0    ; 005af306
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005af30b
    LEA EAX,[EBX + 0x28]                ; 005af30e
    PUSH EAX                            ; 005af311
    LEA EAX,[EBX + 0x1c]                ; 005af312
    PUSH EAX                            ; 005af315
    LEA EAX,[EBP + -0x1a]               ; 005af316
    PUSH EAX                            ; 005af319
    CALL core_xform.cpp_FUN_00591ad0    ; 005af31a
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005af31f
    LEA EAX,[EBP + -0x1a]               ; 005af322
    PUSH EAX                            ; 005af325
    PUSH ESI                            ; 005af326
    LEA ESI,[EBP + 0x16]                ; 005af327
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005af32a
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005af32f
    LEA ESI,[EBP + 0x16]                ; 005af334
    LEA EDI,[EBX + 0x48]                ; 005af337
    MOVSD.REP ES:EDI,ESI                ; 005af33a
    FLD float ptr [EBX + 0x14]          ; 005af33c
    FLD1                                ; 005af33f
    FDIVRP                              ; 005af341
    FLD float ptr [EBX + 0x18]          ; 005af343
    FLD1                                ; 005af346
    FDIVRP                              ; 005af348
    ADD ESP,0x8                         ; 005af34a
    FLD float ptr [EBX + 0x34]          ; 005af34d
    FLDZ                                ; 005af350
    FXCH ST3                            ; 005af352
    FSTP float ptr [EBX + 0x38]         ; 005af354
    FXCH                                ; 005af357
    FSTP float ptr [EBX + 0x3c]         ; 005af359
    FXCH                                ; 005af35c
    FCOMPP                              ; 005af35e
    FNSTSW AX                           ; 005af360
    SAHF                                ; 005af362
    JC 0x005af39e                       ; 005af363
        ;   XREF to: 005af39e (CONDITIONAL_JUMP)  ; LAB_005af39e
    LEA ESP,[EBP + 0x76]                ; 005af365
    POP EBP                             ; 005af368
    POP EDI                             ; 005af369
    POP ESI                             ; 005af36a
    POP EBX                             ; 005af36b
    RET                                 ; 005af36c
    FLD float ptr [ESI + 0x4]           ; 005af36d
        ;   Label: LAB_005af36d
    FMUL ST0                            ; 005af370
    FLD float ptr [ESI]                 ; 005af372
    FMUL ST0                            ; 005af374
    FADDP                               ; 005af376
    FLD float ptr [ESI + 0x8]           ; 005af378
    FMUL ST0                            ; 005af37b
    FADDP                               ; 005af37d
    FSQRT                               ; 005af37f
    FST float ptr [EBP + 0x72]          ; 005af381
    FCOMP float ptr [EBX + 0x44]        ; 005af384
    FNSTSW AX                           ; 005af387
    SAHF                                ; 005af389
    JBE 0x005af283                      ; 005af38a
        ;   XREF to: 005af283 (CONDITIONAL_JUMP)  ; LAB_005af283
    MOV EAX,dword ptr [EBP + 0x72]      ; 005af390
    MOV dword ptr [EBP + 0x6e],EDI      ; 005af393
    MOV dword ptr [EBX + 0x44],EAX      ; 005af396
    JMP 0x005af283                      ; 005af399
        ;   XREF to: 005af283 (UNCONDITIONAL_JUMP)  ; LAB_005af283
    MOV EAX,dword ptr [EBX + 0x34]      ; 005af39e
        ;   Label: LAB_005af39e
    MOV dword ptr [EBX + 0x44],EAX      ; 005af3a1
    LEA ESP,[EBP + 0x76]                ; 005af3a4
    POP EBP                             ; 005af3a7
    POP EDI                             ; 005af3a8
    POP ESI                             ; 005af3a9
    POP EBX                             ; 005af3aa
    RET                                 ; 005af3ab

