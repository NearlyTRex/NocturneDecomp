; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_isRectangleClipped_FUN_004ccd80 (int rect_width,int rect_height,int rect_x,int rect_y)
;
; Parameters:
; int              Stack[0x4]:4   rect_width
; int              Stack[0x8]:4   rect_height
; int              Stack[0xc]:4   rect_x
; int              Stack[0x10]:4   rect_y
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ccd80
        ;   Label: engine_font.cpp_isRectangleClipped_FUN_004ccd80
    PUSH EBP                            ; 004ccd81
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ccd82
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ccd86
    CMP EDX,dword ptr [0x02d02558]      ; 004ccd8a | g_ClipLeft
    JL 0x004ccdba                       ; 004ccd90
        ;   XREF to: 004ccdba (CONDITIONAL_JUMP)  ; LAB_004ccdba
    CMP ECX,dword ptr [0x02d0255c]      ; 004ccd92 | g_ClipTop
    JL 0x004ccdba                       ; 004ccd98
        ;   XREF to: 004ccdba (CONDITIONAL_JUMP)  ; LAB_004ccdba
    MOV EAX,[0x02d02560]                ; 004ccd9a | g_ClipRight
    MOV EDI,dword ptr [ESP + 0xc]       ; 004ccd9f
    INC EAX                             ; 004ccda3
    SUB EAX,EDI                         ; 004ccda4
    CMP EDX,EAX                         ; 004ccda6
    JG 0x004ccdba                       ; 004ccda8
        ;   XREF to: 004ccdba (CONDITIONAL_JUMP)  ; LAB_004ccdba
    MOV EAX,[0x02d02564]                ; 004ccdaa | g_ClipBottom
    MOV EBP,dword ptr [ESP + 0x10]      ; 004ccdaf
    INC EAX                             ; 004ccdb3
    SUB EAX,EBP                         ; 004ccdb4
    CMP ECX,EAX                         ; 004ccdb6
    JLE 0x004ccdc2                      ; 004ccdb8
        ;   XREF to: 004ccdc2 (CONDITIONAL_JUMP)  ; LAB_004ccdc2
    MOV EAX,0x1                         ; 004ccdba
        ;   Label: LAB_004ccdba
    POP EBP                             ; 004ccdbf
    POP EDI                             ; 004ccdc0
    RET                                 ; 004ccdc1
    XOR EAX,EAX                         ; 004ccdc2
        ;   Label: LAB_004ccdc2
    POP EBP                             ; 004ccdc4
    POP EDI                             ; 004ccdc5
    RET                                 ; 004ccdc6

