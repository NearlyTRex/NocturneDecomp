; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools *this_ptr,char *format)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[8]:
;   core_game.cpp_FUN_004b296e at 004b2a35
;   core_game.cpp_FUN_004b90d0 at 004b9934
;   core_game.cpp_FUN_004bbf70 at 004bc3b9
;   core_main.c_FUN_004e45e0 at 004e4692
;   core_mission.cpp_FUN_004fd280 at 004fd3d9
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d27d
;   core_netgame.cpp_FUN_0050b8d0 at 0050ba39
;   core_script.cpp_FUN_00522350 at 00524b5a
;
; Referenced Globals:
;   TerminatedCString s_Message_005d1fb9
;   undefined4 DAT_01c2639c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bda0
        ;   Label: shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0
    SUB ESP,0x4                         ; 0047bda1
    LEA EAX,[ESP + 0x14]                ; 0047bda4
    MOV dword ptr [ESP],EAX             ; 0047bda8
    MOV EAX,ESP                         ; 0047bdab
    PUSH EAX                            ; 0047bdad
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047bdae
    PUSH EDX                            ; 0047bdb2
    PUSH 0x1c225f0                      ; 0047bdb3
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0047bdb8
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 0047bdbd
    MOV EBX,dword ptr [0x01c2639c]      ; 0047bdc0 | DAT_01c2639c
    PUSH EBX                            ; 0047bdc6
    PUSH 0x1c225f0                      ; 0047bdc7
    XOR ECX,ECX                         ; 0047bdcc
    PUSH 0x5d1fb9                       ; 0047bdce | = "Message"
    MOV dword ptr [ESP + 0xc],ECX       ; 0047bdd3
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 ; 0047bdd7
        ;   XREF to: 0047b800 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0047bddc
    ADD ESP,0x4                         ; 0047bddf
    POP EBX                             ; 0047bde2
    RET                                 ; 0047bde3

