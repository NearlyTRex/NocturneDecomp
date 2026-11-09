; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004b0190(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)
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
;   engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 at 004af913
;   engine_font.cpp_FUN_004b01ce at 004b0415
;
; Called Functions:
;   engine_font.cpp_FUN_004af920
;   engine_font.cpp_FUN_004b0480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0190
        ;   Label: engine_font.cpp_FUN_004b0190
    PUSH ESI                            ; 004b0191
    PUSH EDI                            ; 004b0192
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b0193
    PUSH EBX                            ; 004b0197
    CALL engine_font.cpp_FUN_004b0480   ; 004b0198
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0480()
    ADD ESP,0x4                         ; 004b019d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b01a0
    PUSH EDX                            ; 004b01a4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b01a5
    PUSH ECX                            ; 004b01a9
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b01aa
    PUSH ESI                            ; 004b01ae
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b01af
    PUSH EDI                            ; 004b01b3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b01b4
    PUSH EBX                            ; 004b01b8
    MOV dword ptr [EBX + 0x4208],EAX    ; 004b01b9
    CALL engine_font.cpp_FUN_004af920   ; 004b01bf
        ;   XREF to: 004af920 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_FUN_004af920(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004b01c4
    POP EDI                             ; 004b01c7
    POP ESI                             ; 004b01c8
    POP EBX                             ; 004b01c9
    RET                                 ; 004b01ca

