; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047db70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)
;
; Local Variables:
; undefined4       Stack[-0x8d4]:4  local_8d4
; undefined        Stack[-0x514]:1  local_514
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x114]:1  local_114
;
; XREF[3]:
;   FUN_004bdfb0 at 004be468
;   FUN_004be8d0 at 004bea0a
;   FUN_004bfa40 at 004bfaf5
;
; Referenced Globals:
;   TerminatedCString s_No_files_found_005bcec2
;
; Called Functions:
;   FUN_00465e80
;   FUN_0047cf40
;   FUN_00482390
;   FUN_00482450
;   FUN_00482a70
;   FUN_004831c0
;   FUN_004832b0
;   FUN_00483450
;   FUN_00508960
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047db70
        ;   Label: FUN_0047db70
    PUSH ESI                            ; 0047db71
    PUSH EDI                            ; 0047db72
    PUSH EBP                            ; 0047db73
    SUB ESP,0x8c4                       ; 0047db74
    MOV ESI,dword ptr [ESP + 0x8e8]     ; 0047db7a
    MOV EAX,ESP                         ; 0047db81
    PUSH EAX                            ; 0047db83
    CALL FUN_004831c0                   ; 0047db84
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004831c0()
    ADD ESP,0x4                         ; 0047db89
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 0047db8c
    PUSH EDX                            ; 0047db93
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 0047db94
    PUSH ECX                            ; 0047db9b
    LEA EAX,[ESP + 0x8]                 ; 0047db9c
    PUSH EAX                            ; 0047dba0
    CALL FUN_00482a70                   ; 0047dba1
        ;   XREF to: 00482a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00482a70()
    ADD ESP,0xc                         ; 0047dba6
    CMP dword ptr [ESP],0x1             ; 0047dba9
    JL 0x0047dcd7                       ; 0047dbad
        ;   XREF to: 0047dcd7 (CONDITIONAL_JUMP)  ; LAB_0047dcd7
    MOV EAX,ESP                         ; 0047dbb3
    PUSH EAX                            ; 0047dbb5
    CALL FUN_00482390                   ; 0047dbb6
        ;   XREF to: 00482390 (UNCONDITIONAL_CALL)  ; undefined FUN_00482390()
    ADD ESP,0x4                         ; 0047dbbb
    MOV AH,byte ptr [ESP + 0x8ec]       ; 0047dbbe
    MOV EDI,0xffffffff                  ; 0047dbc5
    TEST AH,0x1                         ; 0047dbca
    JZ 0x0047dc47                       ; 0047dbcd
        ;   XREF to: 0047dc47 (CONDITIONAL_JUMP)  ; LAB_0047dc47
    MOV EBP,dword ptr [ESP]             ; 0047dbcf
    XOR EBX,EBX                         ; 0047dbd2
    TEST EBP,EBP                        ; 0047dbd4
    JLE 0x0047dc47                      ; 0047dbd6
        ;   XREF to: 0047dc47 (CONDITIONAL_JUMP)  ; LAB_0047dc47
    PUSH 0x0                            ; 0047dbd8
        ;   Label: LAB_0047dbd8
    PUSH EBX                            ; 0047dbda
    LEA EAX,[ESP + 0x5c8]               ; 0047dbdb
    PUSH EAX                            ; 0047dbe2
    LEA EAX,[ESP + 0xc]                 ; 0047dbe3
    PUSH EAX                            ; 0047dbe7
    CALL FUN_00482450                   ; 0047dbe8
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; undefined FUN_00482450()
    ADD ESP,0x10                        ; 0047dbed
    PUSH 0x1                            ; 0047dbf0
    PUSH EBX                            ; 0047dbf2
    LEA EAX,[ESP + 0x3c8]               ; 0047dbf3
    PUSH EAX                            ; 0047dbfa
    LEA EAX,[ESP + 0xc]                 ; 0047dbfb
    PUSH EAX                            ; 0047dbff
    CALL FUN_00482450                   ; 0047dc00
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; undefined FUN_00482450()
    ADD ESP,0x10                        ; 0047dc05
    LEA EAX,[ESP + 0x3c0]               ; 0047dc08
    PUSH EAX                            ; 0047dc0f
    LEA EAX,[ESP + 0x5c4]               ; 0047dc10
    PUSH EAX                            ; 0047dc17
    PUSH 0x0                            ; 0047dc18
    PUSH 0x0                            ; 0047dc1a
    LEA EAX,[ESP + 0x7d0]               ; 0047dc1c
    PUSH EAX                            ; 0047dc23
    CALL FUN_00465e80                   ; 0047dc24
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e80()
    ADD ESP,0x14                        ; 0047dc29
    PUSH ESI                            ; 0047dc2c
    LEA EAX,[ESP + 0x7c4]               ; 0047dc2d
    PUSH EAX                            ; 0047dc34
    CALL FUN_005a3260                   ; 0047dc35
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0047dc3a
    TEST EAX,EAX                        ; 0047dc3d
    JNZ 0x0047dcff                      ; 0047dc3f
        ;   XREF to: 0047dcff (CONDITIONAL_JUMP)  ; LAB_0047dcff
    MOV EDI,EBX                         ; 0047dc45
    PUSH 0x0                            ; 0047dc47
        ;   Label: LAB_0047dc47
    PUSH EDI                            ; 0047dc49
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 0047dc4a
    PUSH ECX                            ; 0047dc51
    LEA EAX,[ESP + 0xc]                 ; 0047dc52
    PUSH EAX                            ; 0047dc56
    CALL FUN_00483450                   ; 0047dc57
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; undefined FUN_00483450()
    MOV EBX,EAX                         ; 0047dc5c
    ADD ESP,0x10                        ; 0047dc5e
    TEST EAX,EAX                        ; 0047dc61
    JL 0x0047dd10                       ; 0047dc63
        ;   XREF to: 0047dd10 (CONDITIONAL_JUMP)  ; LAB_0047dd10
    PUSH 0x0                            ; 0047dc69
    PUSH EAX                            ; 0047dc6b
    LEA EAX,[ESP + 0x5c8]               ; 0047dc6c
    PUSH EAX                            ; 0047dc73
    LEA EAX,[ESP + 0xc]                 ; 0047dc74
    PUSH EAX                            ; 0047dc78
    CALL FUN_00482450                   ; 0047dc79
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; undefined FUN_00482450()
    ADD ESP,0x10                        ; 0047dc7e
    PUSH 0x1                            ; 0047dc81
    PUSH EBX                            ; 0047dc83
    LEA EAX,[ESP + 0x3c8]               ; 0047dc84
    PUSH EAX                            ; 0047dc8b
    LEA EAX,[ESP + 0xc]                 ; 0047dc8c
    PUSH EAX                            ; 0047dc90
    CALL FUN_00482450                   ; 0047dc91
        ;   XREF to: 00482450 (UNCONDITIONAL_CALL)  ; undefined FUN_00482450()
    ADD ESP,0x10                        ; 0047dc96
    LEA EAX,[ESP + 0x3c0]               ; 0047dc99
    PUSH EAX                            ; 0047dca0
    LEA EAX,[ESP + 0x5c4]               ; 0047dca1
    PUSH EAX                            ; 0047dca8
    PUSH 0x0                            ; 0047dca9
    PUSH 0x0                            ; 0047dcab
    PUSH ESI                            ; 0047dcad
    CALL FUN_00465e80                   ; 0047dcae
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e80()
    ADD ESP,0x14                        ; 0047dcb3
    PUSH 0x0                            ; 0047dcb6
    LEA EAX,[ESP + 0x4]                 ; 0047dcb8
    PUSH EAX                            ; 0047dcbc
    MOV EBX,0x1                         ; 0047dcbd
    CALL FUN_004832b0                   ; 0047dcc2
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004832b0()
        ;   Label: LAB_0047dcc2
    ADD ESP,0x8                         ; 0047dcc7
    MOV EAX,EBX                         ; 0047dcca
    ADD ESP,0x8c4                       ; 0047dccc
    POP EBP                             ; 0047dcd2
    POP EDI                             ; 0047dcd3
    POP ESI                             ; 0047dcd4
    POP EBX                             ; 0047dcd5
    RET                                 ; 0047dcd6
    PUSH 0x5bcec2                       ; 0047dcd7 | = "No files found"
        ;   Label: LAB_0047dcd7
    CALL FUN_00508960                   ; 0047dcdc
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 0047dce1
    PUSH EAX                            ; 0047dce4
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 0047dce5
    PUSH EAX                            ; 0047dcec
    CALL FUN_0047cf40                   ; 0047dced
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 0047dcf2
    XOR EBX,EBX                         ; 0047dcf5
    PUSH EBX                            ; 0047dcf7
    LEA EAX,[ESP + 0x4]                 ; 0047dcf8
    PUSH EAX                            ; 0047dcfc
    JMP 0x0047dcc2                      ; 0047dcfd
        ;   XREF to: 0047dcc2 (UNCONDITIONAL_JUMP)  ; LAB_0047dcc2
    MOV EDX,dword ptr [ESP]             ; 0047dcff
        ;   Label: LAB_0047dcff
    INC EBX                             ; 0047dd02
    CMP EBX,EDX                         ; 0047dd03
    JL 0x0047dbd8                       ; 0047dd05
        ;   XREF to: 0047dbd8 (CONDITIONAL_JUMP)  ; LAB_0047dbd8
    JMP 0x0047dc47                      ; 0047dd0b
        ;   XREF to: 0047dc47 (UNCONDITIONAL_JUMP)  ; LAB_0047dc47
    PUSH 0x0                            ; 0047dd10
        ;   Label: LAB_0047dd10
    XOR EBX,EAX                         ; 0047dd12
    LEA EAX,[ESP + 0x4]                 ; 0047dd14
    PUSH EAX                            ; 0047dd18
    JMP 0x0047dcc2                      ; 0047dd19
        ;   XREF to: 0047dcc2 (UNCONDITIONAL_JUMP)  ; LAB_0047dcc2

