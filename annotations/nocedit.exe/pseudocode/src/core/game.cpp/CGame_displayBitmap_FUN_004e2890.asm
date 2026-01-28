; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_game_cpp_CGame_displayBitmap_FUN_004e2890(void)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ab47c
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0062d24b
;   TerminatedCString s_CGame_displayBitmap_trie_0062d25c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2890
        ;   Label: core_game.cpp_CGame_displayBitmap_FUN_004e2890
    PUSH ESI                            ; 004e2891
    PUSH EDI                            ; 004e2892
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e2893
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e2897
    CMP byte ptr [EBX + 0x8b4],0x0      ; 004e289b
    JNZ 0x004e28dc                      ; 004e28a2
        ;   XREF to: 004e28dc (CONDITIONAL_JUMP)  ; LAB_004e28dc
    LEA EDI,[EBX + 0x8b4]               ; 004e28a4
        ;   Label: LAB_004e28a4
    PUSH EDI                            ; 004e28aa
    MOV AL,byte ptr [ESI]               ; 004e28ab
        ;   Label: LAB_004e28ab
    MOV byte ptr [EDI],AL               ; 004e28ad
    CMP AL,0x0                          ; 004e28af
    JZ 0x004e28c3                       ; 004e28b1
        ;   XREF to: 004e28c3 (CONDITIONAL_JUMP)  ; LAB_004e28c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004e28b3
    ADD ESI,0x2                         ; 004e28b6
    MOV byte ptr [EDI + 0x1],AL         ; 004e28b9
    ADD EDI,0x2                         ; 004e28bc
    CMP AL,0x0                          ; 004e28bf
    JNZ 0x004e28ab                      ; 004e28c1
        ;   XREF to: 004e28ab (CONDITIONAL_JUMP)  ; LAB_004e28ab
    POP EDI                             ; 004e28c3
        ;   Label: LAB_004e28c3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e28c4
    MOV dword ptr [EBX + 0x9b4],ESI     ; 004e28c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e28ce
    MOV dword ptr [EBX + 0x9b8],ESI     ; 004e28d2
    POP EDI                             ; 004e28d8
    POP ESI                             ; 004e28d9
    POP EBX                             ; 004e28da
    RET                                 ; 004e28db
    LEA EDI,[EBX + 0x8b4]               ; 004e28dc
        ;   Label: LAB_004e28dc
    PUSH EDI                            ; 004e28e2
    PUSH ESI                            ; 004e28e3
    MOV EDX,0x62d24b                    ; 004e28e4 | = "..\\core\\game.cpp"
    MOV ECX,0xfc6                       ; 004e28e9
    PUSH 0x62d25c                       ; 004e28ee | = "CGame::displayBitmap - tried to queue..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004e28f3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004e28f9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e28ff
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 004e2904
    JMP 0x004e28a4                      ; 004e2907
        ;   XREF to: 004e28a4 (UNCONDITIONAL_JUMP)  ; LAB_004e28a4

