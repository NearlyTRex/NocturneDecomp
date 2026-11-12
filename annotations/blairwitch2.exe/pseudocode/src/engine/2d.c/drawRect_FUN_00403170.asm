; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawRect_FUN_00403170(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; XREF[2]:
;   core_bmppuzzl.cpp_CExamplePuzzle_render_FUN_0059ada0 at 0059adc8
;   engine_2d.c_fillRectWithBorder_FUN_00403250 at 00403297
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403170
        ;   Label: engine_2d.c_drawRect_FUN_00403170
    PUSH ESI                            ; 00403171
    PUSH EDI                            ; 00403172
    PUSH EBP                            ; 00403173
    MOV EBX,dword ptr [ESP + 0x14]      ; 00403174
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403178
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040317c
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403180
    PUSH EBP                            ; 00403184
    PUSH ESI                            ; 00403185
    PUSH EBX                            ; 00403186
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00403187
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0040318c
    PUSH EBP                            ; 0040318f
    PUSH EDI                            ; 00403190
    PUSH EBX                            ; 00403191
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00403192
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00403197
    PUSH EDI                            ; 0040319a
    PUSH ESI                            ; 0040319b
    PUSH EBX                            ; 0040319c
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0040319d
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004031a2
    PUSH EDI                            ; 004031a5
    PUSH ESI                            ; 004031a6
    PUSH EBP                            ; 004031a7
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 004031a8
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004031ad
    POP EBP                             ; 004031b0
    POP EDI                             ; 004031b1
    POP ESI                             ; 004031b2
    POP EBX                             ; 004031b3
    RET                                 ; 004031b4

