; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, int load_flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   load_flags
;
; XREF[2]:
;   core_dfont.cpp_initFonts_FUN_004709a0 at 00470cc1
;   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 at 004cd4c8
;
; Called Functions:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccfc0
        ;   Label: engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
    PUSH ESI                            ; 004ccfc1
    PUSH EDI                            ; 004ccfc2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ccfc3
    PUSH EDX                            ; 004ccfc7
    PUSH 0xff                           ; 004ccfc8
    PUSH 0x21                           ; 004ccfcd
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ccfcf
    PUSH ECX                            ; 004ccfd3
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ccfd4
    PUSH EBX                            ; 004ccfd8
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ccfd9
    PUSH ESI                            ; 004ccfdd
    MOV EDI,dword ptr [ESP + 0x28]      ; 004ccfde
    PUSH EDI                            ; 004ccfe2
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280 ; 004ccfe3
        ;   XREF to: 004cd280 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004ccfe8
    POP EDI                             ; 004ccfeb
    POP ESI                             ; 004ccfec
    POP EBX                             ; 004ccfed
    RET                                 ; 004ccfee

