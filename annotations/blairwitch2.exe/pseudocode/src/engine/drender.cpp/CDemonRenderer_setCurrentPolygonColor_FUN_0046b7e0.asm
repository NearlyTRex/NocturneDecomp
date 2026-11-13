; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(CDemonRenderer *this_ptr,int color)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
;
; XREF[5]:
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_0041f620 at 0041f71c
;   core_cloth.cpp_FUN_005b0c90 at 005b0ca4
;   core_dpart.cpp_FUN_00461a50 at 00461b37
;   core_dtrace.cpp_FUN_00474020 at 004743d3
;   core_water.cpp_CWater_render_FUN_005862e0 at 005868de
;
; Referenced Globals:
;   undefined4 DAT_0070ca5c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b7e0
        ;   Label: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
    MOV [0x0070ca5c],EAX                ; 0046b7e4 | DAT_0070ca5c
    RET                                 ; 0046b7e9

