; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   laser_type
; int              Stack[0xc]:4   color_r
; int              Stack[0x10]:4   color_g
; int              Stack[0x14]:4   color_b
;
; XREF[3]:
;   core_fire.cpp_FUN_0049db20 at 0049db66
;   core_lightgun.cpp_CLightGun_fire_FUN_004e2e70 at 004e2ffd
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_0056ca10 at 0056cb5c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537ef0
        ;   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00537ef4
    MOV dword ptr [EAX + 0x15f694],0x3  ; 00537ef8
    MOV dword ptr [EAX + 0x15f698],EDX  ; 00537f02
    MOV EDX,dword ptr [ESP + 0xc]       ; 00537f08
    MOV dword ptr [EAX + 0x15f69c],EDX  ; 00537f0c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00537f12
    MOV dword ptr [EAX + 0x15f6a0],EDX  ; 00537f16
    MOV EDX,dword ptr [ESP + 0x14]      ; 00537f1c
    MOV dword ptr [EAX + 0x15f6a4],EDX  ; 00537f20
    RET                                 ; 00537f26

