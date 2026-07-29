; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_isRectangleClipped_FUN_0048fd00(int rect_width,int rect_height,int rect_x,int rect_y)
;
; Parameters:
; int              Stack[0x4]:4   rect_width
; int              Stack[0x8]:4   rect_height
; int              Stack[0xc]:4   rect_x
; int              Stack[0x10]:4   rect_y
;
; Referenced Globals:
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0048fd00
        ;   Label: engine_font.cpp_isRectangleClipped_FUN_0048fd00
    PUSH EBP                            ; 0048fd01
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048fd02
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048fd06
    CMP EDX,dword ptr [0x01c00c58]      ; 0048fd0a | DAT_01c00c58
    JL 0x0048fd3a                       ; 0048fd10
        ;   XREF to: 0048fd3a (CONDITIONAL_JUMP)  ; LAB_0048fd3a
    CMP ECX,dword ptr [0x01c00c5c]      ; 0048fd12 | DAT_01c00c5c
    JL 0x0048fd3a                       ; 0048fd18
        ;   XREF to: 0048fd3a (CONDITIONAL_JUMP)  ; LAB_0048fd3a
    MOV EAX,[0x01c00c60]                ; 0048fd1a | DAT_01c00c60
    MOV EDI,dword ptr [ESP + 0xc]       ; 0048fd1f
    INC EAX                             ; 0048fd23
    SUB EAX,EDI                         ; 0048fd24
    CMP EDX,EAX                         ; 0048fd26
    JG 0x0048fd3a                       ; 0048fd28
        ;   XREF to: 0048fd3a (CONDITIONAL_JUMP)  ; LAB_0048fd3a
    MOV EAX,[0x01c00c64]                ; 0048fd2a | DAT_01c00c64
    MOV EBP,dword ptr [ESP + 0x10]      ; 0048fd2f
    INC EAX                             ; 0048fd33
    SUB EAX,EBP                         ; 0048fd34
    CMP ECX,EAX                         ; 0048fd36
    JLE 0x0048fd42                      ; 0048fd38
        ;   XREF to: 0048fd42 (CONDITIONAL_JUMP)  ; LAB_0048fd42
    MOV EAX,0x1                         ; 0048fd3a
        ;   Label: LAB_0048fd3a
    POP EBP                             ; 0048fd3f
    POP EDI                             ; 0048fd40
    RET                                 ; 0048fd41
    XOR EAX,EAX                         ; 0048fd42
        ;   Label: LAB_0048fd42
    POP EBP                             ; 0048fd44
    POP EDI                             ; 0048fd45
    RET                                 ; 0048fd46

