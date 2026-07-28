; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402980(char *param_1,int param_2,int param_3,int param_4)
;
;
; XREF[2]:
;   engine_2d.c_FUN_004029c0 at 004029d6
;   engine_2d.c_FUN_004029f0 at 00402a4a
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00402600
;   engine_2d.c_getStringWidth_FUN_00401ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402980
        ;   Label: engine_2d.c_FUN_00402980
    PUSH ESI                            ; 00402981
    MOV EDX,dword ptr [ESP + 0x18]      ; 00402982
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402986
    PUSH EDX                            ; 0040298a
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040298b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040298f
    PUSH ESI                            ; 00402993
    ADD EBX,ECX                         ; 00402994
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 00402996
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_00401ed0(char * text)
    LEA EDX,[EBX + 0x1]                 ; 0040299b
    SUB EDX,EAX                         ; 0040299e
    INC EDX                             ; 004029a0
    MOV EAX,EDX                         ; 004029a1
    SAR EDX,0x1f                        ; 004029a3
    SUB EAX,EDX                         ; 004029a6
    SAR EAX,0x1                         ; 004029a8
    ADD ESP,0x4                         ; 004029aa
    PUSH EAX                            ; 004029ad
    PUSH ESI                            ; 004029ae
    CALL engine_2d.c_drawText_FUN_00402600 ; 004029af
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004029b4
    POP ESI                             ; 004029b7
    POP EBX                             ; 004029b8
    RET                                 ; 004029b9

