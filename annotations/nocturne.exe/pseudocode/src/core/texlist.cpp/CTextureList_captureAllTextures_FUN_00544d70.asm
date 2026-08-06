; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_00544d70(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544d70
        ;   Label: core_texlist.cpp_CTextureList_captureAllTextures_FUN_00544d70
    PUSH EDI                            ; 00544d71
    PUSH EBP                            ; 00544d72
    MOV EDI,dword ptr [ESP + 0x10]      ; 00544d73
    MOV EDX,dword ptr [EDI]             ; 00544d77
    XOR EBX,EBX                         ; 00544d79
    TEST EDX,EDX                        ; 00544d7b
    JLE 0x00544d9e                      ; 00544d7d
        ;   XREF to: 00544d9e (CONDITIONAL_JUMP)  ; LAB_00544d9e
    PUSH ESI                            ; 00544d7f
    LEA ESI,[EDI + 0x4]                 ; 00544d80
    PUSH ESI                            ; 00544d83
        ;   Label: LAB_00544d83
    MOV ECX,dword ptr [0x005ae704]      ; 00544d84 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00544d8a
    INC EBX                             ; 00544d8b
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00544d8c
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x18                        ; 00544d91
    MOV EBP,dword ptr [EDI]             ; 00544d94
    ADD ESP,0x8                         ; 00544d96
    CMP EBX,EBP                         ; 00544d99
    JL 0x00544d83                       ; 00544d9b
        ;   XREF to: 00544d83 (CONDITIONAL_JUMP)  ; LAB_00544d83
    POP ESI                             ; 00544d9d
    POP EBP                             ; 00544d9e
        ;   Label: LAB_00544d9e
    POP EDI                             ; 00544d9f
    POP EBX                             ; 00544da0
    RET                                 ; 00544da1

