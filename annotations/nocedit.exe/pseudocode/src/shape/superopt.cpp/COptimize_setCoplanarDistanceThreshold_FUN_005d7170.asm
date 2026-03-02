; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_setCoplanarDistanceThreshold_FUN_005d7170(COptimize *this_ptr,double threshold)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   threshold
;
; XREF[1]:
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 at 005d7c9f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d7170
        ;   Label: shape_superopt.cpp_COptimize_setCoplanarDistanceThreshold_FUN_005d7170
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d7174
    MOV dword ptr [EDX + 0x2c],EAX      ; 005d7178
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d717b
    MOV dword ptr [EDX + 0x30],EAX      ; 005d717f
    RET                                 ; 005d7182

