; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   load_flags
;
; XREF[2]:
;   core_dfont.cpp_FUN_00459f50 at 00459f8e
;   engine_font.cpp_FUN_004b01ce at 004b0474
;
; Called Functions:
;   engine_font.cpp_FUN_004b0190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af8f0
        ;   Label: engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0
    PUSH ESI                            ; 004af8f1
    PUSH EDI                            ; 004af8f2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004af8f3
    PUSH EDX                            ; 004af8f7
    PUSH 0xff                           ; 004af8f8
    PUSH 0x21                           ; 004af8fd
    MOV ECX,dword ptr [ESP + 0x28]      ; 004af8ff
    PUSH ECX                            ; 004af903
    MOV EBX,dword ptr [ESP + 0x28]      ; 004af904
    PUSH EBX                            ; 004af908
    MOV ESI,dword ptr [ESP + 0x28]      ; 004af909
    PUSH ESI                            ; 004af90d
    MOV EDI,dword ptr [ESP + 0x28]      ; 004af90e
    PUSH EDI                            ; 004af912
    CALL engine_font.cpp_FUN_004b0190   ; 004af913
        ;   XREF to: 004b0190 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_FUN_004b0190(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004af918
    POP EDI                             ; 004af91b
    POP ESI                             ; 004af91c
    POP EBX                             ; 004af91d
    RET                                 ; 004af91e

