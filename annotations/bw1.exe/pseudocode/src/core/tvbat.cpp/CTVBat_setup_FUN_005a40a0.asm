; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_setup_FUN_005a40a0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a40a0
        ;   Label: core_tvbat.cpp_CTVBat_setup_FUN_005a40a0
    SUB ESP,0x4                         ; 005a40a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a40a4
    LEA EAX,[EBX + 0xc26c]              ; 005a40a8
    PUSH EAX                            ; 005a40ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005a40af
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a40b4
    PUSH EBX                            ; 005a40b7
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 005a40b8
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x2538],0x41200000 ; 005a40bd
    ADD ESP,0x4                         ; 005a40c7
    MOV dword ptr [EBX + 0xc49c],0x0    ; 005a40ca
    PUSH dword ptr [EBX + 0xc490]       ; 005a40d4
    PUSH dword ptr [EBX + 0xc48c]       ; 005a40da
    MOV dword ptr [EBX + 0xc494],0x0    ; 005a40e0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a40ea
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005a40ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a40f3
    MOV dword ptr [EBX + 0xc498],EAX    ; 005a40f7
    ADD ESP,0x8                         ; 005a40fd
    ADD ESP,0x4                         ; 005a4100
    POP EBX                             ; 005a4103
    RET                                 ; 005a4104

