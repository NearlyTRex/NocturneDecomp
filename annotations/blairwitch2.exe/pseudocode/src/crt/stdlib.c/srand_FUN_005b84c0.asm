; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c_srand_FUN_005b84c0(uint seed)
;
; Parameters:
; uint             Stack[0x4]:4   seed
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d547
;   wincore_winrun.cpp_winMain_FUN_0058f310 at 0058f34e
;
; Called Functions:
;   crt_unknown.c_FUN_005b8490
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005b8490     ; 005b84c0
        ;   XREF to: 005b8490 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8490()
        ;   Label: crt_stdlib.c_srand_FUN_005b84c0
    TEST EAX,EAX                        ; 005b84c5
    JZ 0x005b84cf                       ; 005b84c7
        ;   XREF to: 005b84cf (CONDITIONAL_JUMP)  ; LAB_005b84cf
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b84c9
    MOV dword ptr [EAX],EDX             ; 005b84cd
    RET                                 ; 005b84cf
        ;   Label: LAB_005b84cf

