; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_resetTextureCache_FUN_00512250(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c8348c
;
; Called Functions:
;   engine_texture.cpp_FUN_00597c30
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_00597c30 ; 00512250
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597c30()
        ;   Label: engine_mini3d.cpp_resetTextureCache_FUN_00512250
    CMP dword ptr [0x02c8348c],0x0      ; 00512255 | DAT_02c8348c
    JZ 0x00512267                       ; 0051225c
        ;   XREF to: 00512267 (CONDITIONAL_JUMP)  ; LAB_00512267
    CMP dword ptr [0x01c50948],0x0      ; 0051225e | DAT_01c50948
    JNZ 0x00512268                      ; 00512265
        ;   XREF to: 00512268 (CONDITIONAL_JUMP)  ; LAB_00512268
    RET                                 ; 00512267
        ;   Label: LAB_00512267
    CALL dword ptr [0x02c8348c]         ; 00512268 | DAT_02c8348c
        ;   Label: LAB_00512268
    RET                                 ; 0051226e

