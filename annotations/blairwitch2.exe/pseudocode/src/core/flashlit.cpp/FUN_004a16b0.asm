; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a16b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616040
;   undefined4 DAT_01511cbc
;   undefined4 DAT_01caf488
;   undefined4 DAT_01caf48c
;   undefined4 DAT_01caf490
;   undefined4 DAT_01caf494
;   undefined4 DAT_01caf498
;   undefined4 DAT_01caf49c
;   undefined4 DAT_01caf4a0
;   undefined4 DAT_01caf568
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_font.cpp_FUN_004a8df0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a16b0
        ;   Label: core_flashlit.cpp_FUN_004a16b0
    PUSH EBP                            ; 004a16b1
    MOV EDX,dword ptr [0x00616040]      ; 004a16b2 | DAT_00616040
    TEST EDX,EDX                        ; 004a16b8
    JL 0x004a16df                       ; 004a16ba
        ;   XREF to: 004a16df (CONDITIONAL_JUMP)  ; LAB_004a16df
    MOV ECX,dword ptr [0x01caf568]      ; 004a16bc | DAT_01caf568
    TEST ECX,ECX                        ; 004a16c2
    JNZ 0x004a16e2                      ; 004a16c4
        ;   XREF to: 004a16e2 (CONDITIONAL_JUMP)  ; LAB_004a16e2
    MOV ESI,0xffffffff                  ; 004a16c6
    XOR AH,AH                           ; 004a16cb
    MOV dword ptr [0x01caf488],ECX      ; 004a16cd | DAT_01caf488
    MOV byte ptr [0x01caf4a0],AH        ; 004a16d3 | DAT_01caf4a0
    MOV dword ptr [0x00616040],ESI      ; 004a16d9 | DAT_00616040
    POP EBP                             ; 004a16df
        ;   Label: LAB_004a16df
    POP ESI                             ; 004a16e0
    RET                                 ; 004a16e1
    PUSH EBX                            ; 004a16e2
        ;   Label: LAB_004a16e2
    MOV EAX,[0x01caf494]                ; 004a16e3 | DAT_01caf494
    PUSH 0x0                            ; 004a16e8
    DEC EAX                             ; 004a16ea
    PUSH EAX                            ; 004a16eb
    MOV EAX,[0x01caf490]                ; 004a16ec | DAT_01caf490
    DEC EAX                             ; 004a16f1
    PUSH EAX                            ; 004a16f2
    MOV EBP,dword ptr [0x01caf48c]      ; 004a16f3 | DAT_01caf48c
    PUSH EBP                            ; 004a16f9
    PUSH EDX                            ; 004a16fa
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004a16fb
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a1700
    PUSH -0x1                           ; 004a1703
    PUSH 0xff                           ; 004a1705
    MOV EDX,dword ptr [0x01caf49c]      ; 004a170a | DAT_01caf49c
    PUSH EDX                            ; 004a1710
    MOV ECX,dword ptr [0x01caf498]      ; 004a1711 | DAT_01caf498
    PUSH ECX                            ; 004a1717
    PUSH 0x1caf4a0                      ; 004a1718
    MOV EBX,dword ptr [0x01511cbc]      ; 004a171d | DAT_01511cbc
    PUSH EBX                            ; 004a1723
    CALL engine_font.cpp_FUN_004a8df0   ; 004a1724
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004a1729
    POP EBX                             ; 004a172c
    POP EBP                             ; 004a172d
    POP ESI                             ; 004a172e
    RET                                 ; 004a172f

