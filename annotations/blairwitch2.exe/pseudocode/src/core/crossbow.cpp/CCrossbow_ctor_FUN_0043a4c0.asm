; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_factoryFuncCrossbow_FUN_0043a490 at 0043a4a3
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_flame.cpp_CFlame_ctor_FUN_0049f180
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a4c0
        ;   Label: core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043a4c1
    PUSH EBX                            ; 0043a4c5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 0043a4c6
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0043a4cb
    ADD EAX,0x6d8                       ; 0043a4ce
    PUSH EAX                            ; 0043a4d3
    CALL core_flame.cpp_CFlame_ctor_FUN_0049f180 ; 0043a4d4
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_0049f180(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0043a4d9
    LEA EBX,[EAX + 0xfffff928]          ; 0043a4dc
    PUSH 0x5ce210                       ; 0043a4e2
    LEA EAX,[EBX + 0x2b4]               ; 0043a4e7
    PUSH EAX                            ; 0043a4ed
    MOV dword ptr [EBX + 0x2b0],0x5f4c94 ; 0043a4ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0043a4f8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x45c],0x0     ; 0043a4fd
    MOV dword ptr [EBX + 0x6d4],0x0     ; 0043a507
    MOV dword ptr [EBX + 0x98c],0x3ee66666 ; 0043a511
    MOV dword ptr [EBX + 0x990],0x3f59999a ; 0043a51b
    MOV dword ptr [EBX + 0x994],0x3ee66666 ; 0043a525
    MOV dword ptr [EBX + 0x434],0x0     ; 0043a52f
    MOV dword ptr [EBX + 0x438],0x0     ; 0043a539
    MOV dword ptr [EBX + 0x43c],0x1     ; 0043a543
    MOV dword ptr [EBX + 0x440],0x0     ; 0043a54d
    ADD ESP,0x8                         ; 0043a557
    MOV dword ptr [EBX + 0x444],0x42480000 ; 0043a55a
    MOV EAX,EBX                         ; 0043a564
    MOV dword ptr [EBX + 0x448],0x0     ; 0043a566
    POP EBX                             ; 0043a570
    RET                                 ; 0043a571

