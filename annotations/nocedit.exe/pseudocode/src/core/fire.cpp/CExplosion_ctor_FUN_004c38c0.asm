; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_004c38c0(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6d95
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c38c0
        ;   Label: core_fire.cpp_CExplosion_ctor_FUN_004c38c0
    MOV dword ptr [EAX + 0xc],0x0       ; 004c38c4
    RET                                 ; 004c38cb

