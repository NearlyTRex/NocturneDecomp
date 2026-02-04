; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_005e4050(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e4050
        ;   Label: core_tvbat.cpp_CTVBat_setup_FUN_005e4050
    SUB ESP,0x4                         ; 005e4051
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e4054
    LEA EAX,[EBX + 0xbec0]              ; 005e4058
    PUSH EAX                            ; 005e405e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005e405f
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e4064
    PUSH EBX                            ; 005e4067
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 005e4068
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x243c],0x41200000 ; 005e406d
    ADD ESP,0x4                         ; 005e4077
    MOV dword ptr [EBX + 0xc0f0],0x0    ; 005e407a
    PUSH dword ptr [EBX + 0xc0e4]       ; 005e4084
    PUSH dword ptr [EBX + 0xc0e0]       ; 005e408a
    MOV dword ptr [EBX + 0xc0e8],0x0    ; 005e4090
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e409a
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

