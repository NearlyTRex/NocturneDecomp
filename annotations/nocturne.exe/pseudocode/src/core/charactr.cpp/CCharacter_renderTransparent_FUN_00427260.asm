; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_gabriela.cpp_CGabriella_renderTransparent_FUN_00498db0 at 00498dcc
;   core_stranger.cpp_CStranger_renderTransparent_FUN_0053d6c0 at 0053d6c6
;   core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005576a0 at 005577b4
;   core_zombie.cpp_CZombie_renderTransparent_FUN_00561940 at 00561a89
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderFlames_FUN_00427290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427260
        ;   Label: core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427261
    CMP dword ptr [EBX + 0x2f08],0x0    ; 00427265
    JLE 0x00427277                      ; 0042726c
        ;   XREF to: 00427277 (CONDITIONAL_JUMP)  ; LAB_00427277
    CMP dword ptr [EBX + 0x2618],0x0    ; 0042726e
    JNZ 0x0042727f                      ; 00427275
        ;   XREF to: 0042727f (CONDITIONAL_JUMP)  ; LAB_0042727f
    MOV EAX,dword ptr [EBX + 0x2618]    ; 00427277
        ;   Label: LAB_00427277
    POP EBX                             ; 0042727d
    RET                                 ; 0042727e
    PUSH EBX                            ; 0042727f
        ;   Label: LAB_0042727f
    CALL core_charactr.cpp_CCharacter_renderFlames_FUN_00427290 ; 00427280
        ;   XREF to: 00427290 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderFlames_FUN_00427290(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00427285
    MOV EAX,dword ptr [EBX + 0x2618]    ; 00427288
    POP EBX                             ; 0042728e
    RET                                 ; 0042728f

