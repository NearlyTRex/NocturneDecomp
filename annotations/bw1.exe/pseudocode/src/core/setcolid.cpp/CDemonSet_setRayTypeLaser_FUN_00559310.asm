; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00559310(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   laser_type
; int              Stack[0xc]:4   color_r
; int              Stack[0x10]:4   color_g
; int              Stack[0x14]:4   color_b
;
; XREF[5]:
;   core_doc.cpp_CDoc_aimLeftPistol_FUN_00473160 at 004732ac
;   core_fire.cpp_FUN_004b6420 at 004b6466
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 005004e6
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501c46
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_0058f660 at 0058f7ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00559310
        ;   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310
    MOV EDX,dword ptr [ESP + 0x8]       ; 00559314
    MOV dword ptr [EAX + 0x15f698],0x3  ; 00559318
    MOV dword ptr [EAX + 0x15f69c],EDX  ; 00559322
    MOV EDX,dword ptr [ESP + 0xc]       ; 00559328
    MOV dword ptr [EAX + 0x15f6a0],EDX  ; 0055932c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00559332
    MOV dword ptr [EAX + 0x15f6a4],EDX  ; 00559336
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055933c
    MOV dword ptr [EAX + 0x15f6a8],EDX  ; 00559340
    RET                                 ; 00559346

