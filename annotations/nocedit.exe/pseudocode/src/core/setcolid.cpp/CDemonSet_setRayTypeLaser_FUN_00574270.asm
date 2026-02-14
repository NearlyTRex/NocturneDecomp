; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270(CDemonSet *this_ptr,float f1,float f2,float f3,float f4)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   f1
; float            Stack[0xc]:4   f2
; float            Stack[0x10]:4   f3
; float            Stack[0x14]:4   f4
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_FUN_004c8230 at 004c82b9
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 at 005c4459
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574270
        ;   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
    MOV EDX,dword ptr [ESP + 0x8]       ; 00574274
    MOV dword ptr [EAX + 0x15f680],0x3  ; 00574278
    MOV dword ptr [EAX + 0x15f684],EDX  ; 00574282
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574288
    MOV dword ptr [EAX + 0x15f688],EDX  ; 0057428c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00574292
    MOV dword ptr [EAX + 0x15f68c],EDX  ; 00574296
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057429c
    MOV dword ptr [EAX + 0x15f690],EDX  ; 005742a0
    RET                                 ; 005742a6

