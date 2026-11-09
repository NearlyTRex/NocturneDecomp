; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a890(int param_1,int param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a890
        ;   Label: shape_edittool.cpp_FUN_0047a890
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047a891
    MOV EDX,dword ptr [0x01c25f84]      ; 0047a895 | DAT_01c25f84
    TEST EDX,EDX                        ; 0047a89b
    JZ 0x0047a902                       ; 0047a89d
        ;   XREF to: 0047a902 (CONDITIONAL_JUMP)  ; LAB_0047a902
    JNZ 0x0047a8c4                      ; 0047a89f
        ;   XREF to: 0047a8c4 (CONDITIONAL_JUMP)  ; LAB_0047a8c4
    MOV [0x01c35e60],EAX                ; 0047a8a1 | DAT_01c35e60
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047a8a6
        ;   Label: LAB_0047a8a6
    PUSH EAX                            ; 0047a8aa
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047a8ab
    PUSH EDX                            ; 0047a8af
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047a8b0
    PUSH ECX                            ; 0047a8b4
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047a8b5
    PUSH EBX                            ; 0047a8b9
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047a8ba
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047a8bf
    POP EBX                             ; 0047a8c2
    RET                                 ; 0047a8c3
    AND EAX,0xff                        ; 0047a8c4
        ;   Label: LAB_0047a8c4
    MOV EDX,EAX                         ; 0047a8c9
    SHL EAX,0x2                         ; 0047a8cb
    SUB EAX,EDX                         ; 0047a8ce
    XOR EDX,EDX                         ; 0047a8d0
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047a8d2
    MOV ECX,EDX                         ; 0047a8d8
    XOR EDX,EDX                         ; 0047a8da
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047a8dc
    SHL ECX,0x8                         ; 0047a8e2
    SHL EDX,0x10                        ; 0047a8e5
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047a8e8
    OR EDX,ECX                          ; 0047a8ee
    AND EAX,0xff                        ; 0047a8f0
    OR EAX,EDX                          ; 0047a8f5
    PUSH EAX                            ; 0047a8f7
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047a8f8
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047a8fd
    JMP 0x0047a8a6                      ; 0047a900
        ;   XREF to: 0047a8a6 (UNCONDITIONAL_JUMP)  ; LAB_0047a8a6
    PUSH EDI                            ; 0047a902
        ;   Label: LAB_0047a902
    PUSH ESI                            ; 0047a903
    PUSH EAX                            ; 0047a904
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047a905
    PUSH ECX                            ; 0047a909
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047a90a
    PUSH EBX                            ; 0047a90e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047a90f
    PUSH ESI                            ; 0047a913
    MOV EDI,dword ptr [ESP + 0x20]      ; 0047a914
    PUSH EDI                            ; 0047a918
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0047a919
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0047a91e
    POP ESI                             ; 0047a921
    POP EDI                             ; 0047a922
    POP EBX                             ; 0047a923
    RET                                 ; 0047a924

