; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_setMaxPolygonSides_FUN_005d71c0(COptimize *this_ptr,int max_sides)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   max_sides
;
; XREF[1]:
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 at 005d7cb1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d71c0
        ;   Label: shape_superopt.cpp_COptimize_setMaxPolygonSides_FUN_005d71c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d71c4
    MOV dword ptr [EDX + 0x34],EAX      ; 005d71c8
    RET                                 ; 005d71cb

