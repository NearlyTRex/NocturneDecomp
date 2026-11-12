; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402160(int param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402160
        ;   Label: engine_2d.c_FUN_00402160
    PUSH ESI                            ; 00402161
    SUB ESP,0x1004                      ; 00402162
    LEA EAX,[ESP + 0x101c]              ; 00402168
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040216f
    LEA EAX,[ESP + 0x1000]              ; 00402176
    PUSH EAX                            ; 0040217d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040217e
    PUSH EDX                            ; 00402185
    LEA EAX,[ESP + 0x8]                 ; 00402186
    PUSH EAX                            ; 0040218a
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0040218b
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 00402190
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402193
    PUSH EBX                            ; 0040219a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040219b
    PUSH ESI                            ; 004021a2
    LEA EAX,[ESP + 0x8]                 ; 004021a3
    XOR ECX,ECX                         ; 004021a7
    PUSH EAX                            ; 004021a9
    MOV dword ptr [ESP + 0x100c],ECX    ; 004021aa
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004021b1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004021b6
    ADD ESP,0x1004                      ; 004021b9
    POP ESI                             ; 004021bf
    POP EBX                             ; 004021c0
    RET                                 ; 004021c1

