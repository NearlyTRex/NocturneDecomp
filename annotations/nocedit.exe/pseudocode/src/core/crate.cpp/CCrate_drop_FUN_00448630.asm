; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_drop_FUN_00448630(CCrate *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448630
        ;   Label: core_crate.cpp_CCrate_drop_FUN_00448630
    MOV dword ptr [EAX + 0x30],0x0      ; 00448634
    MOV dword ptr [EAX + 0x38],0x0      ; 0044863b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00448642
    RET                                 ; 0044864c

