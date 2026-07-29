; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_showFacetPartEditorHelp_FUN_00460ac0(void)
;
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460930
;
; Referenced Globals:
;   TerminatedCString s_Facet_Part_Editor_Keys_0061ba07
;   TerminatedCString s_Move_forward_0061ba1e
;   TerminatedCString s_Up_arrow_0061ba2b
;   TerminatedCString s_Move_backward_0061ba34
;   TerminatedCString s_Down_arrow_0061ba42
;   TerminatedCString s_Move_left_0061ba4d
;   TerminatedCString s_Left_arrow_0061ba57
;   TerminatedCString s_Move_right_0061ba62
;   TerminatedCString s_Right_arrow_0061ba6d
;   TerminatedCString s_Move_up_0061ba79
;   TerminatedCString s_Q_0061ba81
;   TerminatedCString s_Move_down_0061ba83
;   TerminatedCString s_A_0061ba8d
;   TerminatedCString s_Keypad_also_controls_mov_0061ba8f
;   TerminatedCString s_Rotate_0061baad
;   ... and 85 more
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460ac0
        ;   Label: shape_design.c_showFacetPartEditorHelp_FUN_00460ac0
    PUSH ESI                            ; 00460ac1
    PUSH EDI                            ; 00460ac2
    PUSH EBP                            ; 00460ac3
    MOV EBP,ESP                         ; 00460ac4
    SUB ESP,0xc                         ; 00460ac6
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00460acc
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00460ad1
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00460ad1
    MOV dword ptr [EBP + -0x8],0x78     ; 00460ad6
    MOV dword ptr [EBP + -0xc],0x0      ; 00460add
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460ae4
    PUSH EAX                            ; 00460ae8
    PUSH 0x0                            ; 00460ae9
    MOV EAX,0x61ba07                    ; 00460aeb | = "Facet/Part Editor Keys"
    PUSH EAX                            ; 00460af0 | = "Facet/Part Editor Keys"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460af1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460af6
    ADD dword ptr [EBP + -0xc],0x2      ; 00460af9
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460afd
    PUSH EAX                            ; 00460b01
    PUSH 0x0                            ; 00460b02
    MOV EAX,0x61ba1e                    ; 00460b04 | = "Move forward"
    PUSH EAX                            ; 00460b09 | = "Move forward"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b0a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460b0f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460b12
    INC dword ptr [EBP + -0xc]          ; 00460b15
    IMUL EAX,EAX,0xb                    ; 00460b18
    PUSH EAX                            ; 00460b1b
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460b1c
    PUSH EAX                            ; 00460b1f
    MOV EAX,0x61ba2b                    ; 00460b20 | = "Up arrow"
    PUSH EAX                            ; 00460b25 | = "Up arrow"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b26
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460b2b
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460b2e
    PUSH EAX                            ; 00460b32
    PUSH 0x0                            ; 00460b33
    MOV EAX,0x61ba34                    ; 00460b35 | = "Move backward"
    PUSH EAX                            ; 00460b3a | = "Move backward"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b3b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460b40
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460b43
    INC dword ptr [EBP + -0xc]          ; 00460b46
    IMUL EAX,EAX,0xb                    ; 00460b49
    PUSH EAX                            ; 00460b4c
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460b4d
    PUSH EAX                            ; 00460b50
    MOV EAX,0x61ba42                    ; 00460b51 | = "Down arrow"
    PUSH EAX                            ; 00460b56 | = "Down arrow"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b57
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460b5c
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460b5f
    PUSH EAX                            ; 00460b63
    PUSH 0x0                            ; 00460b64
    MOV EAX,0x61ba4d                    ; 00460b66 | = "Move left"
    PUSH EAX                            ; 00460b6b | = "Move left"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b6c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460b71
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460b74
    INC dword ptr [EBP + -0xc]          ; 00460b77
    IMUL EAX,EAX,0xb                    ; 00460b7a
    PUSH EAX                            ; 00460b7d
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460b7e
    PUSH EAX                            ; 00460b81
    MOV EAX,0x61ba57                    ; 00460b82 | = "Left arrow"
    PUSH EAX                            ; 00460b87 | = "Left arrow"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b88
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460b8d
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460b90
    PUSH EAX                            ; 00460b94
    PUSH 0x0                            ; 00460b95
    MOV EAX,0x61ba62                    ; 00460b97 | = "Move right"
    PUSH EAX                            ; 00460b9c | = "Move right"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460b9d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460ba2
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460ba5
    INC dword ptr [EBP + -0xc]          ; 00460ba8
    IMUL EAX,EAX,0xb                    ; 00460bab
    PUSH EAX                            ; 00460bae
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460baf
    PUSH EAX                            ; 00460bb2
    MOV EAX,0x61ba6d                    ; 00460bb3 | = "Right arrow"
    PUSH EAX                            ; 00460bb8 | = "Right arrow"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460bb9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460bbe
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460bc1
    PUSH EAX                            ; 00460bc5
    PUSH 0x0                            ; 00460bc6
    MOV EAX,0x61ba79                    ; 00460bc8 | = "Move up"
    PUSH EAX                            ; 00460bcd | = "Move up"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460bce
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460bd3
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460bd6
    INC dword ptr [EBP + -0xc]          ; 00460bd9
    IMUL EAX,EAX,0xb                    ; 00460bdc
    PUSH EAX                            ; 00460bdf
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460be0
    PUSH EAX                            ; 00460be3
    MOV EAX,0x61ba81                    ; 00460be4 | = "Q"
    PUSH EAX                            ; 00460be9 | = "Q"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460bea
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460bef
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460bf2
    PUSH EAX                            ; 00460bf6
    PUSH 0x0                            ; 00460bf7
    MOV EAX,0x61ba83                    ; 00460bf9 | = "Move down"
    PUSH EAX                            ; 00460bfe | = "Move down"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460bff
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460c04
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460c07
    INC dword ptr [EBP + -0xc]          ; 00460c0a
    IMUL EAX,EAX,0xb                    ; 00460c0d
    PUSH EAX                            ; 00460c10
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460c11
    PUSH EAX                            ; 00460c14
    MOV EAX,0x61ba8d                    ; 00460c15 | = "A"
    PUSH EAX                            ; 00460c1a | = "A"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460c1b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460c20
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460c23
    INC dword ptr [EBP + -0xc]          ; 00460c26
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460c29
    INC dword ptr [EBP + -0xc]          ; 00460c2c
    IMUL EAX,EAX,0xb                    ; 00460c2f
    PUSH EAX                            ; 00460c32
    PUSH 0x0                            ; 00460c33
    MOV EAX,0x61ba8f                    ; 00460c35 | = "Keypad also controls movement"
    PUSH EAX                            ; 00460c3a | = "Keypad also controls movement"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460c3b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460c40
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460c43
    INC dword ptr [EBP + -0xc]          ; 00460c46
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460c49
    PUSH EAX                            ; 00460c4d
    PUSH 0x0                            ; 00460c4e
    MOV EAX,0x61baad                    ; 00460c50 | = "Rotate"
    PUSH EAX                            ; 00460c55 | = "Rotate"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460c56
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460c5b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460c5e
    INC dword ptr [EBP + -0xc]          ; 00460c61
    IMUL EAX,EAX,0xb                    ; 00460c64
    PUSH EAX                            ; 00460c67
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460c68
    PUSH EAX                            ; 00460c6b
    MOV EAX,0x61bab4                    ; 00460c6c | = "Shift"
    PUSH EAX                            ; 00460c71 | = "Shift"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460c72
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460c77
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460c7a
    PUSH EAX                            ; 00460c7e
    PUSH 0x0                            ; 00460c7f
    MOV EAX,0x61baba                    ; 00460c81 | = "Slow"
    PUSH EAX                            ; 00460c86 | = "Slow"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460c87
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460c8c
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460c8f
    INC dword ptr [EBP + -0xc]          ; 00460c92
    IMUL EAX,EAX,0xb                    ; 00460c95
    PUSH EAX                            ; 00460c98
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460c99
    PUSH EAX                            ; 00460c9c
    MOV EAX,0x61babf                    ; 00460c9d | = "Alt"
    PUSH EAX                            ; 00460ca2 | = "Alt"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460ca3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460ca8
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460cab
    INC dword ptr [EBP + -0xc]          ; 00460cae
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460cb1
    PUSH EAX                            ; 00460cb5
    PUSH 0x0                            ; 00460cb6
    MOV EAX,0x61bac3                    ; 00460cb8 | = "Zoom in"
    PUSH EAX                            ; 00460cbd | = "Zoom in"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460cbe
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460cc3
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460cc6
    INC dword ptr [EBP + -0xc]          ; 00460cc9
    IMUL EAX,EAX,0xb                    ; 00460ccc
    PUSH EAX                            ; 00460ccf
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460cd0
    PUSH EAX                            ; 00460cd3
    MOV EAX,0x61bacb                    ; 00460cd4 | = "+"
    PUSH EAX                            ; 00460cd9 | = "+"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460cda
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460cdf
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460ce2
    PUSH EAX                            ; 00460ce6
    PUSH 0x0                            ; 00460ce7
    MOV EAX,0x61bacd                    ; 00460ce9 | = "Zoom out"
    PUSH EAX                            ; 00460cee | = "Zoom out"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460cef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460cf4
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460cf7
    INC dword ptr [EBP + -0xc]          ; 00460cfa
    IMUL EAX,EAX,0xb                    ; 00460cfd
    PUSH EAX                            ; 00460d00
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460d01
    PUSH EAX                            ; 00460d04
    MOV EAX,0x61bad6                    ; 00460d05 | = "-"
    PUSH EAX                            ; 00460d0a | = "-"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460d0b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460d10
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460d13
    INC dword ptr [EBP + -0xc]          ; 00460d16
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460d19
    PUSH EAX                            ; 00460d1d
    PUSH 0x0                            ; 00460d1e
    MOV EAX,0x61bad8                    ; 00460d20 | = "Reset view"
    PUSH EAX                            ; 00460d25 | = "Reset view"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460d26
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460d2b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460d2e
    INC dword ptr [EBP + -0xc]          ; 00460d31
    IMUL EAX,EAX,0xb                    ; 00460d34
    PUSH EAX                            ; 00460d37
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460d38
    PUSH EAX                            ; 00460d3b
    MOV EAX,0x61bae3                    ; 00460d3c | = "R"
    PUSH EAX                            ; 00460d41 | = "R"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460d42
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460d47
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460d4a
    PUSH EAX                            ; 00460d4e
    PUSH 0x0                            ; 00460d4f
    MOV EAX,0x61bae5                    ; 00460d51 | = "Snap to X-axis"
    PUSH EAX                            ; 00460d56 | = "Snap to X-axis"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460d57
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460d5c
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460d5f
    INC dword ptr [EBP + -0xc]          ; 00460d62
    IMUL EAX,EAX,0xb                    ; 00460d65
    PUSH EAX                            ; 00460d68
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460d69
    PUSH EAX                            ; 00460d6c
    MOV EAX,0x61baf4                    ; 00460d6d | = "X"
    PUSH EAX                            ; 00460d72 | = "X"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460d73
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460d78
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00460d7b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00460d80
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 00460d85
    MOV dword ptr [EBP + -0x4],EAX      ; 00460d8a
    CMP dword ptr [EBP + -0x4],0x1b     ; 00460d8d
    JNZ 0x00460d98                      ; 00460d91
        ;   XREF to: 00460d98 (CONDITIONAL_JUMP)  ; LAB_00460d98
    JMP 0x0046154e                      ; 00460d93
        ;   XREF to: 0046154e (UNCONDITIONAL_JUMP)  ; LAB_0046154e
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00460d98
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00460d98
    MOV dword ptr [EBP + -0xc],0x0      ; 00460d9d
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460da4
    PUSH EAX                            ; 00460da8
    PUSH 0x0                            ; 00460da9
    MOV EAX,0x61baf6                    ; 00460dab | = "Facet/Part Editor Keys"
    PUSH EAX                            ; 00460db0 | = "Facet/Part Editor Keys"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460db1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460db6
    ADD dword ptr [EBP + -0xc],0x2      ; 00460db9
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460dbd
    PUSH EAX                            ; 00460dc1
    PUSH 0x0                            ; 00460dc2
    MOV EAX,0x61bb0d                    ; 00460dc4 | = "Load model"
    PUSH EAX                            ; 00460dc9 | = "Load model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460dca
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460dcf
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460dd2
    INC dword ptr [EBP + -0xc]          ; 00460dd5
    IMUL EAX,EAX,0xb                    ; 00460dd8
    PUSH EAX                            ; 00460ddb
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460ddc
    PUSH EAX                            ; 00460ddf
    MOV EAX,0x61bb18                    ; 00460de0 | = "Ctrl + L"
    PUSH EAX                            ; 00460de5 | = "Ctrl + L"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460de6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460deb
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460dee
    PUSH EAX                            ; 00460df2
    PUSH 0x0                            ; 00460df3
    MOV EAX,0x61bb21                    ; 00460df5 | = "Save model (.MDL)"
    PUSH EAX                            ; 00460dfa | = "Save model (.MDL)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460dfb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e00
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460e03
    INC dword ptr [EBP + -0xc]          ; 00460e06
    IMUL EAX,EAX,0xb                    ; 00460e09
    PUSH EAX                            ; 00460e0c
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460e0d
    PUSH EAX                            ; 00460e10
    MOV EAX,0x61bb33                    ; 00460e11 | = "Ctrl + S"
    PUSH EAX                            ; 00460e16 | = "Ctrl + S"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460e17
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e1c
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460e1f
    PUSH EAX                            ; 00460e23
    PUSH 0x0                            ; 00460e24
    MOV EAX,0x61bb3c                    ; 00460e26 | = "Save model (.BIN)"
    PUSH EAX                            ; 00460e2b | = "Save model (.BIN)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460e2c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e31
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460e34
    INC dword ptr [EBP + -0xc]          ; 00460e37
    IMUL EAX,EAX,0xb                    ; 00460e3a
    PUSH EAX                            ; 00460e3d
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460e3e
    PUSH EAX                            ; 00460e41
    MOV EAX,0x61bb4e                    ; 00460e42 | = "Ctrl + B"
    PUSH EAX                            ; 00460e47 | = "Ctrl + B"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460e48
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e4d
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460e50
    PUSH EAX                            ; 00460e54
    PUSH 0x0                            ; 00460e55
    MOV EAX,0x61bb57                    ; 00460e57 | = "Save model (.ASM)"
    PUSH EAX                            ; 00460e5c | = "Save model (.ASM)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460e5d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e62
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460e65
    INC dword ptr [EBP + -0xc]          ; 00460e68
    IMUL EAX,EAX,0xb                    ; 00460e6b
    PUSH EAX                            ; 00460e6e
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460e6f
    PUSH EAX                            ; 00460e72
    MOV EAX,0x61bb69                    ; 00460e73 | = "Ctrl + W"
    PUSH EAX                            ; 00460e78 | = "Ctrl + W"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460e79
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e7e
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460e81
    INC dword ptr [EBP + -0xc]          ; 00460e84
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460e87
    PUSH EAX                            ; 00460e8b
    PUSH 0x0                            ; 00460e8c
    MOV EAX,0x61bb72                    ; 00460e8e | = "Load palette"
    PUSH EAX                            ; 00460e93 | = "Load palette"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460e94
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460e99
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460e9c
    INC dword ptr [EBP + -0xc]          ; 00460e9f
    IMUL EAX,EAX,0xb                    ; 00460ea2
    PUSH EAX                            ; 00460ea5
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460ea6
    PUSH EAX                            ; 00460ea9
    MOV EAX,0x61bb7f                    ; 00460eaa | = "Ctrl + P"
    PUSH EAX                            ; 00460eaf | = "Ctrl + P"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460eb0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460eb5
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460eb8
    INC dword ptr [EBP + -0xc]          ; 00460ebb
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460ebe
    PUSH EAX                            ; 00460ec2
    PUSH 0x0                            ; 00460ec3
    MOV EAX,0x61bb88                    ; 00460ec5 | = "Select renderer"
    PUSH EAX                            ; 00460eca | = "Select renderer"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460ecb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460ed0
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460ed3
    INC dword ptr [EBP + -0xc]          ; 00460ed6
    IMUL EAX,EAX,0xb                    ; 00460ed9
    PUSH EAX                            ; 00460edc
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460edd
    PUSH EAX                            ; 00460ee0
    MOV EAX,0x61bb98                    ; 00460ee1 | = "Ctrl + R"
    PUSH EAX                            ; 00460ee6 | = "Ctrl + R"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460ee7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460eec
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460eef
    INC dword ptr [EBP + -0xc]          ; 00460ef2
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460ef5
    PUSH EAX                            ; 00460ef9
    PUSH 0x0                            ; 00460efa
    MOV EAX,0x61bba1                    ; 00460efc | = "Adjust 64x64 filter"
    PUSH EAX                            ; 00460f01 | = "Adjust 64x64 filter"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f02
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460f07
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460f0a
    INC dword ptr [EBP + -0xc]          ; 00460f0d
    IMUL EAX,EAX,0xb                    ; 00460f10
    PUSH EAX                            ; 00460f13
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460f14
    PUSH EAX                            ; 00460f17
    MOV EAX,0x61bbb5                    ; 00460f18 | = "Ctrl + A"
    PUSH EAX                            ; 00460f1d | = "Ctrl + A"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f1e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460f23
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460f26
    INC dword ptr [EBP + -0xc]          ; 00460f29
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460f2c
    PUSH EAX                            ; 00460f30
    PUSH 0x0                            ; 00460f31
    MOV EAX,0x61bbbe                    ; 00460f33 | = "Change background color"
    PUSH EAX                            ; 00460f38 | = "Change background color"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f39
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460f3e
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460f41
    INC dword ptr [EBP + -0xc]          ; 00460f44
    IMUL EAX,EAX,0xb                    ; 00460f47
    PUSH EAX                            ; 00460f4a
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460f4b
    PUSH EAX                            ; 00460f4e
    MOV EAX,0x61bbd6                    ; 00460f4f | = "Ctrl + C"
    PUSH EAX                            ; 00460f54 | = "Ctrl + C"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f55
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460f5a
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460f5d
    PUSH EAX                            ; 00460f61
    PUSH 0x0                            ; 00460f62
    MOV EAX,0x61bbdf                    ; 00460f64 | = "Change missing tex color"
    PUSH EAX                            ; 00460f69 | = "Change missing tex color"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f6a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460f6f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460f72
    INC dword ptr [EBP + -0xc]          ; 00460f75
    IMUL EAX,EAX,0xb                    ; 00460f78
    PUSH EAX                            ; 00460f7b
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460f7c
    PUSH EAX                            ; 00460f7f
    MOV EAX,0x61bbf8                    ; 00460f80 | = "Ctrl + T"
    PUSH EAX                            ; 00460f85 | = "Ctrl + T"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f86
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460f8b
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460f8e
    PUSH EAX                            ; 00460f92
    PUSH 0x0                            ; 00460f93
    MOV EAX,0x61bc01                    ; 00460f95 | = "Change outline color"
    PUSH EAX                            ; 00460f9a | = "Change outline color"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460f9b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460fa0
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460fa3
    INC dword ptr [EBP + -0xc]          ; 00460fa6
    IMUL EAX,EAX,0xb                    ; 00460fa9
    PUSH EAX                            ; 00460fac
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460fad
    PUSH EAX                            ; 00460fb0
    MOV EAX,0x61bc16                    ; 00460fb1 | = "Ctrl + O"
    PUSH EAX                            ; 00460fb6 | = "Ctrl + O"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460fb7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460fbc
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460fbf
    INC dword ptr [EBP + -0xc]          ; 00460fc2
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460fc5
    PUSH EAX                            ; 00460fc9
    PUSH 0x0                            ; 00460fca
    MOV EAX,0x61bc1f                    ; 00460fcc | = "Mouse polygon selection"
    PUSH EAX                            ; 00460fd1 | = "Mouse polygon selection"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460fd2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460fd7
    MOV EAX,dword ptr [EBP + -0xc]      ; 00460fda
    INC dword ptr [EBP + -0xc]          ; 00460fdd
    IMUL EAX,EAX,0xb                    ; 00460fe0
    PUSH EAX                            ; 00460fe3
    MOV EAX,dword ptr [EBP + -0x8]      ; 00460fe4
    PUSH EAX                            ; 00460fe7
    MOV EAX,0x61bc37                    ; 00460fe8 | = "Shift + M"
    PUSH EAX                            ; 00460fed | = "Shift + M"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00460fee
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460ff3
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00460ff6
    PUSH EAX                            ; 00460ffa
    PUSH 0x0                            ; 00460ffb
    MOV EAX,0x61bc41                    ; 00460ffd | = "Wheel polygon reducer"
    PUSH EAX                            ; 00461002 | = "Wheel polygon reducer"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461003
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461008
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046100b
    INC dword ptr [EBP + -0xc]          ; 0046100e
    IMUL EAX,EAX,0xb                    ; 00461011
    PUSH EAX                            ; 00461014
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461015
    PUSH EAX                            ; 00461018
    MOV EAX,0x61bc57                    ; 00461019 | = "Shift + W"
    PUSH EAX                            ; 0046101e | = "Shift + W"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046101f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461024
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461027
    INC dword ptr [EBP + -0xc]          ; 0046102a
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046102d
    PUSH EAX                            ; 00461031
    PUSH 0x0                            ; 00461032
    MOV EAX,0x61bc61                    ; 00461034 | = "Antialias lines"
    PUSH EAX                            ; 00461039 | = "Antialias lines"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046103a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046103f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461042
    INC dword ptr [EBP + -0xc]          ; 00461045
    IMUL EAX,EAX,0xb                    ; 00461048
    PUSH EAX                            ; 0046104b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046104c
    PUSH EAX                            ; 0046104f
    MOV EAX,0x61bc71                    ; 00461050 | = "Shift + A"
    PUSH EAX                            ; 00461055 | = "Shift + A"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461056
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046105b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046105e
    INC dword ptr [EBP + -0xc]          ; 00461061
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461064
    PUSH EAX                            ; 00461068
    PUSH 0x0                            ; 00461069
    MOV EAX,0x61bc7b                    ; 0046106b | = "Bias model"
    PUSH EAX                            ; 00461070 | = "Bias model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461071
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461076
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461079
    INC dword ptr [EBP + -0xc]          ; 0046107c
    IMUL EAX,EAX,0xb                    ; 0046107f
    PUSH EAX                            ; 00461082
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461083
    PUSH EAX                            ; 00461086
    MOV EAX,0x61bc86                    ; 00461087 | = "Shift + B"
    PUSH EAX                            ; 0046108c | = "Shift + B"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046108d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461092
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461095
    INC dword ptr [EBP + -0xc]          ; 00461098
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046109b
    PUSH EAX                            ; 0046109f
    PUSH 0x0                            ; 004610a0
    MOV EAX,0x61bc90                    ; 004610a2 | = "Translate model"
    PUSH EAX                            ; 004610a7 | = "Translate model"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004610a8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004610ad
    MOV EAX,dword ptr [EBP + -0xc]      ; 004610b0
    INC dword ptr [EBP + -0xc]          ; 004610b3
    IMUL EAX,EAX,0xb                    ; 004610b6
    PUSH EAX                            ; 004610b9
    MOV EAX,dword ptr [EBP + -0x8]      ; 004610ba
    PUSH EAX                            ; 004610bd
    MOV EAX,0x61bca0                    ; 004610be | = "Shift + T"
    PUSH EAX                            ; 004610c3 | = "Shift + T"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004610c4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004610c9
    MOV EAX,dword ptr [EBP + -0xc]      ; 004610cc
    INC dword ptr [EBP + -0xc]          ; 004610cf
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004610d2
    PUSH EAX                            ; 004610d6
    PUSH 0x0                            ; 004610d7
    MOV EAX,0x61bcaa                    ; 004610d9 | = "Toggle field of view"
    PUSH EAX                            ; 004610de | = "Toggle field of view"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004610df
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004610e4
    MOV EAX,dword ptr [EBP + -0xc]      ; 004610e7
    INC dword ptr [EBP + -0xc]          ; 004610ea
    IMUL EAX,EAX,0xb                    ; 004610ed
    PUSH EAX                            ; 004610f0
    MOV EAX,dword ptr [EBP + -0x8]      ; 004610f1
    PUSH EAX                            ; 004610f4
    MOV EAX,0x61bcbf                    ; 004610f5 | = "Shift + F"
    PUSH EAX                            ; 004610fa | = "Shift + F"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004610fb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461100
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461103
    INC dword ptr [EBP + -0xc]          ; 00461106
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461109
    PUSH EAX                            ; 0046110d
    PUSH 0x0                            ; 0046110e
    MOV EAX,0x61bcc9                    ; 00461110 | = "Display UV coordinates"
    PUSH EAX                            ; 00461115 | = "Display UV coordinates"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461116
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046111b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046111e
    INC dword ptr [EBP + -0xc]          ; 00461121
    IMUL EAX,EAX,0xb                    ; 00461124
    PUSH EAX                            ; 00461127
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461128
    PUSH EAX                            ; 0046112b
    MOV EAX,0x61bce0                    ; 0046112c | = "Shift + U"
    PUSH EAX                            ; 00461131 | = "Shift + U"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461132
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461137
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046113a
    PUSH EAX                            ; 0046113e
    PUSH 0x0                            ; 0046113f
    MOV EAX,0x61bcea                    ; 00461141 | = "Display vertex info"
    PUSH EAX                            ; 00461146 | = "Display vertex info"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461147
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046114c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046114f
    INC dword ptr [EBP + -0xc]          ; 00461152
    IMUL EAX,EAX,0xb                    ; 00461155
    PUSH EAX                            ; 00461158
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461159
    PUSH EAX                            ; 0046115c
    MOV EAX,0x61bcfe                    ; 0046115d | = "Shift + I"
    PUSH EAX                            ; 00461162 | = "Shift + I"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461163
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461168
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046116b
    PUSH EAX                            ; 0046116f
    PUSH 0x0                            ; 00461170
    MOV EAX,0x61bd08                    ; 00461172 | = "Display parts list"
    PUSH EAX                            ; 00461177 | = "Display parts list"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461178
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046117d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461180
    INC dword ptr [EBP + -0xc]          ; 00461183
    IMUL EAX,EAX,0xb                    ; 00461186
    PUSH EAX                            ; 00461189
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046118a
    PUSH EAX                            ; 0046118d
    MOV EAX,0x61bd1b                    ; 0046118e | = "Shift + L"
    PUSH EAX                            ; 00461193 | = "Shift + L"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461194
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461199
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046119c
    PUSH EAX                            ; 004611a0
    PUSH 0x0                            ; 004611a1
    MOV EAX,0x61bd25                    ; 004611a3 | = "Display palette"
    PUSH EAX                            ; 004611a8 | = "Display palette"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004611a9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004611ae
    MOV EAX,dword ptr [EBP + -0xc]      ; 004611b1
    INC dword ptr [EBP + -0xc]          ; 004611b4
    IMUL EAX,EAX,0xb                    ; 004611b7
    PUSH EAX                            ; 004611ba
    MOV EAX,dword ptr [EBP + -0x8]      ; 004611bb
    PUSH EAX                            ; 004611be
    MOV EAX,0x61bd35                    ; 004611bf | = "Shift + P"
    PUSH EAX                            ; 004611c4 | = "Shift + P"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004611c5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004611ca
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004611cd
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004611d2
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 004611d7
    MOV dword ptr [EBP + -0x4],EAX      ; 004611dc
    CMP dword ptr [EBP + -0x4],0x1b     ; 004611df
    JNZ 0x004611ea                      ; 004611e3
        ;   XREF to: 004611ea (CONDITIONAL_JUMP)  ; LAB_004611ea
    JMP 0x0046154e                      ; 004611e5
        ;   XREF to: 0046154e (UNCONDITIONAL_JUMP)  ; LAB_0046154e
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 004611ea
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_004611ea
    MOV dword ptr [EBP + -0xc],0x0      ; 004611ef
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004611f6
    PUSH EAX                            ; 004611fa
    PUSH 0x0                            ; 004611fb
    MOV EAX,0x61bd3f                    ; 004611fd | = "Facet/Part Editor Keys"
    PUSH EAX                            ; 00461202 | = "Facet/Part Editor Keys"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461203
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461208
    ADD dword ptr [EBP + -0xc],0x2      ; 0046120b
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046120f
    PUSH EAX                            ; 00461213
    PUSH 0x0                            ; 00461214
    MOV EAX,0x61bd56                    ; 00461216 | = "Select polygon"
    PUSH EAX                            ; 0046121b | = "Select polygon"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046121c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461221
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461224
    INC dword ptr [EBP + -0xc]          ; 00461227
    IMUL EAX,EAX,0xb                    ; 0046122a
    PUSH EAX                            ; 0046122d
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046122e
    PUSH EAX                            ; 00461231
    MOV EAX,0x61bd65                    ; 00461232 | = ".   (Ctrl + . to reverse)"
    PUSH EAX                            ; 00461237 | = ".   (Ctrl + . to reverse)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461238
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046123d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461240
    INC dword ptr [EBP + -0xc]          ; 00461243
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461246
    PUSH EAX                            ; 0046124a
    PUSH 0x0                            ; 0046124b
    MOV EAX,0x61bd7f                    ; 0046124d | = "Create box"
    PUSH EAX                            ; 00461252 | = "Create box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461253
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461258
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046125b
    INC dword ptr [EBP + -0xc]          ; 0046125e
    IMUL EAX,EAX,0xb                    ; 00461261
    PUSH EAX                            ; 00461264
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461265
    PUSH EAX                            ; 00461268
    MOV EAX,0x61bd8a                    ; 00461269 | = "B"
    PUSH EAX                            ; 0046126e | = "B"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046126f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461274
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461277
    PUSH EAX                            ; 0046127b
    PUSH 0x0                            ; 0046127c
    MOV EAX,0x61bd8c                    ; 0046127e | = "Change facet color"
    PUSH EAX                            ; 00461283 | = "Change facet color"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461284
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461289
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046128c
    INC dword ptr [EBP + -0xc]          ; 0046128f
    IMUL EAX,EAX,0xb                    ; 00461292
    PUSH EAX                            ; 00461295
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461296
    PUSH EAX                            ; 00461299
    MOV EAX,0x61bd9f                    ; 0046129a | = "C"
    PUSH EAX                            ; 0046129f | = "C"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004612a0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004612a5
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004612a8
    PUSH EAX                            ; 004612ac
    PUSH 0x0                            ; 004612ad
    MOV EAX,0x61bda1                    ; 004612af | = "Delete polygon"
    PUSH EAX                            ; 004612b4 | = "Delete polygon"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004612b5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004612ba
    MOV EAX,dword ptr [EBP + -0xc]      ; 004612bd
    INC dword ptr [EBP + -0xc]          ; 004612c0
    IMUL EAX,EAX,0xb                    ; 004612c3
    PUSH EAX                            ; 004612c6
    MOV EAX,dword ptr [EBP + -0x8]      ; 004612c7
    PUSH EAX                            ; 004612ca
    MOV EAX,0x61bdb0                    ; 004612cb | = "D   (Ctrl + D for range)"
    PUSH EAX                            ; 004612d0 | = "D   (Ctrl + D for range)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004612d1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004612d6
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004612d9
    PUSH EAX                            ; 004612dd
    PUSH 0x0                            ; 004612de
    MOV EAX,0x61bdc9                    ; 004612e0 | = "New facet"
    PUSH EAX                            ; 004612e5 | = "New facet"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004612e6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004612eb
    MOV EAX,dword ptr [EBP + -0xc]      ; 004612ee
    INC dword ptr [EBP + -0xc]          ; 004612f1
    IMUL EAX,EAX,0xb                    ; 004612f4
    PUSH EAX                            ; 004612f7
    MOV EAX,dword ptr [EBP + -0x8]      ; 004612f8
    PUSH EAX                            ; 004612fb
    MOV EAX,0x61bdd3                    ; 004612fc | = "F"
    PUSH EAX                            ; 00461301 | = "F"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461302
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461307
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046130a
    PUSH EAX                            ; 0046130e
    PUSH 0x0                            ; 0046130f
    MOV EAX,0x61bdd5                    ; 00461311 | = "Gouraud shade"
    PUSH EAX                            ; 00461316 | = "Gouraud shade"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461317
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046131c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046131f
    INC dword ptr [EBP + -0xc]          ; 00461322
    IMUL EAX,EAX,0xb                    ; 00461325
    PUSH EAX                            ; 00461328
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461329
    PUSH EAX                            ; 0046132c
    MOV EAX,0x61bde3                    ; 0046132d | = "G"
    PUSH EAX                            ; 00461332 | = "G"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461333
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461338
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046133b
    PUSH EAX                            ; 0046133f
    PUSH 0x0                            ; 00461340
    MOV EAX,0x61bde5                    ; 00461342 | = "Display polygon list"
    PUSH EAX                            ; 00461347 | = "Display polygon list"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461348
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046134d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461350
    INC dword ptr [EBP + -0xc]          ; 00461353
    IMUL EAX,EAX,0xb                    ; 00461356
    PUSH EAX                            ; 00461359
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046135a
    PUSH EAX                            ; 0046135d
    MOV EAX,0x61bdfa                    ; 0046135e | = "L"
    PUSH EAX                            ; 00461363 | = "L"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461364
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461369
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046136c
    PUSH EAX                            ; 00461370
    PUSH 0x0                            ; 00461371
    MOV EAX,0x61bdfc                    ; 00461373 | = "New facet (other side)"
    PUSH EAX                            ; 00461378 | = "New facet (other side)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461379
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046137e
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461381
    INC dword ptr [EBP + -0xc]          ; 00461384
    IMUL EAX,EAX,0xb                    ; 00461387
    PUSH EAX                            ; 0046138a
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046138b
    PUSH EAX                            ; 0046138e
    MOV EAX,0x61be13                    ; 0046138f | = "N"
    PUSH EAX                            ; 00461394 | = "N"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461395
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046139a
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 0046139d
    PUSH EAX                            ; 004613a1
    PUSH 0x0                            ; 004613a2
    MOV EAX,0x61be15                    ; 004613a4 | = "Get part name"
    PUSH EAX                            ; 004613a9 | = "Get part name"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004613aa
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004613af
    MOV EAX,dword ptr [EBP + -0xc]      ; 004613b2
    INC dword ptr [EBP + -0xc]          ; 004613b5
    IMUL EAX,EAX,0xb                    ; 004613b8
    PUSH EAX                            ; 004613bb
    MOV EAX,dword ptr [EBP + -0x8]      ; 004613bc
    PUSH EAX                            ; 004613bf
    MOV EAX,0x61be23                    ; 004613c0 | = "P"
    PUSH EAX                            ; 004613c5 | = "P"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004613c6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004613cb
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004613ce
    PUSH EAX                            ; 004613d2
    PUSH 0x0                            ; 004613d3
    MOV EAX,0x61be25                    ; 004613d5 | = "Texture map polygon"
    PUSH EAX                            ; 004613da | = "Texture map polygon"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004613db
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004613e0
    MOV EAX,dword ptr [EBP + -0xc]      ; 004613e3
    INC dword ptr [EBP + -0xc]          ; 004613e6
    IMUL EAX,EAX,0xb                    ; 004613e9
    PUSH EAX                            ; 004613ec
    MOV EAX,dword ptr [EBP + -0x8]      ; 004613ed
    PUSH EAX                            ; 004613f0
    MOV EAX,0x61be39                    ; 004613f1 | = "T"
    PUSH EAX                            ; 004613f6 | = "T"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004613f7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004613fc
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004613ff
    PUSH EAX                            ; 00461403
    PUSH 0x0                            ; 00461404
    MOV EAX,0x61be3b                    ; 00461406 | = "Update selected polygon"
    PUSH EAX                            ; 0046140b | = "Update selected polygon"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046140c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461411
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461414
    INC dword ptr [EBP + -0xc]          ; 00461417
    IMUL EAX,EAX,0xb                    ; 0046141a
    PUSH EAX                            ; 0046141d
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046141e
    PUSH EAX                            ; 00461421
    MOV EAX,0x61be53                    ; 00461422 | = "U"
    PUSH EAX                            ; 00461427 | = "U"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461428
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046142d
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461430
    PUSH EAX                            ; 00461434
    PUSH 0x0                            ; 00461435
    MOV EAX,0x61be55                    ; 00461437 | = "Display vertices"
    PUSH EAX                            ; 0046143c | = "Display vertices"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046143d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461442
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461445
    INC dword ptr [EBP + -0xc]          ; 00461448
    IMUL EAX,EAX,0xb                    ; 0046144b
    PUSH EAX                            ; 0046144e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046144f
    PUSH EAX                            ; 00461452
    MOV EAX,0x61be66                    ; 00461453 | = "V   (Ctrl + V for selected polygon only)"
    PUSH EAX                            ; 00461458 | = "V   (Ctrl + V for selected polygon only)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461459
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046145e
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461461
    PUSH EAX                            ; 00461465
    PUSH 0x0                            ; 00461466
    MOV EAX,0x61be8f                    ; 00461468 | = "Z-buffer"
    PUSH EAX                            ; 0046146d | = "Z-buffer"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046146e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461473
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461476
    INC dword ptr [EBP + -0xc]          ; 00461479
    IMUL EAX,EAX,0xb                    ; 0046147c
    PUSH EAX                            ; 0046147f
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461480
    PUSH EAX                            ; 00461483
    MOV EAX,0x61be98                    ; 00461484 | = "Z"
    PUSH EAX                            ; 00461489 | = "Z"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046148a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046148f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461492
    INC dword ptr [EBP + -0xc]          ; 00461495
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461498
    PUSH EAX                            ; 0046149c
    PUSH 0x0                            ; 0046149d
    MOV EAX,0x61be9a                    ; 0046149f | = "Show part only"
    PUSH EAX                            ; 004614a4 | = "Show part only"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004614a5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004614aa
    MOV EAX,dword ptr [EBP + -0xc]      ; 004614ad
    INC dword ptr [EBP + -0xc]          ; 004614b0
    IMUL EAX,EAX,0xb                    ; 004614b3
    PUSH EAX                            ; 004614b6
    MOV EAX,dword ptr [EBP + -0x8]      ; 004614b7
    PUSH EAX                            ; 004614ba
    MOV EAX,0x61bea9                    ; 004614bb | = "F10"
    PUSH EAX                            ; 004614c0 | = "F10"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004614c1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004614c6
    MOV EAX,dword ptr [EBP + -0xc]      ; 004614c9
    INC dword ptr [EBP + -0xc]          ; 004614cc
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 004614cf
    PUSH EAX                            ; 004614d3
    PUSH 0x0                            ; 004614d4
    MOV EAX,0x61bead                    ; 004614d6 | = "Increment detail level"
    PUSH EAX                            ; 004614db | = "Increment detail level"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004614dc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004614e1
    MOV EAX,dword ptr [EBP + -0xc]      ; 004614e4
    INC dword ptr [EBP + -0xc]          ; 004614e7
    IMUL EAX,EAX,0xb                    ; 004614ea
    PUSH EAX                            ; 004614ed
    MOV EAX,dword ptr [EBP + -0x8]      ; 004614ee
    PUSH EAX                            ; 004614f1
    MOV EAX,0x61bec4                    ; 004614f2 | = "Keypad +"
    PUSH EAX                            ; 004614f7 | = "Keypad +"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004614f8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004614fd
    IMUL EAX,dword ptr [EBP + -0xc],0xb ; 00461500
    PUSH EAX                            ; 00461504
    PUSH 0x0                            ; 00461505
    MOV EAX,0x61becd                    ; 00461507 | = "Decrement detail level"
    PUSH EAX                            ; 0046150c | = "Decrement detail level"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046150d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00461512
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461515
    INC dword ptr [EBP + -0xc]          ; 00461518
    IMUL EAX,EAX,0xb                    ; 0046151b
    PUSH EAX                            ; 0046151e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046151f
    PUSH EAX                            ; 00461522
    MOV EAX,0x61bee4                    ; 00461523 | = "Keypad -"
    PUSH EAX                            ; 00461528 | = "Keypad -"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00461529
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046152e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00461531
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00461536
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0046153b
    MOV dword ptr [EBP + -0x4],EAX      ; 00461540
    CMP dword ptr [EBP + -0x4],0x1b     ; 00461543
    JZ 0x0046154e                       ; 00461547
        ;   XREF to: 0046154e (CONDITIONAL_JUMP)  ; LAB_0046154e
    JMP 0x00460ad1                      ; 00461549
        ;   XREF to: 00460ad1 (UNCONDITIONAL_JUMP)  ; LAB_00460ad1
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046154e
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0046154e
    MOV ESP,EBP                         ; 00461553
    POP EBP                             ; 00461555
    POP EDI                             ; 00461556
    POP ESI                             ; 00461557
    POP EBX                             ; 00461558
    RET                                 ; 00461559

