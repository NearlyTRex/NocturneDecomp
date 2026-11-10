; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_00597cd0(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004ced3c
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00597710
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00597cd0
        ;   Label: engine_texture.cpp_getTextureCacheStats_FUN_00597cd0
    PUSH EDX                            ; 00597cd4
    MOV ECX,dword ptr [0x02c8a680]      ; 00597cd5 | DAT_02c8a680
    PUSH ECX                            ; 00597cdb
    CALL engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00597710 ; 00597cdc
        ;   XREF to: 00597710 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00597710(CTextureCache * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 00597ce1
    RET                                 ; 00597ce4

