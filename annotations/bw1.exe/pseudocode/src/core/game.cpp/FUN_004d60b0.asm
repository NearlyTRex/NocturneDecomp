; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004d60b0(void)
;
;
; XREF[2]:
;   core_game.cpp_FUN_004d6030 at 004d606a
;   core_game.cpp_FUN_004d61e0 at 004d622c
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01e81c80
;   undefined4 g_CScriptInstance.field12_0xc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d60b0
        ;   Label: core_game.cpp_FUN_004d60b0
    PUSH ESI                            ; 004d60b1
    PUSH EDI                            ; 004d60b2
    PUSH EBP                            ; 004d60b3
    SUB ESP,0x9c                        ; 004d60b4
    MOV EDX,dword ptr [0x00622ad0]      ; 004d60ba | g_CScriptPtr
    MOV ECX,dword ptr [EDX + 0xc]       ; 004d60c0 | g_CScriptInstance.field12_0xc
    TEST ECX,ECX                        ; 004d60c3
    JNZ 0x004d5e89                      ; 004d60c5
        ;   XREF to: 004d5e89 (CONDITIONAL_JUMP)  ; LAB_004d5e89
    ADD ESP,0x9c                        ; 004d60cb
        ;   Label: LAB_004d60cb
    POP EBP                             ; 004d60d1
    POP EDI                             ; 004d60d2
    POP ESI                             ; 004d60d3
    POP EBX                             ; 004d60d4
    RET                                 ; 004d60d5

