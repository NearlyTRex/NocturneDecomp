; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280(CBitFont * this_ptr, char * filename, int width, int height, int first_char, int last_char, int load_flags, int other)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   first_char
; int              Stack[0x18]:4   last_char
; int              Stack[0x1c]:4   load_flags
; int              Stack[0x20]:4   other
;
; XREF[2]:
;   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 at 004cd463
;   engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 at 004ccfe3
;
; Called Functions:
;   engine_font.cpp_CBitFont_free_FUN_004cd4e0
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd280
        ;   Label: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
    PUSH ESI                            ; 004cd281
    PUSH EDI                            ; 004cd282
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cd283
    PUSH EBX                            ; 004cd287
    CALL engine_font.cpp_CBitFont_free_FUN_004cd4e0 ; 004cd288 | void engine_font.cpp_CBitFont_free_FUN_004cd4e0(CBitFont * this_ptr)
        ;   XREF to: 004cd4e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd28d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cd290
    PUSH EDX                            ; 004cd294
    MOV ECX,dword ptr [ESP + 0x20]      ; 004cd295
    PUSH ECX                            ; 004cd299
    MOV ESI,dword ptr [ESP + 0x20]      ; 004cd29a
    PUSH ESI                            ; 004cd29e
    MOV EDI,dword ptr [ESP + 0x20]      ; 004cd29f
    PUSH EDI                            ; 004cd2a3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cd2a4
    PUSH EBX                            ; 004cd2a8
    MOV dword ptr [EBX + 0x3188],EAX    ; 004cd2a9
    CALL engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 ; 004cd2af | void engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0(CBitFont * this_ptr, char * filename, int width, int height, ...)
        ;   XREF to: 004ccff0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004cd2b4
    POP EDI                             ; 004cd2b7
    POP ESI                             ; 004cd2b8
    POP EBX                             ; 004cd2b9
    RET                                 ; 004cd2ba

