; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b8e0(int param_1,int param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_mini3d.cpp_fillRect_FUN_004f37e0
;   engine_mini3d.cpp_setColor_FUN_004f3520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b8e0
        ;   Label: shape_edittool.cpp_FUN_0047b8e0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047b8e1
    MOV EDX,dword ptr [0x01c5baec]      ; 0047b8e5 | DAT_01c5baec
    TEST EDX,EDX                        ; 0047b8eb
    JZ 0x0047b952                       ; 0047b8ed
        ;   XREF to: 0047b952 (CONDITIONAL_JUMP)  ; LAB_0047b952
    JNZ 0x0047b914                      ; 0047b8ef
        ;   XREF to: 0047b914 (CONDITIONAL_JUMP)  ; LAB_0047b914
    MOV [0x01c6b5c0],EAX                ; 0047b8f1 | DAT_01c6b5c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047b8f6
        ;   Label: LAB_0047b8f6
    PUSH EAX                            ; 0047b8fa
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047b8fb
    PUSH EDX                            ; 0047b8ff
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047b900
    PUSH ECX                            ; 0047b904
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047b905
    PUSH EBX                            ; 0047b909
    CALL engine_mini3d.cpp_fillRect_FUN_004f37e0 ; 0047b90a
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f37e0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0047b90f
    POP EBX                             ; 0047b912
    RET                                 ; 0047b913
    AND EAX,0xff                        ; 0047b914
        ;   Label: LAB_0047b914
    MOV EDX,EAX                         ; 0047b919
    SHL EAX,0x2                         ; 0047b91b
    SUB EAX,EDX                         ; 0047b91e
    XOR EDX,EDX                         ; 0047b920
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047b922
    MOV ECX,EDX                         ; 0047b928
    XOR EDX,EDX                         ; 0047b92a
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047b92c
    SHL ECX,0x8                         ; 0047b932
    SHL EDX,0x10                        ; 0047b935
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047b938
    OR EDX,ECX                          ; 0047b93e
    AND EAX,0xff                        ; 0047b940
    OR EAX,EDX                          ; 0047b945
    PUSH EAX                            ; 0047b947
    CALL engine_mini3d.cpp_setColor_FUN_004f3520 ; 0047b948
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f3520(uint rgb)
    ADD ESP,0x4                         ; 0047b94d
    JMP 0x0047b8f6                      ; 0047b950
        ;   XREF to: 0047b8f6 (UNCONDITIONAL_JUMP)  ; LAB_0047b8f6
    PUSH EDI                            ; 0047b952
        ;   Label: LAB_0047b952
    PUSH ESI                            ; 0047b953
    PUSH EAX                            ; 0047b954
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047b955
    PUSH ECX                            ; 0047b959
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047b95a
    PUSH EBX                            ; 0047b95e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047b95f
    PUSH ESI                            ; 0047b963
    MOV EDI,dword ptr [ESP + 0x20]      ; 0047b964
    PUSH EDI                            ; 0047b968
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0047b969
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0047b96e
    POP ESI                             ; 0047b971
    POP EDI                             ; 0047b972
    POP EBX                             ; 0047b973
    RET                                 ; 0047b974

