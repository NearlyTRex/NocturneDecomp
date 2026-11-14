; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004c1540(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)
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
;   engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 at 004c0cc3
;   engine_font.cpp_FUN_004c1580 at 004c17c5
;
; Called Functions:
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0
;   engine_font.cpp_FUN_004c1830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1540
        ;   Label: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004c1540
    PUSH ESI                            ; 004c1541
    PUSH EDI                            ; 004c1542
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c1543
    PUSH EBX                            ; 004c1547
    CALL engine_font.cpp_FUN_004c1830   ; 004c1548
        ;   XREF to: 004c1830 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1830()
    ADD ESP,0x4                         ; 004c154d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c1550
    PUSH EDX                            ; 004c1554
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c1555
    PUSH ECX                            ; 004c1559
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c155a
    PUSH ESI                            ; 004c155e
    MOV EDI,dword ptr [ESP + 0x20]      ; 004c155f
    PUSH EDI                            ; 004c1563
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c1564
    PUSH EBX                            ; 004c1568
    MOV dword ptr [EBX + 0x4208],EAX    ; 004c1569
    CALL engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 ; 004c156f
        ;   XREF to: 004c0cd0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004c1574
    POP EDI                             ; 004c1577
    POP ESI                             ; 004c1578
    POP EBX                             ; 004c1579
    RET                                 ; 004c157a

