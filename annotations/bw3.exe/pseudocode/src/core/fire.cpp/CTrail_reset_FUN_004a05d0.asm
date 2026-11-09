; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_reset_FUN_004a05d0(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1480 at 004a169f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a05d0
        ;   Label: core_fire.cpp_CTrail_reset_FUN_004a05d0
    MOV dword ptr [EAX + 0x10],0x0      ; 004a05d4
    RET                                 ; 004a05db

