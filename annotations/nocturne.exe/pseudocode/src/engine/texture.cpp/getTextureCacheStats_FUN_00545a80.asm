; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_00545a80(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d353
;
; Referenced Globals:
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00545a80
        ;   Label: engine_texture.cpp_getTextureCacheStats_FUN_00545a80
    PUSH EDX                            ; 00545a84
    MOV ECX,dword ptr [0x02dd0f84]      ; 00545a85 | DAT_02dd0f84
    PUSH ECX                            ; 00545a8b
    CALL engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810 ; 00545a8c
        ;   XREF to: 00545810 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810(CTextureCache * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 00545a91
    RET                                 ; 00545a94

