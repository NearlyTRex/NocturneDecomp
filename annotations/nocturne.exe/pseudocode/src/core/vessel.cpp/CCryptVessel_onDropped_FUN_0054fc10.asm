; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_0054fc10(CCryptVessel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fc10
        ;   Label: core_vessel.cpp_CCryptVessel_onDropped_FUN_0054fc10
    MOV dword ptr [EAX + 0x30],0x0      ; 0054fc14
    MOV dword ptr [EAX + 0x38],0x0      ; 0054fc1b
    MOV dword ptr [EAX + 0x2cc],0x0     ; 0054fc22
    RET                                 ; 0054fc2c

