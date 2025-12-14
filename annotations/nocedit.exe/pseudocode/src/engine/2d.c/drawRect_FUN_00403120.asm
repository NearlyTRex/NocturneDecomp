; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawRect_FUN_00403120(int x1, int y1, int x2, int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; XREF[3]:
;   core_setedit.cpp_CDemonSet_FUN_00577af0 at 00577eae
;   core_setedit.cpp_FUN_00577730 at 005777ca
;   engine_2d.c_fillRectWithBorder_FUN_00403200 at 00403247
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawVLine_FUN_00402ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403120
        ;   Label: engine_2d.c_drawRect_FUN_00403120
    PUSH ESI                            ; 00403121
    PUSH EDI                            ; 00403122
    PUSH EBP                            ; 00403123
    MOV EBX,dword ptr [ESP + 0x14]      ; 00403124
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403128
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040312c
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403130
    PUSH EBP                            ; 00403134
    PUSH ESI                            ; 00403135
    PUSH EBX                            ; 00403136
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 00403137
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0040313c
    PUSH EBP                            ; 0040313f
    PUSH EDI                            ; 00403140
    PUSH EBX                            ; 00403141
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 00403142
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00403147
    PUSH EDI                            ; 0040314a
    PUSH ESI                            ; 0040314b
    PUSH EBX                            ; 0040314c
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 0040314d
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 00403152
    PUSH EDI                            ; 00403155
    PUSH ESI                            ; 00403156
    PUSH EBP                            ; 00403157
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 00403158
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0040315d
    POP EBP                             ; 00403160
    POP EDI                             ; 00403161
    POP ESI                             ; 00403162
    POP EBX                             ; 00403163
    RET                                 ; 00403164

