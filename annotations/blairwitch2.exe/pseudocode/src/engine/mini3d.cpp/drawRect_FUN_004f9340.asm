; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawRect_FUN_004f9340(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
;
; XREF[4]:
;   shape_edittool.cpp_FUN_0047a770 at 0047a7b1
;   shape_edittool.cpp_FUN_0047dc40 at 0047ddf7
;   shape_edittool.cpp_FUN_0047e870 at 0047e9bc
;   shape_edittool.cpp_FUN_00484440 at 004844ec
;
; Called Functions:
;   engine_mini3d.cpp_drawHLine_FUN_004f9390
;   engine_mini3d.cpp_drawVLine_FUN_004f93b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9340
        ;   Label: engine_mini3d.cpp_drawRect_FUN_004f9340
    PUSH ESI                            ; 004f9341
    PUSH EDI                            ; 004f9342
    PUSH EBP                            ; 004f9343
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9344
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f9348
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f934c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f9350
    PUSH EBP                            ; 004f9354
    PUSH ESI                            ; 004f9355
    PUSH EBX                            ; 004f9356
    CALL engine_mini3d.cpp_drawHLine_FUN_004f9390 ; 004f9357
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_004f9390(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004f935c
    PUSH EBP                            ; 004f935f
    PUSH EDI                            ; 004f9360
    PUSH EBX                            ; 004f9361
    CALL engine_mini3d.cpp_drawHLine_FUN_004f9390 ; 004f9362
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_004f9390(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004f9367
    PUSH EDI                            ; 004f936a
    PUSH ESI                            ; 004f936b
    PUSH EBX                            ; 004f936c
    CALL engine_mini3d.cpp_drawVLine_FUN_004f93b0 ; 004f936d
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawVLine_FUN_004f93b0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004f9372
    PUSH EDI                            ; 004f9375
    PUSH ESI                            ; 004f9376
    PUSH EBP                            ; 004f9377
    CALL engine_mini3d.cpp_drawVLine_FUN_004f93b0 ; 004f9378
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawVLine_FUN_004f93b0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004f937d
    POP EBP                             ; 004f9380
    POP EDI                             ; 004f9381
    POP ESI                             ; 004f9382
    POP EBX                             ; 004f9383
    RET                                 ; 004f9384

