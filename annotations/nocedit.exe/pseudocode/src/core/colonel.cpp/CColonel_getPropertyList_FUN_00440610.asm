; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_CColonel_getPropertyList_FUN_00440610 (CColonel *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Called Functions:
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00440610
        ;   Label: core_colonel.cpp_CColonel_getPropertyList_FUN_00440610
    PUSH EDX                            ; 00440614
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440615
    PUSH ECX                            ; 00440619
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 0044061a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0044061f
    RET                                 ; 00440622

