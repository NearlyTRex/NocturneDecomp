; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_clipCharacter_FUN_004a7ab0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )
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
;   engine_font.cpp_FUN_004a9870 at 004a9ade
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7ab0
        ;   Label: engine_font.cpp_clipCharacter_FUN_004a7ab0
    PUSH ESI                            ; 004a7ab1
    PUSH EDI                            ; 004a7ab2
    PUSH EBP                            ; 004a7ab3
    MOV ESI,dword ptr [0x01c35e4c]      ; 004a7ab4 | DAT_01c35e4c
    MOV EDI,dword ptr [0x01c35e48]      ; 004a7aba | DAT_01c35e48
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a7ac0
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a7ac4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a7ac8
    MOV EBP,dword ptr [ESP + 0x24]      ; 004a7acc
    MOV EAX,dword ptr [ECX]             ; 004a7ad0
    CMP EAX,EDI                         ; 004a7ad2
    JGE 0x004a7aec                      ; 004a7ad4
        ;   XREF to: 004a7aec (CONDITIONAL_JUMP)  ; LAB_004a7aec
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a7ad6
    MOV EAX,dword ptr [EAX]             ; 004a7ada
    CMP EAX,EDI                         ; 004a7adc
    JL 0x004a7b4d                       ; 004a7ade
        ;   XREF to: 004a7b4d (CONDITIONAL_JUMP)  ; LAB_004a7b4d
    MOV EAX,EDI                         ; 004a7ae4
    SUB EAX,dword ptr [ECX]             ; 004a7ae6
    ADD dword ptr [EBX],EAX             ; 004a7ae8
    MOV dword ptr [ECX],EDI             ; 004a7aea
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a7aec
        ;   Label: LAB_004a7aec
    MOV EAX,dword ptr [EAX]             ; 004a7af0
    CMP EAX,dword ptr [0x01c35e50]      ; 004a7af2 | DAT_01c35e50
    JLE 0x004a7b0e                      ; 004a7af8
        ;   XREF to: 004a7b0e (CONDITIONAL_JUMP)  ; LAB_004a7b0e
    MOV EAX,dword ptr [ECX]             ; 004a7afa
    MOV ECX,dword ptr [0x01c35e50]      ; 004a7afc | DAT_01c35e50
    CMP EAX,ECX                         ; 004a7b02
    JG 0x004a7b4d                       ; 004a7b04
        ;   XREF to: 004a7b4d (CONDITIONAL_JUMP)  ; LAB_004a7b4d
    MOV EAX,ECX                         ; 004a7b06
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a7b08
    MOV dword ptr [ECX],EAX             ; 004a7b0c
    MOV EAX,dword ptr [EDX]             ; 004a7b0e
        ;   Label: LAB_004a7b0e
    CMP EAX,ESI                         ; 004a7b10
    JGE 0x004a7b28                      ; 004a7b12
        ;   XREF to: 004a7b28 (CONDITIONAL_JUMP)  ; LAB_004a7b28
    MOV EAX,dword ptr [EBP]             ; 004a7b14
    CMP EAX,ESI                         ; 004a7b17
    JL 0x004a7b4d                       ; 004a7b19
        ;   XREF to: 004a7b4d (CONDITIONAL_JUMP)  ; LAB_004a7b4d
    MOV EAX,ESI                         ; 004a7b1b
    SUB EAX,dword ptr [EDX]             ; 004a7b1d
    IMUL EAX,dword ptr [ESP + 0x28]     ; 004a7b1f
    ADD dword ptr [EBX],EAX             ; 004a7b24
    MOV dword ptr [EDX],ESI             ; 004a7b26
    MOV EBX,dword ptr [0x01c35e54]      ; 004a7b28 | DAT_01c35e54
        ;   Label: LAB_004a7b28
    CMP EBX,dword ptr [EBP]             ; 004a7b2e
    JGE 0x004a7b3a                      ; 004a7b31
        ;   XREF to: 004a7b3a (CONDITIONAL_JUMP)  ; LAB_004a7b3a
    CMP EBX,dword ptr [EDX]             ; 004a7b33
    JL 0x004a7b4d                       ; 004a7b35
        ;   XREF to: 004a7b4d (CONDITIONAL_JUMP)  ; LAB_004a7b4d
    MOV dword ptr [EBP],EBX             ; 004a7b37
    XOR EAX,EAX                         ; 004a7b3a
        ;   Label: LAB_004a7b3a
    MOV dword ptr [0x01c35e48],EDI      ; 004a7b3c | DAT_01c35e48
    MOV dword ptr [0x01c35e4c],ESI      ; 004a7b42 | DAT_01c35e4c
    POP EBP                             ; 004a7b48
    POP EDI                             ; 004a7b49
    POP ESI                             ; 004a7b4a
    POP EBX                             ; 004a7b4b
    RET                                 ; 004a7b4c
    MOV EAX,0x1                         ; 004a7b4d
        ;   Label: LAB_004a7b4d
    MOV dword ptr [0x01c35e48],EDI      ; 004a7b52 | DAT_01c35e48
    MOV dword ptr [0x01c35e4c],ESI      ; 004a7b58 | DAT_01c35e4c
    POP EBP                             ; 004a7b5e
    POP EDI                             ; 004a7b5f
    POP ESI                             ; 004a7b60
    POP EBX                             ; 004a7b61
    RET                                 ; 004a7b62

