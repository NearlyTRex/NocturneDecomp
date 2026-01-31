; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_icepick_cpp_CIcePick_getPropertyList_FUN_004f97a0 (CIcePick *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Called Functions:
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f97a0
        ;   Label: core_icepick.cpp_CIcePick_getPropertyList_FUN_004f97a0
    PUSH EDX                            ; 004f97a4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f97a5
    PUSH ECX                            ; 004f97a9
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 004f97aa
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f97af
    RET                                 ; 004f97b2

