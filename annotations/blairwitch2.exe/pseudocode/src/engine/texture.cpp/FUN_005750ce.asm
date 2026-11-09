; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_005750ce(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   engine_texture.cpp_FUN_00574ce0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005750ce
        ;   Label: engine_texture.cpp_FUN_005750ce
    MOV EDX,dword ptr [0x02652eb0]      ; 005750d0 | DAT_02652eb0
    PUSH EDX                            ; 005750d6
    CALL engine_texture.cpp_FUN_00574ce0 ; 005750d7
        ;   XREF to: 00574ce0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574ce0()
    ADD ESP,0x4                         ; 005750dc
    RET                                 ; 005750df

