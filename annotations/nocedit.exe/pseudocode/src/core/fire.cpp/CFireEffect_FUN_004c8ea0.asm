; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_baron.cpp_CBaron_FUN_004136b0 at 00413796
;   core_fire.cpp_CFireEffect_FUN_004c8c10 at 004c8c79
;
; Referenced Globals:
;   CToss* g_TossActiveListHead
;   CCrater[20] g_CraterPool
;
; Called Functions:
;   core_fire.cpp_CCrater_FUN_004c4200
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0xc]          ; 004c8ea0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8ea0
    MOV EAX,[0x02d6c6a0]                ; 004c8ea4 | g_TossActiveListHead
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c8ea9
    SHL EAX,0x4                         ; 004c8ead
    PUSH EDX                            ; 004c8eb0
    MOV EDX,EAX                         ; 004c8eb1
    SHL EAX,0x3                         ; 004c8eb3
    SUB EAX,EDX                         ; 004c8eb6
    ADD EAX,0x2d6c6a4                   ; 004c8eb8 | g_CraterPool
    PUSH EAX                            ; 004c8ebd
    CALL core_fire.cpp_CCrater_FUN_004c4200 ; 004c8ebe
        ;   XREF to: 004c4200 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_FUN_004c4200(CCrater * this_ptr)
    MOV ECX,dword ptr [0x02d6c6a0]      ; 004c8ec3 | g_TossActiveListHead
    INC ECX                             ; 004c8ec9
    ADD ESP,0xc                         ; 004c8eca
    MOV dword ptr [0x02d6c6a0],ECX      ; 004c8ecd | g_TossActiveListHead
    CMP ECX,0x14                        ; 004c8ed3
    JGE 0x004c8ed9                      ; 004c8ed6
        ;   XREF to: 004c8ed9 (CONDITIONAL_JUMP)  ; LAB_004c8ed9
    RET                                 ; 004c8ed8
    PUSH ESI                            ; 004c8ed9
        ;   Label: LAB_004c8ed9
    XOR ESI,ESI                         ; 004c8eda
    MOV dword ptr [0x02d6c6a0],ESI      ; 004c8edc | g_TossActiveListHead
    POP ESI                             ; 004c8ee2
    RET                                 ; 004c8ee3

