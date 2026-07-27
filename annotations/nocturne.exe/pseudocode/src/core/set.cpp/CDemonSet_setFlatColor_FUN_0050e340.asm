; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[6]:
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5b54
;   core_manpuz.cpp_FUN_004ca790 at 004ca834
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004ded2a
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 at 005087f6
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 at 0050a719
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0 at 0050a8b9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e340
        ;   Label: core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050e344
    MOV dword ptr [EAX + 0x15aaa0],EDX  ; 0050e348
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050e34e
    MOV dword ptr [EAX + 0x15aaa4],EDX  ; 0050e352
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050e358
    MOV dword ptr [EAX + 0x15aaa8],EDX  ; 0050e35c
    RET                                 ; 0050e362

