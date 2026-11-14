; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(CPuzzle *puzzle,int activate)
;
; Parameters:
; CPuzzle *        Stack[0x4]:4   puzzle
; int              Stack[0x8]:4   activate
;
; XREF[5]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00416790 at 004167f5
;   core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00418220 at 004185a9
;   core_bmppuzzl.cpp_releasePuzzleGraphics_FUN_00415c80 at 00415cbf
;   core_event.cpp_FUN_004a1d00 at 004a23c3
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfae8
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_007c3978
;   undefined4 DAT_007c3980
;   undefined4 DAT_01c43544
;   CGame g_CGameInstance
;
; Called Functions:
;   core_game.cpp_FUN_004d19d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00415be0
        ;   Label: core_bmppuzzl.cpp_activatePuzzle_FUN_00415be0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00415be1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00415be5
    TEST ECX,ECX                        ; 00415be9
    JZ 0x00415c18                       ; 00415beb
        ;   XREF to: 00415c18 (CONDITIONAL_JUMP)  ; LAB_00415c18
    MOV EAX,[0x01c43544]                ; 00415bed | DAT_01c43544
    MOV dword ptr [0x007c3978],EDX      ; 00415bf2 | DAT_007c3978
    MOV [0x007c3980],EAX                ; 00415bf8 | DAT_007c3980
    PUSH ECX                            ; 00415bfd
        ;   Label: LAB_00415bfd
    MOV EAX,dword ptr [EDX]             ; 00415bfe
    PUSH EDX                            ; 00415c00
    CALL dword ptr [EAX + 0x14]         ; 00415c01
    ADD ESP,0x8                         ; 00415c04
    MOV ESI,dword ptr [0x0061d95c]      ; 00415c07 | g_CGamePtr
    PUSH ESI                            ; 00415c0d | g_CGameInstance
    CALL core_game.cpp_FUN_004d19d0     ; 00415c0e
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    ADD ESP,0x4                         ; 00415c13
    POP ESI                             ; 00415c16
    RET                                 ; 00415c17
    MOV dword ptr [0x007c3978],ECX      ; 00415c18 | DAT_007c3978
        ;   Label: LAB_00415c18
    JMP 0x00415bfd                      ; 00415c1e
        ;   XREF to: 00415bfd (UNCONDITIONAL_JUMP)  ; LAB_00415bfd

