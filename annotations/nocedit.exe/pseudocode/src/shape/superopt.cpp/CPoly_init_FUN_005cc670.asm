; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CPoly_init_FUN_005cc670(CPoly *this_ptr,CObj *parent_obj)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CObj *           Stack[0x8]:4   parent_obj
;
; XREF[1]:
;   shape_superopt.cpp_CPoly_ctor_FUN_005cc620 at 005cc648
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cc670
        ;   Label: shape_superopt.cpp_CPoly_init_FUN_005cc670
    MOV EDX,dword ptr [ESP + 0x8]       ; 005cc674
    MOV dword ptr [EAX + 0x60],0x0      ; 005cc678
    PUSH -0x1                           ; 005cc67f
    MOV dword ptr [EAX],EDX             ; 005cc681
    PUSH EAX                            ; 005cc683
    MOV EDX,dword ptr [EAX + 0x64]      ; 005cc684
    MOV dword ptr [EAX + 0x58],0x0      ; 005cc687
    CALL dword ptr [EDX + 0x50]         ; 005cc68e
    ADD ESP,0x8                         ; 005cc691
    RET                                 ; 005cc694

