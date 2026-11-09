; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_00576660(CCryptVessel *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00576660
        ;   Label: core_vessel.cpp_CCryptVessel_onDropped_FUN_00576660
    MOV dword ptr [EAX + 0x30],0x0      ; 00576664
    MOV dword ptr [EAX + 0x38],0x0      ; 0057666b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 00576672
    RET                                 ; 0057667c

