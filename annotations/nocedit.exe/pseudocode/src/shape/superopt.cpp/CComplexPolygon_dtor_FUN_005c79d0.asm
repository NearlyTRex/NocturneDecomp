; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_dtor_FUN_005c79d0(CComplexPolygon *this_ptr,uint flags)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_cleanup_FUN_005d7000 at 005d70a5
;
; Called Functions:
;   shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c79d0
        ;   Label: shape_superopt.cpp_CComplexPolygon_dtor_FUN_005c79d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c79d1
    PUSH EBX                            ; 005c79d5
    CALL shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0 ; 005c79d6
        ;   XREF to: 005c79f0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CComplexPolygon_free_FUN_005c79f0(CComplexPolygon * this_ptr)
    ADD ESP,0x4                         ; 005c79db
    MOV EAX,EBX                         ; 005c79de
    POP EBX                             ; 005c79e0
    RET                                 ; 005c79e1

