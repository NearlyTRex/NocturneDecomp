; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_onDropped_FUN_00576510(CTrap *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00576510
        ;   Label: core_trap.cpp_CTrap_onDropped_FUN_00576510
    MOV dword ptr [EAX + 0x430],0x0     ; 00576514
    RET                                 ; 0057651e

