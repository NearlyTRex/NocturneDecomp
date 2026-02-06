; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_CGabriella_getPropertyList_FUN_004d7610 (CGabriella *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Called Functions:
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d7610
        ;   Label: core_gabriela.cpp_CGabriella_getPropertyList_FUN_004d7610
    PUSH EDX                            ; 004d7614
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d7615
    PUSH ECX                            ; 004d7619
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 004d761a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004d761f
    RET                                 ; 004d7622

