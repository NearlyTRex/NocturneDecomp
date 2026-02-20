; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COptimize * __cdecl shape_superopt_cpp_COptimize_ctor_FUN_005d6f90(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7c38
;
; Referenced Globals:
;   COptimize_vtable g_COptimizeVTable
;
; Called Functions:
;   shape_superopt.cpp_CObj_ctor_FUN_005d2230
;   shape_superopt.cpp_COptimize_FUN_005d7000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d6f90
        ;   Label: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
    PUSH 0x0                            ; 005d6f91
    PUSH 0x0                            ; 005d6f93
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d6f95
    PUSH EDX                            ; 005d6f99
    CALL shape_superopt.cpp_CObj_ctor_FUN_005d2230 ; 005d6f9a
        ;   XREF to: 005d2230 (UNCONDITIONAL_CALL)  ; CObj * shape_superopt.cpp_CObj_ctor_FUN_005d2230(CObj * this_ptr, int poly_count, int vertex_count)
    MOV dword ptr [EAX + 0x40],0x663c44 ; 005d6f9f | g_COptimizeVTable
    ADD ESP,0xc                         ; 005d6fa6
    MOV dword ptr [EAX + 0x3c],0x0      ; 005d6fa9
    PUSH EAX                            ; 005d6fb0
    MOV EBX,EAX                         ; 005d6fb1
    MOV dword ptr [EAX + 0x38],0x0      ; 005d6fb3
    CALL shape_superopt.cpp_COptimize_FUN_005d7000 ; 005d6fba
        ;   XREF to: 005d7000 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_COptimize_FUN_005d7000(COptimize * this_ptr)
    ADD ESP,0x4                         ; 005d6fbf
    MOV EAX,EBX                         ; 005d6fc2
    POP EBX                             ; 005d6fc4
    RET                                 ; 005d6fc5

