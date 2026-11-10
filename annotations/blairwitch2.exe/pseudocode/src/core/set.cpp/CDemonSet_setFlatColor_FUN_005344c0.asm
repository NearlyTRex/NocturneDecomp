; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   light_scale
; int              Stack[0xc]:4   color_scale
; int              Stack[0x10]:4   fog_scale
;
; XREF[13]:
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e17da
;   core_manpuz.cpp_FUN_004e63c0 at 004e6464
;   core_menu.cpp_FUN_004eb490 at 004eb5b2
;   core_menu.cpp_FUN_004ebf10 at 004ebff6
;   core_menu.cpp_FUN_004ecc70 at 004eccdb
;   core_menu.cpp_FUN_004ed260 at 004ed2d0
;   core_menu.cpp_FUN_004ee1a0 at 004ee211
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee4fd
;   core_moon.cpp_FUN_00502510 at 00502626
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 at 0052dcd1
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005344c0
        ;   Label: core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005344c4
    MOV dword ptr [EAX + 0x15ae9c],EDX  ; 005344c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005344ce
    MOV dword ptr [EAX + 0x15aea0],EDX  ; 005344d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005344d8
    MOV dword ptr [EAX + 0x15aea4],EDX  ; 005344dc
    RET                                 ; 005344e2

