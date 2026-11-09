; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005694e0(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005694e0
        ;   Label: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005694e0
    PUSH EDI                            ; 005694e1
    PUSH EBP                            ; 005694e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005694e3
    MOV EDX,dword ptr [EDI]             ; 005694e7
    XOR EBX,EBX                         ; 005694e9
    TEST EDX,EDX                        ; 005694eb
    JLE 0x0056950e                      ; 005694ed
        ;   XREF to: 0056950e (CONDITIONAL_JUMP)  ; LAB_0056950e
    PUSH ESI                            ; 005694ef
    LEA ESI,[EDI + 0x4]                 ; 005694f0
    PUSH ESI                            ; 005694f3
        ;   Label: LAB_005694f3
    MOV ECX,dword ptr [0x005f2afc]      ; 005694f4 | DAT_005f2afc
    PUSH ECX                            ; 005694fa
    INC EBX                             ; 005694fb
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 005694fc
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x18                        ; 00569501
    MOV EBP,dword ptr [EDI]             ; 00569504
    ADD ESP,0x8                         ; 00569506
    CMP EBX,EBP                         ; 00569509
    JL 0x005694f3                       ; 0056950b
        ;   XREF to: 005694f3 (CONDITIONAL_JUMP)  ; LAB_005694f3
    POP ESI                             ; 0056950d
    POP EBP                             ; 0056950e
        ;   Label: LAB_0056950e
    POP EDI                             ; 0056950f
    POP EBX                             ; 00569510
    RET                                 ; 00569511

