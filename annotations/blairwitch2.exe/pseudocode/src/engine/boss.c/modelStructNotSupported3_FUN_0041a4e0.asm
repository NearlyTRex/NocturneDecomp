; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_boss_c_modelStructNotSupported3_FUN_0041a4e0(SMRGLHeaderExtended *mrgl_data)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; XREF[1]:
;   engine_model.c_freeMRGLData_FUN_005008f0 at 0050090a
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5cc450                    ; 0041a4e0
        ;   Label: engine_boss.c_modelStructNotSupported3_FUN_0041a4e0
    MOV ECX,0x3f                        ; 0041a4e5
    PUSH 0x5cc461                       ; 0041a4ea
    MOV dword ptr [0x01d046a0],EDX      ; 0041a4ef | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0041a4f5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0041a4fb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0041a500
    RET                                 ; 0041a503

