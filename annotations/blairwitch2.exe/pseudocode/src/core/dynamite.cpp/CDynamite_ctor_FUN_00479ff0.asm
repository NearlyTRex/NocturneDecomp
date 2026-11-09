; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDynamite * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_00479ff0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dynamite.cpp_factoryFuncDynamite_FUN_00479fc0 at 00479fd3
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479ff0
        ;   Label: core_dynamite.cpp_CDynamite_ctor_FUN_00479ff0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00479ff1
    PUSH EDX                            ; 00479ff5
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 00479ff6
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00479ffb
    PUSH 0x5d1e45                       ; 00479ffe
    MOV EBX,EAX                         ; 0047a003
    ADD EAX,0x2b4                       ; 0047a005
    PUSH EAX                            ; 0047a00a
    MOV dword ptr [EAX + -0x4],0x5f5bb4 ; 0047a00b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0047a012
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    LEA EAX,[EBX + 0x6d8]               ; 0047a017
    MOV dword ptr [EBX + 0x6c0],0x3f800000 ; 0047a01d
    MOV dword ptr [EAX + 0x8],0x0       ; 0047a027
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047a02e
    MOV dword ptr [EAX + 0x4],EDX       ; 0047a031
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a034
    MOV dword ptr [EAX],EDX             ; 0047a037
    MOV dword ptr [EBX + 0x6d4],0xbf800000 ; 0047a039
    MOV dword ptr [EBX + 0x434],0x0     ; 0047a043
    MOV dword ptr [EBX + 0x438],0x0     ; 0047a04d
    MOV dword ptr [EBX + 0x43c],0x3     ; 0047a057
    MOV dword ptr [EBX + 0x440],0x0     ; 0047a061
    MOV dword ptr [EBX + 0x444],0x43480000 ; 0047a06b
    MOV dword ptr [EBX + 0x448],0x0     ; 0047a075
    ADD ESP,0x8                         ; 0047a07f
    MOV dword ptr [EBX + 0x44c],0x0     ; 0047a082
    MOV EAX,EBX                         ; 0047a08c
    MOV dword ptr [EBX + 0x6e4],0x0     ; 0047a08e
    POP EBX                             ; 0047a098
    RET                                 ; 0047a099

