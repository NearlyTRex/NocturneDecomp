; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499c80(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0xb04]:1  local_b04
; undefined        Stack[-0x904]:1  local_904
; undefined        Stack[-0x704]:1  local_704
; undefined        Stack[-0x600]:1  local_600
; undefined        Stack[-0x4fc]:1  local_4fc
; undefined        Stack[-0x3fc]:1  local_3fc
; undefined        Stack[-0x3fb]:1  local_3fb
; undefined        Stack[-0x2fc]:1  local_2fc
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00499ed0 at 00499fdd
;
; Referenced Globals:
;   TerminatedCString s_anon_005dc5c1
;   TerminatedCString s_m_d_y_I_M_S_p_005dc5cd
;   TerminatedCString s_s_s_d_s_s_005dc5e2
;   undefined4 DAT_0061aee8
;   undefined4 DAT_0061aeec
;   undefined4 DAT_0061b0e8
;   undefined4 DAT_0061b0ec
;   undefined4 DAT_0061b2e8
;   undefined4 DAT_0061b2ec
;
; Called Functions:
;   FUN_00479580
;   FUN_004795b0
;   FUN_004998a0
;   FUN_005bfb40
;   FUN_005c04e0
;   FUN_005c25d0
;   FUN_005c2738
;   FUN_005c2784
;   FUN_005c2c20
;   FUN_005c2cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499c80
        ;   Label: FUN_00499c80
    PUSH ESI                            ; 00499c81
    PUSH EDI                            ; 00499c82
    PUSH EBP                            ; 00499c83
    SUB ESP,0xaf4                       ; 00499c84
    MOV EBP,dword ptr [ESP + 0xb08]     ; 00499c8a
    MOV EBP,dword ptr [EBP]             ; 00499c91
    XOR EDX,EDX                         ; 00499c94
    DEC EBP                             ; 00499c96
    MOV dword ptr [ESP + 0xaf0],EDX     ; 00499c97
    TEST EBP,EBP                        ; 00499c9e
    JL 0x00499d61                       ; 00499ca0
        ;   XREF to: 00499d61 (CONDITIONAL_JUMP)  ; LAB_00499d61
    MOV EDX,dword ptr [ESP + 0xaf0]     ; 00499ca6
        ;   Label: LAB_00499ca6
    ADD EDX,EBP                         ; 00499cad
    MOV EAX,EDX                         ; 00499caf
    SAR EDX,0x1f                        ; 00499cb1
    SUB EAX,EDX                         ; 00499cb4
    SAR EAX,0x1                         ; 00499cb6
    MOV ECX,0x80                        ; 00499cb8
    LEA EDI,[ESP + 0x200]               ; 00499cbd
    MOV ESI,0x61aee8                    ; 00499cc4 | DAT_0061aee8
    MOV EBX,EAX                         ; 00499cc9
    MOV EAX,ESP                         ; 00499ccb
    MOVSD.REP ES:EDI,ESI                ; 00499ccd | DAT_0061aee8 | DAT_0061aeec
    PUSH EAX                            ; 00499ccf
    LEA EAX,[ESP + 0x204]               ; 00499cd0
    MOV ECX,0x80                        ; 00499cd7
    PUSH EAX                            ; 00499cdc
    LEA EDI,[ESP + 0x8]                 ; 00499cdd
    MOV ESI,0x61b0e8                    ; 00499ce1 | DAT_0061b0e8
    PUSH 0x5dc5c1                       ; 00499ce6 | = "%[^\t]\t%[^\t]"
    MOVSD.REP ES:EDI,ESI                ; 00499ceb | DAT_0061b0e8 | DAT_0061b0ec
    PUSH EBX                            ; 00499ced
    MOV ESI,dword ptr [ESP + 0xb18]     ; 00499cee
    PUSH ESI                            ; 00499cf5
    CALL FUN_004998a0                   ; 00499cf6
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998a0()
    ADD ESP,0x8                         ; 00499cfb
    PUSH EAX                            ; 00499cfe
    CALL FUN_005c2cac                   ; 00499cff
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; undefined FUN_005c2cac()
    ADD ESP,0x10                        ; 00499d04
    MOV EAX,ESP                         ; 00499d07
    PUSH EAX                            ; 00499d09
    LEA EAX,[ESP + 0x204]               ; 00499d0a
    PUSH EAX                            ; 00499d11
    PUSH 0x0                            ; 00499d12
    PUSH 0x0                            ; 00499d14
    LEA EAX,[ESP + 0x514]               ; 00499d16
    PUSH EAX                            ; 00499d1d
    CALL FUN_004795b0                   ; 00499d1e
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 00499d23
    LEA EAX,[ESP + 0x504]               ; 00499d26
    PUSH EAX                            ; 00499d2d
    MOV EDI,dword ptr [ESP + 0xb10]     ; 00499d2e
    PUSH EDI                            ; 00499d35
    CALL FUN_005c04e0                   ; 00499d36
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00499d3b
    TEST EAX,EAX                        ; 00499d3e
    JZ 0x00499eb5                       ; 00499d40
        ;   XREF to: 00499eb5 (CONDITIONAL_JUMP)  ; LAB_00499eb5
    JL 0x00499ec0                       ; 00499d46
        ;   XREF to: 00499ec0 (CONDITIONAL_JUMP)  ; LAB_00499ec0
    INC EBX                             ; 00499d4c
    MOV dword ptr [ESP + 0xaf0],EBX     ; 00499d4d
    CMP EBP,dword ptr [ESP + 0xaf0]     ; 00499d54
        ;   Label: LAB_00499d54
    JGE 0x00499ca6                      ; 00499d5b
        ;   XREF to: 00499ca6 (CONDITIONAL_JUMP)  ; LAB_00499ca6
    LEA EAX,[ESP + 0xb18]               ; 00499d61
        ;   Label: LAB_00499d61
    PUSH EAX                            ; 00499d68
    CALL FUN_005c2738                   ; 00499d69
        ;   XREF to: 005c2738 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2738()
    ADD ESP,0x4                         ; 00499d6e
    PUSH EAX                            ; 00499d71
    PUSH 0x5dc5cd                       ; 00499d72 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 00499d77
    LEA EAX,[ESP + 0xadc]               ; 00499d79
    PUSH EAX                            ; 00499d80
    LEA EDI,[ESP + 0x410]               ; 00499d81
    MOV ESI,0x61b2e8                    ; 00499d88 | DAT_0061b2e8
    CALL FUN_005c2784                   ; 00499d8d
        ;   XREF to: 005c2784 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2784()
    ADD ESP,0x10                        ; 00499d92
    MOV ECX,0x41                        ; 00499d95
    MOV EBX,dword ptr [ESP + 0xb10]     ; 00499d9a
    MOVSD.REP ES:EDI,ESI                ; 00499da1 | DAT_0061b2e8 | DAT_0061b2ec
    TEST EBX,EBX                        ; 00499da3
    JZ 0x00499de8                       ; 00499da5
        ;   XREF to: 00499de8 (CONDITIONAL_JUMP)  ; LAB_00499de8
    LEA EAX,[ESP + 0x608]               ; 00499da7
    PUSH EAX                            ; 00499dae
    LEA EAX,[ESP + 0x90c]               ; 00499daf
    PUSH EAX                            ; 00499db6
    PUSH 0x0                            ; 00499db7
    PUSH 0x0                            ; 00499db9
    PUSH EBX                            ; 00499dbb
    CALL FUN_00479580                   ; 00499dbc
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 00499dc1
    LEA EAX,[ESP + 0x608]               ; 00499dc4
    PUSH EAX                            ; 00499dcb
    LEA EAX,[ESP + 0x90c]               ; 00499dcc
    PUSH EAX                            ; 00499dd3
    PUSH 0x0                            ; 00499dd4
    PUSH 0x0                            ; 00499dd6
    LEA EAX,[ESP + 0x410]               ; 00499dd8
    PUSH EAX                            ; 00499ddf
    CALL FUN_004795b0                   ; 00499de0
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 00499de5
    LEA EAX,[ESP + 0x708]               ; 00499de8
        ;   Label: LAB_00499de8
    PUSH EAX                            ; 00499def
    LEA EAX,[ESP + 0x80c]               ; 00499df0
    PUSH EAX                            ; 00499df7
    PUSH 0x0                            ; 00499df8
    PUSH 0x0                            ; 00499dfa
    MOV EDI,dword ptr [ESP + 0xb1c]     ; 00499dfc
    PUSH EDI                            ; 00499e03
    CALL FUN_00479580                   ; 00499e04
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 00499e09
    CMP byte ptr [ESP + 0x708],0x2e     ; 00499e0c
    JNZ 0x00499e40                      ; 00499e14
        ;   XREF to: 00499e40 (CONDITIONAL_JUMP)  ; LAB_00499e40
    LEA EDI,[ESP + 0x708]               ; 00499e16
    SUB ECX,ECX                         ; 00499e1d
    DEC ECX                             ; 00499e1f
    XOR EAX,EAX                         ; 00499e20
    SCASB.REPNE ES:EDI                  ; 00499e22
    NOT ECX                             ; 00499e24
    DEC ECX                             ; 00499e26
    PUSH ECX                            ; 00499e27
    LEA EAX,[ESP + 0x70d]               ; 00499e28
    PUSH EAX                            ; 00499e2f
    LEA EAX,[ESP + 0x710]               ; 00499e30
    PUSH EAX                            ; 00499e37
    CALL FUN_005c25d0                   ; 00499e38
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 00499e3d
    LEA EAX,[ESP + 0x400]               ; 00499e40
        ;   Label: LAB_00499e40
    PUSH EAX                            ; 00499e47
    LEA EAX,[ESP + 0xad4]               ; 00499e48
    PUSH EAX                            ; 00499e4f
    MOV EBP,dword ptr [ESP + 0xb1c]     ; 00499e50
    PUSH EBP                            ; 00499e57
    LEA EAX,[ESP + 0x714]               ; 00499e58
    PUSH EAX                            ; 00499e5f
    LEA EAX,[ESP + 0x818]               ; 00499e60
    PUSH EAX                            ; 00499e67
    PUSH 0x5dc5e2                       ; 00499e68 | = "%s\t%s\t%d\t%s\t%s"
    LEA EAX,[ESP + 0xa20]               ; 00499e6d
    PUSH EAX                            ; 00499e74
    CALL FUN_005bfb40                   ; 00499e75
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x1c                        ; 00499e7a
    LEA EAX,[ESP + 0xa08]               ; 00499e7d
    PUSH EAX                            ; 00499e84
    CALL FUN_005c2c20                   ; 00499e85
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2c20()
    ADD ESP,0x4                         ; 00499e8a
    LEA EAX,[ESP + 0xa08]               ; 00499e8d
    PUSH EAX                            ; 00499e94
    MOV EAX,dword ptr [ESP + 0xaf4]     ; 00499e95
    MOV EDX,dword ptr [ESP + 0xb0c]     ; 00499e9c
    PUSH EAX                            ; 00499ea3
    MOV ECX,dword ptr [ESP + 0xb10]     ; 00499ea4
    MOV EDX,dword ptr [EDX + 0xc]       ; 00499eab
    PUSH ECX                            ; 00499eae
    CALL dword ptr [EDX + 0xc]          ; 00499eaf
    ADD ESP,0xc                         ; 00499eb2
    ADD ESP,0xaf4                       ; 00499eb5
        ;   Label: LAB_00499eb5
    POP EBP                             ; 00499ebb
    POP EDI                             ; 00499ebc
    POP ESI                             ; 00499ebd
    POP EBX                             ; 00499ebe
    RET                                 ; 00499ebf
    LEA EBP,[EBX + -0x1]                ; 00499ec0
        ;   Label: LAB_00499ec0
    JMP 0x00499d54                      ; 00499ec3
        ;   XREF to: 00499d54 (UNCONDITIONAL_JUMP)  ; LAB_00499d54

