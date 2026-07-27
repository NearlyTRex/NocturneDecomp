; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   core_dfont.cpp_FUN_0044c560 at 0044c59e
;   engine_font.cpp_FUN_00490210 at 0049040e
;
; Called Functions:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ff40
        ;   Label: engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40
    PUSH ESI                            ; 0048ff41
    PUSH EDI                            ; 0048ff42
    MOV EDX,dword ptr [ESP + 0x20]      ; 0048ff43
    PUSH EDX                            ; 0048ff47
    PUSH 0xff                           ; 0048ff48
    PUSH 0x21                           ; 0048ff4d
    MOV ECX,dword ptr [ESP + 0x28]      ; 0048ff4f
    PUSH ECX                            ; 0048ff53
    MOV EBX,dword ptr [ESP + 0x28]      ; 0048ff54
    PUSH EBX                            ; 0048ff58
    MOV ESI,dword ptr [ESP + 0x28]      ; 0048ff59
    PUSH ESI                            ; 0048ff5d
    MOV EDI,dword ptr [ESP + 0x28]      ; 0048ff5e
    PUSH EDI                            ; 0048ff62
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0 ; 0048ff63
        ;   XREF to: 004901d0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0()
    ADD ESP,0x1c                        ; 0048ff68
    POP EDI                             ; 0048ff6b
    POP ESI                             ; 0048ff6c
    POP EBX                             ; 0048ff6d
    RET                                 ; 0048ff6e

