; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a4b0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   engine_model.c_loadModelFile_FUN_00500720 at 005008dd
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005cc425
;   TerminatedCString s_modelStruct_not_supporte_005cc436
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5cc425                    ; 0041a4b0 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported2_FUN_0041a4b0
    MOV ECX,0x3a                        ; 0041a4b5
    PUSH 0x5cc436                       ; 0041a4ba | = "modelStruct not supported"
    MOV dword ptr [0x01d046a0],EDX      ; 0041a4bf | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0041a4c5 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0041a4cb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 0041a4d0
    XOR EAX,EAX                         ; 0041a4d3
    RET                                 ; 0041a4d5

