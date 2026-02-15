; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_FUN_00425fe0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_bugs.cpp_CBugs_FUN_00425cc0 at 00425fca
;   core_bugs.cpp_CBugs_process_FUN_004250f0 at 0042518c
;
; Referenced Globals:
;   double DOUBLE_00616e03 = 2
;   double DOUBLE_00616e0b = 0.0500000000000000
;   float FLOAT_00616e13 = 0.5
;   float FLOAT_0065b5d4 = 2
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_bugs.cpp_CBugs_FUN_004257f0
;   core_bugs.cpp_CBugs_FUN_004268e0
;   core_bugs.cpp_CBugs_FUN_004272f0
;   core_bugs.cpp_CBugs_FUN_004276c0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_FUN_00548500
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425fe0
        ;   Label: core_bugs.cpp_CBugs_FUN_00425fe0
    PUSH ESI                            ; 00425fe1
    PUSH EDI                            ; 00425fe2
    PUSH EBP                            ; 00425fe3
    MOV EBP,ESP                         ; 00425fe4
    SUB ESP,0x174                       ; 00425fe6
    AND ESP,0xfffffff8                  ; 00425fec
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425fef
    MOV EDX,dword ptr [EBX + 0x12af8]   ; 00425ff2
    TEST EDX,EDX                        ; 00425ff8
    JZ 0x00426216                       ; 00425ffa
        ;   XREF to: 00426216 (CONDITIONAL_JUMP)  ; LAB_00426216
    MOV ECX,dword ptr [EBX + 0xbec0]    ; 00426000
    XOR EAX,EAX                         ; 00426006
    XOR EDI,EDI                         ; 00426008
    TEST ECX,ECX                        ; 0042600a
    JLE 0x00426028                      ; 0042600c
        ;   XREF to: 00426028 (CONDITIONAL_JUMP)  ; LAB_00426028
    MOV ESI,EBX                         ; 0042600e
    CMP dword ptr [ESI + 0xbef0],0x0    ; 00426010
        ;   Label: LAB_00426010
    JL 0x0042601a                       ; 00426017
        ;   XREF to: 0042601a (CONDITIONAL_JUMP)  ; LAB_0042601a
    INC EDI                             ; 00426019
    INC EAX                             ; 0042601a
        ;   Label: LAB_0042601a
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 0042601b
    ADD ESI,0x40                        ; 00426021
    CMP EAX,EDX                         ; 00426024
    JL 0x00426010                       ; 00426026
        ;   XREF to: 00426010 (CONDITIONAL_JUMP)  ; LAB_00426010
    CMP EDI,dword ptr [EBX + 0xbec0]    ; 00426028
        ;   Label: LAB_00426028
    JL 0x00426223                       ; 0042602e
        ;   XREF to: 00426223 (CONDITIONAL_JUMP)  ; LAB_00426223
    TEST EDI,EDI                        ; 00426034
        ;   Label: LAB_00426034
    JLE 0x004260b8                      ; 00426036
        ;   XREF to: 004260b8 (CONDITIONAL_JUMP)  ; LAB_004260b8
    FLD float ptr [EBX + 0x199f4]       ; 0042603c
    FSUB float ptr [EBP + 0x18]         ; 00426042
    FST float ptr [EBX + 0x199f4]       ; 00426045
    FLDZ                                ; 0042604b
    FCOMPP                              ; 0042604d
    FNSTSW AX                           ; 0042604f
    SAHF                                ; 00426051
    JC 0x004260b8                       ; 00426052
        ;   XREF to: 004260b8 (CONDITIONAL_JUMP)  ; LAB_004260b8
    MOV ECX,dword ptr [0x00823c4c]      ; 00426054 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0042605a
    MOV ESI,dword ptr [EBX + 0x12af8]   ; 0042605b
    PUSH ESI                            ; 00426061
    MOV dword ptr [EBX + 0x199f4],0x3e4ccccd ; 00426062
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042606c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00426071
    ADD ESP,0x8                         ; 00426073
    TEST EAX,EAX                        ; 00426076
    JZ 0x004260b8                       ; 00426078
        ;   XREF to: 004260b8 (CONDITIONAL_JUMP)  ; LAB_004260b8
    MOV EAX,ESP                         ; 0042607a
    PUSH EAX                            ; 0042607c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0042607d
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00426082
    MOV dword ptr [ESP + 0x170],EDI     ; 00426085
    MOV EAX,ESP                         ; 0042608c
    FILD dword ptr [ESP + 0x170]        ; 0042608e
    FMUL double ptr [0x00616e0b]        ; 00426095 | DOUBLE_00616e0b
    PUSH EAX                            ; 0042609b
    MOV dword ptr [ESP + 0x38],EBX      ; 0042609c
    MOV dword ptr [ESP + 0x3c],EBX      ; 004260a0
    PUSH ESI                            ; 004260a4
    FSTP float ptr [ESP + 0xc]          ; 004260a5
    MOV EDX,dword ptr [ESI + 0x154]     ; 004260a9
    CALL dword ptr [EDX + 0x11c]        ; 004260af
    ADD ESP,0x8                         ; 004260b5
    MOV EAX,dword ptr [EBX + 0x12af8]   ; 004260b8
        ;   Label: LAB_004260b8
    LEA EDX,[EAX + 0x30]                ; 004260be
    PUSH EDX                            ; 004260c1
    ADD EAX,0x20                        ; 004260c2
    PUSH EAX                            ; 004260c5
    LEA EAX,[ESP + 0x74]                ; 004260c6
    PUSH EAX                            ; 004260ca
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004260cb
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004260d0
    LEA EAX,[EBX + 0x30]                ; 004260d3
    PUSH EAX                            ; 004260d6
    LEA EAX,[EBX + 0x20]                ; 004260d7
    PUSH EAX                            ; 004260da
    LEA EAX,[ESP + 0x44]                ; 004260db
    PUSH EAX                            ; 004260df
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 004260e0
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004260e5
    LEA EAX,[ESP + 0x3c]                ; 004260e8
    PUSH EAX                            ; 004260ec
    LEA EAX,[ESP + 0x70]                ; 004260ed
    PUSH EAX                            ; 004260f1
    LEA ESI,[ESP + 0xa4]                ; 004260f2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004260f9
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004260fe
    LEA ESI,[ESP + 0xa4]                ; 00426103
    LEA EDI,[EBX + 0x12b00]             ; 0042610a
    ADD ESP,0x8                         ; 00426110
    MOVSD.REP ES:EDI,ESI                ; 00426113
    MOV EAX,dword ptr [EBX + 0x12afc]   ; 00426115
    MOV EDI,dword ptr [EBX + 0x12b30]   ; 0042611b
    CMP EDI,dword ptr [EAX + 0x2230]    ; 00426121
    JZ 0x00426133                       ; 00426127
        ;   XREF to: 00426133 (CONDITIONAL_JUMP)  ; LAB_00426133
    PUSH EDI                            ; 00426129
    PUSH EAX                            ; 0042612a
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0042612b
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00426130
    MOV ECX,dword ptr [EBX + 0xbec0]    ; 00426133
        ;   Label: LAB_00426133
    XOR EDI,EDI                         ; 00426139
    TEST ECX,ECX                        ; 0042613b
    JLE 0x00426160                      ; 0042613d
        ;   XREF to: 00426160 (CONDITIONAL_JUMP)  ; LAB_00426160
    LEA ESI,[EBX + 0xbec4]              ; 0042613f
    PUSH dword ptr [EBP + 0x18]         ; 00426145
        ;   Label: LAB_00426145
    PUSH ESI                            ; 00426148
    PUSH EBX                            ; 00426149
    INC EDI                             ; 0042614a
    CALL core_bugs.cpp_CBugs_FUN_004268e0 ; 0042614b
        ;   XREF to: 004268e0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004268e0(CBugs * this_ptr)
    ADD ESI,0x40                        ; 00426150
    MOV ECX,dword ptr [EBX + 0xbec0]    ; 00426153
    ADD ESP,0xc                         ; 00426159
    CMP EDI,ECX                         ; 0042615c
    JL 0x00426145                       ; 0042615e
        ;   XREF to: 00426145 (CONDITIONAL_JUMP)  ; LAB_00426145
    PUSH EBX                            ; 00426160
        ;   Label: LAB_00426160
    CALL core_bugs.cpp_CBugs_FUN_004272f0 ; 00426161
        ;   XREF to: 004272f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004272f0(CBugs * this_ptr)
    LEA EAX,[EBX + 0x199cc]             ; 00426166
    LEA ESI,[EBX + 0x199d8]             ; 0042616c
    FLD float ptr [EAX]                 ; 00426172
    FADD float ptr [ESI]                ; 00426174
    ADD ESP,0x4                         ; 00426176
    FST float ptr [ESP + 0x130]         ; 00426179
    FLD float ptr [EAX + 0x4]           ; 00426180
    FADD float ptr [ESI + 0x4]          ; 00426183
    FXCH                                ; 00426186
    FLD float ptr [0x00616e13]          ; 00426188 | FLOAT_00616e13
    FXCH                                ; 0042618e
    FMUL ST1                            ; 00426190
    FXCH ST2                            ; 00426192
    FST float ptr [ESP + 0x134]         ; 00426194
    FLD float ptr [EAX + 0x8]           ; 0042619b
    FADD float ptr [ESI + 0x8]          ; 0042619e
    FXCH                                ; 004261a1
    FMUL ST2                            ; 004261a3
    FXCH                                ; 004261a5
    FST float ptr [ESP + 0x138]         ; 004261a7
    FMULP ST2                           ; 004261ae
    LEA EAX,[EBX + 0x20]                ; 004261b0
    FXCH ST2                            ; 004261b3
    FSTP float ptr [ESP + 0x100]        ; 004261b5
    FXCH                                ; 004261bc
    FSTP float ptr [ESP + 0x104]        ; 004261be
    FSTP float ptr [ESP + 0x108]        ; 004261c5
    FLD float ptr [EAX]                 ; 004261cc
    FADD float ptr [ESP + 0x100]        ; 004261ce
    FSTP float ptr [ESP + 0x154]        ; 004261d5
    FLD float ptr [EAX + 0x4]           ; 004261dc
    FADD float ptr [ESP + 0x104]        ; 004261df
    FSTP float ptr [ESP + 0x158]        ; 004261e6
    FLD float ptr [EAX + 0x8]           ; 004261ed
    LEA EAX,[ESP + 0x154]               ; 004261f0
    PUSH EAX                            ; 004261f7
    FADD float ptr [ESP + 0x10c]        ; 004261f8
    PUSH EBX                            ; 004261ff
    FSTP float ptr [ESP + 0x164]        ; 00426200
    CALL core_bugs.cpp_CBugs_FUN_004276c0 ; 00426207
        ;   XREF to: 004276c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004276c0(CBugs * this_ptr)
    ADD ESP,0x8                         ; 0042620c
    MOV ESP,EBP                         ; 0042620f
    POP EBP                             ; 00426211
    POP EDI                             ; 00426212
    POP ESI                             ; 00426213
    POP EBX                             ; 00426214
    RET                                 ; 00426215
    MOV dword ptr [EBX + 0xbebc],EDX    ; 00426216
        ;   Label: LAB_00426216
    MOV ESP,EBP                         ; 0042621c
    POP EBP                             ; 0042621e
    POP EDI                             ; 0042621f
    POP ESI                             ; 00426220
    POP EBX                             ; 00426221
    RET                                 ; 00426222
    LEA EAX,[EBX + 0x20]                ; 00426223
        ;   Label: LAB_00426223
    MOV ESI,dword ptr [EBX + 0x12af8]   ; 00426226
    FLD float ptr [EAX]                 ; 0042622c
    FSUB float ptr [ESI + 0x20]         ; 0042622e
    FSTP float ptr [ESP + 0x13c]        ; 00426231
    FLD float ptr [EAX + 0x4]           ; 00426238
    FSUB float ptr [ESI + 0x24]         ; 0042623b
    FST float ptr [ESP + 0x140]         ; 0042623e
    FLD float ptr [EAX + 0x8]           ; 00426245
    FXCH                                ; 00426248
    FABS                                ; 0042624a
    FXCH                                ; 0042624c
    FSUB float ptr [ESI + 0x28]         ; 0042624e
    FSTP float ptr [ESP + 0x144]        ; 00426251
    FCOMP double ptr [0x00616e03]       ; 00426258 | DOUBLE_00616e03
    FNSTSW AX                           ; 0042625e
    SAHF                                ; 00426260
    JBE 0x004263c3                      ; 00426261
        ;   XREF to: 004263c3 (CONDITIONAL_JUMP)  ; LAB_004263c3
    MOV EAX,dword ptr [EBX + 0x12af8]   ; 00426267
        ;   Label: LAB_00426267
    PUSH EAX                            ; 0042626d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042626e
    CALL dword ptr [EDX + 0xbc]         ; 00426274
    ADD ESP,0x4                         ; 0042627a
    MOV EDX,EAX                         ; 0042627d
    TEST EAX,EAX                        ; 0042627f
    JNZ 0x00426297                      ; 00426281
        ;   XREF to: 00426297 (CONDITIONAL_JUMP)  ; LAB_00426297
    MOV EAX,dword ptr [EBX + 0x12af8]   ; 00426283
    ADD EAX,0x20                        ; 00426289
    PUSH EAX                            ; 0042628c
    CALL core_path.cpp_FUN_00548500     ; 0042628d
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 00426292
    MOV EDX,EAX                         ; 00426295
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00426297
        ;   Label: LAB_00426297
    PUSH ESI                            ; 0042629a
    LEA EAX,[ESP + 0x128]               ; 0042629b
    PUSH EAX                            ; 004262a2
    LEA ESI,[EBX + 0x20]                ; 004262a3
    PUSH ESI                            ; 004262a6
    PUSH EDX                            ; 004262a7
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 004262a8
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004262ad
    TEST EAX,EAX                        ; 004262b0
    JZ 0x004263b5                       ; 004262b2
        ;   XREF to: 004263b5 (CONDITIONAL_JUMP)  ; LAB_004263b5
    LEA EAX,[ESP + 0x124]               ; 004262b8
    PUSH EAX                            ; 004262bf
    LEA EAX,[ESP + 0xd0]                ; 004262c0
    PUSH EAX                            ; 004262c7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004262c8
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [0x0065b5d4]          ; 004262cd | FLOAT_0065b5d4
    ADD ESP,0x8                         ; 004262d3
    XOR EAX,EAX                         ; 004262d6
    FMUL float ptr [EBP + 0x18]         ; 004262d8
    MOV dword ptr [ESP + 0xf4],EAX      ; 004262db
    MOV dword ptr [ESP + 0xf8],EAX      ; 004262e2
    FSTP float ptr [ESP + 0x16c]        ; 004262e9
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004262f0
    MOV dword ptr [ESP + 0xfc],EAX      ; 004262f7
    LEA EAX,[ESP + 0xf4]                ; 004262fe
    PUSH EAX                            ; 00426305
    LEA EAX,[ESP + 0x110]               ; 00426306
    PUSH EAX                            ; 0042630d
    LEA EAX,[ESP + 0xd4]                ; 0042630e
    PUSH EAX                            ; 00426315
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00426316
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0042631b
    MOV EAX,dword ptr [ESI]             ; 0042631e
    MOV dword ptr [ESP + 0x148],EAX     ; 00426320
    LEA EAX,[ESI + 0x4]                 ; 00426327
    MOV dword ptr [ESP + 0x16c],EAX     ; 0042632a
    MOV EAX,dword ptr [EAX]             ; 00426331
    MOV dword ptr [ESP + 0x14c],EAX     ; 00426333
    LEA EAX,[ESI + 0x8]                 ; 0042633a
    MOV dword ptr [ESP + 0x170],EAX     ; 0042633d
    MOV EAX,dword ptr [EAX]             ; 00426344
    MOV dword ptr [ESP + 0x150],EAX     ; 00426346
    LEA EAX,[ESP + 0x10c]               ; 0042634d
    PUSH EAX                            ; 00426354
    PUSH EBX                            ; 00426355
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 00426356
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0042635b
    MOV EAX,dword ptr [ESI]             ; 0042635e
    MOV dword ptr [ESP + 0x118],EAX     ; 00426360
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00426367
    MOV EAX,dword ptr [EAX]             ; 0042636e
    MOV dword ptr [ESP + 0x11c],EAX     ; 00426370
    MOV EAX,dword ptr [ESP + 0x170]     ; 00426377
    MOV EAX,dword ptr [EAX]             ; 0042637e
    MOV dword ptr [ESP + 0x120],EAX     ; 00426380
    MOV EAX,dword ptr [ESP + 0x148]     ; 00426387
    MOV dword ptr [ESI],EAX             ; 0042638e
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00426390
    MOV dword ptr [ESI + 0x4],EAX       ; 00426397
    MOV EAX,dword ptr [ESP + 0x150]     ; 0042639a
    MOV dword ptr [ESI + 0x8],EAX       ; 004263a1
    LEA EAX,[ESP + 0x118]               ; 004263a4
    PUSH EAX                            ; 004263ab
    PUSH EBX                            ; 004263ac
    CALL core_bugs.cpp_CBugs_FUN_004276c0 ; 004263ad
        ;   XREF to: 004276c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004276c0(CBugs * this_ptr)
    ADD ESP,0x8                         ; 004263b2
    PUSH EBX                            ; 004263b5
        ;   Label: LAB_004263b5
    CALL core_bugs.cpp_CBugs_FUN_004257f0 ; 004263b6
        ;   XREF to: 004257f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004257f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004263bb
    JMP 0x00426034                      ; 004263be
        ;   XREF to: 00426034 (UNCONDITIONAL_JUMP)  ; LAB_00426034
    FLD float ptr [ESP + 0x13c]         ; 004263c3
        ;   Label: LAB_004263c3
    FABS                                ; 004263ca
    FCOMP double ptr [0x00616e03]       ; 004263cc | DOUBLE_00616e03
    FNSTSW AX                           ; 004263d2
    SAHF                                ; 004263d4
    JA 0x00426267                       ; 004263d5
        ;   XREF to: 00426267 (CONDITIONAL_JUMP)  ; LAB_00426267
    FLD float ptr [ESP + 0x144]         ; 004263db
    FABS                                ; 004263e2
    FCOMP double ptr [0x00616e03]       ; 004263e4 | DOUBLE_00616e03
    FNSTSW AX                           ; 004263ea
    SAHF                                ; 004263ec
    JA 0x00426267                       ; 004263ed
        ;   XREF to: 00426267 (CONDITIONAL_JUMP)  ; LAB_00426267
    PUSH EBX                            ; 004263f3
    CALL core_bugs.cpp_CBugs_FUN_004257f0 ; 004263f4
        ;   XREF to: 004257f0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_004257f0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004263f9
    JMP 0x00426034                      ; 004263fc
        ;   XREF to: 00426034 (UNCONDITIONAL_JUMP)  ; LAB_00426034

