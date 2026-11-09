; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLaserBeam * core_fire_cpp_CLaserBeam_dtor_FUN_004a4700(CLaserBeam *this_ptr,uint flags)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4700
        ;   Label: core_fire.cpp_CLaserBeam_dtor_FUN_004a4700
    RET                                 ; 004a4704

