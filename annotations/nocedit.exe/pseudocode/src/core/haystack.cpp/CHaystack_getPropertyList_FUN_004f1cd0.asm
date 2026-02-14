; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_haystack_cpp_CHaystack_getPropertyList_FUN_004f1cd0(CHaystack *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Called Functions:
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f1cd0
        ;   Label: core_haystack.cpp_CHaystack_getPropertyList_FUN_004f1cd0
    PUSH EDX                            ; 004f1cd4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f1cd5
    PUSH ECX                            ; 004f1cd9
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 004f1cda
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f1cdf
    RET                                 ; 004f1ce2

