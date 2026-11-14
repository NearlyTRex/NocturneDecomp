; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_freeTextureCache_FUN_00574db0(void)
;
;
; XREF[1]:
;   engine_3d.c_freeTextureCache_FUN_004037f0 at 004037f0
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fdc
;   engine_texture.cpp_CTextureCache_reset_FUN_005739a0
;   engine_texture.cpp_FUN_005739b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574db0
        ;   Label: engine_texture.cpp_freeTextureCache_FUN_00574db0
    MOV EDX,dword ptr [0x02652eb0]      ; 00574db1 | DAT_02652eb0
    PUSH EDX                            ; 00574db7
    CALL engine_texture.cpp_CTextureCache_reset_FUN_005739a0 ; 00574db8
        ;   XREF to: 005739a0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_reset_FUN_005739a0(CTextureCache * this_ptr)
    MOV ECX,dword ptr [0x02652eb0]      ; 00574dbd | DAT_02652eb0
    ADD ESP,0x4                         ; 00574dc3
    TEST ECX,ECX                        ; 00574dc6
    JNZ 0x00574dd4                      ; 00574dc8
        ;   XREF to: 00574dd4 (CONDITIONAL_JUMP)  ; LAB_00574dd4
    XOR EBX,EBX                         ; 00574dca
    MOV dword ptr [0x02652eb0],EBX      ; 00574dcc | DAT_02652eb0
    POP EBX                             ; 00574dd2
    RET                                 ; 00574dd3
    PUSH ECX                            ; 00574dd4
        ;   Label: LAB_00574dd4
    MOV EBX,ECX                         ; 00574dd5
    CALL engine_texture.cpp_FUN_005739b0 ; 00574dd7
        ;   XREF to: 005739b0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005739b0(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 00574ddc
    PUSH EBX                            ; 00574ddf
    CALL crt_unknown.c_FUN_005b7fdc     ; 00574de0
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00574de5
    XOR EBX,EBX                         ; 00574de8
    MOV dword ptr [0x02652eb0],EBX      ; 00574dea | DAT_02652eb0
    POP EBX                             ; 00574df0
    RET                                 ; 00574df1

