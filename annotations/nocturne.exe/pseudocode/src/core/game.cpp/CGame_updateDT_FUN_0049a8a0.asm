; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_updateDT_FUN_0049a8a0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6abb
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049ccd2
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a7127
;   core_menu.cpp_FUN_004d23d0 at 004d24a7
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d0d64
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0163
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1329
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d220a
;
; Referenced Globals:
;   float FLOAT_005823be = 65536
;   double DOUBLE_005823c2 = 0.0000152587890625
;   undefined4 DAT_005b9360
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01c78acc
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a8a0
        ;   Label: core_game.cpp_CGame_updateDT_FUN_0049a8a0
    PUSH ESI                            ; 0049a8a1
    PUSH EDI                            ; 0049a8a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049a8a3
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0049a8a7
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,dword ptr [EBX + 0x25c]     ; 0049a8ac
    MOV ESI,EAX                         ; 0049a8b2
    SUB EAX,EDX                         ; 0049a8b4
    MOV EDX,EAX                         ; 0049a8b6
    MOV ECX,0x12                        ; 0049a8b8
    SAR EDX,0x1f                        ; 0049a8bd
    IDIV ECX                            ; 0049a8c0
    MOV dword ptr [EBX + 0x260],EAX     ; 0049a8c2
    TEST EAX,EAX                        ; 0049a8c8
    JL 0x0049a920                       ; 0049a8ca
        ;   XREF to: 0049a920 (CONDITIONAL_JUMP)  ; LAB_0049a920
    MOV dword ptr [EBX + 0x25c],ESI     ; 0049a8cc
        ;   Label: LAB_0049a8cc
    CMP dword ptr [EBX + 0x260],0x4000  ; 0049a8d2
    JG 0x0049a92c                       ; 0049a8dc
        ;   XREF to: 0049a92c (CONDITIONAL_JUMP)  ; LAB_0049a92c
    FILD dword ptr [EBX + 0x260]        ; 0049a8de
        ;   Label: LAB_0049a8de
    FMUL float ptr [EBX + 0x1ec]        ; 0049a8e4
    MOV EDI,dword ptr [0x01c78acc]      ; 0049a8ea | DAT_01c78acc
    CALL crt_math.c_round_FUN_00563a30  ; 0049a8f0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBX + 0x260]       ; 0049a8f5
    TEST EDI,EDI                        ; 0049a8fb
    JNZ 0x0049a938                      ; 0049a8fd
        ;   XREF to: 0049a938 (CONDITIONAL_JUMP)  ; LAB_0049a938
    FILD dword ptr [EBX + 0x260]        ; 0049a8ff
        ;   Label: LAB_0049a8ff
    MOV EAX,dword ptr [EBX + 0x260]     ; 0049a905
    FMUL double ptr [0x005823c2]        ; 0049a90b | DOUBLE_005823c2
    MOV [0x01bd1d80],EAX                ; 0049a911 | DAT_01bd1d80
    FSTP float ptr [EBX + 0x264]        ; 0049a916
    POP EDI                             ; 0049a91c
    POP ESI                             ; 0049a91d
    POP EBX                             ; 0049a91e
    RET                                 ; 0049a91f
    MOV dword ptr [EBX + 0x260],0x0     ; 0049a920
        ;   Label: LAB_0049a920
    JMP 0x0049a8cc                      ; 0049a92a
        ;   XREF to: 0049a8cc (UNCONDITIONAL_JUMP)  ; LAB_0049a8cc
    MOV dword ptr [EBX + 0x260],0x4000  ; 0049a92c
        ;   Label: LAB_0049a92c
    JMP 0x0049a8de                      ; 0049a936
        ;   XREF to: 0049a8de (UNCONDITIONAL_JUMP)  ; LAB_0049a8de
    FLD float ptr [0x005823be]          ; 0049a938 | FLOAT_005823be
        ;   Label: LAB_0049a938
    FDIV float ptr [0x005b9360]         ; 0049a93e | DAT_005b9360
    FMUL float ptr [EBX + 0x1ec]        ; 0049a944
    CALL crt_math.c_round_FUN_00563a30  ; 0049a94a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBX + 0x260]       ; 0049a94f
    JMP 0x0049a8ff                      ; 0049a955
        ;   XREF to: 0049a8ff (UNCONDITIONAL_JUMP)  ; LAB_0049a8ff

