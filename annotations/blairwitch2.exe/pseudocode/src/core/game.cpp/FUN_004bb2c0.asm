; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bb2c0(void)
;
;
; XREF[2]:
;   core_game.cpp_FUN_004bb240 at 004bb27a
;   core_game.cpp_FUN_004bb3d0 at 004bb43e
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01e65cd0
;   undefined4 g_CScriptInstance.field12_0xc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb2c0
        ;   Label: core_game.cpp_FUN_004bb2c0
    PUSH ESI                            ; 004bb2c1
    PUSH EDI                            ; 004bb2c2
    PUSH EBP                            ; 004bb2c3
    SUB ESP,0x9c                        ; 004bb2c4
    MOV EDX,dword ptr [0x0061b460]      ; 004bb2ca | g_CScriptPtr
    MOV ECX,dword ptr [EDX + 0xc]       ; 004bb2d0 | g_CScriptInstance.field12_0xc
    TEST ECX,ECX                        ; 004bb2d3
    JNZ 0x004bb099                      ; 004bb2d5
        ;   XREF to: 004bb099 (CONDITIONAL_JUMP)  ; LAB_004bb099
    ADD ESP,0x9c                        ; 004bb2db
        ;   Label: LAB_004bb2db
    POP EBP                             ; 004bb2e1
    POP EDI                             ; 004bb2e2
    POP ESI                             ; 004bb2e3
    POP EBX                             ; 004bb2e4
    RET                                 ; 004bb2e5

