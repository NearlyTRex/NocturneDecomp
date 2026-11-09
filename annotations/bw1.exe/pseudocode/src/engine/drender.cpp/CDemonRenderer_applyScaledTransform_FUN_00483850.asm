; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; CVector3f *      Stack[0xc]:4   translation
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[55]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 at 004087d8
;   core_anvil.cpp_FUN_0040e7b0 at 0040e7ea
;   core_baron.cpp_FUN_004101f0 at 004102bf
;   core_battery.cpp_FUN_00414500 at 0041452a
;   core_bodypart.cpp_FUN_00418fc0 at 0041909a
;   core_boxactor.cpp_FUN_004224f0 at 00422565
;   core_boxactor.cpp_FUN_00422600 at 0042264d
;   core_bugs.cpp_FUN_00425480 at 00425550
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0 at 0042f49d
;   core_cloth.cpp_FUN_00441500 at 00441552
;   ... and 45 more
;
; Referenced Globals:
;   undefined4 DAT_005db384
;   undefined4 DAT_005db38c
;   undefined4 DAT_005db394
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_matrix.c_matrixPushAndTransform_FUN_00507c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483850
        ;   Label: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
    PUSH EBP                            ; 00483851
    SUB ESP,0xc                         ; 00483852
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00483855
    MOV EDX,dword ptr [ESP + 0x20]      ; 00483859
    TEST EDX,EDX                        ; 0048385d
    JNZ 0x004838cc                      ; 0048385f
        ;   XREF to: 004838cc (CONDITIONAL_JUMP)  ; LAB_004838cc
    FLD float ptr [0x005db38c]          ; 00483861 | DAT_005db38c
    FLD float ptr [EAX + 0x4]           ; 00483867
    FMUL ST1                            ; 0048386a
    FLD float ptr [EAX + 0x8]           ; 0048386c
    FMUL ST2                            ; 0048386f
    FLD float ptr [EAX]                 ; 00483871
    FMULP ST3                           ; 00483873
    FXCH                                ; 00483875
    FLD double ptr [0x005db394]         ; 00483877 | DAT_005db394
    FXCH                                ; 0048387d
    FMUL ST1                            ; 0048387f
    PUSH EDX                            ; 00483881
    FXCH ST2                            ; 00483882
    FMUL ST1                            ; 00483884
    PUSH EDX                            ; 00483886
    FXCH ST3                            ; 00483887
    FMULP                               ; 00483889
    PUSH EDX                            ; 0048388b
    FXCH                                ; 0048388c
    CALL crt_math.c_round_FUN_005c03a0  ; 0048388e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00483893
    CALL crt_math.c_round_FUN_005c03a0  ; 00483895
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0048389a
    FISTP dword ptr [ESP + 0x10]        ; 0048389c
    FXCH                                ; 004838a0
    FISTP dword ptr [ESP + 0xc]         ; 004838a2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004838a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 004838aa
    PUSH EDX                            ; 004838ae
    CALL crt_math.c_round_FUN_005c03a0  ; 004838af
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 004838b4
    FISTP dword ptr [ESP + 0x14]        ; 004838b5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004838b9
    PUSH EBX                            ; 004838bd
    CALL engine_matrix.c_matrixPushAndTransform_FUN_00507c70 ; 004838be
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_00507c70(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 004838c3
    ADD ESP,0xc                         ; 004838c6
    POP EBP                             ; 004838c9
    POP EBX                             ; 004838ca
    RET                                 ; 004838cb
    PUSH EDI                            ; 004838cc
        ;   Label: LAB_004838cc
    PUSH ESI                            ; 004838cd
    FLD double ptr [0x005db384]         ; 004838ce | DAT_005db384
    FLD float ptr [EDX + 0x8]           ; 004838d4
    FMUL ST1                            ; 004838d7
    FLD float ptr [EDX + 0x4]           ; 004838d9
    FMUL ST2                            ; 004838dc
    FLD float ptr [EDX]                 ; 004838de
    FMULP ST3                           ; 004838e0
    FLD float ptr [0x005db38c]          ; 004838e2 | DAT_005db38c
    FLD float ptr [EAX + 0x4]           ; 004838e8
    FMUL ST1                            ; 004838eb
    FLD float ptr [EAX + 0x8]           ; 004838ed
    FMUL ST2                            ; 004838f0
    FLD float ptr [EAX]                 ; 004838f2
    FMULP ST3                           ; 004838f4
    FXCH                                ; 004838f6
    FLD double ptr [0x005db394]         ; 004838f8 | DAT_005db394
    FXCH                                ; 004838fe
    FMUL ST1                            ; 00483900
    FXCH ST2                            ; 00483902
    FMUL ST1                            ; 00483904
    FXCH ST3                            ; 00483906
    FMULP                               ; 00483908
    FXCH ST4                            ; 0048390a
    CALL crt_math.c_round_FUN_005c03a0  ; 0048390c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 00483911
    CALL crt_math.c_round_FUN_005c03a0  ; 00483913
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST5                            ; 00483918
    CALL crt_math.c_round_FUN_005c03a0  ; 0048391a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0048391f
    FISTP dword ptr [ESP + 0x8]         ; 00483921
    FXCH ST4                            ; 00483925
    FISTP dword ptr [ESP + 0x10]        ; 00483927
    FXCH                                ; 0048392b
    FISTP dword ptr [ESP + 0xc]         ; 0048392d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00483931
    MOV EBX,dword ptr [ESP + 0x10]      ; 00483935
    MOV ESI,dword ptr [ESP + 0xc]       ; 00483939
    FXCH ST2                            ; 0048393d
    CALL crt_math.c_round_FUN_005c03a0  ; 0048393f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00483944
    CALL crt_math.c_round_FUN_005c03a0  ; 00483946
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048394b
    FXCH ST2                            ; 0048394c
    FISTP dword ptr [ESP + 0x10]        ; 0048394e
    PUSH EBX                            ; 00483952
    FXCH                                ; 00483953
    FISTP dword ptr [ESP + 0x18]        ; 00483955
    PUSH ESI                            ; 00483959
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048395a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048395e
    PUSH EDI                            ; 00483962
    CALL crt_math.c_round_FUN_005c03a0  ; 00483963
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EBP                            ; 00483968
    FISTP dword ptr [ESP + 0x24]        ; 00483969
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048396d
    PUSH EAX                            ; 00483971
    CALL engine_matrix.c_matrixPushAndTransform_FUN_00507c70 ; 00483972
        ;   XREF to: 00507c70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_00507c70(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 00483977
    POP ESI                             ; 0048397a
    POP EDI                             ; 0048397b
    ADD ESP,0xc                         ; 0048397c
    POP EBP                             ; 0048397f
    POP EBX                             ; 00483980
    RET                                 ; 00483981

