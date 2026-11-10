; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_onDropped_FUN_00439ed0(CCrate *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439ed0
        ;   Label: core_crate.cpp_CCrate_onDropped_FUN_00439ed0
    MOV dword ptr [EAX + 0x30],0x0      ; 00439ed4
    MOV dword ptr [EAX + 0x38],0x0      ; 00439edb
    MOV dword ptr [EAX + 0x430],0x0     ; 00439ee2
    RET                                 ; 00439eec

