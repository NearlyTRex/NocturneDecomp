; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402b90(int param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402b90
        ;   Label: engine_2d.c_FUN_00402b90
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402b91
    PUSH EDX                            ; 00402b95
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402b96
    PUSH ECX                            ; 00402b9a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00402b9b
    PUSH EBX                            ; 00402b9f
    CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402b60 ; 00402ba0
        ;   XREF to: 00402b60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAlignedColor_FUN_00402b60(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402ba5
    POP EBX                             ; 00402ba8
    RET                                 ; 00402ba9

