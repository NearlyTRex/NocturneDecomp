; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_004028f0(int param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   engine_2d.c_FUN_004028b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004028f0
        ;   Label: engine_2d.c_FUN_004028f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004028f1
    PUSH EDX                            ; 004028f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004028f6
    PUSH ECX                            ; 004028fa
    MOV EBX,dword ptr [ESP + 0x18]      ; 004028fb
    PUSH EBX                            ; 004028ff
    CALL engine_2d.c_FUN_004028b0       ; 00402900
        ;   XREF to: 004028b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_004028b0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402905
    POP EBX                             ; 00402908
    RET                                 ; 00402909

