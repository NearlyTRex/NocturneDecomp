; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_005851e0(CCryptVessel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005851e0
        ;   Label: core_vessel.cpp_CCryptVessel_onDropped_FUN_005851e0
    MOV dword ptr [EAX + 0x30],0x0      ; 005851e4
    MOV dword ptr [EAX + 0x38],0x0      ; 005851eb
    MOV dword ptr [EAX + 0x430],0x0     ; 005851f2
    RET                                 ; 005851fc

