; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c_srand_FUN_005c0870(uint seed)
;
; Parameters:
; uint             Stack[0x4]:4   seed
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e71f
;   wincore_winrun.cpp_winMain_FUN_005b2e00 at 005b2e3e
;
; Called Functions:
;   crt_unknown.c_FUN_005c0840
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005c0840     ; 005c0870
        ;   XREF to: 005c0840 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0840()
        ;   Label: crt_stdlib.c_srand_FUN_005c0870
    TEST EAX,EAX                        ; 005c0875
    JZ 0x005c087f                       ; 005c0877
        ;   XREF to: 005c087f (CONDITIONAL_JUMP)  ; LAB_005c087f
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0879
    MOV dword ptr [EAX],EDX             ; 005c087d
    RET                                 ; 005c087f
        ;   Label: LAB_005c087f

