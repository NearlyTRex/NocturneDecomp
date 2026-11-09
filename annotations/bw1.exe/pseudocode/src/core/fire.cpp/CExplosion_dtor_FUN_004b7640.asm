; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExplosion * core_fire_cpp_CExplosion_dtor_FUN_004b7640(CExplosion *this_ptr,uint flags)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7640
        ;   Label: core_fire.cpp_CExplosion_dtor_FUN_004b7640
    RET                                 ; 004b7644

