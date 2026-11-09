; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_005a8e10(CCryptVessel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8e10
        ;   Label: core_vessel.cpp_CCryptVessel_onDropped_FUN_005a8e10
    MOV dword ptr [EAX + 0x30],0x0      ; 005a8e14
    MOV dword ptr [EAX + 0x38],0x0      ; 005a8e1b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 005a8e22
    RET                                 ; 005a8e2c

