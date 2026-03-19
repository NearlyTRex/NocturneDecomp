; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004e09a0(void)
;
;
; XREF[2]:
;   core_game.cpp_CGame_beginFadeIn_FUN_004e0920 at 004e095a
;   core_game.cpp_CGame_renderIrisFade_FUN_004e0aa0 at 004e0add
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 0310f858
;   CScript g_CScriptInstance
;   undefined4 g_CScriptInstance.focus_actor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e09a0
        ;   Label: core_game.cpp_calculateIrisFadeCenter_FUN_004e09a0
    PUSH ESI                            ; 004e09a1
    PUSH EDI                            ; 004e09a2
    SUB ESP,0x60                        ; 004e09a3
    MOV EAX,[0x00680d50]                ; 004e09a6 | g_CScriptInstance | g_CScriptPtr
    MOV EDX,dword ptr [EAX + 0xc]       ; 004e09ab | g_CScriptInstance.focus_actor
    TEST EDX,EDX                        ; 004e09ae
    JNZ 0x004e07d5                      ; 004e09b0
        ;   XREF to: 004e07d5 (CONDITIONAL_JUMP)  ; LAB_004e07d5
    ADD ESP,0x60                        ; 004e09b6
        ;   Label: LAB_004e09b6
    POP EDI                             ; 004e09b9
    POP ESI                             ; 004e09ba
    POP EBX                             ; 004e09bb
    RET                                 ; 004e09bc

