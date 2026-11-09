; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_onDropped_FUN_00449180(CCrate *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00449180
        ;   Label: core_crate.cpp_CCrate_onDropped_FUN_00449180
    MOV dword ptr [EAX + 0x30],0x0      ; 00449184
    MOV dword ptr [EAX + 0x38],0x0      ; 0044918b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00449192
    RET                                 ; 0044919c

