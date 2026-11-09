; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004b1f90(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30 at 004b4ce2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1f90
        ;   Label: core_fire.cpp_FUN_004b1f90
    MOV dword ptr [EAX + 0x4],0x0       ; 004b1f94
    MOV dword ptr [EAX + 0x8],0x0       ; 004b1f9b
    MOV dword ptr [EAX],0x0             ; 004b1fa2
    RET                                 ; 004b1fa8

