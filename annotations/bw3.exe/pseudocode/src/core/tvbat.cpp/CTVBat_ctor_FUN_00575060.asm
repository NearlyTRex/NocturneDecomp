; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_00575060(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tvbat.cpp_factoryFuncTVBat_FUN_00575000 at 00575013
;
; Referenced Globals:
;   undefined4 DAT_005d6f27
;   undefined4 DAT_005d6f2b
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575060
        ;   Label: core_tvbat.cpp_CTVBat_ctor_FUN_00575060
    SUB ESP,0x8                         ; 00575061
    MOV EBX,dword ptr [ESP + 0x10]      ; 00575064
    PUSH EBX                            ; 00575068
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00575069
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0057506e
    ADD EAX,0xd058                      ; 00575071
    PUSH EAX                            ; 00575076
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00575077
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xffff2fa8]          ; 0057507c
    ADD ESP,0x4                         ; 00575082
    MOV dword ptr [EBX + 0x154],0x5e5bd4 ; 00575085
    PUSH 0x3f8ccccd                     ; 0057508f
    MOV dword ptr [EBX + 0xd054],0x0    ; 00575094
    PUSH 0x3f666666                     ; 0057509e
    MOV dword ptr [EBX + 0xd1d8],0x0    ; 005750a3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005750ad
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005750b2
    FLD float ptr [ESP + 0xc]           ; 005750b6
    ADD ESP,0x8                         ; 005750ba
    PUSH 0x5d6f1e                       ; 005750bd
    LEA EAX,[EBX + 0xd058]              ; 005750c2
    PUSH EAX                            ; 005750c8
    FSTP float ptr [EBX + 0xd1d4]       ; 005750c9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 005750cf
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005750d4
    PUSH 0x3f8ccccd                     ; 005750d7
    MOV dword ptr [EBX + 0xd1ec],0x40a00000 ; 005750dc
    PUSH 0x3f666666                     ; 005750e6
    MOV dword ptr [EBX + 0xd1e8],0x41700000 ; 005750eb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005750f5
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 005750fa
    FLD float ptr [ESP + 0xc]           ; 005750fe
    ADD ESP,0x8                         ; 00575102
    FMUL float ptr [0x005d6f27]         ; 00575105 | DAT_005d6f27
    PUSH 0x3f8ccccd                     ; 0057510b
    PUSH 0x3f666666                     ; 00575110
    FSTP float ptr [EBX + 0xd1f4]       ; 00575115
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057511b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 00575120
    FLD float ptr [ESP + 0xc]           ; 00575124
    ADD ESP,0x8                         ; 00575128
    FMUL float ptr [0x005d6f2b]         ; 0057512b | DAT_005d6f2b
    PUSH 0x3f800000                     ; 00575131
    FSTP float ptr [ESP + 0x4]          ; 00575136
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057513a
    PUSH 0x0                            ; 0057513e
    MOV dword ptr [EBX + 0xd1f0],EAX    ; 00575140
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00575146
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBX + 0xd1fc],0x0    ; 0057514b
    MOV dword ptr [EBX + 0xd200],0x0    ; 00575155
    MOV dword ptr [EBX + 0xd210],0x0    ; 0057515f
    MOV dword ptr [EBX + 0x27c0],0x0    ; 00575169
    MOV dword ptr [EBX + 0xd288],0x0    ; 00575173
    MOV byte ptr [EBX + 0xd214],0x0     ; 0057517d
    MOV dword ptr [EBX + 0xd278],0x41700000 ; 00575184
    MOV dword ptr [EBX + 0xd27c],0x41f00000 ; 0057518e
    MOV dword ptr [ESP + 0xc],EAX       ; 00575198
    MOV dword ptr [EBX + 0xd284],0x0    ; 0057519c
    FLD float ptr [ESP + 0xc]           ; 005751a6
    MOV EAX,EBX                         ; 005751aa
    FSTP float ptr [EBX + 0xd1f8]       ; 005751ac
    ADD ESP,0x8                         ; 005751b2
    ADD ESP,0x8                         ; 005751b5
    POP EBX                             ; 005751b8
    RET                                 ; 005751b9

