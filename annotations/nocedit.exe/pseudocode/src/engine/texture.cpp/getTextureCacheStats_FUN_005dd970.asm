; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_getTextureCacheStats_FUN_005dd970(char * output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da839
;
; Referenced Globals:
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005dd970
        ;   Label: engine_texture.cpp_getTextureCacheStats_FUN_005dd970
    PUSH EDX                            ; 005dd974
    MOV ECX,dword ptr [0x03f87358]      ; 005dd975 | g_TextureCacheInstance
    PUSH ECX                            ; 005dd97b
    CALL engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690 ; 005dd97c
        ;   XREF to: 005dd690 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_005dd690(CTextureCache * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 005dd981
    RET                                 ; 005dd984

