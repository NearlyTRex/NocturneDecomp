; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popViewport_FUN_004ea570(void)
;
;
; XREF[2]:
;   engine_drender.cpp_popViewport_FUN_0046b740 at 0046b740
;   shape_edittool.cpp_FUN_0047e870 at 0047ef42
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005dc89d
;   TerminatedCString s_s_3D_Window_unbalance_005dc8b0
;   undefined4 DAT_006141e4
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;   undefined4 DAT_01c38b84
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d05270]      ; 004ea570 | DAT_01d05270
        ;   Label: engine_matrix.c_popViewport_FUN_004ea570
    DEC EDX                             ; 004ea576
    MOV dword ptr [0x01d05270],EDX      ; 004ea577 | DAT_01d05270
    TEST EDX,EDX                        ; 004ea57d
    JL 0x004ea674                       ; 004ea57f
        ;   XREF to: 004ea674 (CONDITIONAL_JUMP)  ; LAB_004ea674
    MOV EAX,[0x01d05270]                ; 004ea585 | DAT_01d05270
        ;   Label: LAB_004ea585
    MOV EDX,dword ptr [EAX*0x4 + 0x1d0533c] ; 004ea58a
    MOV dword ptr [0x01c38b78],EDX      ; 004ea591 | DAT_01c38b78
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05364] ; 004ea597
    MOV dword ptr [0x01c38b7c],EDX      ; 004ea59e | DAT_01c38b7c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d0538c] ; 004ea5a4
    MOV dword ptr [0x01c38b80],EDX      ; 004ea5ab | DAT_01c38b80
    MOV EDX,dword ptr [EAX*0x4 + 0x1d053b4] ; 004ea5b1
    MOV dword ptr [0x01c38b84],EDX      ; 004ea5b8 | DAT_01c38b84
    MOV EDX,dword ptr [EAX*0x4 + 0x1d053dc] ; 004ea5be
    MOV dword ptr [0x01c38b88],EDX      ; 004ea5c5 | DAT_01c38b88
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05404] ; 004ea5cb
    MOV dword ptr [0x01c38b8c],EDX      ; 004ea5d2 | DAT_01c38b8c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d0542c] ; 004ea5d8
    MOV dword ptr [0x01c38b90],EDX      ; 004ea5df | DAT_01c38b90
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05454] ; 004ea5e5
    MOV dword ptr [0x01c38b94],EDX      ; 004ea5ec | DAT_01c38b94
    MOV EDX,dword ptr [EAX*0x4 + 0x1d0547c] ; 004ea5f2
    MOV dword ptr [0x01c38b98],EDX      ; 004ea5f9 | DAT_01c38b98
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05274] ; 004ea5ff
    MOV dword ptr [0x01c35e38],EDX      ; 004ea606 | DAT_01c35e38
    MOV EDX,dword ptr [EAX*0x4 + 0x1d0529c] ; 004ea60c
    MOV dword ptr [0x01c35e3c],EDX      ; 004ea613 | DAT_01c35e3c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d052c4] ; 004ea619
    MOV dword ptr [0x01c35e40],EDX      ; 004ea620 | DAT_01c35e40
    MOV EDX,dword ptr [EAX*0x4 + 0x1d052ec] ; 004ea626
    MOV dword ptr [0x01c35e44],EDX      ; 004ea62d | DAT_01c35e44
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05314] ; 004ea633
    MOV dword ptr [0x006141e4],EDX      ; 004ea63a | DAT_006141e4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d054a4] ; 004ea640
    MOV dword ptr [0x01c35e48],EDX      ; 004ea647 | DAT_01c35e48
    MOV EDX,dword ptr [EAX*0x4 + 0x1d054cc] ; 004ea64d
    MOV dword ptr [0x01c35e50],EDX      ; 004ea654 | DAT_01c35e50
    MOV EDX,dword ptr [EAX*0x4 + 0x1d054f4] ; 004ea65a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d0551c] ; 004ea661
    MOV dword ptr [0x01c35e4c],EDX      ; 004ea668 | DAT_01c35e4c
    MOV [0x01c35e54],EAX                ; 004ea66e | DAT_01c35e54
    RET                                 ; 004ea673
    PUSH ESI                            ; 004ea674
        ;   Label: LAB_004ea674
    PUSH EBX                            ; 004ea675
    MOV EBX,0x5dc89d                    ; 004ea676 | = "..\\engine\\matrix.c"
    MOV ESI,0x56c                       ; 004ea67b
    PUSH 0x5dc8b0                       ; 004ea680 | = "3D Window unbalance"
    MOV dword ptr [0x01d046a0],EBX      ; 004ea685 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004ea68b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ea691
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ea696
    POP EBX                             ; 004ea699
    POP ESI                             ; 004ea69a
    JMP 0x004ea585                      ; 004ea69b
        ;   XREF to: 004ea585 (UNCONDITIONAL_JUMP)  ; LAB_004ea585

