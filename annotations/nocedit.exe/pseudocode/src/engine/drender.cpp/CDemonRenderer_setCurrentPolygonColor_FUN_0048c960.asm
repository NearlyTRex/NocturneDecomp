; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
;
; XREF[12]:
;   core_bugs.cpp_FUN_00425340 at 0042543c
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043cc4b
;   core_cloth.cpp_FUN_0043b790 at 0043b7a4
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d769
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 00482997
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 at 00497235
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 005839ae
;   core_setedit.cpp_FUN_00582930 at 00582bda
;   core_tvbat.cpp_CTVBat_FUN_005e4d80 at 005e4e42
;   core_water.cpp_CWater_render_FUN_005ea320 at 005ea7d8
;   ... and 2 more
;
; Referenced Globals:
;   int g_CurrentPolygonColor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048c960
        ;   Label: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
    MOV [0x00772a5c],EAX                ; 0048c964 | g_CurrentPolygonColor
    RET                                 ; 0048c969

