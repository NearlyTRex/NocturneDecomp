; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_tvbat.cpp_factoryFunc_FUN_0054b0e0 at 0054b0f3
;
; Referenced Globals:
;   TerminatedCString s_bat_kfm_00596ed4
;   float FLOAT_00596edd = 10
;   float FLOAT_00596ee1 = 2
;   CEnemy_full_vtable g_CTVBatVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b140
        ;   Label: core_tvbat.cpp_CTVBat_ctor_FUN_0054b140
    SUB ESP,0x8                         ; 0054b141
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054b144
    PUSH EBX                            ; 0054b148
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0054b149
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054b14e
    ADD EAX,0xbd28                      ; 0054b151
    PUSH EAX                            ; 0054b156
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0054b157
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xffff42d8]          ; 0054b15c
    ADD ESP,0x4                         ; 0054b162
    MOV dword ptr [EBX + 0x14c],0x5a38f4 ; 0054b165 | g_CTVBatVTable
    PUSH 0x3f8ccccd                     ; 0054b16f
    MOV dword ptr [EBX + 0xbd24],0x0    ; 0054b174
    PUSH 0x3f666666                     ; 0054b17e
    MOV dword ptr [EBX + 0xbea8],0x0    ; 0054b183
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054b18d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0054b192
    FLD float ptr [ESP + 0xc]           ; 0054b196
    ADD ESP,0x8                         ; 0054b19a
    PUSH 0x596ed4                       ; 0054b19d | = "bat.kfm"
    LEA EAX,[EBX + 0xbd28]              ; 0054b1a2
    PUSH EAX                            ; 0054b1a8
    FSTP float ptr [EBX + 0xbea4]       ; 0054b1a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054b1af
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054b1b4
    PUSH 0x3f8ccccd                     ; 0054b1b7
    MOV dword ptr [EBX + 0xbebc],0x40a00000 ; 0054b1bc
    PUSH 0x3f666666                     ; 0054b1c6
    MOV dword ptr [EBX + 0xbeb8],0x41700000 ; 0054b1cb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054b1d5
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0054b1da
    FLD float ptr [ESP + 0xc]           ; 0054b1de
    ADD ESP,0x8                         ; 0054b1e2
    FMUL float ptr [0x00596edd]         ; 0054b1e5 | FLOAT_00596edd
    PUSH 0x3f8ccccd                     ; 0054b1eb
    PUSH 0x3f666666                     ; 0054b1f0
    FSTP float ptr [EBX + 0xbec4]       ; 0054b1f5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054b1fb
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0054b200
    FLD float ptr [ESP + 0xc]           ; 0054b204
    ADD ESP,0x8                         ; 0054b208
    FMUL float ptr [0x00596ee1]         ; 0054b20b | FLOAT_00596ee1
    PUSH 0x3f800000                     ; 0054b211
    FSTP float ptr [ESP + 0x4]          ; 0054b216
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054b21a
    PUSH 0x0                            ; 0054b21e
    MOV dword ptr [EBX + 0xbec0],EAX    ; 0054b220
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054b226
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBX + 0xbecc],0x0    ; 0054b22b
    MOV dword ptr [EBX + 0xbed0],0x0    ; 0054b235
    MOV dword ptr [EBX + 0xbee0],0x0    ; 0054b23f
    MOV dword ptr [EBX + 0x261c],0x0    ; 0054b249
    MOV dword ptr [EBX + 0xbf58],0x0    ; 0054b253
    MOV byte ptr [EBX + 0xbee4],0x0     ; 0054b25d
    MOV dword ptr [EBX + 0xbf48],0x41700000 ; 0054b264
    MOV dword ptr [EBX + 0xbf4c],0x41f00000 ; 0054b26e
    MOV dword ptr [ESP + 0xc],EAX       ; 0054b278
    MOV dword ptr [EBX + 0xbf54],0x0    ; 0054b27c
    FLD float ptr [ESP + 0xc]           ; 0054b286
    MOV EAX,EBX                         ; 0054b28a
    FSTP float ptr [EBX + 0xbec8]       ; 0054b28c
    ADD ESP,0x8                         ; 0054b292
    ADD ESP,0x8                         ; 0054b295
    POP EBX                             ; 0054b298
    RET                                 ; 0054b299

