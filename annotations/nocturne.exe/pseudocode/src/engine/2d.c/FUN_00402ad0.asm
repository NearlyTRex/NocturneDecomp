; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402ad0(int param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ad0
        ;   Label: engine_2d.c_FUN_00402ad0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402ad1
    PUSH EDX                            ; 00402ad5
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402ad6
    PUSH ECX                            ; 00402ada
    MOV EBX,dword ptr [ESP + 0x18]      ; 00402adb
    PUSH EBX                            ; 00402adf
    CALL engine_2d.c_drawTextColor_FUN_00402a60 ; 00402ae0
        ;   XREF to: 00402a60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402a60(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402ae5
    POP EBX                             ; 00402ae8
    RET                                 ; 00402ae9

