; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextMultilineColor_FUN_00401f40(char *text,int x_start,int y_start,int x_max,int y_max,int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   y_start
; int              Stack[0x10]:4   x_max
; int              Stack[0x14]:4   y_max
; int              Stack[0x18]:4   color
;
; XREF[1]:
;   engine_2d.c_drawTextColor_FUN_00402430 at 00402486
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;
; Called Functions:
;   engine_2d.c_drawCharacterMasked_FUN_00401a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401f40
        ;   Label: engine_2d.c_drawTextMultilineColor_FUN_00401f40
    PUSH ESI                            ; 00401f41
    PUSH EDI                            ; 00401f42
    PUSH EBP                            ; 00401f43
    SUB ESP,0x4                         ; 00401f44
    MOV ESI,dword ptr [ESP + 0x18]      ; 00401f47
    MOV EDI,ESI                         ; 00401f4b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401f4d
    SUB ECX,ECX                         ; 00401f51
    DEC ECX                             ; 00401f53
    XOR EAX,EAX                         ; 00401f54
    SCASB.REPNE ES:EDI                  ; 00401f56
    NOT ECX                             ; 00401f58
    DEC ECX                             ; 00401f5a
    MOV dword ptr [ESP],ECX             ; 00401f5b
    XOR EDI,EDI                         ; 00401f5e
    TEST ECX,ECX                        ; 00401f60
    JLE 0x00401faf                      ; 00401f62
        ;   XREF to: 00401faf (CONDITIONAL_JUMP)  ; LAB_00401faf
    CMP byte ptr [ESI],0xa              ; 00401f64
        ;   Label: LAB_00401f64
    JZ 0x00401fb7                       ; 00401f67
        ;   XREF to: 00401fb7 (CONDITIONAL_JUMP)  ; LAB_00401fb7
    XOR EBX,EBX                         ; 00401f69
        ;   Label: LAB_00401f69
    MOV BL,byte ptr [ESI]               ; 00401f6b
    CMP EBX,0x20                        ; 00401f6d
    JL 0x00401fa6                       ; 00401f70
        ;   XREF to: 00401fa6 (CONDITIONAL_JUMP)  ; LAB_00401fa6
    CMP EBX,0x100                       ; 00401f72
    JGE 0x00401fa6                      ; 00401f78
        ;   XREF to: 00401fa6 (CONDITIONAL_JUMP)  ; LAB_00401fa6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00401f7a
    PUSH EAX                            ; 00401f7e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00401f7f
    PUSH EDX                            ; 00401f83
    PUSH EBP                            ; 00401f84
    PUSH EBX                            ; 00401f85
    SUB EBX,0x20                        ; 00401f86
    IMUL EBX,EBX,0x91                   ; 00401f89
    CALL engine_2d.c_drawCharacterMasked_FUN_00401a10 ; 00401f8f
        ;   XREF to: 00401a10 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterMasked_FUN_00401a10(int char_code, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 00401f94
    MOV BL,byte ptr [EBX + 0x666040]    ; 00401f97 | g_FontTable
    AND EBX,0xff                        ; 00401f9d
    INC EBX                             ; 00401fa3
    ADD EBP,EBX                         ; 00401fa4
    MOV EDX,dword ptr [ESP]             ; 00401fa6
        ;   Label: LAB_00401fa6
    INC EDI                             ; 00401fa9
    INC ESI                             ; 00401faa
    CMP EDI,EDX                         ; 00401fab
    JL 0x00401f64                       ; 00401fad
        ;   XREF to: 00401f64 (CONDITIONAL_JUMP)  ; LAB_00401f64
    ADD ESP,0x4                         ; 00401faf
        ;   Label: LAB_00401faf
    POP EBP                             ; 00401fb2
    POP EDI                             ; 00401fb3
    POP ESI                             ; 00401fb4
    POP EBX                             ; 00401fb5
    RET                                 ; 00401fb6
    MOV ECX,dword ptr [ESP + 0x20]      ; 00401fb7
        ;   Label: LAB_00401fb7
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401fbb
    ADD ECX,0xb                         ; 00401fbf
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401fc2
    MOV dword ptr [ESP + 0x20],ECX      ; 00401fc6
    CMP ECX,EBX                         ; 00401fca
    JG 0x00401faf                       ; 00401fcc
        ;   XREF to: 00401faf (CONDITIONAL_JUMP)  ; LAB_00401faf
    JMP 0x00401f69                      ; 00401fce
        ;   XREF to: 00401f69 (UNCONDITIONAL_JUMP)  ; LAB_00401f69

