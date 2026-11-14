; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_boss_c_modelStructNotSupported3_FUN_0041ac90(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; XREF[1]:
;   engine_model.c_freeMRGLData_FUN_004f80f0 at 004f810a
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b72b0                    ; 0041ac90
        ;   Label: engine_boss.c_modelStructNotSupported3_FUN_0041ac90
    MOV ECX,0x3f                        ; 0041ac95
    PUSH 0x5b72c1                       ; 0041ac9a
    MOV dword ptr [0x01d71de0],EDX      ; 0041ac9f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0041aca5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0041acab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0041acb0
    RET                                 ; 0041acb3

