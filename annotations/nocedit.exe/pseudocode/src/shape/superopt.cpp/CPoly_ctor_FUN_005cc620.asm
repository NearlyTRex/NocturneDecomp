; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPoly * shape_superopt.cpp_CPoly_ctor_FUN_005cc620(CPoly * this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   shape_superopt.cpp_CObj_addPolygons_FUN_005d2410 at 005d2457
;   shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320 at 005d2393
;   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 at 005d520e
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d79a3
;
; Referenced Globals:
;   CPoly_vtable g_CPolyVTable
;   WatcomTypeInfo g_CP2DTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   shape_superopt.cpp_CPoly_init_FUN_005cc670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc620
        ;   Label: shape_superopt.cpp_CPoly_ctor_FUN_005cc620
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cc621
    PUSH 0x663ca0                       ; 005cc625 | g_CP2DTypeInfo
    PUSH 0x3                            ; 005cc62a
    ADD EBX,0x10                        ; 005cc62c
    PUSH EBX                            ; 005cc62f
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005cc630
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005cc635
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cc638
    PUSH EDX                            ; 005cc63c
    LEA EBX,[EAX + -0x10]               ; 005cc63d
    PUSH EBX                            ; 005cc640
    MOV dword ptr [EBX + 0x64],0x663ad4 ; 005cc641 | g_CPolyVTable
    CALL shape_superopt.cpp_CPoly_init_FUN_005cc670 ; 005cc648
        ;   XREF to: 005cc670 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CPoly_init_FUN_005cc670(CPoly * this_ptr, CObj * parent_obj)
    ADD ESP,0x8                         ; 005cc64d
    MOV EAX,EBX                         ; 005cc650
    POP EBX                             ; 005cc652
    RET                                 ; 005cc653

