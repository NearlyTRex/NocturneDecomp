; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041ac60(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   engine_model.c_loadModelFile_FUN_004f7f20 at 004f80dd
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005b7285
;   TerminatedCString s_modelStruct_not_supporte_005b7296
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b7285                    ; 0041ac60 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported2_FUN_0041ac60
    MOV ECX,0x3a                        ; 0041ac65
    PUSH 0x5b7296                       ; 0041ac6a | = "modelStruct not supported"
    MOV dword ptr [0x01d71de0],EDX      ; 0041ac6f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0041ac75 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0041ac7b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0041ac80
    XOR EAX,EAX                         ; 0041ac83
    RET                                 ; 0041ac85

