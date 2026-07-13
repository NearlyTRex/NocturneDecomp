; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10003a80(void)
;
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_100030e0 at 100030ea
;
; Referenced Globals:
;   void* switchdataD_10003c94 = 10003abd
;   byte switchdataD_10003ca8 = 0x0
;   undefined4 DAT_10014138
;   undefined4 DAT_100141e8
;   undefined4 DAT_100141f0
;   TerminatedCString s_Unknown_texture_size_10016ad0
;   TerminatedCString s_Texture_load_failed_Coul_10016ae8
;   TerminatedCString s_Texture_load_failed_Text_10016b1c
;   undefined4 DAT_10060670
;   undefined4 DAT_10139048
;   undefined4 DAT_1020de44
;   undefined4 DAT_10226900
;   undefined4 DAT_10226a64
;
; Called Functions:
;   FUN_10001d70
;   FUN_10002340
;   FUN_10002cb0
;   FUN_10002e20
;   FUN_10003830
;   FUN_10003d90
;   FUN_10003e40
;
; *****************************************************************************

section .text

    SUB ESP,0x94                        ; 10003a80
        ;   Label: FUN_10003a80
    MOV EAX,[0x10226900]                ; 10003a86 | DAT_10226900
    PUSH EBX                            ; 10003a8b
    MOV EAX,dword ptr [EAX]             ; 10003a8c
    PUSH ESI                            ; 10003a8e
    SUB EAX,0x20                        ; 10003a8f
    PUSH EDI                            ; 10003a92
    CMP EAX,0xe0                        ; 10003a93
    PUSH EBP                            ; 10003a98
    JA 0x10003aaa                       ; 10003a99
        ;   XREF to: 10003aaa (CONDITIONAL_JUMP)  ; caseD_ff
    XOR ECX,ECX                         ; 10003a9b
    MOV CL,byte ptr [EAX + 0x10003ca8]  ; 10003a9d | switchdataD_10003ca8
    JMP dword ptr [ECX*0x4 + 0x10003c94] ; 10003aa3 | caseD_20 | caseD_ff | caseD_40
        ;   Label: switchD
    PUSH 0x10016ad0                     ; 10003aaa | = "Unknown texture size"
        ;   Label: caseD_21
    CALL FUN_10002340                   ; 10003aaf
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    MOV ESI,dword ptr [ESP + 0x2c]      ; 10003ab4
    ADD ESP,0x4                         ; 10003ab8
    JMP 0x10003ad4                      ; 10003abb
        ;   XREF to: 10003ad4 (UNCONDITIONAL_JUMP)  ; LAB_10003ad4
    MOV ESI,0x3                         ; 10003abd
        ;   Label: caseD_20
    JMP 0x10003ad4                      ; 10003ac2
        ;   XREF to: 10003ad4 (UNCONDITIONAL_JUMP)  ; LAB_10003ad4
    MOV ESI,0x2                         ; 10003ac4
        ;   Label: caseD_40
    JMP 0x10003ad4                      ; 10003ac9
        ;   XREF to: 10003ad4 (UNCONDITIONAL_JUMP)  ; LAB_10003ad4
    MOV ESI,0x1                         ; 10003acb
        ;   Label: caseD_80
    JMP 0x10003ad4                      ; 10003ad0
        ;   XREF to: 10003ad4 (UNCONDITIONAL_JUMP)  ; LAB_10003ad4
    XOR ESI,ESI                         ; 10003ad2
        ;   Label: caseD_100
    CALL FUN_10003830                   ; 10003ad4
        ;   XREF to: 10003830 (UNCONDITIONAL_CALL)  ; undefined FUN_10003830()
        ;   Label: LAB_10003ad4
    CMP dword ptr [0x100141f0],0x0      ; 10003ad9 | DAT_100141f0
    JZ 0x10003afc                       ; 10003ae0
        ;   XREF to: 10003afc (CONDITIONAL_JUMP)  ; LAB_10003afc
    MOV EAX,[0x10014138]                ; 10003ae2 | DAT_10014138
    MOV dword ptr [ESP + 0x14],0x0      ; 10003ae7
    MOV ECX,dword ptr [EAX*0x8 + 0x1020de44] ; 10003aef | DAT_1020de44
    MOV dword ptr [ESP + 0x10],ECX      ; 10003af6
    JMP 0x10003b1f                      ; 10003afa
        ;   XREF to: 10003b1f (UNCONDITIONAL_JUMP)  ; LAB_10003b1f
    MOV EAX,[0x100141e8]                ; 10003afc | DAT_100141e8
        ;   Label: LAB_10003afc
    LEA ECX,[ESI + EAX*0x8]             ; 10003b01
    MOV EAX,[0x10014138]                ; 10003b04 | DAT_10014138
    MOV EDX,dword ptr [ECX*0x4 + 0x10139048] ; 10003b09 | DAT_10139048
    MOV ECX,dword ptr [EAX*0x8 + 0x1020de44] ; 10003b10 | DAT_1020de44
    MOV dword ptr [ESP + 0x10],EDX      ; 10003b17
    MOV dword ptr [ESP + 0x14],ECX      ; 10003b1b
    XOR EBX,EBX                         ; 10003b1f
        ;   Label: LAB_10003b1f
    MOV EBP,0x7c                        ; 10003b21
    CMP dword ptr [0x100141f0],EBX      ; 10003b26 | DAT_100141f0
        ;   Label: LAB_10003b26
    JNZ 0x10003b41                      ; 10003b2c
        ;   XREF to: 10003b41 (CONDITIONAL_JUMP)  ; LAB_10003b41
    MOV EAX,[0x100141e8]                ; 10003b2e | DAT_100141e8
    LEA ECX,[ESI + EAX*0x8]             ; 10003b33
    MOV EDX,dword ptr [ECX*0x4 + 0x10139048] ; 10003b36 | DAT_10139048
    MOV dword ptr [ESP + 0x10],EDX      ; 10003b3d
    LEA EDI,[ESP + 0x28]                ; 10003b41
        ;   Label: LAB_10003b41
    XOR EAX,EAX                         ; 10003b45
    MOV ECX,0x1f                        ; 10003b47
    STOSD.REP ES:EDI                    ; 10003b4c
    LEA EAX,[ESP + 0x28]                ; 10003b4e
    MOV ECX,dword ptr [ESP + 0x10]      ; 10003b52
    MOV dword ptr [ESP + 0x28],EBP      ; 10003b56
    PUSH EAX                            ; 10003b5a
    PUSH ECX                            ; 10003b5b
    CALL FUN_10002e20                   ; 10003b5c
        ;   XREF to: 10002e20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002e20()
    ADD ESP,0x8                         ; 10003b61
    TEST EAX,EAX                        ; 10003b64
    JNZ 0x10003b75                      ; 10003b66
        ;   XREF to: 10003b75 (CONDITIONAL_JUMP)  ; LAB_10003b75
    PUSH 0x10016ae8                     ; 10003b68 | = "Texture load failed: Could not lock t..."
    CALL FUN_10002340                   ; 10003b6d
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    ADD ESP,0x4                         ; 10003b72
    MOV ECX,dword ptr [ESP + 0x4c]      ; 10003b75
        ;   Label: LAB_10003b75
    MOV EAX,dword ptr [ESP + 0x34]      ; 10003b79
    MOV EDX,dword ptr [ESP + 0x38]      ; 10003b7d
    PUSH EAX                            ; 10003b81
    CMP dword ptr [0x10226a64],0x20     ; 10003b82 | DAT_10226a64
    PUSH EDX                            ; 10003b89
    PUSH ECX                            ; 10003b8a
    JNZ 0x10003b94                      ; 10003b8b
        ;   XREF to: 10003b94 (CONDITIONAL_JUMP)  ; LAB_10003b94
    CALL FUN_10003e40                   ; 10003b8d
        ;   XREF to: 10003e40 (UNCONDITIONAL_CALL)  ; undefined FUN_10003e40()
    JMP 0x10003b99                      ; 10003b92
        ;   XREF to: 10003b99 (UNCONDITIONAL_JUMP)  ; LAB_10003b99
    CALL FUN_10003d90                   ; 10003b94
        ;   XREF to: 10003d90 (UNCONDITIONAL_CALL)  ; undefined FUN_10003d90()
        ;   Label: LAB_10003b94
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10003b99
        ;   Label: LAB_10003b99
    ADD ESP,0xc                         ; 10003b9d
    PUSH EAX                            ; 10003ba0
    CALL FUN_10002cb0                   ; 10003ba1
        ;   XREF to: 10002cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_10002cb0()
    ADD ESP,0x4                         ; 10003ba6
    TEST EAX,EAX                        ; 10003ba9
    JNZ 0x10003bba                      ; 10003bab
        ;   XREF to: 10003bba (CONDITIONAL_JUMP)  ; LAB_10003bba
    PUSH 0x10016b1c                     ; 10003bad | = "Texture load failed: Texture buffer u..."
    CALL FUN_10002340                   ; 10003bb2
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    ADD ESP,0x4                         ; 10003bb7
    CMP dword ptr [0x100141f0],EBX      ; 10003bba | DAT_100141f0
        ;   Label: LAB_10003bba
    JNZ 0x10003bfa                      ; 10003bc0
        ;   XREF to: 10003bfa (CONDITIONAL_JUMP)  ; LAB_10003bfa
    MOV EAX,dword ptr [ESP + 0x34]      ; 10003bc2
    PUSH EBX                            ; 10003bc6
    LEA ECX,[ESP + 0x1c]                ; 10003bc7
    PUSH EBX                            ; 10003bcb
    MOV EDX,dword ptr [ESP + 0x18]      ; 10003bcc
    PUSH ECX                            ; 10003bd0
    LEA ECX,[ESP + 0x24]                ; 10003bd1
    PUSH EDX                            ; 10003bd5
    MOV dword ptr [ESP + 0x2c],EBX      ; 10003bd6
    PUSH ECX                            ; 10003bda
    MOV dword ptr [ESP + 0x2c],EBX      ; 10003bdb
    MOV dword ptr [ESP + 0x34],EAX      ; 10003bdf
    MOV dword ptr [ESP + 0x38],EAX      ; 10003be3
    MOV EAX,dword ptr [ESP + 0x28]      ; 10003be7
    PUSH EAX                            ; 10003beb
    MOV EAX,dword ptr [EAX]             ; 10003bec
    CALL dword ptr [EAX + 0x14]         ; 10003bee
    PUSH EAX                            ; 10003bf1
    CALL FUN_10001d70                   ; 10003bf2
        ;   XREF to: 10001d70 (UNCONDITIONAL_CALL)  ; undefined FUN_10001d70()
    ADD ESP,0x4                         ; 10003bf7
    CMP dword ptr [0x10060670],EBX      ; 10003bfa | DAT_10060670
        ;   Label: LAB_10003bfa
    JZ 0x10003c35                       ; 10003c00
        ;   XREF to: 10003c35 (CONDITIONAL_JUMP)  ; LAB_10003c35
    CMP ESI,0x4                         ; 10003c02
    JGE 0x10003c35                      ; 10003c05
        ;   XREF to: 10003c35 (CONDITIONAL_JUMP)  ; LAB_10003c35
    CMP dword ptr [0x100141f0],EBX      ; 10003c07 | DAT_100141f0
    JZ 0x10003c59                       ; 10003c0d
        ;   XREF to: 10003c59 (CONDITIONAL_JUMP)  ; LAB_10003c59
    LEA EAX,[ESP + 0x10]                ; 10003c0f
    LEA ECX,[ESP + 0x90]                ; 10003c13
    MOV EDX,dword ptr [ESP + 0x10]      ; 10003c1a
    PUSH EAX                            ; 10003c1e
    MOV EAX,dword ptr [EDX]             ; 10003c1f
    PUSH ECX                            ; 10003c21
    PUSH EDX                            ; 10003c22
    CALL dword ptr [EAX + 0x30]         ; 10003c23
    PUSH EAX                            ; 10003c26
    CALL FUN_10001d70                   ; 10003c27
        ;   XREF to: 10001d70 (UNCONDITIONAL_CALL)  ; undefined FUN_10001d70()
    ADD ESP,0x4                         ; 10003c2c
    CMP dword ptr [ESP + 0x10],EBX      ; 10003c2f
    JNZ 0x10003c8e                      ; 10003c33
        ;   XREF to: 10003c8e (CONDITIONAL_JUMP)  ; LAB_10003c8e
    INC dword ptr [0x100141e8]          ; 10003c35 | DAT_100141e8
        ;   Label: LAB_10003c35
    CMP dword ptr [0x100141e8],0x4      ; 10003c3b | DAT_100141e8
    JL 0x10003c4e                       ; 10003c42
        ;   XREF to: 10003c4e (CONDITIONAL_JUMP)  ; LAB_10003c4e
    MOV dword ptr [0x100141e8],0x0      ; 10003c44 | DAT_100141e8
    POP EBP                             ; 10003c4e
        ;   Label: LAB_10003c4e
    POP EDI                             ; 10003c4f
    POP ESI                             ; 10003c50
    POP EBX                             ; 10003c51
    ADD ESP,0x94                        ; 10003c52
    RET                                 ; 10003c58
    LEA EAX,[ESP + 0x28]                ; 10003c59
        ;   Label: LAB_10003c59
    MOV ECX,dword ptr [ESP + 0x14]      ; 10003c5d
    PUSH EAX                            ; 10003c61
    PUSH ECX                            ; 10003c62
    MOV EAX,dword ptr [ECX]             ; 10003c63
    CALL dword ptr [EAX + 0x58]         ; 10003c65
    LEA ECX,[ESP + 0x14]                ; 10003c68
    LEA EDX,[ESP + 0x90]                ; 10003c6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 10003c73
    PUSH ECX                            ; 10003c77
    PUSH EDX                            ; 10003c78
    PUSH EAX                            ; 10003c79
    MOV EAX,dword ptr [EAX]             ; 10003c7a
    CALL dword ptr [EAX + 0x30]         ; 10003c7c
    PUSH EAX                            ; 10003c7f
    CALL FUN_10001d70                   ; 10003c80
        ;   XREF to: 10001d70 (UNCONDITIONAL_CALL)  ; undefined FUN_10001d70()
    ADD ESP,0x4                         ; 10003c85
    CMP dword ptr [ESP + 0x14],EBX      ; 10003c88
    JZ 0x10003c35                       ; 10003c8c
        ;   XREF to: 10003c35 (CONDITIONAL_JUMP)  ; LAB_10003c35
    INC ESI                             ; 10003c8e
        ;   Label: LAB_10003c8e
    JMP 0x10003b26                      ; 10003c8f
        ;   XREF to: 10003b26 (UNCONDITIONAL_JUMP)  ; LAB_10003b26

