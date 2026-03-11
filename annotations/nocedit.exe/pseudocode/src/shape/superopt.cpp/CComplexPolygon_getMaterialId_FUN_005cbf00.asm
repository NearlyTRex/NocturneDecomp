; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005cbf00(CComplexPolygon *this_ptr)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00 at 005d7e73
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cbf00
        ;   Label: shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005cbf00
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cbf04
    RET                                 ; 005cbf07

