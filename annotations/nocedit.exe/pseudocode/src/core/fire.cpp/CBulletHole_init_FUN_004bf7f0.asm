; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_init_FUN_004bf7f0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   hit_position
; CVector3f *      Stack[0xc]:4   surface_normal
; CDemonActor *    Stack[0x10]:4   hit_actor
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; CMatrix3x4f      Stack[-0x10c]:48  local_10c
; CMatrix3x4f      Stack[-0xdc]:48  local_dc
; CMatrix3x4f      Stack[-0xac]:48  local_ac
; CMatrix3x4f      Stack[-0x7c]:48  local_7c
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; CVector3f        Stack[-0x40]:12  local_40
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; CVector3f        Stack[-0x28]:12  local_28
; CVector3f        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 at 004c7861
;
; Referenced Globals:
;   float g_BulletHoleNormalOffset = 0.1000000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf7f0
        ;   Label: core_fire.cpp_CBulletHole_init_FUN_004bf7f0
    PUSH ESI                            ; 004bf7f1
    PUSH EDI                            ; 004bf7f2
    PUSH EBP                            ; 004bf7f3
    SUB ESP,0xfc                        ; 004bf7f4
    MOV EBX,dword ptr [ESP + 0x110]     ; 004bf7fa
    MOV EAX,dword ptr [ESP + 0x114]     ; 004bf801
    MOV EBP,dword ptr [ESP + 0x118]     ; 004bf808
    CMP EBX,EAX                         ; 004bf80f
    JNZ 0x004bf8f8                      ; 004bf811
        ;   XREF to: 004bf8f8 (CONDITIONAL_JUMP)  ; LAB_004bf8f8
    FLD float ptr [0x00629c4f]          ; 004bf817 | g_BulletHoleNormalOffset
        ;   Label: LAB_004bf817
    FLD float ptr [EBP]                 ; 004bf81d
    FMUL ST1                            ; 004bf820
    FSTP float ptr [ESP + 0xc0]         ; 004bf822
    FLD float ptr [EBP + 0x4]           ; 004bf829
    FMUL ST1                            ; 004bf82c
    FSTP float ptr [ESP + 0xc4]         ; 004bf82e
    FMUL float ptr [EBP + 0x8]          ; 004bf835
    FSTP float ptr [ESP + 0xc8]         ; 004bf838
    FLD float ptr [EBX]                 ; 004bf83f
    FADD float ptr [ESP + 0xc0]         ; 004bf841
    FSTP float ptr [ESP + 0xd8]         ; 004bf848
    FLD float ptr [EBX + 0x4]           ; 004bf84f
    FADD float ptr [ESP + 0xc4]         ; 004bf852
    FSTP float ptr [ESP + 0xdc]         ; 004bf859
    FLD float ptr [EBX + 0x8]           ; 004bf860
    FADD float ptr [ESP + 0xc8]         ; 004bf863
    LEA EAX,[ESP + 0xd8]                ; 004bf86a
    FSTP float ptr [ESP + 0xe0]         ; 004bf871
    CMP EBX,EAX                         ; 004bf878
    JZ 0x004bf899                       ; 004bf87a
        ;   XREF to: 004bf899 (CONDITIONAL_JUMP)  ; LAB_004bf899
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004bf87c
    MOV dword ptr [EBX],EAX             ; 004bf883
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004bf885
    MOV dword ptr [EBX + 0x4],EAX       ; 004bf88c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004bf88f
    MOV dword ptr [EBX + 0x8],EAX       ; 004bf896
    FLD float ptr [EBP + 0x8]           ; 004bf899
        ;   Label: LAB_004bf899
    FMUL ST0                            ; 004bf89c
    FLD float ptr [EBP]                 ; 004bf89e
    FMUL ST0                            ; 004bf8a1
    FADDP                               ; 004bf8a3
    FSQRT                               ; 004bf8a5
    FLD float ptr [EBP + 0x4]           ; 004bf8a7
    CALL crt_math.c_atan2_FUN_006013b1  ; 004bf8aa
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    MOV dword ptr [EBX + 0x1c],0x0      ; 004bf8af
    FCHS                                ; 004bf8b6
    FSTP float ptr [EBX + 0x14]         ; 004bf8b8
    FLD float ptr [EBP + 0x8]           ; 004bf8bb
    FLD float ptr [EBP]                 ; 004bf8be
    FXCH                                ; 004bf8c1
    FPATAN                              ; 004bf8c3
    NOP                                 ; 004bf8c5
    PUSH 0x3                            ; 004bf8c6
    PUSH 0x0                            ; 004bf8c8
    FSTP float ptr [EBX + 0x18]         ; 004bf8ca
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004bf8cd
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc],0x1       ; 004bf8d2
    ADD ESP,0x8                         ; 004bf8d9
    MOV dword ptr [EBX + 0x20],EAX      ; 004bf8dc
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004bf8df
    MOV dword ptr [EBX + 0x10],EAX      ; 004bf8e6
    TEST EAX,EAX                        ; 004bf8e9
    JNZ 0x004bf90d                      ; 004bf8eb
        ;   XREF to: 004bf90d (CONDITIONAL_JUMP)  ; LAB_004bf90d
    ADD ESP,0xfc                        ; 004bf8ed
        ;   Label: LAB_004bf8ed
    POP EBP                             ; 004bf8f3
    POP EDI                             ; 004bf8f4
    POP ESI                             ; 004bf8f5
    POP EBX                             ; 004bf8f6
    RET                                 ; 004bf8f7
    MOV EDX,dword ptr [EAX]             ; 004bf8f8
        ;   Label: LAB_004bf8f8
    MOV dword ptr [EBX],EDX             ; 004bf8fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bf8fc
    MOV dword ptr [EBX + 0x4],EDX       ; 004bf8ff
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bf902
    MOV dword ptr [EBX + 0x8],EDX       ; 004bf905
    JMP 0x004bf817                      ; 004bf908
        ;   XREF to: 004bf817 (UNCONDITIONAL_JUMP)  ; LAB_004bf817
    LEA EAX,[EBX + 0x14]                ; 004bf90d
        ;   Label: LAB_004bf90d
    PUSH EAX                            ; 004bf910
    PUSH EBX                            ; 004bf911
    LEA EAX,[ESP + 0x8]                 ; 004bf912
    PUSH EAX                            ; 004bf916
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004bf917
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x10]      ; 004bf91c
    ADD ESP,0xc                         ; 004bf91f
    LEA EDX,[EAX + 0x30]                ; 004bf922
    PUSH EDX                            ; 004bf925
    ADD EAX,0x20                        ; 004bf926
    PUSH EAX                            ; 004bf929
    LEA EAX,[ESP + 0x38]                ; 004bf92a
    PUSH EAX                            ; 004bf92e
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 004bf92f
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004bf934
    LEA EAX,[ESP + 0x30]                ; 004bf937
    PUSH EAX                            ; 004bf93b
    LEA EAX,[ESP + 0x4]                 ; 004bf93c
    PUSH EAX                            ; 004bf940
    LEA ESI,[ESP + 0x98]                ; 004bf941
    LEA EDI,[ESP + 0x68]                ; 004bf948
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004bf94c
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 004bf951
    LEA EAX,[ESP + 0xcc]                ; 004bf954
    MOV ECX,0xc                         ; 004bf95b
    PUSH EAX                            ; 004bf960
    LEA EAX,[ESP + 0x64]                ; 004bf961
    LEA ESI,[ESP + 0x94]                ; 004bf965
    PUSH EAX                            ; 004bf96c
    MOVSD.REP ES:EDI,ESI                ; 004bf96d
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 004bf96f
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    LEA EDX,[EBX + 0x24]                ; 004bf974
    ADD ESP,0x8                         ; 004bf977
    CMP EDX,EAX                         ; 004bf97a
    JZ 0x004bf98e                       ; 004bf97c
        ;   XREF to: 004bf98e (CONDITIONAL_JUMP)  ; LAB_004bf98e
    MOV ECX,dword ptr [EAX]             ; 004bf97e
    MOV dword ptr [EDX],ECX             ; 004bf980
    MOV ECX,dword ptr [EAX + 0x4]       ; 004bf982
    MOV dword ptr [EDX + 0x4],ECX       ; 004bf985
    MOV ECX,dword ptr [EAX + 0x8]       ; 004bf988
    MOV dword ptr [EDX + 0x8],ECX       ; 004bf98b
    LEA EAX,[ESP + 0xf0]                ; 004bf98e
        ;   Label: LAB_004bf98e
    PUSH EAX                            ; 004bf995
    LEA EAX,[ESP + 0x64]                ; 004bf996
    PUSH EAX                            ; 004bf99a
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 004bf99b
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    LEA EDX,[EBX + 0x14]                ; 004bf9a0
    ADD ESP,0x8                         ; 004bf9a3
    CMP EDX,EAX                         ; 004bf9a6
    JZ 0x004bf9ba                       ; 004bf9a8
        ;   XREF to: 004bf9ba (CONDITIONAL_JUMP)  ; LAB_004bf9ba
    MOV ECX,dword ptr [EAX]             ; 004bf9aa
    MOV dword ptr [EDX],ECX             ; 004bf9ac
    MOV ECX,dword ptr [EAX + 0x4]       ; 004bf9ae
    MOV dword ptr [EDX + 0x4],ECX       ; 004bf9b1
    MOV ECX,dword ptr [EAX + 0x8]       ; 004bf9b4
    MOV dword ptr [EDX + 0x8],ECX       ; 004bf9b7
    PUSH EBP                            ; 004bf9ba
        ;   Label: LAB_004bf9ba
    LEA EAX,[ESP + 0xe8]                ; 004bf9bb
    PUSH EAX                            ; 004bf9c2
    MOV ECX,dword ptr [EBX + 0x10]      ; 004bf9c3
    PUSH ECX                            ; 004bf9c6
    ADD EBX,0x30                        ; 004bf9c7
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 004bf9ca
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 004bf9cf
    CMP EBX,EAX                         ; 004bf9d2
    JZ 0x004bf8ed                       ; 004bf9d4
        ;   XREF to: 004bf8ed (CONDITIONAL_JUMP)  ; LAB_004bf8ed
    MOV EDX,dword ptr [EAX]             ; 004bf9da
    MOV dword ptr [EBX],EDX             ; 004bf9dc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bf9de
    MOV dword ptr [EBX + 0x4],EDX       ; 004bf9e1
    MOV EDX,dword ptr [EAX + 0x8]       ; 004bf9e4
    MOV dword ptr [EBX + 0x8],EDX       ; 004bf9e7
    ADD ESP,0xfc                        ; 004bf9ea
    POP EBP                             ; 004bf9f0
    POP EDI                             ; 004bf9f1
    POP ESI                             ; 004bf9f2
    POP EBX                             ; 004bf9f3
    RET                                 ; 004bf9f4

