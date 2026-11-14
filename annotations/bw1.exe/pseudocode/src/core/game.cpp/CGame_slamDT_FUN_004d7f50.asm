; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_slamDT_FUN_004d7f50(CGame *this_ptr,float delta_time)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[8]:
;   core_doc.cpp_CDoc_process_FUN_004693e0 at 004694c4
;   core_doc.cpp_FUN_00469550 at 00469738
;   core_fire.cpp_CFirefly_process_FUN_004ad860 at 004ad8b4
;   core_fire.cpp_CSpark_process_FUN_004acf50 at 004acf9f
;   core_game.cpp_FUN_004ce580 at 004ce606
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_005305a0 at 005305d0
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00585cf4
;   core_stranger.cpp_CStranger_process_FUN_00585a10 at 00585a8d
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005e337a
;   TerminatedCString s_CGame_slamDT_invalid_dt_005e338b
;   undefined4 DAT_005e33a8
;   undefined4 DAT_01c43530
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7f50
        ;   Label: core_game.cpp_CGame_slamDT_FUN_004d7f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d7f51
    FLD float ptr [ESP + 0xc]           ; 004d7f55
    FLDZ                                ; 004d7f59
    FCOMPP                              ; 004d7f5b
    FNSTSW AX                           ; 004d7f5d
    SAHF                                ; 004d7f5f
    JA 0x004d7f91                       ; 004d7f60
        ;   XREF to: 004d7f91 (CONDITIONAL_JUMP)  ; LAB_004d7f91
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d7f62
        ;   Label: LAB_004d7f62
    MOV dword ptr [EBX + 0x294],EAX     ; 004d7f66
    FLD float ptr [EBX + 0x294]         ; 004d7f6c
    FMUL float ptr [0x005e33a8]         ; 004d7f72 | DAT_005e33a8
    CALL crt_math.c_round_FUN_005c03a0  ; 004d7f78
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0x290]       ; 004d7f7d
    MOV EBX,dword ptr [EBX + 0x290]     ; 004d7f83
    MOV dword ptr [0x01c43530],EBX      ; 004d7f89 | DAT_01c43530
    POP EBX                             ; 004d7f8f
    RET                                 ; 004d7f90
    MOV EDX,0x5e337a                    ; 004d7f91 | = "..\\core\\game.cpp"
        ;   Label: LAB_004d7f91
    MOV ECX,0x12e0                      ; 004d7f96
    PUSH 0x5e338b                       ; 004d7f9b | = "CGame::slamDT - invalid dt!"
    MOV dword ptr [0x01d1d400],EDX      ; 004d7fa0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004d7fa6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d7fac
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004d7fb1
    JMP 0x004d7f62                      ; 004d7fb4
        ;   XREF to: 004d7f62 (UNCONDITIONAL_JUMP)  ; LAB_004d7f62

