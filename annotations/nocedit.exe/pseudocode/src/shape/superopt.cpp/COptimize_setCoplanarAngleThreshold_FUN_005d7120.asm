; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_setCoplanarAngleThreshold_FUN_005d7120(COptimize *this_ptr,double threshold)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   threshold
;
; XREF[1]:
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 at 005d7c85
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d7120
        ;   Label: shape_superopt.cpp_COptimize_setCoplanarAngleThreshold_FUN_005d7120
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d7124
    MOV dword ptr [EDX + 0x24],EAX      ; 005d7128
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d712b
    MOV dword ptr [EDX + 0x28],EAX      ; 005d712f
    RET                                 ; 005d7132

