; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_00411a40(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8198
;
; Referenced Globals:
;   undefined4 DAT_007dff88
;   undefined4 DAT_007dff8c
;   undefined4 DAT_007dff90
;   undefined4 DAT_007dffb4
;
; Called Functions:
;   core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411a40
        ;   Label: core_bmppuzzl.cpp_releasePuzzleGraphics_FUN_00411a40
    PUSH ESI                            ; 00411a41
    MOV EDX,dword ptr [0x007dffb4]      ; 00411a42 | DAT_007dffb4
    TEST EDX,EDX                        ; 00411a48
    JNZ 0x00411a7c                      ; 00411a4a
        ;   XREF to: 00411a7c (CONDITIONAL_JUMP)  ; LAB_00411a7c
    MOV ESI,dword ptr [0x007dff88]      ; 00411a4c | DAT_007dff88
        ;   Label: LAB_00411a4c
    XOR EBX,EBX                         ; 00411a52
    TEST ESI,ESI                        ; 00411a54
    JLE 0x00411a79                      ; 00411a56
        ;   XREF to: 00411a79 (CONDITIONAL_JUMP)  ; LAB_00411a79
    PUSH EDI                            ; 00411a58
    XOR ESI,ESI                         ; 00411a59
    MOV EAX,dword ptr [ESI + 0x7dff8c]  ; 00411a5b | DAT_007dff8c | DAT_007dff90
        ;   Label: LAB_00411a5b
    PUSH EAX                            ; 00411a61
    MOV EDX,dword ptr [EAX]             ; 00411a62
    ADD ESI,0x4                         ; 00411a64
    INC EBX                             ; 00411a67
    CALL dword ptr [EDX + 0x10]         ; 00411a68
    MOV EDI,dword ptr [0x007dff88]      ; 00411a6b | DAT_007dff88
    ADD ESP,0x4                         ; 00411a71
    CMP EBX,EDI                         ; 00411a74
    JL 0x00411a5b                       ; 00411a76
        ;   XREF to: 00411a5b (CONDITIONAL_JUMP)  ; LAB_00411a5b
    POP EDI                             ; 00411a78
    POP ESI                             ; 00411a79
        ;   Label: LAB_00411a79
    POP EBX                             ; 00411a7a
    RET                                 ; 00411a7b
    PUSH 0x0                            ; 00411a7c
        ;   Label: LAB_00411a7c
    PUSH EDX                            ; 00411a7e
    CALL core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0 ; 00411a7f
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; void core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0(CPuzzle * puzzle, int activate)
    ADD ESP,0x8                         ; 00411a84
    JMP 0x00411a4c                      ; 00411a87
        ;   XREF to: 00411a4c (UNCONDITIONAL_JUMP)  ; LAB_00411a4c

