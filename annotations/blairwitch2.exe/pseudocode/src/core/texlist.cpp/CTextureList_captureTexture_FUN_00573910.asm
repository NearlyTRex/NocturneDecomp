; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00573910(CTextureList *this_ptr,uint texture_index)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   texture_index
;
; XREF[1]:
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0 at 004cb316
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00573910
        ;   Label: core_texlist.cpp_CTextureList_captureTexture_FUN_00573910
    AND EDX,0xfff                       ; 00573914
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057391a
    SUB EAX,EDX                         ; 00573921
    MOV EDX,dword ptr [ESP + 0x4]       ; 00573923
    SHL EAX,0x3                         ; 00573927
    ADD EDX,0x4                         ; 0057392a
    ADD EAX,EDX                         ; 0057392d
    PUSH EAX                            ; 0057392f
    MOV EDX,dword ptr [0x0060b280]      ; 00573930 | DAT_0060b280
    PUSH EDX                            ; 00573936 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00573937
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0057393c
    RET                                 ; 0057393f

