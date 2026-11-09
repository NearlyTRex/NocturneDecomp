; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLaserBeam * core_fire_cpp_CLaserBeam_dtor_FUN_004b7660(CLaserBeam *this_ptr,uint flags)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7660
        ;   Label: core_fire.cpp_CLaserBeam_dtor_FUN_004b7660
    RET                                 ; 004b7664

