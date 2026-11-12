; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popViewport_FUN_004e6c50(void)
;
;
; XREF[2]:
;   engine_drender.cpp_popViewport_FUN_0046d320 at 0046d320
;   shape_edittool.cpp_FUN_0047fa80 at 00480152
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005c6fd9
;   TerminatedCString s_s_3D_Window_unbalance_005c6fec
;   undefined4 DAT_005fba44
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;   undefined4 DAT_01c6e2e4
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d728fc]      ; 004e6c50 | DAT_01d728fc
        ;   Label: engine_matrix.c_popViewport_FUN_004e6c50
    DEC EDX                             ; 004e6c56
    MOV dword ptr [0x01d728fc],EDX      ; 004e6c57 | DAT_01d728fc
    TEST EDX,EDX                        ; 004e6c5d
    JL 0x004e6d54                       ; 004e6c5f
        ;   XREF to: 004e6d54 (CONDITIONAL_JUMP)  ; LAB_004e6d54
    MOV EAX,[0x01d728fc]                ; 004e6c65 | DAT_01d728fc
        ;   Label: LAB_004e6c65
    MOV EDX,dword ptr [EAX*0x4 + 0x1d729c8] ; 004e6c6a
    MOV dword ptr [0x01c6e2d8],EDX      ; 004e6c71 | DAT_01c6e2d8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d729f0] ; 004e6c77
    MOV dword ptr [0x01c6e2dc],EDX      ; 004e6c7e | DAT_01c6e2dc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a18] ; 004e6c84
    MOV dword ptr [0x01c6e2e0],EDX      ; 004e6c8b | DAT_01c6e2e0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a40] ; 004e6c91
    MOV dword ptr [0x01c6e2e4],EDX      ; 004e6c98 | DAT_01c6e2e4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a68] ; 004e6c9e
    MOV dword ptr [0x01c6e2e8],EDX      ; 004e6ca5 | DAT_01c6e2e8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a90] ; 004e6cab
    MOV dword ptr [0x01c6e2ec],EDX      ; 004e6cb2 | DAT_01c6e2ec
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72ab8] ; 004e6cb8
    MOV dword ptr [0x01c6e2f0],EDX      ; 004e6cbf | DAT_01c6e2f0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72ae0] ; 004e6cc5
    MOV dword ptr [0x01c6e2f4],EDX      ; 004e6ccc | DAT_01c6e2f4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b08] ; 004e6cd2
    MOV dword ptr [0x01c6e2f8],EDX      ; 004e6cd9 | DAT_01c6e2f8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72900] ; 004e6cdf
    MOV dword ptr [0x01c6b598],EDX      ; 004e6ce6 | DAT_01c6b598
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72928] ; 004e6cec
    MOV dword ptr [0x01c6b59c],EDX      ; 004e6cf3 | DAT_01c6b59c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72950] ; 004e6cf9
    MOV dword ptr [0x01c6b5a0],EDX      ; 004e6d00 | DAT_01c6b5a0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72978] ; 004e6d06
    MOV dword ptr [0x01c6b5a4],EDX      ; 004e6d0d | DAT_01c6b5a4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d729a0] ; 004e6d13
    MOV dword ptr [0x005fba44],EDX      ; 004e6d1a | DAT_005fba44
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b30] ; 004e6d20
    MOV dword ptr [0x01c6b5a8],EDX      ; 004e6d27 | DAT_01c6b5a8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b58] ; 004e6d2d
    MOV dword ptr [0x01c6b5b0],EDX      ; 004e6d34 | DAT_01c6b5b0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b80] ; 004e6d3a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72ba8] ; 004e6d41
    MOV dword ptr [0x01c6b5ac],EDX      ; 004e6d48 | DAT_01c6b5ac
    MOV [0x01c6b5b4],EAX                ; 004e6d4e | DAT_01c6b5b4
    RET                                 ; 004e6d53
    PUSH ESI                            ; 004e6d54
        ;   Label: LAB_004e6d54
    PUSH EBX                            ; 004e6d55
    MOV EBX,0x5c6fd9                    ; 004e6d56 | = "..\\engine\\matrix.c"
    MOV ESI,0x56c                       ; 004e6d5b
    PUSH 0x5c6fec                       ; 004e6d60 | = "3D Window unbalance"
    MOV dword ptr [0x01d71de0],EBX      ; 004e6d65 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e6d6b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e6d71
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e6d76
    POP EBX                             ; 004e6d79
    POP ESI                             ; 004e6d7a
    JMP 0x004e6c65                      ; 004e6d7b
        ;   XREF to: 004e6c65 (UNCONDITIONAL_JUMP)  ; LAB_004e6c65

