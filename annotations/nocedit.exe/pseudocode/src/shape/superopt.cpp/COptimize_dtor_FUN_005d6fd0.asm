; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl COptimize * __cdecl shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0(COptimize *this_ptr,uint flags)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7d36
;
; Referenced Globals:
;   COptimize_vtable g_COptimizeVTable
;
; Called Functions:
;   shape_superopt.cpp_CObj_dtor_FUN_005d2260
;   shape_superopt.cpp_COptimize_FUN_005d7000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d6fd0
        ;   Label: shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d6fd1
    PUSH EBX                            ; 005d6fd5
    MOV dword ptr [EBX + 0x40],0x663c44 ; 005d6fd6 | g_COptimizeVTable
    CALL shape_superopt.cpp_COptimize_FUN_005d7000 ; 005d6fdd
        ;   XREF to: 005d7000 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_COptimize_FUN_005d7000(COptimize * this_ptr)
    ADD ESP,0x4                         ; 005d6fe2
    PUSH 0x0                            ; 005d6fe5
    PUSH EBX                            ; 005d6fe7
    CALL shape_superopt.cpp_CObj_dtor_FUN_005d2260 ; 005d6fe8
        ;   XREF to: 005d2260 (UNCONDITIONAL_CALL)  ; CObj * shape_superopt.cpp_CObj_dtor_FUN_005d2260(CObj * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d6fed
    POP EBX                             ; 005d6ff0
    RET                                 ; 005d6ff1

