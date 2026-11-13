; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056ace0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_FUN_0056a8f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cfd0d0]      ; 0056ace0 | DAT_02cfd0d0
        ;   Label: engine_texture.cpp_FUN_0056ace0
    PUSH EDX                            ; 0056ace6
    CALL engine_texture.cpp_FUN_0056a8f0 ; 0056ace7
        ;   XREF to: 0056a8f0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056a8f0()
    ADD ESP,0x4                         ; 0056acec
    RET                                 ; 0056acef

