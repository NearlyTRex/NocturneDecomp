; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(undefined4 *param_1)
;
;
; XREF[3]:
;   core_emitter.cpp_FUN_00478f80 at 00478fe4
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0 at 004cb435
;   core_weapon.cpp_CWeapon_fireProjectile_FUN_00554750 at 00554806
;
; Referenced Globals:
;   float FLOAT_0059d210 = 0.02000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048b6b0
        ;   Label: core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0
    MOV dword ptr [EAX],0x3f800000      ; 0048b6b4
    MOV dword ptr [EAX + 0x8],0x0       ; 0048b6ba
    MOV dword ptr [EAX + 0xc],0xff      ; 0048b6c1
    MOV dword ptr [EAX + 0x10],0x0      ; 0048b6c8
    MOV dword ptr [EAX + 0x14],0x0      ; 0048b6cf
    MOV dword ptr [EAX + 0x18],0x0      ; 0048b6d6
    MOV dword ptr [EAX + 0x1c],0x0      ; 0048b6dd
    MOV EDX,dword ptr [0x0059d210]      ; 0048b6e4 | FLOAT_0059d210
    MOV dword ptr [EAX + 0x4],EDX       ; 0048b6ea
    RET                                 ; 0048b6ed

