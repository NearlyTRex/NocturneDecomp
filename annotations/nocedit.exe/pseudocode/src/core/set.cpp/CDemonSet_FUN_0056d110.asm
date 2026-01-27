; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056d110(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422b74
;   core_emitter.cpp_FUN_004a8070 at 004a81f9
;   core_fire.cpp_CFireball_process_FUN_004c0b30 at 004c0be1
;   core_fire.cpp_FUN_004c1940 at 004c1983
;   core_keyactor.cpp_FUN_00501710 at 005017a6
;   core_weapon.cpp_CWeapon_FUN_005ee4a0 at 005ee621
;
; Referenced Globals:
;   int g_CoronaGlobeCount
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x032776c8]      ; 0056d110 | g_CoronaGlobeCount
        ;   Label: core_set.cpp_CDemonSet_FUN_0056d110
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056d116
    CMP dword ptr [ECX + 0xc],0x100     ; 0056d11a
    JL 0x0056d128                       ; 0056d121
        ;   XREF to: 0056d128 (CONDITIONAL_JUMP)  ; LAB_0056d128
    CMP EDX,0x64                        ; 0056d123
    JL 0x0056d12f                       ; 0056d126
        ;   XREF to: 0056d12f (CONDITIONAL_JUMP)  ; LAB_0056d12f
    MOV dword ptr [0x032776c8],EDX      ; 0056d128 | g_CoronaGlobeCount
        ;   Label: LAB_0056d128
    RET                                 ; 0056d12e
    INC EDX                             ; 0056d12f
        ;   Label: LAB_0056d12f
    MOV dword ptr [EDX*0x4 + 0x32776c8],ECX ; 0056d130 | g_CoronaGlobeCount
    MOV dword ptr [0x032776c8],EDX      ; 0056d137 | g_CoronaGlobeCount
    RET                                 ; 0056d13d

