; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005738d0(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005738d0
        ;   Label: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005738d0
    PUSH EDI                            ; 005738d1
    PUSH EBP                            ; 005738d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005738d3
    MOV EDX,dword ptr [EDI]             ; 005738d7
    XOR EBX,EBX                         ; 005738d9
    TEST EDX,EDX                        ; 005738db
    JLE 0x005738fe                      ; 005738dd
        ;   XREF to: 005738fe (CONDITIONAL_JUMP)  ; LAB_005738fe
    PUSH ESI                            ; 005738df
    LEA ESI,[EDI + 0x4]                 ; 005738e0
    PUSH ESI                            ; 005738e3
        ;   Label: LAB_005738e3
    MOV ECX,dword ptr [0x0060b280]      ; 005738e4 | DAT_0060b280
    PUSH ECX                            ; 005738ea
    INC EBX                             ; 005738eb
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 005738ec
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x18                        ; 005738f1
    MOV EBP,dword ptr [EDI]             ; 005738f4
    ADD ESP,0x8                         ; 005738f6
    CMP EBX,EBP                         ; 005738f9
    JL 0x005738e3                       ; 005738fb
        ;   XREF to: 005738e3 (CONDITIONAL_JUMP)  ; LAB_005738e3
    POP ESI                             ; 005738fd
    POP EBP                             ; 005738fe
        ;   Label: LAB_005738fe
    POP EDI                             ; 005738ff
    POP EBX                             ; 00573900
    RET                                 ; 00573901

