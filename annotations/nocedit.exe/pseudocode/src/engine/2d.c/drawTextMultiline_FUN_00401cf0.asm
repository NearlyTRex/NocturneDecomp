; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextMultiline_FUN_00401cf0(char *text,int x_start,int y_start,int x_max,int y_max)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   y_start
; int              Stack[0x10]:4   x_max
; int              Stack[0x14]:4   y_max
;
; XREF[1]:
;   engine_2d.c_drawText_FUN_00401fd0 at 00402018
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401cf0
        ;   Label: engine_2d.c_drawTextMultiline_FUN_00401cf0
    PUSH ESI                            ; 00401cf1
    PUSH EDI                            ; 00401cf2
    PUSH EBP                            ; 00401cf3
    SUB ESP,0x4                         ; 00401cf4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00401cf7
    MOV EDI,ESI                         ; 00401cfb
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401cfd
    SUB ECX,ECX                         ; 00401d01
    DEC ECX                             ; 00401d03
    XOR EAX,EAX                         ; 00401d04
    SCASB.REPNE ES:EDI                  ; 00401d06
    NOT ECX                             ; 00401d08
    DEC ECX                             ; 00401d0a
    MOV dword ptr [ESP],ECX             ; 00401d0b
    XOR EDI,EDI                         ; 00401d0e
    TEST ECX,ECX                        ; 00401d10
    JLE 0x00401d5a                      ; 00401d12
        ;   XREF to: 00401d5a (CONDITIONAL_JUMP)  ; LAB_00401d5a
    CMP byte ptr [ESI],0xa              ; 00401d14
        ;   Label: LAB_00401d14
    JZ 0x00401d62                       ; 00401d17
        ;   XREF to: 00401d62 (CONDITIONAL_JUMP)  ; LAB_00401d62
    XOR EBX,EBX                         ; 00401d19
        ;   Label: LAB_00401d19
    MOV BL,byte ptr [ESI]               ; 00401d1b
    CMP EBX,0x20                        ; 00401d1d
    JL 0x00401d51                       ; 00401d20
        ;   XREF to: 00401d51 (CONDITIONAL_JUMP)  ; LAB_00401d51
    CMP EBX,0x100                       ; 00401d22
    JGE 0x00401d51                      ; 00401d28
        ;   XREF to: 00401d51 (CONDITIONAL_JUMP)  ; LAB_00401d51
    MOV EAX,dword ptr [ESP + 0x20]      ; 00401d2a
    PUSH EAX                            ; 00401d2e
    PUSH EBP                            ; 00401d2f
    PUSH EBX                            ; 00401d30
    SUB EBX,0x20                        ; 00401d31
    IMUL EBX,EBX,0x91                   ; 00401d34
    CALL engine_2d.c_drawCharacter_FUN_00401610 ; 00401d3a
        ;   XREF to: 00401610 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacter_FUN_00401610(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00401d3f
    MOV BL,byte ptr [EBX + 0x666040]    ; 00401d42 | g_FontTable
    AND EBX,0xff                        ; 00401d48
    INC EBX                             ; 00401d4e
    ADD EBP,EBX                         ; 00401d4f
    MOV EDX,dword ptr [ESP]             ; 00401d51
        ;   Label: LAB_00401d51
    INC EDI                             ; 00401d54
    INC ESI                             ; 00401d55
    CMP EDI,EDX                         ; 00401d56
    JL 0x00401d14                       ; 00401d58
        ;   XREF to: 00401d14 (CONDITIONAL_JUMP)  ; LAB_00401d14
    ADD ESP,0x4                         ; 00401d5a
        ;   Label: LAB_00401d5a
    POP EBP                             ; 00401d5d
    POP EDI                             ; 00401d5e
    POP ESI                             ; 00401d5f
    POP EBX                             ; 00401d60
    RET                                 ; 00401d61
    MOV ECX,dword ptr [ESP + 0x20]      ; 00401d62
        ;   Label: LAB_00401d62
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401d66
    ADD ECX,0xb                         ; 00401d6a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401d6d
    MOV dword ptr [ESP + 0x20],ECX      ; 00401d71
    CMP ECX,EBX                         ; 00401d75
    JG 0x00401d5a                       ; 00401d77
        ;   XREF to: 00401d5a (CONDITIONAL_JUMP)  ; LAB_00401d5a
    JMP 0x00401d19                      ; 00401d79
        ;   XREF to: 00401d19 (UNCONDITIONAL_JUMP)  ; LAB_00401d19

