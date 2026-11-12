; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools *this_ptr,char *format)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[8]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bb9e4
;   core_game.cpp_FUN_004bdfb0 at 004be41c
;   core_game.cpp_setupMovieRecording_FUN_004b3d70 at 004b3e35
;   core_main.c_FUN_004e4400 at 004e44ad
;   core_mission.cpp_FUN_004f7a20 at 004f7b79
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504519
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00505d5d
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c0f6
;
; Referenced Globals:
;   TerminatedCString s_Message_005bce6f
;   undefined4 DAT_01c5bb04
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ce80
        ;   Label: shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80
    SUB ESP,0x404                       ; 0047ce81
    LEA EAX,[ESP + 0x414]               ; 0047ce87
    MOV dword ptr [ESP + 0x400],EAX     ; 0047ce8e
    LEA EAX,[ESP + 0x400]               ; 0047ce95
    PUSH EAX                            ; 0047ce9c
    MOV EDX,dword ptr [ESP + 0x414]     ; 0047ce9d
    PUSH EDX                            ; 0047cea4
    LEA EAX,[ESP + 0x8]                 ; 0047cea5
    PUSH EAX                            ; 0047cea9
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047ceaa
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047ceaf
    MOV EBX,dword ptr [0x01c5bb04]      ; 0047ceb2 | DAT_01c5bb04
    PUSH EBX                            ; 0047ceb8
    LEA EAX,[ESP + 0x4]                 ; 0047ceb9
    PUSH EAX                            ; 0047cebd
    XOR ECX,ECX                         ; 0047cebe
    PUSH 0x5bce6f                       ; 0047cec0 | = "Message"
    MOV dword ptr [ESP + 0x40c],ECX     ; 0047cec5
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 ; 0047cecc
        ;   XREF to: 0047c8e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0047ced1
    ADD ESP,0x404                       ; 0047ced4
    POP EBX                             ; 0047ceda
    RET                                 ; 0047cedb

