; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(CDemonRenderer *this_ptr,int color)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
;
; XREF[5]:
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004216d0 at 004217cc
;   core_cloth.cpp_CCloth_FUN_00437a60 at 00437a74
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00 at 004690c5
;   core_water.cpp_CWater_render_FUN_00550cb0 at 00551168
;   engine_drender.cpp_FUN_004574e0 at 004575c7
;
; Referenced Globals:
;   undefined4 DAT_006b0260
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00460f10
        ;   Label: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
    MOV [0x006b0260],EAX                ; 00460f14 | DAT_006b0260
    RET                                 ; 00460f19

