; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_freeTextureCache_FUN_005979d0(void)
;
;
; XREF[1]:
;   engine_3d.c_freeTextureCache_FUN_004037a0 at 004037a0
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   crt_unknown.c_FUN_005c0344
;   engine_texture.cpp_CTextureCache_reset_FUN_005965c0
;   engine_texture.cpp_FUN_005965d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005979d0
        ;   Label: engine_texture.cpp_freeTextureCache_FUN_005979d0
    MOV EDX,dword ptr [0x02c8a680]      ; 005979d1 | DAT_02c8a680
    PUSH EDX                            ; 005979d7
    CALL engine_texture.cpp_CTextureCache_reset_FUN_005965c0 ; 005979d8
        ;   XREF to: 005965c0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_reset_FUN_005965c0(CTextureCache * this_ptr)
    MOV ECX,dword ptr [0x02c8a680]      ; 005979dd | DAT_02c8a680
    ADD ESP,0x4                         ; 005979e3
    TEST ECX,ECX                        ; 005979e6
    JNZ 0x005979f4                      ; 005979e8
        ;   XREF to: 005979f4 (CONDITIONAL_JUMP)  ; LAB_005979f4
    XOR EBX,EBX                         ; 005979ea
    MOV dword ptr [0x02c8a680],EBX      ; 005979ec | DAT_02c8a680
    POP EBX                             ; 005979f2
    RET                                 ; 005979f3
    PUSH ECX                            ; 005979f4
        ;   Label: LAB_005979f4
    MOV EBX,ECX                         ; 005979f5
    CALL engine_texture.cpp_FUN_005965d0 ; 005979f7
        ;   XREF to: 005965d0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_005965d0(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005979fc
    PUSH EBX                            ; 005979ff
    CALL crt_unknown.c_FUN_005c0344     ; 00597a00
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00597a05
    XOR EBX,EBX                         ; 00597a08
    MOV dword ptr [0x02c8a680],EBX      ; 00597a0a | DAT_02c8a680
    POP EBX                             ; 00597a10
    RET                                 ; 00597a11

