; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_alphabit_cpp_FUN_004119a0(int *param_1,int *param_2)
;
;
; XREF[5]:
;   core_event.cpp_FUN_0048c2e0 at 0048c99a
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b84a7
;   unkafter_alphabit.cpp_FUN_00411a40 at 00411a7f
;   unkafter_bmppuzzl.cpp_FUN_00412530 at 0041257b
;   unkafter_superopt.cpp_FUN_00413e30 at 004141ae
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_007dffb4
;   undefined4 DAT_007dffbc
;   undefined4 DAT_01c5fae4
;
; Called Functions:
;   core_game.cpp_FUN_004ba490
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004119a0
        ;   Label: unkafter_alphabit.cpp_FUN_004119a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004119a1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004119a5
    TEST ECX,ECX                        ; 004119a9
    JZ 0x004119d8                       ; 004119ab
        ;   XREF to: 004119d8 (CONDITIONAL_JUMP)  ; LAB_004119d8
    MOV EAX,[0x01c5fae4]                ; 004119ad | DAT_01c5fae4
    MOV dword ptr [0x007dffb4],EDX      ; 004119b2 | DAT_007dffb4
    MOV [0x007dffbc],EAX                ; 004119b8 | DAT_007dffbc
    PUSH ECX                            ; 004119bd
        ;   Label: LAB_004119bd
    MOV EAX,dword ptr [EDX]             ; 004119be
    PUSH EDX                            ; 004119c0
    CALL dword ptr [EAX + 0x14]         ; 004119c1
    ADD ESP,0x8                         ; 004119c4
    MOV ESI,dword ptr [0x005fe9dc]      ; 004119c7 | g_CGamePtr
    PUSH ESI                            ; 004119cd
    CALL core_game.cpp_FUN_004ba490     ; 004119ce
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004ba490()
    ADD ESP,0x4                         ; 004119d3
    POP ESI                             ; 004119d6
    RET                                 ; 004119d7
    MOV dword ptr [0x007dffb4],ECX      ; 004119d8 | DAT_007dffb4
        ;   Label: LAB_004119d8
    JMP 0x004119bd                      ; 004119de
        ;   XREF to: 004119bd (UNCONDITIONAL_JUMP)  ; LAB_004119bd

