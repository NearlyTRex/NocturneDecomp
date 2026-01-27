; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo * this_ptr)
;
; Parameters:
; SLaserInfo *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_emitter.cpp_FUN_004a8860 at 004a88d6
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0 at 0050aa35
;   core_weapon.cpp_CWeapon_FUN_005ee830 at 005ee8e6
;
; Referenced Globals:
;   float FLOAT_0065dcc0 = 0.02000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c81f0
        ;   Label: core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
    MOV dword ptr [EAX],0x3f800000      ; 004c81f4
    MOV dword ptr [EAX + 0x8],0x0       ; 004c81fa
    MOV dword ptr [EAX + 0xc],0xff      ; 004c8201
    MOV dword ptr [EAX + 0x10],0x0      ; 004c8208
    MOV dword ptr [EAX + 0x14],0x0      ; 004c820f
    MOV dword ptr [EAX + 0x18],0x0      ; 004c8216
    MOV dword ptr [EAX + 0x1c],0x0      ; 004c821d
    MOV EDX,dword ptr [0x0065dcc0]      ; 004c8224 | FLOAT_0065dcc0
    MOV dword ptr [EAX + 0x4],EDX       ; 004c822a
    RET                                 ; 004c822d

