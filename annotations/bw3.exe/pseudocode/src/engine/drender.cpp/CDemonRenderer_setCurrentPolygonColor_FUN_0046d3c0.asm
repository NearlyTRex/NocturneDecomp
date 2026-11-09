; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(CDemonRenderer *this_ptr,int color)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
;
; XREF[5]:
;   core_bugs.cpp_FUN_004217c0 at 004218bc
;   core_cloth.cpp_FUN_0043f10c at 0043f124
;   core_dpart.cpp_FUN_0046682e at 00466917
;   core_dtrace.cpp_FUN_00475090 at 00475443
;   core_water.cpp_FUN_00577760 at 00577cba
;
; Referenced Globals:
;   undefined4 DAT_007303dc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d3c0
        ;   Label: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
    MOV [0x007303dc],EAX                ; 0046d3c4 | DAT_007303dc
    RET                                 ; 0046d3c9

