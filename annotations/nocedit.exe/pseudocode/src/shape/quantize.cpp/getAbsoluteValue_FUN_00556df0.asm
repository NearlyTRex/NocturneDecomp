; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_quantize.cpp_getAbsoluteValue_FUN_00556df0(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0 at 00555715
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556df0
        ;   Label: shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
    TEST EAX,EAX                        ; 00556df4
    JL 0x00556df9                       ; 00556df6
        ;   XREF to: 00556df9 (CONDITIONAL_JUMP)  ; LAB_00556df9
    RET                                 ; 00556df8
    NEG EAX                             ; 00556df9
        ;   Label: LAB_00556df9
    RET                                 ; 00556dfb

