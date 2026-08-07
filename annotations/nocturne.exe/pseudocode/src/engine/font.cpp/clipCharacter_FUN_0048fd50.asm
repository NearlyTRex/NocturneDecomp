; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_clipCharacter_FUN_0048fd50(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )
;
; Parameters:
; int *            Stack[0x4]:4   bitmap_offset
; int *            Stack[0x8]:4   left_x
; int *            Stack[0xc]:4   top_y
; int *            Stack[0x10]:4   right_x
; int *            Stack[0x14]:4   bottom_y
; int              Stack[0x18]:4   bitmap_width
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 at 00491940
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fd50
        ;   Label: engine_font.cpp_clipCharacter_FUN_0048fd50
    PUSH ESI                            ; 0048fd51
    PUSH EDI                            ; 0048fd52
    PUSH EBP                            ; 0048fd53
    MOV ESI,dword ptr [0x01c00c5c]      ; 0048fd54 | g_ClipTop
    MOV EDI,dword ptr [0x01c00c58]      ; 0048fd5a | g_ClipLeft
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048fd60
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048fd64
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048fd68
    MOV EBP,dword ptr [ESP + 0x24]      ; 0048fd6c
    MOV EAX,dword ptr [ECX]             ; 0048fd70
    CMP EAX,EDI                         ; 0048fd72
    JGE 0x0048fd8c                      ; 0048fd74
        ;   XREF to: 0048fd8c (CONDITIONAL_JUMP)  ; LAB_0048fd8c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048fd76
    MOV EAX,dword ptr [EAX]             ; 0048fd7a
    CMP EAX,EDI                         ; 0048fd7c
    JL 0x0048fded                       ; 0048fd7e
        ;   XREF to: 0048fded (CONDITIONAL_JUMP)  ; LAB_0048fded
    MOV EAX,EDI                         ; 0048fd84
    SUB EAX,dword ptr [ECX]             ; 0048fd86
    ADD dword ptr [EBX],EAX             ; 0048fd88
    MOV dword ptr [ECX],EDI             ; 0048fd8a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048fd8c
        ;   Label: LAB_0048fd8c
    MOV EAX,dword ptr [EAX]             ; 0048fd90
    CMP EAX,dword ptr [0x01c00c60]      ; 0048fd92 | g_ClipRight
    JLE 0x0048fdae                      ; 0048fd98
        ;   XREF to: 0048fdae (CONDITIONAL_JUMP)  ; LAB_0048fdae
    MOV EAX,dword ptr [ECX]             ; 0048fd9a
    MOV ECX,dword ptr [0x01c00c60]      ; 0048fd9c | g_ClipRight
    CMP EAX,ECX                         ; 0048fda2
    JG 0x0048fded                       ; 0048fda4
        ;   XREF to: 0048fded (CONDITIONAL_JUMP)  ; LAB_0048fded
    MOV EAX,ECX                         ; 0048fda6
    MOV ECX,dword ptr [ESP + 0x20]      ; 0048fda8
    MOV dword ptr [ECX],EAX             ; 0048fdac
    MOV EAX,dword ptr [EDX]             ; 0048fdae
        ;   Label: LAB_0048fdae
    CMP EAX,ESI                         ; 0048fdb0
    JGE 0x0048fdc8                      ; 0048fdb2
        ;   XREF to: 0048fdc8 (CONDITIONAL_JUMP)  ; LAB_0048fdc8
    MOV EAX,dword ptr [EBP]             ; 0048fdb4
    CMP EAX,ESI                         ; 0048fdb7
    JL 0x0048fded                       ; 0048fdb9
        ;   XREF to: 0048fded (CONDITIONAL_JUMP)  ; LAB_0048fded
    MOV EAX,ESI                         ; 0048fdbb
    SUB EAX,dword ptr [EDX]             ; 0048fdbd
    IMUL EAX,dword ptr [ESP + 0x28]     ; 0048fdbf
    ADD dword ptr [EBX],EAX             ; 0048fdc4
    MOV dword ptr [EDX],ESI             ; 0048fdc6
    MOV EBX,dword ptr [0x01c00c64]      ; 0048fdc8 | g_ClipBottom
        ;   Label: LAB_0048fdc8
    CMP EBX,dword ptr [EBP]             ; 0048fdce
    JGE 0x0048fdda                      ; 0048fdd1
        ;   XREF to: 0048fdda (CONDITIONAL_JUMP)  ; LAB_0048fdda
    CMP EBX,dword ptr [EDX]             ; 0048fdd3
    JL 0x0048fded                       ; 0048fdd5
        ;   XREF to: 0048fded (CONDITIONAL_JUMP)  ; LAB_0048fded
    MOV dword ptr [EBP],EBX             ; 0048fdd7
    XOR EAX,EAX                         ; 0048fdda
        ;   Label: LAB_0048fdda
    MOV dword ptr [0x01c00c58],EDI      ; 0048fddc | g_ClipLeft
    MOV dword ptr [0x01c00c5c],ESI      ; 0048fde2 | g_ClipTop
    POP EBP                             ; 0048fde8
    POP EDI                             ; 0048fde9
    POP ESI                             ; 0048fdea
    POP EBX                             ; 0048fdeb
    RET                                 ; 0048fdec
    MOV EAX,0x1                         ; 0048fded
        ;   Label: LAB_0048fded
    MOV dword ptr [0x01c00c58],EDI      ; 0048fdf2 | g_ClipLeft
    MOV dword ptr [0x01c00c5c],ESI      ; 0048fdf8 | g_ClipTop
    POP EBP                             ; 0048fdfe
    POP EDI                             ; 0048fdff
    POP ESI                             ; 0048fe00
    POP EBX                             ; 0048fe01
    RET                                 ; 0048fe02

