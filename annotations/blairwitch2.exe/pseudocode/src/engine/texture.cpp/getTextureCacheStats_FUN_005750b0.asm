; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_getTextureCacheStats_FUN_005750b0(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b596e
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00574af0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005750b0
        ;   Label: engine_texture.cpp_getTextureCacheStats_FUN_005750b0
    PUSH EDX                            ; 005750b4
    MOV ECX,dword ptr [0x02652eb0]      ; 005750b5 | DAT_02652eb0
    PUSH ECX                            ; 005750bb
    CALL engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00574af0 ; 005750bc
        ;   XREF to: 00574af0 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00574af0(CTextureCache * this_ptr, char * output_buffer)
    ADD ESP,0x8                         ; 005750c1
    RET                                 ; 005750c4

