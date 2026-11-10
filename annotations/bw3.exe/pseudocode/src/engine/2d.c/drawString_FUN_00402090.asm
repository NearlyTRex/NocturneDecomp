; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawString_FUN_00402090(char *text,int x_pos,int y_pos,int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color
;
; XREF[1]:
;   engine_console.cpp_CConsole_render_FUN_00442250 at 004422c2
;
; Called Functions:
;   engine_2d.c_drawCharacterMaskedColor_FUN_00401a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402090
        ;   Label: engine_2d.c_drawString_FUN_00402090
    PUSH ESI                            ; 00402091
    PUSH EDI                            ; 00402092
    PUSH EBP                            ; 00402093
    MOV ESI,dword ptr [ESP + 0x14]      ; 00402094
    MOV EBP,dword ptr [ESP + 0x18]      ; 00402098
    MOV EDI,ESI                         ; 0040209c
    SUB ECX,ECX                         ; 0040209e
    DEC ECX                             ; 004020a0
    XOR EAX,EAX                         ; 004020a1
    SCASB.REPNE ES:EDI                  ; 004020a3
    NOT ECX                             ; 004020a5
    DEC ECX                             ; 004020a7
    XOR EBX,EBX                         ; 004020a8
    MOV EDI,ECX                         ; 004020aa
    TEST ECX,ECX                        ; 004020ac
    JLE 0x004020dc                      ; 004020ae
        ;   XREF to: 004020dc (CONDITIONAL_JUMP)  ; LAB_004020dc
    XOR EAX,EAX                         ; 004020b0
        ;   Label: LAB_004020b0
    MOV AL,byte ptr [ESI]               ; 004020b2
    CMP EAX,0x20                        ; 004020b4
    JL 0x004020d6                       ; 004020b7
        ;   XREF to: 004020d6 (CONDITIONAL_JUMP)  ; LAB_004020d6
    CMP EAX,0x100                       ; 004020b9
    JGE 0x004020d6                      ; 004020be
        ;   XREF to: 004020d6 (CONDITIONAL_JUMP)  ; LAB_004020d6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004020c0
    PUSH EDX                            ; 004020c4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004020c5
    PUSH ECX                            ; 004020c9
    PUSH EBP                            ; 004020ca
    PUSH EAX                            ; 004020cb
    CALL engine_2d.c_drawCharacterMaskedColor_FUN_00401a20 ; 004020cc
        ;   XREF to: 00401a20 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterMaskedColor_FUN_00401a20(int char_code, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 004020d1
    ADD EBP,EAX                         ; 004020d4
    INC EBX                             ; 004020d6
        ;   Label: LAB_004020d6
    INC ESI                             ; 004020d7
    CMP EBX,EDI                         ; 004020d8
    JL 0x004020b0                       ; 004020da
        ;   XREF to: 004020b0 (CONDITIONAL_JUMP)  ; LAB_004020b0
    POP EBP                             ; 004020dc
        ;   Label: LAB_004020dc
    POP EDI                             ; 004020dd
    POP ESI                             ; 004020de
    POP EBX                             ; 004020df
    RET                                 ; 004020e0

