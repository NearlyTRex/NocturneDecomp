; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004a8560(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   first_char
; int              Stack[0x18]:4   last_char
; int              Stack[0x1c]:4   load_flags
;
; XREF[2]:
;   engine_font.cpp_CBitFont_openFontFile_FUN_004a7cd0 at 004a7cf3
;   engine_font.cpp_FUN_004a859e at 004a87e3
;
; Called Functions:
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00
;   engine_font.cpp_FUN_004a8850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8560
        ;   Label: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560
    PUSH ESI                            ; 004a8561
    PUSH EDI                            ; 004a8562
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a8563
    PUSH EBX                            ; 004a8567
    CALL engine_font.cpp_FUN_004a8850   ; 004a8568
        ;   XREF to: 004a8850 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8850()
    ADD ESP,0x4                         ; 004a856d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a8570
    PUSH EDX                            ; 004a8574
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a8575
    PUSH ECX                            ; 004a8579
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a857a
    PUSH ESI                            ; 004a857e
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a857f
    PUSH EDI                            ; 004a8583
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a8584
    PUSH EBX                            ; 004a8588
    MOV dword ptr [EBX + 0x4208],EAX    ; 004a8589
    CALL engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 ; 004a858f
        ;   XREF to: 004a7d00 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004a8594
    POP EDI                             ; 004a8597
    POP ESI                             ; 004a8598
    POP EBX                             ; 004a8599
    RET                                 ; 004a859a

