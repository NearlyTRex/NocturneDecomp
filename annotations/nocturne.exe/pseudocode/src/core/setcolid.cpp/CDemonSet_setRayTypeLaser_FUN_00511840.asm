; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   laser_type
; int              Stack[0xc]:4   color_r
; int              Stack[0x10]:4   color_g
; int              Stack[0x14]:4   color_b
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0 at 0048b779
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320 at 0053e409
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511840
        ;   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511844
    MOV dword ptr [EAX + 0x15f298],0x3  ; 00511848
    MOV dword ptr [EAX + 0x15f29c],EDX  ; 00511852
    MOV EDX,dword ptr [ESP + 0xc]       ; 00511858
    MOV dword ptr [EAX + 0x15f2a0],EDX  ; 0051185c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511862
    MOV dword ptr [EAX + 0x15f2a4],EDX  ; 00511866
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051186c
    MOV dword ptr [EAX + 0x15f2a8],EDX  ; 00511870
    RET                                 ; 00511876

