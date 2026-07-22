; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402760(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0049cc10 at 0049d403
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402760
        ;   Label: engine_2d.c_FUN_00402760
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402761
    PUSH EDX                            ; 00402765
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402766
    PUSH ECX                            ; 0040276a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040276b
    PUSH EBX                            ; 0040276f
    CALL engine_2d.c_drawText_FUN_00402600 ; 00402770
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 00402775
    POP EBX                             ; 00402778
    RET                                 ; 00402779

