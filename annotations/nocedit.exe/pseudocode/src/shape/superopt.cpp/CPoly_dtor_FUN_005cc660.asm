; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPoly * __cdecl shape_superopt_cpp_CPoly_dtor_FUN_005cc660(CPoly *this_ptr,uint flags)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   shape_superopt.cpp_CObj_addPolygons_FUN_005d2410 at 005d24ed
;   shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320 at 005d23fc
;   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 at 005d54c0
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7bc5
;
; Referenced Globals:
;   CPoly_vtable g_CPolyVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cc660
        ;   Label: shape_superopt.cpp_CPoly_dtor_FUN_005cc660
    MOV dword ptr [EAX + 0x64],0x663ad4 ; 005cc664 | g_CPolyVTable
    RET                                 ; 005cc66b

