; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_getPropertyList_FUN_005d9f10(CSvetlana *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Called Functions:
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005d9f10
        ;   Label: core_svetlana.cpp_CSvetlana_getPropertyList_FUN_005d9f10
    PUSH EDX                            ; 005d9f14
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d9f15
    PUSH ECX                            ; 005d9f19
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 005d9f1a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005d9f1f
    RET                                 ; 005d9f22

