; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041a480(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005cc3fa
;   TerminatedCString s_modelStruct_not_supporte_005cc40b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5cc3fa                    ; 0041a480 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported1_FUN_0041a480
    MOV ECX,0x35                        ; 0041a485
    PUSH 0x5cc40b                       ; 0041a48a | = "modelStruct not supported"
    MOV dword ptr [0x01d046a0],EDX      ; 0041a48f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0041a495 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0041a49b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0041a4a0
    XOR EAX,EAX                         ; 0041a4a3
    RET                                 ; 0041a4a5

