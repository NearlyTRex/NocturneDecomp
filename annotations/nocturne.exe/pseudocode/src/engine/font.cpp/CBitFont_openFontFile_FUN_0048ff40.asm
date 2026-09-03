; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   load_flags
;
; XREF[2]:
;   core_dfont.cpp_initFonts_FUN_0044c560 at 0044c59e
;   engine_font.cpp_CBitFont_loadFromFile_FUN_00490210 at 0049040e
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
        ;   XREF to: 004901d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 0048ff68
    POP EDI                             ; 0048ff6b
    POP ESI                             ; 0048ff6c
    POP EBX                             ; 0048ff6d
    RET                                 ; 0048ff6e

