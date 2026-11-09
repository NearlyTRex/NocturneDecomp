; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bd6a0(void)
;
;
; XREF[2]:
;   core_game.cpp_FUN_004bd620 at 004bd65a
;   core_game.cpp_FUN_004bd7d0 at 004bd81c
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01ed73e0
;   undefined4 g_CScriptInstance.field12_0xc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd6a0
        ;   Label: core_game.cpp_FUN_004bd6a0
    PUSH ESI                            ; 004bd6a1
    PUSH EDI                            ; 004bd6a2
    PUSH EBP                            ; 004bd6a3
    SUB ESP,0x9c                        ; 004bd6a4
    MOV EDX,dword ptr [0x006039e0]      ; 004bd6aa | g_CScriptPtr
    MOV ECX,dword ptr [EDX + 0xc]       ; 004bd6b0 | g_CScriptInstance.field12_0xc
    TEST ECX,ECX                        ; 004bd6b3
    JNZ 0x004bd479                      ; 004bd6b5
        ;   XREF to: 004bd479 (CONDITIONAL_JUMP)  ; LAB_004bd479
    ADD ESP,0x9c                        ; 004bd6bb
        ;   Label: LAB_004bd6bb
    POP EBP                             ; 004bd6c1
    POP EDI                             ; 004bd6c2
    POP ESI                             ; 004bd6c3
    POP EBX                             ; 004bd6c4
    RET                                 ; 004bd6c5

