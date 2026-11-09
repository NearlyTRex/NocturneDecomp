; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041ac30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005b725a
;   TerminatedCString s_modelStruct_not_supporte_005b726b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b725a                    ; 0041ac30 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported1_FUN_0041ac30
    MOV ECX,0x35                        ; 0041ac35
    PUSH 0x5b726b                       ; 0041ac3a | = "modelStruct not supported"
    MOV dword ptr [0x01d71de0],EDX      ; 0041ac3f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0041ac45 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0041ac4b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0041ac50
    XOR EAX,EAX                         ; 0041ac53
    RET                                 ; 0041ac55

