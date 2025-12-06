; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawStringHighlighted_FUN_004020e0(char * text, int x_pos, int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
;
; Called Functions:
;   engine_2d.c_drawCharacterHighlighted_FUN_00401b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004020e0
        ;   Label: engine_2d.c_drawStringHighlighted_FUN_004020e0
    PUSH ESI                            ; 004020e1
    PUSH EDI                            ; 004020e2
    PUSH EBP                            ; 004020e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004020e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004020e8
    MOV EDI,ESI                         ; 004020ec
    SUB ECX,ECX                         ; 004020ee
    DEC ECX                             ; 004020f0
    XOR EAX,EAX                         ; 004020f1
    SCASB.REPNE ES:EDI                  ; 004020f3
    NOT ECX                             ; 004020f5
    DEC ECX                             ; 004020f7
    XOR EBX,EBX                         ; 004020f8
    MOV EDI,ECX                         ; 004020fa
    TEST ECX,ECX                        ; 004020fc
    JLE 0x00402127                      ; 004020fe | LAB_00402127
        ;   XREF to: 00402127 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00402100
        ;   Label: LAB_00402100
    MOV AL,byte ptr [ESI]               ; 00402102
    CMP EAX,0x20                        ; 00402104
    JL 0x00402121                       ; 00402107 | LAB_00402121
        ;   XREF to: 00402121 (CONDITIONAL_JUMP)
    CMP EAX,0x100                       ; 00402109
    JGE 0x00402121                      ; 0040210e | LAB_00402121
        ;   XREF to: 00402121 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00402110
    PUSH EDX                            ; 00402114
    PUSH EBP                            ; 00402115
    PUSH EAX                            ; 00402116
    CALL engine_2d.c_drawCharacterHighlighted_FUN_00401b70 ; 00402117 | int engine_2d.c_drawCharacterHighlighted_FUN_00401b70(int char_code, int x_pos, int y_pos)
        ;   XREF to: 00401b70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040211c
    ADD EBP,EAX                         ; 0040211f
    INC EBX                             ; 00402121
        ;   Label: LAB_00402121
    INC ESI                             ; 00402122
    CMP EBX,EDI                         ; 00402123
    JL 0x00402100                       ; 00402125 | LAB_00402100
        ;   XREF to: 00402100 (CONDITIONAL_JUMP)
    POP EBP                             ; 00402127
        ;   Label: LAB_00402127
    POP EDI                             ; 00402128
    POP ESI                             ; 00402129
    POP EBX                             ; 0040212a
    RET                                 ; 0040212b

