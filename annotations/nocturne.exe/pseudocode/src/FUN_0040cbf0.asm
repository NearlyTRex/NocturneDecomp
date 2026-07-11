; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040cbf0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b49a0 at 004b4a00
;
; Referenced Globals:
;   string s_part_status_opening_brace_00577cdc
;   undefined4 DAT_00577cf6
;   undefined4 DAT_00577cf9
;   string s_description_00577cfc
;   string s_part_status_entry_00577d08
;   undefined4 DAT_00577d1a
;   undefined4 DAT_00577d1c
;   string s_description_00577d1f
;   string s_part_texture_entry_00577d2b
;   undefined4 DAT_00577d3e
;   string s_part_status_info_closing_brace_00577d40
;   string s_%s{_//_%s_00577d5f
;   string s_%s%d_00577d6a
;   undefined4 DAT_00577d70
;   undefined4 DAT_00577d73
;   ... and 8 more
;
; Called Functions:
;   FUN_0040bff0
;   FUN_0040c320
;   FUN_0051dc90
;   FUN_0051dcb0
;   FUN_00563350
;   FUN_005644f0
;   FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cbf0
        ;   Label: FUN_0040cbf0
    PUSH ESI                            ; 0040cbf1
    PUSH EDI                            ; 0040cbf2
    PUSH EBP                            ; 0040cbf3
    SUB ESP,0x4                         ; 0040cbf4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0040cbf7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0040cbfb
    CMP dword ptr [0x00763e88],0x1      ; 0040cbff | DAT_00763e88
    JNZ 0x0040cd57                      ; 0040cc06
        ;   XREF to: 0040cd57 (CONDITIONAL_JUMP)  ; LAB_0040cd57
    MOV EBX,dword ptr [0x00763e84]      ; 0040cc0c | DAT_00763e84
        ;   Label: LAB_0040cc0c
    PUSH EBX                            ; 0040cc12
    CALL FUN_00564570                   ; 0040cc13
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined FUN_00564570()
    ADD ESP,0x4                         ; 0040cc18
    MOV EBX,EAX                         ; 0040cc1b
    TEST EAX,EAX                        ; 0040cc1d
    JL 0x0040cd29                       ; 0040cc1f
        ;   XREF to: 0040cd29 (CONDITIONAL_JUMP)  ; LAB_0040cd29
    CMP EBX,0xa                         ; 0040cc25
        ;   Label: LAB_0040cc25
    JNZ 0x0040cc0c                      ; 0040cc28
        ;   XREF to: 0040cc0c (CONDITIONAL_JUMP)  ; LAB_0040cc0c
    MOV EAX,ESP                         ; 0040cc2a
    PUSH EAX                            ; 0040cc2c
    PUSH 0x577cf6                       ; 0040cc2d | DAT_00577cf6
    MOV ESI,dword ptr [0x00763e84]      ; 0040cc32 | DAT_00763e84
    PUSH ESI                            ; 0040cc38
    CALL FUN_00563350                   ; 0040cc39
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0xc                         ; 0040cc3e
    PUSH EBP                            ; 0040cc41
    CALL FUN_0051dc90                   ; 0040cc42
        ;   XREF to: 0051dc90 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dc90()
    ADD ESP,0x4                         ; 0040cc47
    MOV EAX,dword ptr [ESP]             ; 0040cc4a
    XOR EBX,EBX                         ; 0040cc4d
    TEST EAX,EAX                        ; 0040cc4f
    JLE 0x0040cc90                      ; 0040cc51
        ;   XREF to: 0040cc90 (CONDITIONAL_JUMP)  ; LAB_0040cc90
    LEA ESI,[EBP + 0x2140]              ; 0040cc53
    PUSH ESI                            ; 0040cc59
        ;   Label: LAB_0040cc59
    PUSH 0x577cf9                       ; 0040cc5a | DAT_00577cf9
    MOV EDX,dword ptr [0x00763e84]      ; 0040cc5f | DAT_00763e84
    PUSH EDX                            ; 0040cc65
    CALL FUN_00563350                   ; 0040cc66
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0xc                         ; 0040cc6b
    CMP EAX,0x1                         ; 0040cc6e
    JZ 0x0040cc85                       ; 0040cc71
        ;   XREF to: 0040cc85 (CONDITIONAL_JUMP)  ; LAB_0040cc85
    PUSH 0x577cfc                       ; 0040cc73 | = "description"
    PUSH 0x577d08                       ; 0040cc78 | = "part status entry"
    CALL FUN_0040c320                   ; 0040cc7d
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040cc82
    MOV ECX,dword ptr [ESP]             ; 0040cc85
        ;   Label: LAB_0040cc85
    INC EBX                             ; 0040cc88
    ADD ESI,0x4                         ; 0040cc89
    CMP EBX,ECX                         ; 0040cc8c
    JL 0x0040cc59                       ; 0040cc8e
        ;   XREF to: 0040cc59 (CONDITIONAL_JUMP)  ; LAB_0040cc59
    PUSH 0x577d1a                       ; 0040cc90 | DAT_00577d1a
        ;   Label: LAB_0040cc90
    MOV EBX,dword ptr [0x00763e84]      ; 0040cc95 | DAT_00763e84
    PUSH EBX                            ; 0040cc9b
    CALL FUN_00563350                   ; 0040cc9c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x8                         ; 0040cca1
    PUSH EBP                            ; 0040cca4
    CALL FUN_0051dcb0                   ; 0040cca5
        ;   XREF to: 0051dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcb0()
    ADD ESP,0x4                         ; 0040ccaa
    MOV ESI,dword ptr [ESP]             ; 0040ccad
    XOR EBX,EBX                         ; 0040ccb0
    TEST ESI,ESI                        ; 0040ccb2
    JLE 0x0040ccf3                      ; 0040ccb4
        ;   XREF to: 0040ccf3 (CONDITIONAL_JUMP)  ; LAB_0040ccf3
    LEA ESI,[EBP + 0x21b8]              ; 0040ccb6
    PUSH ESI                            ; 0040ccbc
        ;   Label: LAB_0040ccbc
    PUSH 0x577d1c                       ; 0040ccbd | DAT_00577d1c
    MOV EBP,dword ptr [0x00763e84]      ; 0040ccc2 | DAT_00763e84
    PUSH EBP                            ; 0040ccc8
    CALL FUN_00563350                   ; 0040ccc9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0xc                         ; 0040ccce
    CMP EAX,0x1                         ; 0040ccd1
    JZ 0x0040cce8                       ; 0040ccd4
        ;   XREF to: 0040cce8 (CONDITIONAL_JUMP)  ; LAB_0040cce8
    PUSH 0x577d1f                       ; 0040ccd6 | = "description"
    PUSH 0x577d2b                       ; 0040ccdb | = "part texture entry"
    CALL FUN_0040c320                   ; 0040cce0
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040cce5
    MOV EAX,dword ptr [ESP]             ; 0040cce8
        ;   Label: LAB_0040cce8
    INC EBX                             ; 0040cceb
    ADD ESI,0x4                         ; 0040ccec
    CMP EBX,EAX                         ; 0040ccef
    JL 0x0040ccbc                       ; 0040ccf1
        ;   XREF to: 0040ccbc (CONDITIONAL_JUMP)  ; LAB_0040ccbc
    PUSH 0x577d3e                       ; 0040ccf3 | DAT_00577d3e
        ;   Label: LAB_0040ccf3
    MOV EDX,dword ptr [0x00763e84]      ; 0040ccf8 | DAT_00763e84
    PUSH EDX                            ; 0040ccfe
    CALL FUN_00563350                   ; 0040ccff
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x8                         ; 0040cd04
    MOV ECX,dword ptr [0x00763e84]      ; 0040cd07 | DAT_00763e84
        ;   Label: LAB_0040cd07
    PUSH ECX                            ; 0040cd0d
    CALL FUN_00564570                   ; 0040cd0e
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined FUN_00564570()
    ADD ESP,0x4                         ; 0040cd13
    MOV EBX,EAX                         ; 0040cd16
    TEST EAX,EAX                        ; 0040cd18
    JL 0x0040cd3c                       ; 0040cd1a
        ;   XREF to: 0040cd3c (CONDITIONAL_JUMP)  ; LAB_0040cd3c
    CMP EBX,0xa                         ; 0040cd1c
    JNZ 0x0040cd07                      ; 0040cd1f
        ;   XREF to: 0040cd07 (CONDITIONAL_JUMP)  ; LAB_0040cd07
    ADD ESP,0x4                         ; 0040cd21
    POP EBP                             ; 0040cd24
    POP EDI                             ; 0040cd25
    POP ESI                             ; 0040cd26
    POP EBX                             ; 0040cd27
    RET                                 ; 0040cd28
    PUSH EDI                            ; 0040cd29
        ;   Label: LAB_0040cd29
    PUSH 0x577cdc                       ; 0040cd2a | = "part status opening brace"
    CALL FUN_0040c320                   ; 0040cd2f
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040cd34
    JMP 0x0040cc25                      ; 0040cd37
        ;   XREF to: 0040cc25 (UNCONDITIONAL_JUMP)  ; LAB_0040cc25
    PUSH EDI                            ; 0040cd3c
        ;   Label: LAB_0040cd3c
    PUSH 0x577d40                       ; 0040cd3d | = "part status info closing brace"
    CALL FUN_0040c320                   ; 0040cd42
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040cd47
    CMP EBX,0xa                         ; 0040cd4a
    JNZ 0x0040cd07                      ; 0040cd4d
        ;   XREF to: 0040cd07 (CONDITIONAL_JUMP)  ; LAB_0040cd07
    ADD ESP,0x4                         ; 0040cd4f
    POP EBP                             ; 0040cd52
    POP EDI                             ; 0040cd53
    POP ESI                             ; 0040cd54
    POP EBX                             ; 0040cd55
    RET                                 ; 0040cd56
    PUSH EDI                            ; 0040cd57
        ;   Label: LAB_0040cd57
    PUSH 0x5acc90                       ; 0040cd58 | DAT_005acc90
    PUSH 0x577d5f                       ; 0040cd5d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040cd62 | DAT_00763e84
    PUSH ECX                            ; 0040cd68
    CALL FUN_005644f0                   ; 0040cd69
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x10                        ; 0040cd6e
    PUSH 0x1                            ; 0040cd71
    CALL FUN_0040bff0                   ; 0040cd73
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bff0()
    ADD ESP,0x4                         ; 0040cd78
    MOV EDI,0x1e                        ; 0040cd7b
    PUSH EDI                            ; 0040cd80
    PUSH 0x5acc90                       ; 0040cd81 | DAT_005acc90
    PUSH 0x577d6a                       ; 0040cd86 | = "%s%d\n"
    MOV EBX,dword ptr [0x00763e84]      ; 0040cd8b | DAT_00763e84
    PUSH EBX                            ; 0040cd91
    CALL FUN_005644f0                   ; 0040cd92
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x10                        ; 0040cd97
    PUSH 0x5acc90                       ; 0040cd9a | DAT_005acc90
    PUSH 0x577d70                       ; 0040cd9f | DAT_00577d70
    MOV ESI,dword ptr [0x00763e84]      ; 0040cda4 | DAT_00763e84
    PUSH ESI                            ; 0040cdaa
    MOV EBX,EBP                         ; 0040cdab
    CALL FUN_005644f0                   ; 0040cdad
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040cdb2
    LEA ESI,[EBP + 0x78]                ; 0040cdb5
    MOV EAX,dword ptr [EBX + 0x2140]    ; 0040cdb8
        ;   Label: LAB_0040cdb8
    PUSH EAX                            ; 0040cdbe
    PUSH 0x577d73                       ; 0040cdbf | DAT_00577d73
    MOV EDX,dword ptr [0x00763e84]      ; 0040cdc4 | DAT_00763e84
    PUSH EDX                            ; 0040cdca
    ADD EBX,0x4                         ; 0040cdcb
    CALL FUN_005644f0                   ; 0040cdce
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040cdd3
    CMP EBX,ESI                         ; 0040cdd6
    JNZ 0x0040cdb8                      ; 0040cdd8
        ;   XREF to: 0040cdb8 (CONDITIONAL_JUMP)  ; LAB_0040cdb8
    PUSH 0x577d77                       ; 0040cdda | DAT_00577d77
    MOV ECX,dword ptr [0x00763e84]      ; 0040cddf | DAT_00763e84
    PUSH ECX                            ; 0040cde5
    CALL FUN_005644f0                   ; 0040cde6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x8                         ; 0040cdeb
    PUSH 0x5acc90                       ; 0040cdee | DAT_005acc90
    PUSH 0x577d79                       ; 0040cdf3 | DAT_00577d79
    MOV EBX,dword ptr [0x00763e84]      ; 0040cdf8 | DAT_00763e84
    PUSH EBX                            ; 0040cdfe
    XOR ESI,ESI                         ; 0040cdff
    CALL FUN_005644f0                   ; 0040ce01
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040ce06
    TEST EDI,EDI                        ; 0040ce09
    JLE 0x0040ce40                      ; 0040ce0b
        ;   XREF to: 0040ce40 (CONDITIONAL_JUMP)  ; LAB_0040ce40
    MOV EBX,EBP                         ; 0040ce0d
    MOV EBP,dword ptr [EBX + 0x21b8]    ; 0040ce0f
        ;   Label: LAB_0040ce0f
    PUSH EBP                            ; 0040ce15
    PUSH 0x577d7c                       ; 0040ce16 | DAT_00577d7c
    MOV EAX,[0x00763e84]                ; 0040ce1b | DAT_00763e84
    PUSH EAX                            ; 0040ce20
    ADD EBX,0x4                         ; 0040ce21
    INC ESI                             ; 0040ce24
    CALL FUN_005644f0                   ; 0040ce25
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040ce2a
    CMP ESI,EDI                         ; 0040ce2d
    JL 0x0040ce0f                       ; 0040ce2f
        ;   XREF to: 0040ce0f (CONDITIONAL_JUMP)  ; LAB_0040ce0f
    LEA EAX,[EAX]                       ; 0040ce31
    LEA EDX,[EDX]                       ; 0040ce37
    LEA EAX,[EAX]                       ; 0040ce3d
    PUSH 0x577d80                       ; 0040ce40 | DAT_00577d80
        ;   Label: LAB_0040ce40
    MOV EDX,dword ptr [0x00763e84]      ; 0040ce45 | DAT_00763e84
    PUSH EDX                            ; 0040ce4b
    CALL FUN_005644f0                   ; 0040ce4c
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x8                         ; 0040ce51
    PUSH -0x1                           ; 0040ce54
    CALL FUN_0040bff0                   ; 0040ce56
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bff0()
    ADD ESP,0x4                         ; 0040ce5b
    PUSH 0x5acc90                       ; 0040ce5e | DAT_005acc90
    PUSH 0x577d82                       ; 0040ce63 | DAT_00577d82
    MOV ECX,dword ptr [0x00763e84]      ; 0040ce68 | DAT_00763e84
    PUSH ECX                            ; 0040ce6e
    CALL FUN_005644f0                   ; 0040ce6f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0xc                         ; 0040ce74
    ADD ESP,0x4                         ; 0040ce77
    POP EBP                             ; 0040ce7a
    POP EDI                             ; 0040ce7b
    POP ESI                             ; 0040ce7c
    POP EBX                             ; 0040ce7d
    RET                                 ; 0040ce7e

