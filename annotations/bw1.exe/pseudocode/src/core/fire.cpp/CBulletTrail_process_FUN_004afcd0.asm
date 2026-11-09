; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004afcd0(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004b4dd0 at 004b4ee6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004afcd0
        ;   Label: core_fire.cpp_CBulletTrail_process_FUN_004afcd0
    MOV EDX,dword ptr [EAX + 0x20]      ; 004afcd4
    DEC EDX                             ; 004afcd7
    MOV dword ptr [EAX + 0x20],EDX      ; 004afcd8
    TEST EDX,EDX                        ; 004afcdb
    JL 0x004afce0                       ; 004afcdd
        ;   XREF to: 004afce0 (CONDITIONAL_JUMP)  ; LAB_004afce0
    RET                                 ; 004afcdf
    MOV dword ptr [EAX + 0x20],0x0      ; 004afce0
        ;   Label: LAB_004afce0
    RET                                 ; 004afce7

