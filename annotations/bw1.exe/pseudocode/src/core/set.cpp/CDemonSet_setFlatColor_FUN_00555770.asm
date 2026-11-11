; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   light_scale
; int              Stack[0xc]:4   color_scale
; int              Stack[0x10]:4   fog_scale
;
; XREF[13]:
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004feb45
;   core_manpuz.cpp_FUN_00505060 at 00505104
;   core_menu.cpp_FUN_0050b470 at 0050b4db
;   core_menu.cpp_FUN_0050ba70 at 0050bae0
;   core_menu.cpp_FUN_0050c990 at 0050ca03
;   core_menu.cpp_calibrateGamepad_FUN_0050a2b0 at 0050a3d2
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050ab6a
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cd9d
;   core_moon.cpp_CMoon_render_FUN_00521e40 at 00521f6f
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0 at 0054efb1
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00555770
        ;   Label: core_set.cpp_CDemonSet_setFlatColor_FUN_00555770
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555774
    MOV dword ptr [EAX + 0x15ae9c],EDX  ; 00555778
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055577e
    MOV dword ptr [EAX + 0x15aea0],EDX  ; 00555782
    MOV EDX,dword ptr [ESP + 0x10]      ; 00555788
    MOV dword ptr [EAX + 0x15aea4],EDX  ; 0055578c
    RET                                 ; 00555792

