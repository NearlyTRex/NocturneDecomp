; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_0056acc0(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b76ec
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_0056a700
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056acc0
        ;   Label: engine_texture.cpp_getTextureCacheStats_FUN_0056acc0
    PUSH EDX                            ; 0056acc4
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056acc5 | DAT_02cfd0d0
    PUSH ECX                            ; 0056accb
    CALL engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_0056a700 ; 0056accc
        ;   XREF to: 0056a700 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_0056a700(CTextureCache * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 0056acd1
    RET                                 ; 0056acd4

