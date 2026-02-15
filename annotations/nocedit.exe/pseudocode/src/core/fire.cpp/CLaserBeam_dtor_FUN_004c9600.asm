; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_dtor_FUN_004c9600(CLaserBeam *this_ptr,uint flags)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9600
        ;   Label: core_fire.cpp_CLaserBeam_dtor_FUN_004c9600
    RET                                 ; 004c9604

