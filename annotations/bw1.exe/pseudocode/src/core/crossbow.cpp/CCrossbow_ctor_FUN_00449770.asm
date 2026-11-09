; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_factoryFuncCrossbow_FUN_00449740 at 00449753
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_flame.cpp_CFlame_ctor_FUN_004b7a30
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449770
        ;   Label: core_crossbow.cpp_CCrossbow_ctor_FUN_00449770
    MOV EBX,dword ptr [ESP + 0x8]       ; 00449771
    PUSH EBX                            ; 00449775
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 00449776
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0044977b
    ADD EAX,0x57c                       ; 0044977e
    PUSH EAX                            ; 00449783
    CALL core_flame.cpp_CFlame_ctor_FUN_004b7a30 ; 00449784
        ;   XREF to: 004b7a30 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004b7a30(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00449789
    LEA EBX,[EAX + 0xfffffa84]          ; 0044978c
    PUSH 0x5d737c                       ; 00449792
    LEA EAX,[EBX + 0x158]               ; 00449797
    PUSH EAX                            ; 0044979d
    MOV dword ptr [EBX + 0x154],0x5fe374 ; 0044979e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004497a8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x300],0x0     ; 004497ad
    MOV dword ptr [EBX + 0x578],0x0     ; 004497b7
    MOV dword ptr [EBX + 0x6d4],0x3ee66666 ; 004497c1
    MOV dword ptr [EBX + 0x6d8],0x3f59999a ; 004497cb
    MOV dword ptr [EBX + 0x6dc],0x3ee66666 ; 004497d5
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004497df
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004497e9
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004497f3
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004497fd
    ADD ESP,0x8                         ; 00449807
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 0044980a
    MOV EAX,EBX                         ; 00449814
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00449816
    POP EBX                             ; 00449820
    RET                                 ; 00449821

