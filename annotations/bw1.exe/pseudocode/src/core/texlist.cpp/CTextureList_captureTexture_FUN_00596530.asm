; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00596530(CTextureList *this_ptr,uint texture_index)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   texture_index
;
; XREF[1]:
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70 at 004e7b96
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00596530
        ;   Label: core_texlist.cpp_CTextureList_captureTexture_FUN_00596530
    AND EDX,0xfff                       ; 00596534
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059653a
    SUB EAX,EDX                         ; 00596541
    MOV EDX,dword ptr [ESP + 0x4]       ; 00596543
    SHL EAX,0x3                         ; 00596547
    ADD EDX,0x4                         ; 0059654a
    ADD EAX,EDX                         ; 0059654d
    PUSH EAX                            ; 0059654f
    MOV EDX,dword ptr [0x00612560]      ; 00596550 | DAT_00612560
    PUSH EDX                            ; 00596556 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00596557
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0059655c
    RET                                 ; 0059655f

