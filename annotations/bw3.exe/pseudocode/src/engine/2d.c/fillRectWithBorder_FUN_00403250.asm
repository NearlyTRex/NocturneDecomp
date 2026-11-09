; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403250(int x1,int y1,int x2,int y2,int fill_color,int border_color)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   fill_color
; int              Stack[0x18]:4   border_color
;
; XREF[7]:
;   core_game.cpp_FUN_004b47d0 at 004b4c38
;   core_game.cpp_drawHealthBar_FUN_004b4730 at 004b477c
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e823a
;   shape_edittool.cpp_FUN_0047b7c0 at 0047b8d0
;   shape_edittool.cpp_FUN_0047ee50 at 0047f37d
;   shape_edittool.cpp_FUN_0047fa80 at 00480179
;   shape_edittool.cpp_FUN_00485640 at 004858b6
;
; Referenced Globals:
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_drawRect_FUN_00403170
;   engine_2d.c_fillRectColor_FUN_004031c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403250
        ;   Label: engine_2d.c_fillRectWithBorder_FUN_00403250
    PUSH ESI                            ; 00403251
    PUSH EDI                            ; 00403252
    MOV EDX,dword ptr [ESP + 0x20]      ; 00403253
    PUSH EDX                            ; 00403257
    MOV ECX,dword ptr [ESP + 0x20]      ; 00403258
    PUSH ECX                            ; 0040325c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040325d
    PUSH EBX                            ; 00403261
    MOV ESI,dword ptr [ESP + 0x20]      ; 00403262
    PUSH ESI                            ; 00403266
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403267
    PUSH EDI                            ; 0040326b
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0040326c
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00403271
    MOV EAX,dword ptr [ESP + 0x24]      ; 00403274
    MOV EBX,dword ptr [0x01c6b5c0]      ; 00403278 | DAT_01c6b5c0
    MOV [0x01c6b5c0],EAX                ; 0040327e | DAT_01c6b5c0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403283
    INC EAX                             ; 00403287
    PUSH EAX                            ; 00403288
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403289
    INC EAX                             ; 0040328d
    PUSH EAX                            ; 0040328e
    LEA EAX,[ESI + -0x1]                ; 0040328f
    PUSH EAX                            ; 00403292
    LEA EAX,[EDI + -0x1]                ; 00403293
    PUSH EAX                            ; 00403296
    CALL engine_2d.c_drawRect_FUN_00403170 ; 00403297
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawRect_FUN_00403170(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0040329c
    MOV dword ptr [0x01c6b5c0],EBX      ; 0040329f | DAT_01c6b5c0
    POP EDI                             ; 004032a5
    POP ESI                             ; 004032a6
    POP EBX                             ; 004032a7
    RET                                 ; 004032a8

