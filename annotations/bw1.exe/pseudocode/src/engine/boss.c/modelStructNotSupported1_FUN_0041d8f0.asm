; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041d8f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005d4971
;   TerminatedCString s_modelStruct_not_supporte_005d4982
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d4971                    ; 0041d8f0 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported1_FUN_0041d8f0
    MOV ECX,0x35                        ; 0041d8f5
    PUSH 0x5d4982                       ; 0041d8fa | = "modelStruct not supported"
    MOV dword ptr [0x01d1d400],EDX      ; 0041d8ff | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0041d905 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0041d90b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041d910
    XOR EAX,EAX                         ; 0041d913
    RET                                 ; 0041d915

