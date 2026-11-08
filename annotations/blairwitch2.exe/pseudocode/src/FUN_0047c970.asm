; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047c970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)
;
; Local Variables:
; undefined4       Stack[-0x8d4]:4  local_8d4
; undefined        Stack[-0x514]:1  local_514
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x114]:1  local_114
;
; XREF[3]:
;   FUN_004bbf70 at 004bc405
;   FUN_004bc840 at 004bc96f
;   FUN_004bdb10 at 004bdbc5
;
; Referenced Globals:
;   TerminatedCString s_No_files_found_005d2067
;
; Called Functions:
;   FUN_004610a0
;   FUN_0047be40
;   FUN_00481190
;   FUN_00481250
;   FUN_00481870
;   FUN_00481fc0
;   FUN_004820b0
;   FUN_00482250
;   FUN_0050fe80
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c970
        ;   Label: FUN_0047c970
    PUSH ESI                            ; 0047c971
    PUSH EDI                            ; 0047c972
    PUSH EBP                            ; 0047c973
    SUB ESP,0x8c4                       ; 0047c974
    MOV ESI,dword ptr [ESP + 0x8e8]     ; 0047c97a
    MOV EAX,ESP                         ; 0047c981
    PUSH EAX                            ; 0047c983
    CALL FUN_00481fc0                   ; 0047c984
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481fc0()
    ADD ESP,0x4                         ; 0047c989
    MOV EDX,dword ptr [ESP + 0x8e4]     ; 0047c98c
    PUSH EDX                            ; 0047c993
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 0047c994
    PUSH ECX                            ; 0047c99b
    LEA EAX,[ESP + 0x8]                 ; 0047c99c
    PUSH EAX                            ; 0047c9a0
    CALL FUN_00481870                   ; 0047c9a1
        ;   XREF to: 00481870 (UNCONDITIONAL_CALL)  ; undefined FUN_00481870()
    ADD ESP,0xc                         ; 0047c9a6
    CMP dword ptr [ESP],0x1             ; 0047c9a9
    JL 0x0047cad7                       ; 0047c9ad
        ;   XREF to: 0047cad7 (CONDITIONAL_JUMP)  ; LAB_0047cad7
    MOV EAX,ESP                         ; 0047c9b3
    PUSH EAX                            ; 0047c9b5
    CALL FUN_00481190                   ; 0047c9b6
        ;   XREF to: 00481190 (UNCONDITIONAL_CALL)  ; undefined FUN_00481190()
    ADD ESP,0x4                         ; 0047c9bb
    MOV AH,byte ptr [ESP + 0x8ec]       ; 0047c9be
    MOV EDI,0xffffffff                  ; 0047c9c5
    TEST AH,0x1                         ; 0047c9ca
    JZ 0x0047ca47                       ; 0047c9cd
        ;   XREF to: 0047ca47 (CONDITIONAL_JUMP)  ; LAB_0047ca47
    MOV EBP,dword ptr [ESP]             ; 0047c9cf
    XOR EBX,EBX                         ; 0047c9d2
    TEST EBP,EBP                        ; 0047c9d4
    JLE 0x0047ca47                      ; 0047c9d6
        ;   XREF to: 0047ca47 (CONDITIONAL_JUMP)  ; LAB_0047ca47
    PUSH 0x0                            ; 0047c9d8
        ;   Label: LAB_0047c9d8
    PUSH EBX                            ; 0047c9da
    LEA EAX,[ESP + 0x5c8]               ; 0047c9db
    PUSH EAX                            ; 0047c9e2
    LEA EAX,[ESP + 0xc]                 ; 0047c9e3
    PUSH EAX                            ; 0047c9e7
    CALL FUN_00481250                   ; 0047c9e8
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; undefined FUN_00481250()
    ADD ESP,0x10                        ; 0047c9ed
    PUSH 0x1                            ; 0047c9f0
    PUSH EBX                            ; 0047c9f2
    LEA EAX,[ESP + 0x3c8]               ; 0047c9f3
    PUSH EAX                            ; 0047c9fa
    LEA EAX,[ESP + 0xc]                 ; 0047c9fb
    PUSH EAX                            ; 0047c9ff
    CALL FUN_00481250                   ; 0047ca00
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; undefined FUN_00481250()
    ADD ESP,0x10                        ; 0047ca05
    LEA EAX,[ESP + 0x3c0]               ; 0047ca08
    PUSH EAX                            ; 0047ca0f
    LEA EAX,[ESP + 0x5c4]               ; 0047ca10
    PUSH EAX                            ; 0047ca17
    PUSH 0x0                            ; 0047ca18
    PUSH 0x0                            ; 0047ca1a
    LEA EAX,[ESP + 0x7d0]               ; 0047ca1c
    PUSH EAX                            ; 0047ca23
    CALL FUN_004610a0                   ; 0047ca24
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 0047ca29
    PUSH ESI                            ; 0047ca2c
    LEA EAX,[ESP + 0x7c4]               ; 0047ca2d
    PUSH EAX                            ; 0047ca34
    CALL FUN_005b8130                   ; 0047ca35
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0047ca3a
    TEST EAX,EAX                        ; 0047ca3d
    JNZ 0x0047caff                      ; 0047ca3f
        ;   XREF to: 0047caff (CONDITIONAL_JUMP)  ; LAB_0047caff
    MOV EDI,EBX                         ; 0047ca45
    PUSH 0x0                            ; 0047ca47
        ;   Label: LAB_0047ca47
    PUSH EDI                            ; 0047ca49
    MOV ECX,dword ptr [ESP + 0x8e4]     ; 0047ca4a
    PUSH ECX                            ; 0047ca51
    LEA EAX,[ESP + 0xc]                 ; 0047ca52
    PUSH EAX                            ; 0047ca56
    CALL FUN_00482250                   ; 0047ca57
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; undefined FUN_00482250()
    MOV EBX,EAX                         ; 0047ca5c
    ADD ESP,0x10                        ; 0047ca5e
    TEST EAX,EAX                        ; 0047ca61
    JL 0x0047cb10                       ; 0047ca63
        ;   XREF to: 0047cb10 (CONDITIONAL_JUMP)  ; LAB_0047cb10
    PUSH 0x0                            ; 0047ca69
    PUSH EAX                            ; 0047ca6b
    LEA EAX,[ESP + 0x5c8]               ; 0047ca6c
    PUSH EAX                            ; 0047ca73
    LEA EAX,[ESP + 0xc]                 ; 0047ca74
    PUSH EAX                            ; 0047ca78
    CALL FUN_00481250                   ; 0047ca79
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; undefined FUN_00481250()
    ADD ESP,0x10                        ; 0047ca7e
    PUSH 0x1                            ; 0047ca81
    PUSH EBX                            ; 0047ca83
    LEA EAX,[ESP + 0x3c8]               ; 0047ca84
    PUSH EAX                            ; 0047ca8b
    LEA EAX,[ESP + 0xc]                 ; 0047ca8c
    PUSH EAX                            ; 0047ca90
    CALL FUN_00481250                   ; 0047ca91
        ;   XREF to: 00481250 (UNCONDITIONAL_CALL)  ; undefined FUN_00481250()
    ADD ESP,0x10                        ; 0047ca96
    LEA EAX,[ESP + 0x3c0]               ; 0047ca99
    PUSH EAX                            ; 0047caa0
    LEA EAX,[ESP + 0x5c4]               ; 0047caa1
    PUSH EAX                            ; 0047caa8
    PUSH 0x0                            ; 0047caa9
    PUSH 0x0                            ; 0047caab
    PUSH ESI                            ; 0047caad
    CALL FUN_004610a0                   ; 0047caae
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004610a0()
    ADD ESP,0x14                        ; 0047cab3
    PUSH 0x0                            ; 0047cab6
    LEA EAX,[ESP + 0x4]                 ; 0047cab8
    PUSH EAX                            ; 0047cabc
    MOV EBX,0x1                         ; 0047cabd
    CALL FUN_004820b0                   ; 0047cac2
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
        ;   Label: LAB_0047cac2
    ADD ESP,0x8                         ; 0047cac7
    MOV EAX,EBX                         ; 0047caca
    ADD ESP,0x8c4                       ; 0047cacc
    POP EBP                             ; 0047cad2
    POP EDI                             ; 0047cad3
    POP ESI                             ; 0047cad4
    POP EBX                             ; 0047cad5
    RET                                 ; 0047cad6
    PUSH 0x5d2067                       ; 0047cad7 | = "No files found"
        ;   Label: LAB_0047cad7
    CALL FUN_0050fe80                   ; 0047cadc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 0047cae1
    PUSH EAX                            ; 0047cae4
    MOV EAX,dword ptr [ESP + 0x8dc]     ; 0047cae5
    PUSH EAX                            ; 0047caec
    CALL FUN_0047be40                   ; 0047caed
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x8                         ; 0047caf2
    XOR EBX,EBX                         ; 0047caf5
    PUSH EBX                            ; 0047caf7
    LEA EAX,[ESP + 0x4]                 ; 0047caf8
    PUSH EAX                            ; 0047cafc
    JMP 0x0047cac2                      ; 0047cafd
        ;   XREF to: 0047cac2 (UNCONDITIONAL_JUMP)  ; LAB_0047cac2
    MOV EDX,dword ptr [ESP]             ; 0047caff
        ;   Label: LAB_0047caff
    INC EBX                             ; 0047cb02
    CMP EBX,EDX                         ; 0047cb03
    JL 0x0047c9d8                       ; 0047cb05
        ;   XREF to: 0047c9d8 (CONDITIONAL_JUMP)  ; LAB_0047c9d8
    JMP 0x0047ca47                      ; 0047cb0b
        ;   XREF to: 0047ca47 (UNCONDITIONAL_JUMP)  ; LAB_0047ca47
    PUSH 0x0                            ; 0047cb10
        ;   Label: LAB_0047cb10
    XOR EBX,EAX                         ; 0047cb12
    LEA EAX,[ESP + 0x4]                 ; 0047cb14
    PUSH EAX                            ; 0047cb18
    JMP 0x0047cac2                      ; 0047cb19
        ;   XREF to: 0047cac2 (UNCONDITIONAL_JUMP)  ; LAB_0047cac2

