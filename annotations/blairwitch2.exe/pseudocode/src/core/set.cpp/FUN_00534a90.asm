; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534a90(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004bbf70 at 004bc757
;
; Referenced Globals:
;   TerminatedCString s_anon_005e5c1a
;   undefined4 DAT_005e5c22
;   TerminatedCString s_core_set_cpp_005e5c26
;   TerminatedCString s_Set_saveState_info_is_in_005e5c36
;   TerminatedCString s_anon_005e5c5f
;   undefined4 DAT_005e5c67
;   TerminatedCString s_The_set_has_changed_sinc_005e5c6b
;   undefined4 DAT_005e5cd1
;   undefined4 DAT_006138e0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0047bdf0
;   FUN_004e4500
;   FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534a90
        ;   Label: FUN_00534a90
    PUSH ESI                            ; 00534a91
    PUSH EDI                            ; 00534a92
    PUSH EBP                            ; 00534a93
    SUB ESP,0xc                         ; 00534a94
    MOV EBP,dword ptr [ESP + 0x20]      ; 00534a97
    MOV EDI,dword ptr [ESP + 0x24]      ; 00534a9b
    PUSH 0x5e5c1a                       ; 00534a9f | = "%*[^\n]\n"
    PUSH EDI                            ; 00534aa4
    CALL FUN_005b8100                   ; 00534aa5
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x8                         ; 00534aaa
    MOV EAX,ESP                         ; 00534aad
    PUSH EAX                            ; 00534aaf
    PUSH 0x5e5c22                       ; 00534ab0 | DAT_005e5c22
    PUSH EDI                            ; 00534ab5
    CALL FUN_005b8100                   ; 00534ab6
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00534abb
    MOV EDX,dword ptr [ESP]             ; 00534abe
    CMP EDX,0x1                         ; 00534ac1
    JNZ 0x00534b45                      ; 00534ac4
        ;   XREF to: 00534b45 (CONDITIONAL_JUMP)  ; LAB_00534b45
    PUSH 0x5e5c5f                       ; 00534aca | = "%*[^\n]\n"
        ;   Label: LAB_00534aca
    PUSH EDI                            ; 00534acf
    CALL FUN_005b8100                   ; 00534ad0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x8                         ; 00534ad5
    LEA EAX,[ESP + 0x4]                 ; 00534ad8
    PUSH EAX                            ; 00534adc
    PUSH 0x5e5c67                       ; 00534add | DAT_005e5c67
    PUSH EDI                            ; 00534ae2
    CALL FUN_005b8100                   ; 00534ae3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00534ae8
    MOV EDX,dword ptr [EBP]             ; 00534aeb
    CMP EDX,dword ptr [ESP + 0x4]       ; 00534aee
    JZ 0x00534b08                       ; 00534af2
        ;   XREF to: 00534b08 (CONDITIONAL_JUMP)  ; LAB_00534b08
    PUSH 0x5e5c6b                       ; 00534af4 | = "The set has changed since you saved y..."
    MOV ECX,dword ptr [0x006138e0]      ; 00534af9 | DAT_006138e0
    PUSH ECX                            ; 00534aff
    CALL FUN_0047bdf0                   ; 00534b00
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0x8                         ; 00534b05
    MOV ESI,dword ptr [ESP + 0x4]       ; 00534b08
        ;   Label: LAB_00534b08
    XOR EBX,EBX                         ; 00534b0c
    TEST ESI,ESI                        ; 00534b0e
    JLE 0x00534b3d                      ; 00534b10
        ;   XREF to: 00534b3d (CONDITIONAL_JUMP)  ; LAB_00534b3d
    MOV ESI,EBP                         ; 00534b12
    LEA EAX,[ESP + 0x8]                 ; 00534b14
        ;   Label: LAB_00534b14
    PUSH EAX                            ; 00534b18
    PUSH 0x5e5cd1                       ; 00534b19 | DAT_005e5cd1
    PUSH EDI                            ; 00534b1e
    CALL FUN_005b8100                   ; 00534b1f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EDX,dword ptr [EBP]             ; 00534b24
    ADD ESP,0xc                         ; 00534b27
    CMP EBX,EDX                         ; 00534b2a
    JL 0x00534b6e                       ; 00534b2c
        ;   XREF to: 00534b6e (CONDITIONAL_JUMP)  ; LAB_00534b6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00534b2e
        ;   Label: LAB_00534b2e
    INC EBX                             ; 00534b32
    ADD ESI,0x1a4                       ; 00534b33
    CMP EBX,EAX                         ; 00534b39
    JL 0x00534b14                       ; 00534b3b
        ;   XREF to: 00534b14 (CONDITIONAL_JUMP)  ; LAB_00534b14
    ADD ESP,0xc                         ; 00534b3d
        ;   Label: LAB_00534b3d
    POP EBP                             ; 00534b40
    POP EDI                             ; 00534b41
    POP ESI                             ; 00534b42
    POP EBX                             ; 00534b43
    RET                                 ; 00534b44
    PUSH EDX                            ; 00534b45
        ;   Label: LAB_00534b45
    MOV ECX,0x5e5c26                    ; 00534b46 | = "..\\core\\set.cpp"
    MOV EBX,0x147b                      ; 00534b4b
    PUSH 0x5e5c36                       ; 00534b50 | = "Set saveState info is invalid version %d"
    MOV dword ptr [0x01d046a0],ECX      ; 00534b55 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00534b5b | DAT_01d046a4
    CALL FUN_004e4500                   ; 00534b61
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00534b66
    JMP 0x00534aca                      ; 00534b69
        ;   XREF to: 00534aca (UNCONDITIONAL_JUMP)  ; LAB_00534aca
    MOV EAX,dword ptr [ESP + 0x8]       ; 00534b6e
        ;   Label: LAB_00534b6e
    MOV dword ptr [ESI + 0x1a4],EAX     ; 00534b72
    JMP 0x00534b2e                      ; 00534b78
        ;   XREF to: 00534b2e (UNCONDITIONAL_JUMP)  ; LAB_00534b2e

