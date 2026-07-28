; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402d30(int param_1,int param_2,int param_3,char *param_4)
;
;
; XREF[1]:
;   core_dlight.cpp_FUN_0044ed80 at 0044ef9b
;
; Called Functions:
;   engine_2d.c_drawTextCenteredColor_FUN_00402cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402d30
        ;   Label: engine_2d.c_FUN_00402d30
    PUSH ESI                            ; 00402d31
    MOV EDX,dword ptr [ESP + 0x14]      ; 00402d32
    PUSH EDX                            ; 00402d36
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402d37
    PUSH ECX                            ; 00402d3b
    MOV EBX,dword ptr [ESP + 0x14]      ; 00402d3c
    PUSH EBX                            ; 00402d40
    MOV ESI,dword ptr [ESP + 0x24]      ; 00402d41
    PUSH ESI                            ; 00402d45
    CALL engine_2d.c_drawTextCenteredColor_FUN_00402cf0 ; 00402d46
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredColor_FUN_00402cf0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 00402d4b
    POP ESI                             ; 00402d4e
    POP EBX                             ; 00402d4f
    RET                                 ; 00402d50

