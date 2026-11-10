; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_updateTextureWithPalette_FUN_00575040(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   engine_texture.cpp_FUN_00574a80
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575040
        ;   Label: engine_texture.cpp_updateTextureWithPalette_FUN_00575040
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575041
    PUSH EDX                            ; 00575045
    CALL engine_texture.cpp_FUN_00574e00 ; 00575046
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    ADD ESP,0x4                         ; 0057504b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0057504e
    PUSH ECX                            ; 00575052
    MOV EBX,dword ptr [0x02652eb0]      ; 00575053 | DAT_02652eb0
    PUSH EBX                            ; 00575059
    CALL engine_texture.cpp_FUN_00574a80 ; 0057505a
        ;   XREF to: 00574a80 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574a80()
    ADD ESP,0x8                         ; 0057505f
    POP EBX                             ; 00575062
    RET                                 ; 00575063

