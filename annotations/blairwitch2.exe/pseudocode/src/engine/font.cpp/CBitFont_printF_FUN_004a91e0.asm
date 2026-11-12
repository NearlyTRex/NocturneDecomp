; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_printF_FUN_004a91e0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format
;
; Called Functions:
;   engine_font.cpp_CBitFont_printFV_FUN_004a9230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a91e0
        ;   Label: engine_font.cpp_CBitFont_printF_FUN_004a91e0
    PUSH ESI                            ; 004a91e1
    PUSH EDI                            ; 004a91e2
    PUSH EBP                            ; 004a91e3
    SUB ESP,0x4                         ; 004a91e4
    LEA EAX,[ESP + 0x30]                ; 004a91e7
    MOV dword ptr [ESP],EAX             ; 004a91eb
    MOV EAX,ESP                         ; 004a91ee
    PUSH EAX                            ; 004a91f0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a91f1
    PUSH EDX                            ; 004a91f5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a91f6
    PUSH ECX                            ; 004a91fa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004a91fb
    PUSH EBX                            ; 004a91ff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004a9200
    PUSH ESI                            ; 004a9204
    MOV EDI,dword ptr [ESP + 0x30]      ; 004a9205
    PUSH EDI                            ; 004a9209
    MOV EBP,dword ptr [ESP + 0x30]      ; 004a920a
    PUSH EBP                            ; 004a920e
    CALL engine_font.cpp_CBitFont_printFV_FUN_004a9230 ; 004a920f
        ;   XREF to: 004a9230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_printFV_FUN_004a9230(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x1c                        ; 004a9214
    XOR EDX,EDX                         ; 004a9217
    MOV dword ptr [ESP],EDX             ; 004a9219
    ADD ESP,0x4                         ; 004a921c
    POP EBP                             ; 004a921f
    POP EDI                             ; 004a9220
    POP ESI                             ; 004a9221
    POP EBX                             ; 004a9222
    RET                                 ; 004a9223

