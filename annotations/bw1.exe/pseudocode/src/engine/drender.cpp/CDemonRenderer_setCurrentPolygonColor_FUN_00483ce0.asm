; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(CDemonRenderer *this_ptr,int color)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
;
; XREF[5]:
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425650 at 0042574c
;   core_cloth.cpp_FUN_004414ac at 004414c4
;   core_dpart.cpp_FUN_00479f5e at 0047a047
;   core_dtrace.cpp_FUN_0048c510 at 0048c8c3
;   core_water.cpp_CWater_render_FUN_005a9f10 at 005aa50e
;
; Referenced Globals:
;   undefined4 DAT_00713a5c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00483ce0
        ;   Label: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
    MOV [0x00713a5c],EAX                ; 00483ce4 | DAT_00713a5c
    RET                                 ; 00483ce9

