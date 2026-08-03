; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b2a0
        ;   Label: core_tvbat.cpp_CTVBat_setup_FUN_0054b2a0
    SUB ESP,0x4                         ; 0054b2a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054b2a4
    LEA EAX,[EBX + 0xbd28]              ; 0054b2a8
    PUSH EAX                            ; 0054b2ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0054b2af
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054b2b4
    PUSH EBX                            ; 0054b2b7
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 0054b2b8
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x2434],0x41200000 ; 0054b2bd
    ADD ESP,0x4                         ; 0054b2c7
    MOV dword ptr [EBX + 0xbf58],0x0    ; 0054b2ca
    PUSH dword ptr [EBX + 0xbf4c]       ; 0054b2d4
    PUSH dword ptr [EBX + 0xbf48]       ; 0054b2da
    MOV dword ptr [EBX + 0xbf50],0x0    ; 0054b2e0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054b2ea
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0054b2ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054b2f3
    MOV dword ptr [EBX + 0xbf54],EAX    ; 0054b2f7
    ADD ESP,0x8                         ; 0054b2fd
    ADD ESP,0x4                         ; 0054b300
    POP EBX                             ; 0054b303
    RET                                 ; 0054b304

