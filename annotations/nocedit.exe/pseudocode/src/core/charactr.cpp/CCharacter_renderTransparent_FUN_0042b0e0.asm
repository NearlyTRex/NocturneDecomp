; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_gabriela.cpp_CGabriella_renderTransparent_FUN_004d6230 at 004d624c
;   core_stranger.cpp_CStranger_renderTransparent_FUN_005c3710 at 005c3716
;   core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005f1820 at 005f1968
;   core_zombie.cpp_CZombie_renderTransparent_FUN_005fbe70 at 005fbfb9
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderFlames_FUN_0042b110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b0e0
        ;   Label: core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042b0e1
    CMP dword ptr [EBX + 0x2f10],0x0    ; 0042b0e5
    JLE 0x0042b0f7                      ; 0042b0ec
        ;   XREF to: 0042b0f7 (CONDITIONAL_JUMP)  ; LAB_0042b0f7
    CMP dword ptr [EBX + 0x2620],0x0    ; 0042b0ee
    JNZ 0x0042b0ff                      ; 0042b0f5
        ;   XREF to: 0042b0ff (CONDITIONAL_JUMP)  ; LAB_0042b0ff
    MOV EAX,dword ptr [EBX + 0x2620]    ; 0042b0f7
        ;   Label: LAB_0042b0f7
    POP EBX                             ; 0042b0fd
    RET                                 ; 0042b0fe
    PUSH EBX                            ; 0042b0ff
        ;   Label: LAB_0042b0ff
    CALL core_charactr.cpp_CCharacter_renderFlames_FUN_0042b110 ; 0042b100
        ;   XREF to: 0042b110 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderFlames_FUN_0042b110(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042b105
    MOV EAX,dword ptr [EBX + 0x2620]    ; 0042b108
    POP EBX                             ; 0042b10e
    RET                                 ; 0042b10f

