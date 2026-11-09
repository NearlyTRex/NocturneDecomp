; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00433e50(CDemonActor *param_1,int param_2,float param_3)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00409c00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00433e50
        ;   Label: core_charactr.cpp_FUN_00433e50
    CMP dword ptr [EAX + 0x3120],0x0    ; 00433e54
    JZ 0x00433e5e                       ; 00433e5b
        ;   XREF to: 00433e5e (CONDITIONAL_JUMP)  ; LAB_00433e5e
    RET                                 ; 00433e5d
    MOV ECX,dword ptr [ESP + 0x8]       ; 00433e5e
        ;   Label: LAB_00433e5e
    PUSH dword ptr [ESP + 0xc]          ; 00433e62
    PUSH ECX                            ; 00433e66
    PUSH EAX                            ; 00433e67
    CALL core_actor.cpp_FUN_00409c00    ; 00433e68
        ;   XREF to: 00409c00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409c00(CDemonActor * this_ptr, int fly_count, float spawn_radius)
    ADD ESP,0xc                         ; 00433e6d
    RET                                 ; 00433e70

