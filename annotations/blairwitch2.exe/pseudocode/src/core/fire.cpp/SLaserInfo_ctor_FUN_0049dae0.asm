; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0(SLaserInfo *this_ptr)
;
; Parameters:
; SLaserInfo *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_emitter.cpp_FUN_00487790 at 004877ec
;   core_manpuz.cpp_FUN_004e6f20 at 004e711b
;   core_weapon.cpp_CWeapon_renderAimBeam_FUN_0058a440 at 0058a541
;
; Referenced Globals:
;   undefined4 DAT_005f64fc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049dae0
        ;   Label: core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0
    MOV dword ptr [EAX],0x3f800000      ; 0049dae4
    MOV dword ptr [EAX + 0x8],0x0       ; 0049daea
    MOV dword ptr [EAX + 0xc],0xff      ; 0049daf1
    MOV dword ptr [EAX + 0x10],0x0      ; 0049daf8
    MOV dword ptr [EAX + 0x14],0x0      ; 0049daff
    MOV dword ptr [EAX + 0x18],0x0      ; 0049db06
    MOV dword ptr [EAX + 0x1c],0x0      ; 0049db0d
    MOV EDX,dword ptr [0x005f64fc]      ; 0049db14 | DAT_005f64fc
    MOV dword ptr [EAX + 0x4],EDX       ; 0049db1a
    RET                                 ; 0049db1d

