; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00433320(CDemonActor *param_1,int param_2,float param_3)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00409c40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00433320
        ;   Label: core_charactr.cpp_FUN_00433320
    CMP dword ptr [EAX + 0x33a0],0x0    ; 00433324
    JZ 0x0043332e                       ; 0043332b
        ;   XREF to: 0043332e (CONDITIONAL_JUMP)  ; LAB_0043332e
    RET                                 ; 0043332d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043332e
        ;   Label: LAB_0043332e
    PUSH dword ptr [ESP + 0xc]          ; 00433332
    PUSH ECX                            ; 00433336
    PUSH EAX                            ; 00433337
    CALL core_actor.cpp_FUN_00409c40    ; 00433338
        ;   XREF to: 00409c40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409c40(CDemonActor * this_ptr, int fly_count, float spawn_radius)
    ADD ESP,0xc                         ; 0043333d
    RET                                 ; 00433340

