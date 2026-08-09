; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tvbat.cpp_factoryFuncTVBat_FUN_005e3e80 at 005e3e9a
;
; Referenced Globals:
;   TerminatedCString s_bat_kfm_0065689b
;   float FLOAT_006568a6 = 10
;   float FLOAT_006568aa = 2
;   CEnemy_full_vtable g_CTVBatVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3ef0
        ;   Label: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
    SUB ESP,0x8                         ; 005e3ef1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e3ef4
    PUSH EBX                            ; 005e3ef8
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005e3ef9
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005e3efe
    ADD EAX,0xbec0                      ; 005e3f01
    PUSH EAX                            ; 005e3f06
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e3f07
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xffff4140]          ; 005e3f0c
    ADD ESP,0x4                         ; 005e3f12
    MOV dword ptr [EBX + 0x154],0x664cd4 ; 005e3f15 | g_CTVBatVTable
    PUSH 0x3f8ccccd                     ; 005e3f1f
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005e3f24
    PUSH 0x3f666666                     ; 005e3f2e
    MOV dword ptr [EBX + 0xc040],0x0    ; 005e3f33
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e3f3d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005e3f42
    FLD float ptr [ESP + 0xc]           ; 005e3f46
    ADD ESP,0x8                         ; 005e3f4a
    PUSH 0x65689b                       ; 005e3f4d | = "bat.kfm"
    LEA EAX,[EBX + 0xbec0]              ; 005e3f52
    PUSH EAX                            ; 005e3f58
    FSTP float ptr [EBX + 0xc03c]       ; 005e3f59
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e3f5f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e3f64
    PUSH 0x3f8ccccd                     ; 005e3f67
    MOV dword ptr [EBX + 0xc054],0x40a00000 ; 005e3f6c
    PUSH 0x3f666666                     ; 005e3f76
    MOV dword ptr [EBX + 0xc050],0x41700000 ; 005e3f7b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e3f85
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005e3f8a
    FLD float ptr [ESP + 0xc]           ; 005e3f8e
    ADD ESP,0x8                         ; 005e3f92
    FMUL float ptr [0x006568a6]         ; 005e3f95 | FLOAT_006568a6
    PUSH 0x3f8ccccd                     ; 005e3f9b
    PUSH 0x3f666666                     ; 005e3fa0
    FSTP float ptr [EBX + 0xc05c]       ; 005e3fa5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e3fab
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005e3fb0
    FLD float ptr [ESP + 0xc]           ; 005e3fb4
    ADD ESP,0x8                         ; 005e3fb8
    FMUL float ptr [0x006568aa]         ; 005e3fbb | FLOAT_006568aa
    PUSH 0x3f800000                     ; 005e3fc1
    FSTP float ptr [ESP + 0x4]          ; 005e3fc6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e3fca
    PUSH 0x0                            ; 005e3fce
    MOV dword ptr [EBX + 0xc058],EAX    ; 005e3fd0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e3fd6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0xc064],0x0    ; 005e3fdb
    MOV dword ptr [EBX + 0xc068],0x0    ; 005e3fe5
    MOV dword ptr [EBX + 0xc078],0x0    ; 005e3fef
    MOV dword ptr [EBX + 0x2624],0x0    ; 005e3ff9
    MOV dword ptr [EBX + 0xc0f0],0x0    ; 005e4003
    MOV byte ptr [EBX + 0xc07c],0x0     ; 005e400d
    MOV dword ptr [EBX + 0xc0e0],0x41700000 ; 005e4014
    MOV dword ptr [EBX + 0xc0e4],0x41f00000 ; 005e401e
    MOV dword ptr [ESP + 0xc],EAX       ; 005e4028
    MOV dword ptr [EBX + 0xc0ec],0x0    ; 005e402c
    FLD float ptr [ESP + 0xc]           ; 005e4036
    MOV EAX,EBX                         ; 005e403a
    FSTP float ptr [EBX + 0xc060]       ; 005e403c
    ADD ESP,0x8                         ; 005e4042
    ADD ESP,0x8                         ; 005e4045
    POP EBX                             ; 005e4048
    RET                                 ; 005e4049

