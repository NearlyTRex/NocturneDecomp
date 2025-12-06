; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail * this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c6fae
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c21d0
        ;   Label: core_fire.cpp_CBulletTrail_process_FUN_004c21d0
    MOV EDX,dword ptr [EAX + 0x20]      ; 004c21d4
    DEC EDX                             ; 004c21d7
    MOV dword ptr [EAX + 0x20],EDX      ; 004c21d8
    TEST EDX,EDX                        ; 004c21db
    JL 0x004c21e0                       ; 004c21dd | LAB_004c21e0
        ;   XREF to: 004c21e0 (CONDITIONAL_JUMP)
    RET                                 ; 004c21df
    MOV dword ptr [EAX + 0x20],0x0      ; 004c21e0
        ;   Label: LAB_004c21e0
    RET                                 ; 004c21e7

