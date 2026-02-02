; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_scat_cpp_CScat_getPropertyList_FUN_00559120(CScat *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Called Functions:
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00559120
        ;   Label: core_scat.cpp_CScat_getPropertyList_FUN_00559120
    PUSH EDX                            ; 00559124
    MOV ECX,dword ptr [ESP + 0x8]       ; 00559125
    PUSH ECX                            ; 00559129
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 0055912a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0055912f
    RET                                 ; 00559132

