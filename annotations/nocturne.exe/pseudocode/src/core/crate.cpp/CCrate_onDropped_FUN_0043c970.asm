; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_onDropped_FUN_0043c970(CCrate *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043c970
        ;   Label: core_crate.cpp_CCrate_onDropped_FUN_0043c970
    MOV dword ptr [EAX + 0x30],0x0      ; 0043c974
    MOV dword ptr [EAX + 0x38],0x0      ; 0043c97b
    MOV dword ptr [EAX + 0x2cc],0x0     ; 0043c982
    RET                                 ; 0043c98c

