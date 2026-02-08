; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trap_cpp_CTrap_onDropped_FUN_005de750(CTrap *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005de750
        ;   Label: core_trap.cpp_CTrap_onDropped_FUN_005de750
    MOV dword ptr [EAX + 0x2d4],0x0     ; 005de754
    RET                                 ; 005de75e

