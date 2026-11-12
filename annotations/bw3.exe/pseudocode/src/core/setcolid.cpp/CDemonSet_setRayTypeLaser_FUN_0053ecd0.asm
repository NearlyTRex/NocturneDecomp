; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   laser_type
; int              Stack[0xc]:4   color_r
; int              Stack[0x10]:4   color_g
; int              Stack[0x14]:4   color_b
;
; XREF[3]:
;   core_fire.cpp_FUN_004a2e20 at 004a2e66
;   core_lightsta.cpp_FUN_004e1070 at 004e1f28
;   core_prye.cpp_FUN_00523800 at 0052394c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ecd0
        ;   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_0053ecd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053ecd4
    MOV dword ptr [EAX + 0x15f698],0x3  ; 0053ecd8
    MOV dword ptr [EAX + 0x15f69c],EDX  ; 0053ece2
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053ece8
    MOV dword ptr [EAX + 0x15f6a0],EDX  ; 0053ecec
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ecf2
    MOV dword ptr [EAX + 0x15f6a4],EDX  ; 0053ecf6
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053ecfc
    MOV dword ptr [EAX + 0x15f6a8],EDX  ; 0053ed00
    RET                                 ; 0053ed06

