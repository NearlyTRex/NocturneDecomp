; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0(int * bitmap_offset, int * left_x, int * top_y, int * right_x, int * bottom_y, int bitmap_width)
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
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 at 004cea20
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccdd0
        ;   Label: engine_font.cpp_CBitFont_clipCharacter_FUN_004ccdd0
    PUSH ESI                            ; 004ccdd1
    PUSH EDI                            ; 004ccdd2
    PUSH EBP                            ; 004ccdd3
    MOV ESI,dword ptr [0x02d0255c]      ; 004ccdd4 | int g_ClipTop
    MOV EDI,dword ptr [0x02d02558]      ; 004ccdda | int g_ClipLeft
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ccde0
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ccde4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ccde8
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ccdec
    MOV EAX,dword ptr [ECX]             ; 004ccdf0
    CMP EAX,EDI                         ; 004ccdf2
    JGE 0x004cce0c                      ; 004ccdf4 | LAB_004cce0c
        ;   XREF to: 004cce0c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ccdf6
    MOV EAX,dword ptr [EAX]             ; 004ccdfa
    CMP EAX,EDI                         ; 004ccdfc
    JL 0x004cce6d                       ; 004ccdfe | LAB_004cce6d
        ;   XREF to: 004cce6d (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 004cce04
    SUB EAX,dword ptr [ECX]             ; 004cce06
    ADD dword ptr [EBX],EAX             ; 004cce08
    MOV dword ptr [ECX],EDI             ; 004cce0a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cce0c
        ;   Label: LAB_004cce0c
    MOV EAX,dword ptr [EAX]             ; 004cce10
    CMP EAX,dword ptr [0x02d02560]      ; 004cce12 | int g_ClipRight
    JLE 0x004cce2e                      ; 004cce18 | LAB_004cce2e
        ;   XREF to: 004cce2e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ECX]             ; 004cce1a
    MOV ECX,dword ptr [0x02d02560]      ; 004cce1c | int g_ClipRight
    CMP EAX,ECX                         ; 004cce22
    JG 0x004cce6d                       ; 004cce24 | LAB_004cce6d
        ;   XREF to: 004cce6d (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 004cce26
    MOV ECX,dword ptr [ESP + 0x20]      ; 004cce28
    MOV dword ptr [ECX],EAX             ; 004cce2c
    MOV EAX,dword ptr [EDX]             ; 004cce2e
        ;   Label: LAB_004cce2e
    CMP EAX,ESI                         ; 004cce30
    JGE 0x004cce48                      ; 004cce32 | LAB_004cce48
        ;   XREF to: 004cce48 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP]             ; 004cce34
    CMP EAX,ESI                         ; 004cce37
    JL 0x004cce6d                       ; 004cce39 | LAB_004cce6d
        ;   XREF to: 004cce6d (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 004cce3b
    SUB EAX,dword ptr [EDX]             ; 004cce3d
    IMUL EAX,dword ptr [ESP + 0x28]     ; 004cce3f
    ADD dword ptr [EBX],EAX             ; 004cce44
    MOV dword ptr [EDX],ESI             ; 004cce46
    MOV EBX,dword ptr [0x02d02564]      ; 004cce48 | int g_ClipBottom
        ;   Label: LAB_004cce48
    CMP EBX,dword ptr [EBP]             ; 004cce4e
    JGE 0x004cce5a                      ; 004cce51 | LAB_004cce5a
        ;   XREF to: 004cce5a (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EDX]             ; 004cce53
    JL 0x004cce6d                       ; 004cce55 | LAB_004cce6d
        ;   XREF to: 004cce6d (CONDITIONAL_JUMP)
    MOV dword ptr [EBP],EBX             ; 004cce57
    XOR EAX,EAX                         ; 004cce5a
        ;   Label: LAB_004cce5a
    MOV dword ptr [0x02d02558],EDI      ; 004cce5c | int g_ClipLeft
    MOV dword ptr [0x02d0255c],ESI      ; 004cce62 | int g_ClipTop
    POP EBP                             ; 004cce68
    POP EDI                             ; 004cce69
    POP ESI                             ; 004cce6a
    POP EBX                             ; 004cce6b
    RET                                 ; 004cce6c
    MOV EAX,0x1                         ; 004cce6d
        ;   Label: LAB_004cce6d
    MOV dword ptr [0x02d02558],EDI      ; 004cce72 | int g_ClipLeft
    MOV dword ptr [0x02d0255c],ESI      ; 004cce78 | int g_ClipTop
    POP EBP                             ; 004cce7e
    POP EDI                             ; 004cce7f
    POP ESI                             ; 004cce80
    POP EBX                             ; 004cce81
    RET                                 ; 004cce82

