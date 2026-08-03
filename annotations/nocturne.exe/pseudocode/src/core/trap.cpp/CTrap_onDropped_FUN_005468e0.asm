; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_onDropped_FUN_005468e0(CTrap *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005468e0
        ;   Label: core_trap.cpp_CTrap_onDropped_FUN_005468e0
    MOV dword ptr [EAX + 0x2cc],0x0     ; 005468e4
    RET                                 ; 005468ee

