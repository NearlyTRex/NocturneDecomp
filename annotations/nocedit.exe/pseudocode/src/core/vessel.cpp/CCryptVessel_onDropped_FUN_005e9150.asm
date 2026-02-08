; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_005e9150(CCryptVessel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e9150
        ;   Label: core_vessel.cpp_CCryptVessel_onDropped_FUN_005e9150
    MOV dword ptr [EAX + 0x30],0x0      ; 005e9154
    MOV dword ptr [EAX + 0x38],0x0      ; 005e915b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 005e9162
    RET                                 ; 005e916c

