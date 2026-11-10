; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_004a7cd0(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   load_flags
;
; XREF[2]:
;   core_dfont.cpp_FUN_00447ea0 at 00447ede
;   engine_font.cpp_FUN_004a859e at 004a8842
;
; Called Functions:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7cd0
        ;   Label: engine_font.cpp_CBitFont_openFontFile_FUN_004a7cd0
    PUSH ESI                            ; 004a7cd1
    PUSH EDI                            ; 004a7cd2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a7cd3
    PUSH EDX                            ; 004a7cd7
    PUSH 0xff                           ; 004a7cd8
    PUSH 0x21                           ; 004a7cdd
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a7cdf
    PUSH ECX                            ; 004a7ce3
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a7ce4
    PUSH EBX                            ; 004a7ce8
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a7ce9
    PUSH ESI                            ; 004a7ced
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a7cee
    PUSH EDI                            ; 004a7cf2
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560 ; 004a7cf3
        ;   XREF to: 004a8560 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004a7cf8
    POP EDI                             ; 004a7cfb
    POP ESI                             ; 004a7cfc
    POP EBX                             ; 004a7cfd
    RET                                 ; 004a7cfe

