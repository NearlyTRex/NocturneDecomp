; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_004eb3ce(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01511cb8
;   undefined4 DAT_01c38af0
;   undefined4 DAT_01c38af4
;   undefined4 DAT_01c38b00
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   engine_font.cpp_FUN_004ab560
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004eb3ce
        ;   Label: core_menu.cpp_FUN_004eb3ce
    PUSH EBX                            ; 004eb3d0
    PUSH ESI                            ; 004eb3d1
    PUSH EDI                            ; 004eb3d2
    PUSH EBP                            ; 004eb3d3
    SUB ESP,0x100                       ; 004eb3d4
    MOV EDX,dword ptr [ESP + 0x114]     ; 004eb3da
    PUSH EDX                            ; 004eb3e1
    MOV ECX,dword ptr [0x01511cb8]      ; 004eb3e2 | DAT_01511cb8
    PUSH ECX                            ; 004eb3e8
    CALL engine_font.cpp_FUN_004aaf00   ; 004eb3e9
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,EAX                         ; 004eb3ee
    SAR EDX,0x1f                        ; 004eb3f0
    SUB EAX,EDX                         ; 004eb3f3
    SAR EAX,0x1                         ; 004eb3f5
    ADD ESP,0x8                         ; 004eb3f7
    PUSH 0x58                           ; 004eb3fa
    MOV ESI,dword ptr [0x01511cb8]      ; 004eb3fc | DAT_01511cb8
    MOV EBX,0x140                       ; 004eb402
    PUSH ESI                            ; 004eb407
    SUB EBX,EAX                         ; 004eb408
    CALL engine_font.cpp_FUN_004ab560   ; 004eb40a
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 004eb40f
    SAR EDX,0x1f                        ; 004eb411
    SUB EAX,EDX                         ; 004eb414
    SAR EAX,0x1                         ; 004eb416
    ADD ESP,0x8                         ; 004eb418
    PUSH 0x0                            ; 004eb41b
    MOV EDX,0xf0                        ; 004eb41d
    PUSH 0x7                            ; 004eb422
    SUB EDX,EAX                         ; 004eb424
    PUSH EDX                            ; 004eb426
    PUSH EBX                            ; 004eb427
    MOV EDI,dword ptr [ESP + 0x124]     ; 004eb428
    PUSH EDI                            ; 004eb42f
    MOV EBP,dword ptr [0x01511cb8]      ; 004eb430 | DAT_01511cb8
    PUSH EBP                            ; 004eb436
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb437
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb43c
    MOV EAX,[0x01c38b00]                ; 004eb43f | DAT_01c38b00
    PUSH EAX                            ; 004eb444
    MOV EDX,dword ptr [0x01c38af4]      ; 004eb445 | DAT_01c38af4
    PUSH EDX                            ; 004eb44b
    MOV ECX,dword ptr [0x01c38af0]      ; 004eb44c | DAT_01c38af0
    PUSH ECX                            ; 004eb452
    PUSH 0x5dcad1                       ; 004eb453
    LEA EAX,[ESP + 0x10]                ; 004eb458
    PUSH EAX                            ; 004eb45c
    CALL crt_unknown.c_FUN_005b7790     ; 004eb45d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x14                        ; 004eb462
    PUSH 0x0                            ; 004eb465
    PUSH 0x0                            ; 004eb467
    LEA EAX,[ESP + 0x8]                 ; 004eb469
    PUSH EAX                            ; 004eb46d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004eb46e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004eb473
    ADD ESP,0x100                       ; 004eb476
    POP EBP                             ; 004eb47c
    POP EDI                             ; 004eb47d
    POP ESI                             ; 004eb47e
    POP EBX                             ; 004eb47f
    RET                                 ; 004eb480

