; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightPis * __cdecl core_lightpis_cpp_CLightPis_ctor_FUN_00501610(CLightPis *this_ptr)
;
; Parameters:
; CLightPis *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lightpis.cpp_factoryFuncLightPis_FUN_005015e0 at 005015f3
;
; Referenced Globals:
;   undefined4 DAT_0060316c
;   undefined4 DAT_00603170
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501610
        ;   Label: core_lightpis.cpp_CLightPis_ctor_FUN_00501610
    MOV EDX,dword ptr [ESP + 0x8]       ; 00501611
    PUSH EDX                            ; 00501615
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0 ; 00501616
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ad4c0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0050161b
    PUSH 0x5e6f24                       ; 0050161e
    MOV EBX,EAX                         ; 00501623
    ADD EAX,0x158                       ; 00501625
    PUSH EAX                            ; 0050162a
    MOV dword ptr [EAX + -0x4],0x603194 ; 0050162b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00501632
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x57c],0x0     ; 00501637
    MOV dword ptr [EBX + 0x578],0x0     ; 00501641
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0050164b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00501655
    MOV dword ptr [EBX + 0x2e0],0x0     ; 0050165f
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00501669
    MOV dword ptr [EBX + 0x2e8],0x42000000 ; 00501673
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0050167d
    MOV dword ptr [EBX + 0x58c],0x1     ; 00501687
    FLD float ptr [0x0060316c]          ; 00501691 | DAT_0060316c
    MOV dword ptr [EBX + 0x2f0],0x1     ; 00501697
    FLD float ptr [0x00603170]          ; 005016a1 | DAT_00603170
    MOV dword ptr [EBX + 0x588],0x0     ; 005016a7
    ADD ESP,0x8                         ; 005016b1
    MOV dword ptr [EBX + 0x584],0x3f800000 ; 005016b4
    MOV EAX,EBX                         ; 005016be
    FXCH                                ; 005016c0
    FSTP float ptr [EBX + 0x564]        ; 005016c2
    FSTP float ptr [EBX + 0x580]        ; 005016c8
    POP EBX                             ; 005016ce
    RET                                 ; 005016cf

