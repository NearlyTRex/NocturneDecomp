; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CObj * __cdecl shape_superopt_cpp_CObj_dtor_FUN_005d2260(CObj *this_ptr,uint flags)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0 at 005d6fe8
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7d48
;
; Referenced Globals:
;   CObj_vtable g_CObjVTable
;
; Called Functions:
;   shape_superopt.cpp_CObj_free_FUN_005d2600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2260
        ;   Label: shape_superopt.cpp_CObj_dtor_FUN_005d2260
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d2261
    PUSH EBX                            ; 005d2265
    MOV dword ptr [EBX + 0x18],0x663b64 ; 005d2266 | g_CObjVTable
    CALL shape_superopt.cpp_CObj_free_FUN_005d2600 ; 005d226d
        ;   XREF to: 005d2600 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CObj_free_FUN_005d2600(CObj * this_ptr)
    ADD ESP,0x4                         ; 005d2272
    MOV EAX,EBX                         ; 005d2275
    POP EBX                             ; 005d2277
    RET                                 ; 005d2278

