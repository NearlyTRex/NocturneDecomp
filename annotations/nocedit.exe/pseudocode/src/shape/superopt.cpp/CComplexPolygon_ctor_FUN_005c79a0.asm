; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_ctor_FUN_005c79a0(CComplexPolygon *this_ptr)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_superopt.cpp_CComplexPolygon_splitByDimensions_FUN_005c9500 at 005c97fe
;   shape_superopt.cpp_COptimize_addComplexPolygon_FUN_005d76e0 at 005d7731
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c79a0
        ;   Label: shape_superopt.cpp_CComplexPolygon_ctor_FUN_005c79a0
    MOV dword ptr [EAX + 0x4],0x0       ; 005c79a4
    MOV dword ptr [EAX + 0x8],0x0       ; 005c79ab
    MOV dword ptr [EAX + 0xc],0x0       ; 005c79b2
    MOV dword ptr [EAX + 0x2c],0x0      ; 005c79b9
    MOV dword ptr [EAX + 0x30],0x0      ; 005c79c0
    MOV dword ptr [EAX],0x0             ; 005c79c7
    RET                                 ; 005c79cd

