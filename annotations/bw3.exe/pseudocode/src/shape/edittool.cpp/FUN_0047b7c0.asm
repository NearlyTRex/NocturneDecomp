; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b7c0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_mini3d.cpp_drawRect_FUN_004f3a60
;   engine_mini3d.cpp_fillRect_FUN_004f37e0
;   engine_mini3d.cpp_setColor_FUN_004f3520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b7c0
        ;   Label: shape_edittool.cpp_FUN_0047b7c0
    PUSH ESI                            ; 0047b7c1
    PUSH EDI                            ; 0047b7c2
    PUSH EBP                            ; 0047b7c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047b7c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047b7c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047b7cc
    MOV EBP,dword ptr [ESP + 0x20]      ; 0047b7d0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047b7d4
    MOV EDX,dword ptr [0x01c5baec]      ; 0047b7d8 | DAT_01c5baec
    TEST EDX,EDX                        ; 0047b7de
    JZ 0x0047b8c6                       ; 0047b7e0
        ;   XREF to: 0047b8c6 (CONDITIONAL_JUMP)  ; LAB_0047b8c6
    JNZ 0x0047b86b                      ; 0047b7e6
        ;   XREF to: 0047b86b (CONDITIONAL_JUMP)  ; LAB_0047b86b
    MOV [0x01c6b5c0],EAX                ; 0047b7ec | DAT_01c6b5c0
    LEA EAX,[EBP + 0x1]                 ; 0047b7f1
        ;   Label: LAB_0047b7f1
    PUSH EAX                            ; 0047b7f4
    LEA EAX,[ESI + 0x1]                 ; 0047b7f5
    PUSH EAX                            ; 0047b7f8
    LEA EAX,[EDI + -0x1]                ; 0047b7f9
    PUSH EAX                            ; 0047b7fc
    LEA EAX,[EBX + -0x1]                ; 0047b7fd
    PUSH EAX                            ; 0047b800
    CALL engine_mini3d.cpp_drawRect_FUN_004f3a60 ; 0047b801
        ;   XREF to: 004f3a60 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawRect_FUN_004f3a60(int x1, int y1, int x2, int y2)
    MOV ECX,dword ptr [0x01c5baec]      ; 0047b806 | DAT_01c5baec
    ADD ESP,0x10                        ; 0047b80c
    TEST ECX,ECX                        ; 0047b80f
    JZ 0x0047b8ac                       ; 0047b811
        ;   XREF to: 0047b8ac (CONDITIONAL_JUMP)  ; LAB_0047b8ac
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047b817
    AND EDX,0xff                        ; 0047b81b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047b821
    SUB EAX,EDX                         ; 0047b828
    XOR EDX,EDX                         ; 0047b82a
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047b82c
    MOV ECX,EDX                         ; 0047b832
    XOR EDX,EDX                         ; 0047b834
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047b836
    SHL ECX,0x8                         ; 0047b83c
    SHL EDX,0x10                        ; 0047b83f
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047b842
    OR EDX,ECX                          ; 0047b848
    AND EAX,0xff                        ; 0047b84a
    OR EDX,EAX                          ; 0047b84f
    PUSH EDX                            ; 0047b851
    CALL engine_mini3d.cpp_setColor_FUN_004f3520 ; 0047b852
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f3520(uint rgb)
    ADD ESP,0x4                         ; 0047b857
    PUSH EBP                            ; 0047b85a
    PUSH ESI                            ; 0047b85b
    PUSH EDI                            ; 0047b85c
    PUSH EBX                            ; 0047b85d
    CALL engine_mini3d.cpp_fillRect_FUN_004f37e0 ; 0047b85e
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f37e0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0047b863
    POP EBP                             ; 0047b866
    POP EDI                             ; 0047b867
    POP ESI                             ; 0047b868
    POP EBX                             ; 0047b869
    RET                                 ; 0047b86a
    AND EAX,0xff                        ; 0047b86b
        ;   Label: LAB_0047b86b
    MOV EDX,EAX                         ; 0047b870
    SHL EAX,0x2                         ; 0047b872
    SUB EAX,EDX                         ; 0047b875
    XOR EDX,EDX                         ; 0047b877
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047b879
    MOV ECX,EDX                         ; 0047b87f
    XOR EDX,EDX                         ; 0047b881
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047b883
    SHL ECX,0x8                         ; 0047b889
    SHL EDX,0x10                        ; 0047b88c
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047b88f
    OR EDX,ECX                          ; 0047b895
    AND EAX,0xff                        ; 0047b897
    OR EAX,EDX                          ; 0047b89c
    PUSH EAX                            ; 0047b89e
    CALL engine_mini3d.cpp_setColor_FUN_004f3520 ; 0047b89f
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f3520(uint rgb)
    ADD ESP,0x4                         ; 0047b8a4
    JMP 0x0047b7f1                      ; 0047b8a7
        ;   XREF to: 0047b7f1 (UNCONDITIONAL_JUMP)  ; LAB_0047b7f1
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047b8ac
        ;   Label: LAB_0047b8ac
    MOV [0x01c6b5c0],EAX                ; 0047b8b0 | DAT_01c6b5c0
    PUSH EBP                            ; 0047b8b5
    PUSH ESI                            ; 0047b8b6
    PUSH EDI                            ; 0047b8b7
    PUSH EBX                            ; 0047b8b8
    CALL engine_mini3d.cpp_fillRect_FUN_004f37e0 ; 0047b8b9
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f37e0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0047b8be
    POP EBP                             ; 0047b8c1
    POP EDI                             ; 0047b8c2
    POP ESI                             ; 0047b8c3
    POP EBX                             ; 0047b8c4
    RET                                 ; 0047b8c5
    PUSH EAX                            ; 0047b8c6
        ;   Label: LAB_0047b8c6
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047b8c7
    PUSH ECX                            ; 0047b8cb
    PUSH EBP                            ; 0047b8cc
    PUSH ESI                            ; 0047b8cd
    PUSH EDI                            ; 0047b8ce
    PUSH EBX                            ; 0047b8cf
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 0047b8d0
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0047b8d5
    POP EBP                             ; 0047b8d8
    POP EDI                             ; 0047b8d9
    POP ESI                             ; 0047b8da
    POP EBX                             ; 0047b8db
    RET                                 ; 0047b8dc

