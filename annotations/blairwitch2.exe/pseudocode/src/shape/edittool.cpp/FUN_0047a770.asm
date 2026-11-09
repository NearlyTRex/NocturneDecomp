; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a770(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;   engine_mini3d.cpp_FUN_004f9340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a770
        ;   Label: shape_edittool.cpp_FUN_0047a770
    PUSH ESI                            ; 0047a771
    PUSH EDI                            ; 0047a772
    PUSH EBP                            ; 0047a773
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047a774
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047a778
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047a77c
    MOV EBP,dword ptr [ESP + 0x20]      ; 0047a780
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047a784
    MOV EDX,dword ptr [0x01c25f84]      ; 0047a788 | DAT_01c25f84
    TEST EDX,EDX                        ; 0047a78e
    JZ 0x0047a876                       ; 0047a790
        ;   XREF to: 0047a876 (CONDITIONAL_JUMP)  ; LAB_0047a876
    JNZ 0x0047a81b                      ; 0047a796
        ;   XREF to: 0047a81b (CONDITIONAL_JUMP)  ; LAB_0047a81b
    MOV [0x01c35e60],EAX                ; 0047a79c | DAT_01c35e60
    LEA EAX,[EBP + 0x1]                 ; 0047a7a1
        ;   Label: LAB_0047a7a1
    PUSH EAX                            ; 0047a7a4
    LEA EAX,[ESI + 0x1]                 ; 0047a7a5
    PUSH EAX                            ; 0047a7a8
    LEA EAX,[EDI + -0x1]                ; 0047a7a9
    PUSH EAX                            ; 0047a7ac
    LEA EAX,[EBX + -0x1]                ; 0047a7ad
    PUSH EAX                            ; 0047a7b0
    CALL engine_mini3d.cpp_FUN_004f9340 ; 0047a7b1
        ;   XREF to: 004f9340 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9340()
    MOV ECX,dword ptr [0x01c25f84]      ; 0047a7b6 | DAT_01c25f84
    ADD ESP,0x10                        ; 0047a7bc
    TEST ECX,ECX                        ; 0047a7bf
    JZ 0x0047a85c                       ; 0047a7c1
        ;   XREF to: 0047a85c (CONDITIONAL_JUMP)  ; LAB_0047a85c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047a7c7
    AND EDX,0xff                        ; 0047a7cb
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047a7d1
    SUB EAX,EDX                         ; 0047a7d8
    XOR EDX,EDX                         ; 0047a7da
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047a7dc
    MOV ECX,EDX                         ; 0047a7e2
    XOR EDX,EDX                         ; 0047a7e4
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047a7e6
    SHL ECX,0x8                         ; 0047a7ec
    SHL EDX,0x10                        ; 0047a7ef
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047a7f2
    OR EDX,ECX                          ; 0047a7f8
    AND EAX,0xff                        ; 0047a7fa
    OR EDX,EAX                          ; 0047a7ff
    PUSH EDX                            ; 0047a801
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047a802
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047a807
    PUSH EBP                            ; 0047a80a
    PUSH ESI                            ; 0047a80b
    PUSH EDI                            ; 0047a80c
    PUSH EBX                            ; 0047a80d
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047a80e
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047a813
    POP EBP                             ; 0047a816
    POP EDI                             ; 0047a817
    POP ESI                             ; 0047a818
    POP EBX                             ; 0047a819
    RET                                 ; 0047a81a
    AND EAX,0xff                        ; 0047a81b
        ;   Label: LAB_0047a81b
    MOV EDX,EAX                         ; 0047a820
    SHL EAX,0x2                         ; 0047a822
    SUB EAX,EDX                         ; 0047a825
    XOR EDX,EDX                         ; 0047a827
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047a829
    MOV ECX,EDX                         ; 0047a82f
    XOR EDX,EDX                         ; 0047a831
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047a833
    SHL ECX,0x8                         ; 0047a839
    SHL EDX,0x10                        ; 0047a83c
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047a83f
    OR EDX,ECX                          ; 0047a845
    AND EAX,0xff                        ; 0047a847
    OR EAX,EDX                          ; 0047a84c
    PUSH EAX                            ; 0047a84e
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047a84f
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047a854
    JMP 0x0047a7a1                      ; 0047a857
        ;   XREF to: 0047a7a1 (UNCONDITIONAL_JUMP)  ; LAB_0047a7a1
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047a85c
        ;   Label: LAB_0047a85c
    MOV [0x01c35e60],EAX                ; 0047a860 | DAT_01c35e60
    PUSH EBP                            ; 0047a865
    PUSH ESI                            ; 0047a866
    PUSH EDI                            ; 0047a867
    PUSH EBX                            ; 0047a868
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047a869
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047a86e
    POP EBP                             ; 0047a871
    POP EDI                             ; 0047a872
    POP ESI                             ; 0047a873
    POP EBX                             ; 0047a874
    RET                                 ; 0047a875
    PUSH EAX                            ; 0047a876
        ;   Label: LAB_0047a876
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047a877
    PUSH ECX                            ; 0047a87b
    PUSH EBP                            ; 0047a87c
    PUSH ESI                            ; 0047a87d
    PUSH EDI                            ; 0047a87e
    PUSH EBX                            ; 0047a87f
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 0047a880
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0047a885
    POP EBP                             ; 0047a888
    POP EDI                             ; 0047a889
    POP ESI                             ; 0047a88a
    POP EBX                             ; 0047a88b
    RET                                 ; 0047a88c

