; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_process_FUN_00497330(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_0049c430 at 0049c55d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00497330
        ;   Label: core_fire.cpp_CBulletTrail_process_FUN_00497330
    MOV EDX,dword ptr [EAX + 0x20]      ; 00497334
    DEC EDX                             ; 00497337
    MOV dword ptr [EAX + 0x20],EDX      ; 00497338
    TEST EDX,EDX                        ; 0049733b
    JL 0x00497340                       ; 0049733d
        ;   XREF to: 00497340 (CONDITIONAL_JUMP)  ; LAB_00497340
    RET                                 ; 0049733f
    MOV dword ptr [EAX + 0x20],0x0      ; 00497340
        ;   Label: LAB_00497340
    RET                                 ; 00497347

