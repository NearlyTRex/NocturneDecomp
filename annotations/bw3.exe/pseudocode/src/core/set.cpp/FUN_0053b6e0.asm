; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_set_cpp_FUN_0053b6e0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bdca8
;
; Referenced Globals:
;   undefined4 s_Set_state_version_005d08a6+1
;   undefined4 DAT_005d08bd
;   TerminatedCString s_Camera_count_enabled_lis_005d08c1
;   undefined4 DAT_005d08e0
;   undefined4 DAT_005d08e4
;   TerminatedCString s_Camera_ambient_light_005d08e8
;   undefined4 DAT_005d0901
;   TerminatedCString s_Camera_groups_005d0905
;   undefined4 DAT_005d0917
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b6e0
        ;   Label: core_set.cpp_FUN_0053b6e0
    PUSH ESI                            ; 0053b6e1
    PUSH EDI                            ; 0053b6e2
    PUSH EBP                            ; 0053b6e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053b6e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053b6e8
    PUSH 0x5d08a7                       ; 0053b6ec | s_Set_state_version_005d08a6+1
    PUSH ESI                            ; 0053b6f1
    CALL crt_unknown.c_FUN_005a3140     ; 0053b6f2
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0053b6f7
    PUSH 0x3                            ; 0053b6fa
    PUSH 0x5d08bd                       ; 0053b6fc | DAT_005d08bd
    PUSH ESI                            ; 0053b701
    CALL crt_unknown.c_FUN_005a3140     ; 0053b702
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0053b707
    PUSH 0x5d08c1                       ; 0053b70a | = "// Camera count, enabled list\n"
    PUSH ESI                            ; 0053b70f
    CALL crt_unknown.c_FUN_005a3140     ; 0053b710
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 0053b715
    MOV EDX,dword ptr [EBX]             ; 0053b718
    PUSH EDX                            ; 0053b71a
    PUSH 0x5d08e0                       ; 0053b71b | DAT_005d08e0
    PUSH ESI                            ; 0053b720
    XOR EBP,EBP                         ; 0053b721
    CALL crt_unknown.c_FUN_005a3140     ; 0053b723
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX]             ; 0053b728
    ADD ESP,0xc                         ; 0053b72a
    TEST ECX,ECX                        ; 0053b72d
    JLE 0x0053b760                      ; 0053b72f
        ;   XREF to: 0053b760 (CONDITIONAL_JUMP)  ; LAB_0053b760
    MOV EDI,EBX                         ; 0053b731
    MOV EAX,dword ptr [EDI + 0x1a4]     ; 0053b733
        ;   Label: LAB_0053b733
    PUSH EAX                            ; 0053b739
    PUSH 0x5d08e4                       ; 0053b73a | DAT_005d08e4
    PUSH ESI                            ; 0053b73f
    ADD EDI,0x1a4                       ; 0053b740
    INC EBP                             ; 0053b746
    CALL crt_unknown.c_FUN_005a3140     ; 0053b747
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBX]             ; 0053b74c
    ADD ESP,0xc                         ; 0053b74e
    CMP EBP,EDX                         ; 0053b751
    JL 0x0053b733                       ; 0053b753
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    LEA EAX,[EAX]                       ; 0053b755
    LEA EDX,[EDX]                       ; 0053b75b
    MOV EBX,EBX                         ; 0053b75e
    PUSH 0x5d08e8                       ; 0053b760 | = "// Camera ambient light\n"
        ;   Label: LAB_0053b760
    PUSH ESI                            ; 0053b765
    XOR EDI,EDI                         ; 0053b766
    CALL crt_unknown.c_FUN_005a3140     ; 0053b768
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX]             ; 0053b76d
    ADD ESP,0x8                         ; 0053b76f
    TEST ECX,ECX                        ; 0053b772
    JLE 0x0053b7a0                      ; 0053b774
        ;   XREF to: 0053b7a0 (CONDITIONAL_JUMP)  ; LAB_0053b7a0
    MOV EBP,EBX                         ; 0053b776
    SUB ESP,0x8                         ; 0053b778
        ;   Label: LAB_0053b778
    FLD float ptr [EBP + 0x14c]         ; 0053b77b
    FSTP double ptr [ESP]               ; 0053b781
    PUSH 0x5d0901                       ; 0053b784 | DAT_005d0901
    PUSH ESI                            ; 0053b789
    ADD EBP,0x1a4                       ; 0053b78a
    INC EDI                             ; 0053b790
    CALL crt_unknown.c_FUN_005a3140     ; 0053b791
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX]             ; 0053b796
    ADD ESP,0x10                        ; 0053b798
    CMP EDI,EAX                         ; 0053b79b
    JL 0x0053b778                       ; 0053b79d
        ;   XREF to: 0053b778 (CONDITIONAL_JUMP)  ; LAB_0053b778
    NOP                                 ; 0053b79f
    PUSH 0x5d0905                       ; 0053b7a0 | = "// Camera groups\n"
        ;   Label: LAB_0053b7a0
    PUSH ESI                            ; 0053b7a5
    XOR EBP,EBP                         ; 0053b7a6
    CALL crt_unknown.c_FUN_005a3140     ; 0053b7a8
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBX]             ; 0053b7ad
    ADD ESP,0x8                         ; 0053b7af
    TEST EDX,EDX                        ; 0053b7b2
    JLE 0x0053b7e0                      ; 0053b7b4
        ;   XREF to: 0053b7e0 (CONDITIONAL_JUMP)  ; LAB_0053b7e0
    MOV EDI,EBX                         ; 0053b7b6
    MOV ECX,dword ptr [EDI + 0x150]     ; 0053b7b8
        ;   Label: LAB_0053b7b8
    PUSH ECX                            ; 0053b7be
    PUSH 0x5d0917                       ; 0053b7bf | DAT_005d0917
    PUSH ESI                            ; 0053b7c4
    ADD EDI,0x1a4                       ; 0053b7c5
    INC EBP                             ; 0053b7cb
    CALL crt_unknown.c_FUN_005a3140     ; 0053b7cc
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX]             ; 0053b7d1
    ADD ESP,0xc                         ; 0053b7d3
    CMP EBP,EAX                         ; 0053b7d6
    JL 0x0053b7b8                       ; 0053b7d8
        ;   XREF to: 0053b7b8 (CONDITIONAL_JUMP)  ; LAB_0053b7b8
    LEA EAX,[EAX]                       ; 0053b7da
    POP EBP                             ; 0053b7e0
        ;   Label: LAB_0053b7e0
    POP EDI                             ; 0053b7e1
    POP ESI                             ; 0053b7e2
    POP EBX                             ; 0053b7e3
    RET                                 ; 0053b7e4

