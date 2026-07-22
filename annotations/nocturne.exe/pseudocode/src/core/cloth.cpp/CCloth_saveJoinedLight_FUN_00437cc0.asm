; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(int param_1,int param_2)
;
;
; XREF[1]:
;   core_cloth.cpp_CClothList_render_FUN_004385a0 at 004385c6
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057ae4d
;   string s_CCloth::saveJoinedLight_-_Can't_s_0057ae5f
;   string s_..\\core\\cloth.cpp_0057ae99
;   string s_CCloth::saveJoinedLight_-_Model_w_0057aeab
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437cc0
        ;   Label: core_cloth.cpp_CCloth_saveJoinedLight_FUN_00437cc0
    PUSH ESI                            ; 00437cc1
    PUSH EDI                            ; 00437cc2
    PUSH EBP                            ; 00437cc3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00437cc4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00437cc8
    TEST EDI,EDI                        ; 00437ccc
    JZ 0x00437d55                       ; 00437cce
        ;   XREF to: 00437d55 (CONDITIONAL_JUMP)  ; LAB_00437d55
    MOV EDI,dword ptr [EDI + 0x2230]    ; 00437cd4
        ;   Label: LAB_00437cd4
    TEST EDI,EDI                        ; 00437cda
    JL 0x00437d7d                       ; 00437cdc
        ;   XREF to: 00437d7d (CONDITIONAL_JUMP)  ; LAB_00437d7d
    MOV EAX,dword ptr [EBP + 0x39ce8]   ; 00437ce2
        ;   Label: LAB_00437ce2
    XOR ESI,ESI                         ; 00437ce8
    TEST EAX,EAX                        ; 00437cea
    JLE 0x00437d50                      ; 00437cec
        ;   XREF to: 00437d50 (CONDITIONAL_JUMP)  ; LAB_00437d50
    LEA EAX,[EDI*0x4 + 0x0]             ; 00437cee
    SUB EAX,EDI                         ; 00437cf5
    SHL EAX,0x3                         ; 00437cf7
    ADD EAX,EDI                         ; 00437cfa
    SHL EAX,0x4                         ; 00437cfc
    LEA EBX,[EAX + EBP*0x1]             ; 00437cff
    MOV EAX,EBP                         ; 00437d02
    MOV ECX,dword ptr [EBX + 0x39e7c]   ; 00437d04
        ;   Label: LAB_00437d04
    IMUL ECX,ECX,0x30                   ; 00437d0a
    MOV EDX,dword ptr [0x005ae704]      ; 00437d0d | DAT_005ae704
    MOV EDI,dword ptr [EDX]             ; 00437d13 | DAT_01b4d738
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x20] ; 00437d15
    MOV dword ptr [EAX + 0x3a64c],EDI   ; 00437d19
    MOV EDI,dword ptr [EDX]             ; 00437d1f | DAT_01b4d738
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x24] ; 00437d21
    MOV dword ptr [EAX + 0x3a7dc],EDI   ; 00437d25
    MOV EDX,dword ptr [EDX]             ; 00437d2b | DAT_01b4d738
    ADD EAX,0x4                         ; 00437d2d
    MOV EDX,dword ptr [ECX + EDX*0x1 + 0x28] ; 00437d30
    MOV dword ptr [EAX + 0x3a968],EDX   ; 00437d34
    INC ESI                             ; 00437d3a
    MOV EDX,dword ptr [EBP + 0x39ce8]   ; 00437d3b
    ADD EBX,0x4                         ; 00437d41
    CMP ESI,EDX                         ; 00437d44
    JL 0x00437d04                       ; 00437d46
        ;   XREF to: 00437d04 (CONDITIONAL_JUMP)  ; LAB_00437d04
    LEA EAX,[EAX]                       ; 00437d48
    MOV EDX,EDX                         ; 00437d4e
    POP EBP                             ; 00437d50
        ;   Label: LAB_00437d50
    POP EDI                             ; 00437d51
    POP ESI                             ; 00437d52
    POP EBX                             ; 00437d53
    RET                                 ; 00437d54
    MOV EDX,0x57ae4d                    ; 00437d55 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_00437d55
    MOV ECX,0x4e3                       ; 00437d5a
    PUSH 0x57ae5f                       ; 00437d5f | = "CCloth::saveJoinedLight - Can't save ..."
    MOV dword ptr [0x01cc4800],EDX      ; 00437d64 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00437d6a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00437d70
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00437d75
    JMP 0x00437cd4                      ; 00437d78
        ;   XREF to: 00437cd4 (UNCONDITIONAL_JUMP)  ; LAB_00437cd4
    MOV EBX,0x57ae99                    ; 00437d7d | = "..\\core\\cloth.cpp"
        ;   Label: LAB_00437d7d
    MOV ESI,0x4e8                       ; 00437d82
    PUSH 0x57aeab                       ; 00437d87 | = "CCloth::saveJoinedLight - Model wasn'..."
    MOV dword ptr [0x01cc4800],EBX      ; 00437d8c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00437d92 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00437d98
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00437d9d
    JMP 0x00437ce2                      ; 00437da0
        ;   XREF to: 00437ce2 (UNCONDITIONAL_JUMP)  ; LAB_00437ce2

