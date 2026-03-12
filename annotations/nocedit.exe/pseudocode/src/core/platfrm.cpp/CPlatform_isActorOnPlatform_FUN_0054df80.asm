; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0054df80(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; SCollisionInfo   Stack[-0x88]:40  local_88
; CBoundingBox3D   Stack[-0x60]:24  CStack_60
; CVector3f        Stack[-0x48]:12  CStack_48
; CVector3f        Stack[-0x3c]:12  CStack_3c
; CVector3f        Stack[-0x30]:12  CStack_30
; CVector3f        Stack[-0x24]:12  CStack_24
; float            Stack[-0x18]:4  fStack_18
;
; XREF[1]:
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30 at 0054d4ce
;
; Referenced Globals:
;   double DOUBLE_0063f97e = 0.0100000000000000
;   float FLOAT_0063f986 = -1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054df80
        ;   Label: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0054df80
    PUSH ESI                            ; 0054df81
    PUSH EDI                            ; 0054df82
    PUSH EBP                            ; 0054df83
    MOV EBP,ESP                         ; 0054df84
    SUB ESP,0x7c                        ; 0054df86
    AND ESP,0xfffffff8                  ; 0054df89
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054df8c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0054df8f
    TEST ESI,ESI                        ; 0054df92
    JNZ 0x0054df9f                      ; 0054df94
        ;   XREF to: 0054df9f (CONDITIONAL_JUMP)  ; LAB_0054df9f
    XOR EAX,EAX                         ; 0054df96
        ;   Label: LAB_0054df96
    MOV ESP,EBP                         ; 0054df98
    POP EBP                             ; 0054df9a
    POP EDI                             ; 0054df9b
    POP ESI                             ; 0054df9c
    POP EBX                             ; 0054df9d
    RET                                 ; 0054df9e
    LEA EAX,[ESP + 0x8]                 ; 0054df9f
        ;   Label: LAB_0054df9f
    PUSH EAX                            ; 0054dfa3
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 0054dfa4
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0054dfa9
    LEA EAX,[ESP + 0x8]                 ; 0054dfac
    XOR EDX,EDX                         ; 0054dfb0
    PUSH EAX                            ; 0054dfb2
    MOV dword ptr [ESP + 0xc],EDX       ; 0054dfb3
    PUSH ESI                            ; 0054dfb7
    MOV EDX,dword ptr [ESI + 0x154]     ; 0054dfb8
    CALL dword ptr [EDX + 0x34]         ; 0054dfbe
    ADD ESP,0x8                         ; 0054dfc1
    CMP EAX,0x2                         ; 0054dfc4
    JNZ 0x0054df96                      ; 0054dfc7
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    PUSH dword ptr [EBX + 0x30]         ; 0054dfc9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0054dfcc
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054dfd1
    FLD float ptr [ESP + 0x7c]          ; 0054dfd5
    ADD ESP,0x4                         ; 0054dfd9
    PUSH dword ptr [EBX + 0x38]         ; 0054dfdc
    FSTP float ptr [EBX + 0x30]         ; 0054dfdf
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0054dfe2
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    FLD float ptr [EBX + 0x30]          ; 0054dfe7
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054dfea
    FABS                                ; 0054dfee
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054dff0
    MOV dword ptr [EBX + 0x38],EAX      ; 0054dff4
    ADD ESP,0x4                         ; 0054dff7
    FCOMP double ptr [0x0063f97e]       ; 0054dffa | DOUBLE_0063f97e
    FNSTSW AX                           ; 0054e000
    SAHF                                ; 0054e002
    JA 0x0054df96                       ; 0054e003
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD float ptr [EBX + 0x38]          ; 0054e005
    FABS                                ; 0054e008
    FCOMP double ptr [0x0063f97e]       ; 0054e00a | DOUBLE_0063f97e
    FNSTSW AX                           ; 0054e010
    SAHF                                ; 0054e012
    JA 0x0054df96                       ; 0054e013
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    LEA EAX,[ESP + 0x30]                ; 0054e015
    PUSH EAX                            ; 0054e019
    MOV EDX,dword ptr [EBX + 0x154]     ; 0054e01a
    PUSH EBX                            ; 0054e020
    CALL dword ptr [EDX + 0x14]         ; 0054e021
    ADD ESP,0x8                         ; 0054e024
    ADD ESI,0x20                        ; 0054e027
    PUSH ESI                            ; 0054e02a
    LEA EAX,[ESP + 0x70]                ; 0054e02b
    PUSH EAX                            ; 0054e02f
    PUSH EBX                            ; 0054e030
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0054e031
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0054e036
    FLD float ptr [ESP + 0x6c]          ; 0054e039
    FADD float ptr [ESP + 0x24]         ; 0054e03d
    FCOMP float ptr [ESP + 0x30]        ; 0054e041
    FNSTSW AX                           ; 0054e045
    SAHF                                ; 0054e047
    JC 0x0054df96                       ; 0054e048
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD float ptr [ESP + 0x6c]          ; 0054e04e
    FSUB float ptr [ESP + 0x24]         ; 0054e052
    FCOMP float ptr [ESP + 0x3c]        ; 0054e056
    FNSTSW AX                           ; 0054e05a
    SAHF                                ; 0054e05c
    JA 0x0054df96                       ; 0054e05d
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD float ptr [ESP + 0x74]          ; 0054e063
    FADD float ptr [ESP + 0x24]         ; 0054e067
    FCOMP float ptr [ESP + 0x38]        ; 0054e06b
    FNSTSW AX                           ; 0054e06f
    SAHF                                ; 0054e071
    JC 0x0054df96                       ; 0054e072
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD float ptr [ESP + 0x74]          ; 0054e078
    FSUB float ptr [ESP + 0x24]         ; 0054e07c
    FCOMP float ptr [ESP + 0x44]        ; 0054e080
    FNSTSW AX                           ; 0054e084
    SAHF                                ; 0054e086
    JA 0x0054df96                       ; 0054e087
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD float ptr [ESP + 0x70]          ; 0054e08d
    FADD float ptr [ESP + 0x20]         ; 0054e091
    FCOMP float ptr [ESP + 0x34]        ; 0054e095
    FNSTSW AX                           ; 0054e099
    SAHF                                ; 0054e09b
    JC 0x0054df96                       ; 0054e09c
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD float ptr [ESP + 0x70]          ; 0054e0a2
    FADD float ptr [ESP + 0x1c]         ; 0054e0a6
    FCOMP float ptr [ESP + 0x40]        ; 0054e0aa
    FNSTSW AX                           ; 0054e0ae
    SAHF                                ; 0054e0b0
    JA 0x0054df96                       ; 0054e0b1
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    LEA EAX,[EBX + 0x158]               ; 0054e0b7
    PUSH EAX                            ; 0054e0bd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0054e0be
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x5698]    ; 0054e0c3
    ADD ESP,0x4                         ; 0054e0c9
    TEST ECX,ECX                        ; 0054e0cc
    JNZ 0x0054e0dc                      ; 0054e0ce
        ;   XREF to: 0054e0dc (CONDITIONAL_JUMP)  ; LAB_0054e0dc
    MOV EAX,0x1                         ; 0054e0d0
        ;   Label: LAB_0054e0d0
    MOV ESP,EBP                         ; 0054e0d5
    POP EBP                             ; 0054e0d7
    POP EDI                             ; 0054e0d8
    POP ESI                             ; 0054e0d9
    POP EBX                             ; 0054e0da
    RET                                 ; 0054e0db
    FLD float ptr [ESP + 0x20]          ; 0054e0dc
        ;   Label: LAB_0054e0dc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0054e0e0
    MOV EDI,0x3f800000                  ; 0054e0e4
    MOV dword ptr [ESP + 0x48],EAX      ; 0054e0e9
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054e0ed
    ADD EBX,0x158                       ; 0054e0f1
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054e0f7
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054e0fb
    XOR ESI,ESI                         ; 0054e0ff
    MOV dword ptr [ESP + 0x50],EAX      ; 0054e101
    LEA EAX,[ESP + 0x54]                ; 0054e105
    MOV dword ptr [ESP + 0x60],ESI      ; 0054e109
    PUSH EAX                            ; 0054e10d
    LEA EAX,[ESP + 0x64]                ; 0054e10e
    MOV dword ptr [ESP + 0x68],EDI      ; 0054e112
    PUSH EAX                            ; 0054e116
    LEA EAX,[ESP + 0x50]                ; 0054e117
    MOV dword ptr [ESP + 0x70],ESI      ; 0054e11b
    PUSH EAX                            ; 0054e11f
    FADD float ptr [0x0063f986]         ; 0054e120 | FLOAT_0063f986
    PUSH ESI                            ; 0054e126
    FADD float ptr [ESP + 0x5c]         ; 0054e127
    PUSH EBX                            ; 0054e12b
    FSTP float ptr [ESP + 0x60]         ; 0054e12c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0054e130
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e135
    PUSH EAX                            ; 0054e138
    CALL core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 ; 0054e139
        ;   XREF to: 004781d0 (UNCONDITIONAL_CALL)  ; float core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel * this_ptr, int frame_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054e13e
    FLD float ptr [ESP + 0x8c]          ; 0054e145
    ADD ESP,0x14                        ; 0054e14c
    FLDZ                                ; 0054e14f
    FXCH                                ; 0054e151
    FSTP double ptr [ESP]               ; 0054e153
    FCOMP double ptr [ESP]              ; 0054e156
    FNSTSW AX                           ; 0054e159
    SAHF                                ; 0054e15b
    JA 0x0054df96                       ; 0054e15c
        ;   XREF to: 0054df96 (CONDITIONAL_JUMP)  ; LAB_0054df96
    FLD1                                ; 0054e162
    FCOMP double ptr [ESP]              ; 0054e164
    FNSTSW AX                           ; 0054e167
    SAHF                                ; 0054e169
    JNC 0x0054e0d0                      ; 0054e16a
        ;   XREF to: 0054e0d0 (CONDITIONAL_JUMP)  ; LAB_0054e0d0
    XOR EAX,EAX                         ; 0054e170
    MOV ESP,EBP                         ; 0054e172
    POP EBP                             ; 0054e174
    POP EDI                             ; 0054e175
    POP ESI                             ; 0054e176
    POP EBX                             ; 0054e177
    RET                                 ; 0054e178

