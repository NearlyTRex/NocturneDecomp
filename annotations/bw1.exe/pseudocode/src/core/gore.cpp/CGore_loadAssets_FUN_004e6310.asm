; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004e6310(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004d5e40 at 004d5e66
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   SMRGLTextureBasic g_BloodParticleTexture
;   SMRGLTextureBasic[4] g_BloodSplatTextures
;   undefined4 g_BloodSplatTextures[1].base.type
;   SMRGLTextureBasic[64] g_BloodSplatAnimTextures
;   undefined4 g_BloodSplatAnimTextures[1].base.type
;   undefined4 g_BloodSplatAnimTextures[16].base.type
;   SMRGLTextureBasic[116] g_BloodPoolAnimTextures
;   undefined4 g_BloodPoolAnimTextures[1].base.type
;   undefined4 g_BloodPoolAnimTextures[29].base.type
;   SMRGLTextureBasic g_FootstepTexture
;   CDemonRenderer g_CDemonRenderer_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6310
        ;   Label: core_gore.cpp_CGore_loadAssets_FUN_004e6310
    PUSH ESI                            ; 004e6311
    PUSH EDI                            ; 004e6312
    PUSH EBP                            ; 004e6313
    PUSH 0x61dcb4                       ; 004e6314 | g_BloodParticleTexture
    MOV EDX,dword ptr [0x00612560]      ; 004e6319 | g_CDemonRenderer_PTR_00612560
    PUSH EDX                            ; 004e631f | g_CDemonRenderer_01bc120c
    MOV EBX,0x61dccc                    ; 004e6320 | g_BloodSplatTextures
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e6325
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ESI,[EBX + 0x60]                ; 004e632a | g_BloodSplatAnimTextures
    ADD ESP,0x8                         ; 004e632d
    PUSH EBX                            ; 004e6330 | g_BloodSplatTextures | g_BloodSplatTextures[1].base.type
        ;   Label: LAB_004e6330
    MOV ECX,dword ptr [0x00612560]      ; 004e6331 | g_CDemonRenderer_PTR_00612560
    PUSH ECX                            ; 004e6337 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e6338
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004e633d
    ADD ESP,0x8                         ; 004e6340
    CMP EBX,ESI                         ; 004e6343
    JNZ 0x004e6330                      ; 004e6345
        ;   XREF to: 004e6330 (CONDITIONAL_JUMP)  ; LAB_004e6330
    MOV EBP,0x61dd2c                    ; 004e6347 | g_BloodSplatAnimTextures
    XOR EDI,EDI                         ; 004e634c
    ADD EBP,0x180                       ; 004e634e
    IMUL EBX,EDI,0x180                  ; 004e6354
        ;   Label: LAB_004e6354
    MOV ESI,EBP                         ; 004e635a
    ADD EBX,0x61dd2c                    ; 004e635c | g_BloodSplatAnimTextures
    PUSH EBX                            ; 004e6362 | g_BloodSplatAnimTextures | g_BloodSplatAnimTextures[1].base.type | g_BloodSplatAnimTextures[16].base.type
        ;   Label: LAB_004e6362
    MOV EAX,[0x00612560]                ; 004e6363 | g_CDemonRenderer_PTR_00612560
    PUSH EAX                            ; 004e6368 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e6369
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004e636e
    ADD ESP,0x8                         ; 004e6371
    CMP EBX,ESI                         ; 004e6374
    JNZ 0x004e6362                      ; 004e6376
        ;   XREF to: 004e6362 (CONDITIONAL_JUMP)  ; LAB_004e6362
    INC EDI                             ; 004e6378
    ADD EBP,0x180                       ; 004e6379
    CMP EDI,0x4                         ; 004e637f
    JL 0x004e6354                       ; 004e6382
        ;   XREF to: 004e6354 (CONDITIONAL_JUMP)  ; LAB_004e6354
    MOV EBP,0x61e32c                    ; 004e6384 | g_BloodPoolAnimTextures
    XOR EDI,EDI                         ; 004e6389
    ADD EBP,0x2b8                       ; 004e638b
    IMUL EBX,EDI,0x2b8                  ; 004e6391
        ;   Label: LAB_004e6391
    MOV ESI,EBP                         ; 004e6397
    ADD EBX,0x61e32c                    ; 004e6399 | g_BloodPoolAnimTextures
    PUSH EBX                            ; 004e639f | g_BloodPoolAnimTextures | g_BloodPoolAnimTextures[1].base.type | g_BloodPoolAnimTextures[29].base.type
        ;   Label: LAB_004e639f
    MOV EDX,dword ptr [0x00612560]      ; 004e63a0 | g_CDemonRenderer_PTR_00612560
    PUSH EDX                            ; 004e63a6 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e63a7
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004e63ac
    ADD ESP,0x8                         ; 004e63af
    CMP EBX,ESI                         ; 004e63b2
    JNZ 0x004e639f                      ; 004e63b4
        ;   XREF to: 004e639f (CONDITIONAL_JUMP)  ; LAB_004e639f
    INC EDI                             ; 004e63b6
    ADD EBP,0x2b8                       ; 004e63b7
    CMP EDI,0x4                         ; 004e63bd
    JL 0x004e6391                       ; 004e63c0
        ;   XREF to: 004e6391 (CONDITIONAL_JUMP)  ; LAB_004e6391
    PUSH 0x61ee2c                       ; 004e63c2 | g_FootstepTexture
    MOV ECX,dword ptr [0x00612560]      ; 004e63c7 | g_CDemonRenderer_PTR_00612560
    PUSH ECX                            ; 004e63cd | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e63ce
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e63d3
    POP EBP                             ; 004e63d6
    POP EDI                             ; 004e63d7
    POP ESI                             ; 004e63d8
    POP EBX                             ; 004e63d9
    RET                                 ; 004e63da

