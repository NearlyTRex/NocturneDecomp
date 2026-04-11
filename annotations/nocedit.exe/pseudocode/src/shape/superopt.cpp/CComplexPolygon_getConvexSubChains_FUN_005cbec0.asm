; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SEdgeChainEntry * __cdecl shape_superopt_cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0(CComplexPolygon *this_ptr,int *out_count)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   out_count
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00 at 005d7e68
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cbec0
        ;   Label: shape_superopt.cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005cbec4
    MOV EAX,dword ptr [EDX + 0x8]       ; 005cbec8
    MOV dword ptr [ECX],EAX             ; 005cbecb
    MOV EAX,dword ptr [EDX + 0xc]       ; 005cbecd
    RET                                 ; 005cbed0

