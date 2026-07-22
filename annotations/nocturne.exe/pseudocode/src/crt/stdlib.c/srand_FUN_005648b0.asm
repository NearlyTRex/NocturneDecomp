; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c_srand_FUN_005648b0(undefined4 param_1)
;
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebb1b
;   wincore_winrun.cpp_FUN_00559260 at 005592e4
;
; Called Functions:
;   FUN_00564880
;
; *****************************************************************************

section .text

    CALL FUN_00564880                   ; 005648b0
        ;   XREF to: 00564880 (UNCONDITIONAL_CALL)  ; undefined FUN_00564880()
        ;   Label: crt_stdlib.c_srand_FUN_005648b0
    TEST EAX,EAX                        ; 005648b5
    JZ 0x005648bf                       ; 005648b7
        ;   XREF to: 005648bf (CONDITIONAL_JUMP)  ; LAB_005648bf
    MOV EDX,dword ptr [ESP + 0x4]       ; 005648b9
    MOV dword ptr [EAX],EDX             ; 005648bd
    RET                                 ; 005648bf
        ;   Label: LAB_005648bf

