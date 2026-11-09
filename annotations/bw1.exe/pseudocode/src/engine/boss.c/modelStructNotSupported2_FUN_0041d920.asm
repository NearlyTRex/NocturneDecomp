; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041d920(void)
;
;
; XREF[1]:
;   engine_model.c_loadModelFile_FUN_0051f6d0 at 0051f88d
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005d499c
;   TerminatedCString s_modelStruct_not_supporte_005d49ad
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d499c                    ; 0041d920 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported2_FUN_0041d920
    MOV ECX,0x3a                        ; 0041d925
    PUSH 0x5d49ad                       ; 0041d92a | = "modelStruct not supported"
    MOV dword ptr [0x01d1d400],EDX      ; 0041d92f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0041d935 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0041d93b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041d940
    XOR EAX,EAX                         ; 0041d943
    RET                                 ; 0041d945

