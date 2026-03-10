; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setScaleFactors_FUN_00570ca0(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   light_scale
; int              Stack[0xc]:4   color_scale
; int              Stack[0x10]:4   fog_scale
;
; XREF[6]:
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 005042d4
;   core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50 at 00509e46
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529faa
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0 at 0056ad83
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60 at 0056cee7
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_0056cf00 at 0056d073
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00570ca0
        ;   Label: core_set.cpp_CDemonSet_setScaleFactors_FUN_00570ca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570ca4
    MOV dword ptr [EAX + 0x15ae88],EDX  ; 00570ca8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570cae
    MOV dword ptr [EAX + 0x15ae8c],EDX  ; 00570cb2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00570cb8
    MOV dword ptr [EAX + 0x15ae90],EDX  ; 00570cbc
    RET                                 ; 00570cc2

