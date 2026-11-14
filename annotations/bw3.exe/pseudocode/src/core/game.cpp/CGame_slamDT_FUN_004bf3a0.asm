; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_slamDT_FUN_004bf3a0(CGame *this_ptr,float delta_time)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[6]:
;   core_fire.cpp_CFirefly_process_FUN_004988b0 at 00498904
;   core_fire.cpp_CSpark_process_FUN_00497eb0 at 00497eff
;   core_game.cpp_FUN_004b6f30 at 004b6fb6
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50 at 00507e80
;   core_prye.cpp_CPrye_process_FUN_00518ab0 at 00518c57
;   core_prye.cpp_FUN_00518cd0 at 00518eb8
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005c397e
;   TerminatedCString s_CGame_slamDT_invalid_dt_005c398f
;   undefined4 DAT_005c39ac
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf3a0
        ;   Label: core_game.cpp_CGame_slamDT_FUN_004bf3a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bf3a1
    FLD float ptr [ESP + 0xc]           ; 004bf3a5
    FLDZ                                ; 004bf3a9
    FCOMPP                              ; 004bf3ab
    FNSTSW AX                           ; 004bf3ad
    SAHF                                ; 004bf3af
    JA 0x004bf3e1                       ; 004bf3b0
        ;   XREF to: 004bf3e1 (CONDITIONAL_JUMP)  ; LAB_004bf3e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004bf3b2
        ;   Label: LAB_004bf3b2
    MOV dword ptr [EBX + 0x314],EAX     ; 004bf3b6
    FLD float ptr [EBX + 0x314]         ; 004bf3bc
    FMUL float ptr [0x005c39ac]         ; 004bf3c2 | DAT_005c39ac
    CALL crt_math.c_round_FUN_005a3120  ; 004bf3c8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0x310]       ; 004bf3cd
    MOV EBX,dword ptr [EBX + 0x310]     ; 004bf3d3
    MOV dword ptr [0x01c5fad0],EBX      ; 004bf3d9 | DAT_01c5fad0
    POP EBX                             ; 004bf3df
    RET                                 ; 004bf3e0
    MOV EDX,0x5c397e                    ; 004bf3e1 | = "..\\core\\game.cpp"
        ;   Label: LAB_004bf3e1
    MOV ECX,0x1317                      ; 004bf3e6
    PUSH 0x5c398f                       ; 004bf3eb | = "CGame::slamDT - invalid dt!"
    MOV dword ptr [0x01d71de0],EDX      ; 004bf3f0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004bf3f6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004bf3fc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004bf401
    JMP 0x004bf3b2                      ; 004bf404
        ;   XREF to: 004bf3b2 (UNCONDITIONAL_JUMP)  ; LAB_004bf3b2

