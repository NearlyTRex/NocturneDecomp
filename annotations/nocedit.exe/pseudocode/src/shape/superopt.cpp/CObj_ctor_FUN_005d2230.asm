; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CObj * __cdecl shape_superopt_cpp_CObj_ctor_FUN_005d2230(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_superopt.cpp_COptimize_ctor_FUN_005d6f90 at 005d6f9a
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7882
;
; Referenced Globals:
;   CObj_vtable g_CObjVTable
;
; Called Functions:
;   shape_superopt.cpp_CObj_init_FUN_005d22d0
;   shape_superopt.cpp_CObj_reset_FUN_005d2280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2230
        ;   Label: shape_superopt.cpp_CObj_ctor_FUN_005d2230
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d2231
    PUSH EBX                            ; 005d2235
    MOV dword ptr [EBX + 0x18],0x663b64 ; 005d2236 | g_CObjVTable
    CALL shape_superopt.cpp_CObj_reset_FUN_005d2280 ; 005d223d
        ;   XREF to: 005d2280 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CObj_reset_FUN_005d2280(CObj * this_ptr)
    ADD ESP,0x4                         ; 005d2242
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d2245
    PUSH EDX                            ; 005d2249
    MOV ECX,dword ptr [ESP + 0x10]      ; 005d224a
    PUSH ECX                            ; 005d224e
    PUSH EBX                            ; 005d224f
    CALL shape_superopt.cpp_CObj_init_FUN_005d22d0 ; 005d2250
        ;   XREF to: 005d22d0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CObj_init_FUN_005d22d0(CObj * this_ptr, int poly_count, int vertex_count)
    ADD ESP,0xc                         ; 005d2255
    MOV EAX,EBX                         ; 005d2258
    POP EBX                             ; 005d225a
    RET                                 ; 005d225b

