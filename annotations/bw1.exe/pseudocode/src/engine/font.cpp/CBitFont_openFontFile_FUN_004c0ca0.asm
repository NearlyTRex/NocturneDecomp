; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   load_flags
;
; XREF[2]:
;   core_dfont.cpp_FUN_0045e000 at 0045e03e
;   engine_font.cpp_FUN_004c157e at 004c1824
;
; Called Functions:
;   engine_font.cpp_FUN_004c1540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0ca0
        ;   Label: engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0
    PUSH ESI                            ; 004c0ca1
    PUSH EDI                            ; 004c0ca2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c0ca3
    PUSH EDX                            ; 004c0ca7
    PUSH 0xff                           ; 004c0ca8
    PUSH 0x21                           ; 004c0cad
    MOV ECX,dword ptr [ESP + 0x28]      ; 004c0caf
    PUSH ECX                            ; 004c0cb3
    MOV EBX,dword ptr [ESP + 0x28]      ; 004c0cb4
    PUSH EBX                            ; 004c0cb8
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c0cb9
    PUSH ESI                            ; 004c0cbd
    MOV EDI,dword ptr [ESP + 0x28]      ; 004c0cbe
    PUSH EDI                            ; 004c0cc2
    CALL engine_font.cpp_FUN_004c1540   ; 004c0cc3
        ;   XREF to: 004c1540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_FUN_004c1540(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004c0cc8
    POP EDI                             ; 004c0ccb
    POP ESI                             ; 004c0ccc
    POP EBX                             ; 004c0ccd
    RET                                 ; 004c0cce

