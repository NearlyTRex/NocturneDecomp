; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_onDropped_FUN_00445d40(CCrate *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00445d40
        ;   Label: core_crate.cpp_CCrate_onDropped_FUN_00445d40
    MOV dword ptr [EAX + 0x30],0x0      ; 00445d44
    MOV dword ptr [EAX + 0x38],0x0      ; 00445d4b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00445d52
    RET                                 ; 00445d5c

