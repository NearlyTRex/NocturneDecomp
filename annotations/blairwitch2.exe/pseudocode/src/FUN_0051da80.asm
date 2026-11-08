; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051da80(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00433000 at 004331b5
;
; Referenced Globals:
;   void* switchdataD_0051da58 = 0051db8e
;   undefined4 DAT_006141e0
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01e61b58
;   undefined4 DAT_01e61b5c
;   undefined4 DAT_01e61b60
;   undefined4 DAT_01e61bb0
;   ... and 2 more
;
; Called Functions:
;   FUN_0051c5c0
;   FUN_0051c630
;   FUN_0051c6b0
;   FUN_0051c720
;   FUN_0051c760
;   FUN_0055d6d7
;   FUN_0055f8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051da80
        ;   Label: FUN_0051da80
    PUSH ESI                            ; 0051da81
    PUSH EDI                            ; 0051da82
    PUSH EBP                            ; 0051da83
    SUB ESP,0x14                        ; 0051da84
    CMP dword ptr [0x006141e0],0x0      ; 0051da87 | DAT_006141e0
    JZ 0x0051daf7                       ; 0051da8e
        ;   XREF to: 0051daf7 (CONDITIONAL_JUMP)  ; LAB_0051daf7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051da90
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051da94
    XOR ESI,ESI                         ; 0051da98
    TEST EBX,EBX                        ; 0051da9a
    JLE 0x0051daf7                      ; 0051da9c
        ;   XREF to: 0051daf7 (CONDITIONAL_JUMP)  ; LAB_0051daf7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051da9e
    TEST byte ptr [ECX + 0x13],0x80     ; 0051daa2
        ;   Label: LAB_0051daa2
    JZ 0x0051daef                       ; 0051daa6
        ;   XREF to: 0051daef (CONDITIONAL_JUMP)  ; LAB_0051daef
    MOV EAX,0x7fffffff                  ; 0051daa8
    MOV EDX,EAX                         ; 0051daad
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051daaf
    SAR EDX,0x1f                        ; 0051dab2
    IDIV EBX                            ; 0051dab5
    MOV dword ptr [ECX + 0xc],EAX       ; 0051dab7
    MOV EDX,dword ptr [0x01c35e38]      ; 0051daba | DAT_01c35e38
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051dac0
    MOV EAX,dword ptr [ECX]             ; 0051dac3
    IMUL EDX                            ; 0051dac5
    IDIV EBX                            ; 0051dac7
    MOV EDX,dword ptr [0x01c35e40]      ; 0051dac9 | DAT_01c35e40
    ADD EAX,EDX                         ; 0051dacf
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051dad1
    MOV dword ptr [ECX + 0x10],EAX      ; 0051dad4
    MOV EDX,dword ptr [0x01c35e3c]      ; 0051dad7 | DAT_01c35e3c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0051dadd
    IMUL EDX                            ; 0051dae0
    IDIV EBX                            ; 0051dae2
    MOV EDX,dword ptr [0x01c35e44]      ; 0051dae4 | DAT_01c35e44
    ADD EAX,EDX                         ; 0051daea
    MOV dword ptr [ECX + 0x14],EAX      ; 0051daec
    INC ESI                             ; 0051daef
        ;   Label: LAB_0051daef
    ADD ECX,0x30                        ; 0051daf0
    CMP ESI,EDI                         ; 0051daf3
    JL 0x0051daa2                       ; 0051daf5
        ;   XREF to: 0051daa2 (CONDITIONAL_JUMP)  ; LAB_0051daa2
    CMP dword ptr [0x0070ca7c],0x0      ; 0051daf7 | DAT_0070ca7c
        ;   Label: LAB_0051daf7
    JZ 0x0051db5a                       ; 0051dafe
        ;   XREF to: 0051db5a (CONDITIONAL_JUMP)  ; LAB_0051db5a
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051db00
    MOV ESI,dword ptr [ESP + 0x28]      ; 0051db04
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051db08
    ADD EBX,0x30                        ; 0051db0c
    ADD ESI,0x60                        ; 0051db0f
    CMP EAX,0x3                         ; 0051db12
    JLE 0x0051dd3b                      ; 0051db15
        ;   XREF to: 0051dd3b (CONDITIONAL_JUMP)  ; LAB_0051dd3b
    SUB EAX,0x2                         ; 0051db1b
    XOR EDI,EDI                         ; 0051db1e
    XOR EBP,EBP                         ; 0051db20
    MOV dword ptr [ESP + 0x4],EAX       ; 0051db22
    TEST EAX,EAX                        ; 0051db26
    JLE 0x0051db50                      ; 0051db28
        ;   XREF to: 0051db50 (CONDITIONAL_JUMP)  ; LAB_0051db50
    PUSH ESI                            ; 0051db2a
        ;   Label: LAB_0051db2a
    PUSH EBX                            ; 0051db2b
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051db2c
    PUSH ECX                            ; 0051db30
    CALL FUN_0051c760                   ; 0051db31
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051db36
    TEST EAX,EAX                        ; 0051db39
    JZ 0x0051dd35                       ; 0051db3b
        ;   XREF to: 0051dd35 (CONDITIONAL_JUMP)  ; LAB_0051dd35
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051db41
        ;   Label: LAB_0051db41
    ADD EBX,0x30                        ; 0051db45
    INC EDI                             ; 0051db48
    ADD ESI,0x30                        ; 0051db49
    CMP EDI,EAX                         ; 0051db4c
    JL 0x0051db2a                       ; 0051db4e
        ;   XREF to: 0051db2a (CONDITIONAL_JUMP)  ; LAB_0051db2a
    CMP EBP,dword ptr [ESP + 0x4]       ; 0051db50
        ;   Label: LAB_0051db50
    JZ 0x0051dd2d                       ; 0051db54
        ;   XREF to: 0051dd2d (CONDITIONAL_JUMP)  ; LAB_0051dd2d
    CMP dword ptr [0x01c37788],0x0      ; 0051db5a | DAT_01c37788
        ;   Label: LAB_0051db5a
    JZ 0x0051db70                       ; 0051db61
        ;   XREF to: 0051db70 (CONDITIONAL_JUMP)  ; LAB_0051db70
    CMP dword ptr [0x0070ca74],0x0      ; 0051db63 | DAT_0070ca74
    JZ 0x0051dd5a                       ; 0051db6a
        ;   XREF to: 0051dd5a (CONDITIONAL_JUMP)  ; LAB_0051dd5a
    MOV EDI,dword ptr [0x01e61b58]      ; 0051db70 | DAT_01e61b58
        ;   Label: LAB_0051db70
    INC EDI                             ; 0051db76
    MOV EAX,[0x01c38b58]                ; 0051db77 | DAT_01c38b58
    MOV dword ptr [0x01e61b58],EDI      ; 0051db7c | DAT_01e61b58
    CMP EAX,0x6                         ; 0051db82
    JA 0x0051db8e                       ; 0051db85
        ;   XREF to: 0051db8e (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x51da58]  ; 0051db87 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,0x4b0                       ; 0051db8e
        ;   Label: caseD_0
    XOR EBX,EBX                         ; 0051db93
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051db95
    MOV dword ptr [0x01e62064],EBX      ; 0051db99 | DAT_01e62064
    MOV dword ptr [0x01e61b5c],EBX      ; 0051db9f | DAT_01e61b5c
    MOV dword ptr [ESP + 0x8],EBX       ; 0051dba5
    MOV dword ptr [0x01e62060],ECX      ; 0051dba9 | DAT_01e62060
    TEST EBP,EBP                        ; 0051dbaf
    JLE 0x0051dc11                      ; 0051dbb1
        ;   XREF to: 0051dc11 (CONDITIONAL_JUMP)  ; LAB_0051dc11
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051dbb3
        ;   Label: LAB_0051dbb3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051dbb7
    INC EAX                             ; 0051dbbb
    CMP EAX,EDX                         ; 0051dbbc
    JL 0x0051dbc2                       ; 0051dbbe
        ;   XREF to: 0051dbc2 (CONDITIONAL_JUMP)  ; LAB_0051dbc2
    XOR EAX,EAX                         ; 0051dbc0
    MOV EDX,EAX                         ; 0051dbc2
        ;   Label: LAB_0051dbc2
    SHL EAX,0x2                         ; 0051dbc4
    SUB EAX,EDX                         ; 0051dbc7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0051dbc9
    SHL EAX,0x4                         ; 0051dbcd
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051dbd0
    ADD ESI,EAX                         ; 0051dbd4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051dbd6
    SUB EAX,EDX                         ; 0051dbdd
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051dbdf
    SHL EAX,0x4                         ; 0051dbe3
    ADD ECX,EAX                         ; 0051dbe6
    MOV EDI,ESI                         ; 0051dbe8
    MOV EDX,dword ptr [ECX + 0x14]      ; 0051dbea
    MOV EAX,dword ptr [ESI + 0x14]      ; 0051dbed
    SAR EDX,0x10                        ; 0051dbf0
    SAR EAX,0x10                        ; 0051dbf3
    MOV EBX,ECX                         ; 0051dbf6
    CMP EDX,EAX                         ; 0051dbf8
    JNZ 0x0051de02                      ; 0051dbfa
        ;   XREF to: 0051de02 (CONDITIONAL_JUMP)  ; LAB_0051de02
    MOV ESI,dword ptr [ESP + 0x8]       ; 0051dc00
        ;   Label: LAB_0051dc00
    INC ESI                             ; 0051dc04
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051dc05
    MOV dword ptr [ESP + 0x8],ESI       ; 0051dc09
    CMP ESI,EDI                         ; 0051dc0d
    JL 0x0051dbb3                       ; 0051dc0f
        ;   XREF to: 0051dbb3 (CONDITIONAL_JUMP)  ; LAB_0051dbb3
    MOV EAX,0x1e61b60                   ; 0051dc11
        ;   Label: LAB_0051dc11
    MOV EBP,dword ptr [0x01e61b5c]      ; 0051dc16 | DAT_01e61b5c
    MOV EBX,dword ptr [0x01e62060]      ; 0051dc1c | DAT_01e62060
    XOR ECX,ECX                         ; 0051dc22
    TEST EBP,EBP                        ; 0051dc24
    JLE 0x0051dff0                      ; 0051dc26
        ;   XREF to: 0051dff0 (CONDITIONAL_JUMP)  ; LAB_0051dff0
    MOV EDX,dword ptr [0x01e61b5c]      ; 0051dc2c | DAT_01e61b5c
    CMP EBX,dword ptr [EAX]             ; 0051dc32 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051dc32
    JNZ 0x0051dfe4                      ; 0051dc34
        ;   XREF to: 0051dfe4 (CONDITIONAL_JUMP)  ; LAB_0051dfe4
    TEST EAX,EAX                        ; 0051dc3a
    JZ 0x0051dfe4                       ; 0051dc3c
        ;   XREF to: 0051dfe4 (CONDITIONAL_JUMP)  ; LAB_0051dfe4
    MOV dword ptr [ESP + 0x10],EAX      ; 0051dc42 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051dc42
    TEST EAX,EAX                        ; 0051dc46
    JZ 0x0051dd2d                       ; 0051dc48
        ;   XREF to: 0051dd2d (CONDITIONAL_JUMP)  ; LAB_0051dd2d
    MOV EDI,dword ptr [0x01e61b5c]      ; 0051dc4e | DAT_01e61b5c
    MOV ECX,dword ptr [0x01e62060]      ; 0051dc54 | DAT_01e62060
    MOV EBX,EAX                         ; 0051dc5a
    XOR EDX,EDX                         ; 0051dc5c
    MOV EAX,0x1e61b60                   ; 0051dc5e
    TEST EDI,EDI                        ; 0051dc63
    JLE 0x0051e003                      ; 0051dc65
        ;   XREF to: 0051e003 (CONDITIONAL_JUMP)  ; LAB_0051e003
    MOV EBP,dword ptr [0x01e61b5c]      ; 0051dc6b | DAT_01e61b5c
    CMP ECX,dword ptr [EAX]             ; 0051dc71 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051dc71
    JNZ 0x0051dff7                      ; 0051dc73
        ;   XREF to: 0051dff7 (CONDITIONAL_JUMP)  ; LAB_0051dff7
    CMP EAX,EBX                         ; 0051dc79
    JZ 0x0051dff7                       ; 0051dc7b
        ;   XREF to: 0051dff7 (CONDITIONAL_JUMP)  ; LAB_0051dff7
    MOV EBP,EAX                         ; 0051dc81
        ;   Label: LAB_0051dc81
    TEST EAX,EAX                        ; 0051dc83
    JZ 0x0051dd2d                       ; 0051dc85
        ;   XREF to: 0051dd2d (CONDITIONAL_JUMP)  ; LAB_0051dd2d
    MOV EAX,[0x01e62060]                ; 0051dc8b | DAT_01e62060
    MOV dword ptr [ESP + 0xc],EAX       ; 0051dc90
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051dc94
        ;   Label: LAB_0051dc94
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051dc98
    CMP EAX,dword ptr [EDX + 0x4]       ; 0051dc9c
    JL 0x0051dcde                       ; 0051dc9f
        ;   XREF to: 0051dcde (CONDITIONAL_JUMP)  ; LAB_0051dcde
    MOV ESI,dword ptr [0x01e61b5c]      ; 0051dca1 | DAT_01e61b5c
    MOV EBX,EAX                         ; 0051dca7
    MOV ECX,EBP                         ; 0051dca9
    MOV dword ptr [EDX],0xffffffff      ; 0051dcab
    MOV EAX,0x1e61b60                   ; 0051dcb1
    XOR EDX,EDX                         ; 0051dcb6
    TEST ESI,ESI                        ; 0051dcb8
    JLE 0x0051e016                      ; 0051dcba
        ;   XREF to: 0051e016 (CONDITIONAL_JUMP)  ; LAB_0051e016
    MOV EDI,dword ptr [0x01e61b5c]      ; 0051dcc0 | DAT_01e61b5c
    CMP EBX,dword ptr [EAX]             ; 0051dcc6 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051dcc6
    JNZ 0x0051e00a                      ; 0051dcc8
        ;   XREF to: 0051e00a (CONDITIONAL_JUMP)  ; LAB_0051e00a
    CMP EAX,ECX                         ; 0051dcce
    JZ 0x0051e00a                       ; 0051dcd0
        ;   XREF to: 0051e00a (CONDITIONAL_JUMP)  ; LAB_0051e00a
    MOV dword ptr [ESP + 0x10],EAX      ; 0051dcd6 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051dcd6
    TEST EAX,EAX                        ; 0051dcda
    JZ 0x0051dd2d                       ; 0051dcdc
        ;   XREF to: 0051dd2d (CONDITIONAL_JUMP)  ; LAB_0051dd2d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051dcde
        ;   Label: LAB_0051dcde
    CMP EAX,dword ptr [EBP + 0x4]       ; 0051dce2
    JL 0x0051e039                       ; 0051dce5
        ;   XREF to: 0051e039 (CONDITIONAL_JUMP)  ; LAB_0051e039
    MOV EBX,dword ptr [0x01e61b5c]      ; 0051dceb | DAT_01e61b5c
    MOV ECX,EAX                         ; 0051dcf1
    MOV dword ptr [EBP],0xffffffff      ; 0051dcf3
    XOR EDX,EDX                         ; 0051dcfa
    MOV EBP,dword ptr [ESP + 0x10]      ; 0051dcfc
    MOV EAX,0x1e61b60                   ; 0051dd00
    TEST EBX,EBX                        ; 0051dd05
    JLE 0x0051e029                      ; 0051dd07
        ;   XREF to: 0051e029 (CONDITIONAL_JUMP)  ; LAB_0051e029
    MOV ESI,dword ptr [0x01e61b5c]      ; 0051dd0d | DAT_01e61b5c
    CMP ECX,dword ptr [EAX]             ; 0051dd13 | DAT_01e61b60 | DAT_01e61bb0
        ;   Label: LAB_0051dd13
    JNZ 0x0051e01d                      ; 0051dd15
        ;   XREF to: 0051e01d (CONDITIONAL_JUMP)  ; LAB_0051e01d
    CMP EAX,EBP                         ; 0051dd1b
    JZ 0x0051e01d                       ; 0051dd1d
        ;   XREF to: 0051e01d (CONDITIONAL_JUMP)  ; LAB_0051e01d
    MOV EBP,EAX                         ; 0051dd23
    TEST EAX,EAX                        ; 0051dd25
    JNZ 0x0051e039                      ; 0051dd27
        ;   XREF to: 0051e039 (CONDITIONAL_JUMP)  ; LAB_0051e039
    ADD ESP,0x14                        ; 0051dd2d
        ;   Label: LAB_0051dd2d
    POP EBP                             ; 0051dd30
    POP EDI                             ; 0051dd31
    POP ESI                             ; 0051dd32
    POP EBX                             ; 0051dd33
    RET                                 ; 0051dd34
    INC EBP                             ; 0051dd35
        ;   Label: LAB_0051dd35
    JMP 0x0051db41                      ; 0051dd36
        ;   XREF to: 0051db41 (UNCONDITIONAL_JUMP)  ; LAB_0051db41
    PUSH ESI                            ; 0051dd3b
        ;   Label: LAB_0051dd3b
    PUSH EBX                            ; 0051dd3c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051dd3d
    PUSH EDX                            ; 0051dd41
    CALL FUN_0051c760                   ; 0051dd42
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051dd47
    TEST EAX,EAX                        ; 0051dd4a
    JNZ 0x0051db5a                      ; 0051dd4c
        ;   XREF to: 0051db5a (CONDITIONAL_JUMP)  ; LAB_0051db5a
    ADD ESP,0x14                        ; 0051dd52
    POP EBP                             ; 0051dd55
    POP EDI                             ; 0051dd56
    POP ESI                             ; 0051dd57
    POP EBX                             ; 0051dd58
    RET                                 ; 0051dd59
    MOV EAX,[0x01c38b54]                ; 0051dd5a | DAT_01c38b54
        ;   Label: LAB_0051dd5a
    PUSH EAX                            ; 0051dd5f
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051dd60
    PUSH EDX                            ; 0051dd64
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051dd65
    PUSH ECX                            ; 0051dd69
    CALL FUN_0055f8f0                   ; 0051dd6a
        ;   XREF to: 0055f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f8f0()
    ADD ESP,0xc                         ; 0051dd6f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051dd72
    MOV EBX,dword ptr [0x01e61b58]      ; 0051dd76 | DAT_01e61b58
    SUB EAX,0x2                         ; 0051dd7c
    ADD EBX,EAX                         ; 0051dd7f
    MOV dword ptr [0x01e61b58],EBX      ; 0051dd81 | DAT_01e61b58
    ADD ESP,0x14                        ; 0051dd87
    POP EBP                             ; 0051dd8a
    POP EDI                             ; 0051dd8b
    POP ESI                             ; 0051dd8c
    POP EBX                             ; 0051dd8d
    RET                                 ; 0051dd8e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051dd8f
        ;   Label: caseD_1
    PUSH EAX                            ; 0051dd93
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051dd94
    PUSH EDX                            ; 0051dd98
    CALL FUN_0051c5c0                   ; 0051dd99
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c5c0()
    ADD ESP,0x8                         ; 0051dd9e
    JMP 0x0051db8e                      ; 0051dda1
        ;   XREF to: 0051db8e (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051dda6
        ;   Label: caseD_2
    PUSH EDI                            ; 0051ddaa
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051ddab
    PUSH EBP                            ; 0051ddaf
    CALL FUN_0051c630                   ; 0051ddb0
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c630()
    ADD ESP,0x8                         ; 0051ddb5
    JMP 0x0051db8e                      ; 0051ddb8
        ;   XREF to: 0051db8e (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051ddbd
        ;   Label: caseD_3
    PUSH EBX                            ; 0051ddc1
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0051ddc2
    PUSH ESI                            ; 0051ddc6
    CALL FUN_0051c6b0                   ; 0051ddc7
        ;   XREF to: 0051c6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c6b0()
    ADD ESP,0x8                         ; 0051ddcc
    JMP 0x0051db8e                      ; 0051ddcf
        ;   XREF to: 0051db8e (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051ddd4
        ;   Label: caseD_5
    PUSH EDX                            ; 0051ddd8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0051ddd9
    PUSH ECX                            ; 0051dddd
    CALL FUN_0051c630                   ; 0051ddde
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c630()
    ADD ESP,0x8                         ; 0051dde3
    JMP 0x0051db8e                      ; 0051dde6
        ;   XREF to: 0051db8e (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051ddeb
        ;   Label: caseD_6
    PUSH EBP                            ; 0051ddef
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051ddf0
    PUSH EAX                            ; 0051ddf4
    CALL FUN_0051c720                   ; 0051ddf5
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c720()
    ADD ESP,0x8                         ; 0051ddfa
    JMP 0x0051db8e                      ; 0051ddfd
        ;   XREF to: 0051db8e (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ECX + 0x14]      ; 0051de02
        ;   Label: LAB_0051de02
    CMP EBP,dword ptr [ESI + 0x14]      ; 0051de05
    JLE 0x0051de14                      ; 0051de08
        ;   XREF to: 0051de14 (CONDITIONAL_JUMP)  ; LAB_0051de14
    MOV EDI,ECX                         ; 0051de0a
    MOV EBX,ESI                         ; 0051de0c
    MOV ECX,EDX                         ; 0051de0e
    MOV EDX,EAX                         ; 0051de10
    MOV EAX,ECX                         ; 0051de12
    IMUL EBP,dword ptr [0x01e61b5c],0x50 ; 0051de14 | DAT_01e61b5c
        ;   Label: LAB_0051de14
    ADD EBP,0x1e61b60                   ; 0051de1b
    MOV dword ptr [EBP],EDX             ; 0051de21 | DAT_01e61b60
    MOV ESI,dword ptr [0x01e62060]      ; 0051de24 | DAT_01e62060
    MOV dword ptr [EBP + 0x4],EAX       ; 0051de2a
    CMP EDX,ESI                         ; 0051de2d
    JGE 0x0051de37                      ; 0051de2f
        ;   XREF to: 0051de37 (CONDITIONAL_JUMP)  ; LAB_0051de37
    MOV dword ptr [0x01e62060],EDX      ; 0051de31 | DAT_01e62060
    CMP EAX,dword ptr [0x01e62064]      ; 0051de37 | DAT_01e62064
        ;   Label: LAB_0051de37
    JLE 0x0051de44                      ; 0051de3d
        ;   XREF to: 0051de44 (CONDITIONAL_JUMP)  ; LAB_0051de44
    MOV [0x01e62064],EAX                ; 0051de3f | DAT_01e62064
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051de44
        ;   Label: LAB_0051de44
    MOV ECX,dword ptr [EDI + 0x14]      ; 0051de47
    SUB ECX,ESI                         ; 0051de4a
    CMP ECX,0x10000                     ; 0051de4c
    JNC 0x0051dfd4                      ; 0051de52
        ;   XREF to: 0051dfd4 (CONDITIONAL_JUMP)  ; LAB_0051dfd4
    XOR ECX,ECX                         ; 0051de58
    MOV EAX,dword ptr [EDI + 0x10]      ; 0051de5a
        ;   Label: LAB_0051de5a
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051de5d
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051de60
    SUB EAX,EDX                         ; 0051de63
    AND ESI,0xffff                      ; 0051de65
    MOV EDX,EAX                         ; 0051de6b
    MOV EAX,ECX                         ; 0051de6d
    XOR SI,0xffff                       ; 0051de6f
    IMUL EDX                            ; 0051de73
    SHRD EAX,EDX,0x10                   ; 0051de75
    MOV EDX,EAX                         ; 0051de79
    MOV dword ptr [EBP + 0xc],EAX       ; 0051de7b
    MOV EAX,ESI                         ; 0051de7e
    IMUL EDX                            ; 0051de80
    SHRD EAX,EDX,0x10                   ; 0051de82
    MOV dword ptr [ESP],EAX             ; 0051de86
    MOV EDX,dword ptr [ESP]             ; 0051de89
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051de8c
    ADD EAX,EDX                         ; 0051de8f
    MOV dword ptr [EBP + 0x8],EAX       ; 0051de91
    MOV EAX,dword ptr [EDI + 0x18]      ; 0051de94
    MOV EDX,dword ptr [EBX + 0x18]      ; 0051de97
    SUB EAX,EDX                         ; 0051de9a
    MOV EDX,EAX                         ; 0051de9c
    MOV EAX,ECX                         ; 0051de9e
    IMUL EDX                            ; 0051dea0
    SHRD EAX,EDX,0x10                   ; 0051dea2
    MOV EDX,EAX                         ; 0051dea6
    MOV dword ptr [EBP + 0x1c],EAX      ; 0051dea8
    MOV EAX,ESI                         ; 0051deab
    IMUL EDX                            ; 0051dead
    SHRD EAX,EDX,0x10                   ; 0051deaf
    MOV dword ptr [ESP],EAX             ; 0051deb3
    MOV EDX,dword ptr [ESP]             ; 0051deb6
    MOV EAX,dword ptr [EBX + 0x18]      ; 0051deb9
    ADD EAX,EDX                         ; 0051debc
    MOV dword ptr [EBP + 0x18],EAX      ; 0051debe
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051dec1
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051dec4
    SUB EAX,EDX                         ; 0051dec7
    MOV EDX,EAX                         ; 0051dec9
    MOV EAX,ECX                         ; 0051decb
    IMUL EDX                            ; 0051decd
    SHRD EAX,EDX,0x10                   ; 0051decf
    MOV EDX,EAX                         ; 0051ded3
    MOV dword ptr [EBP + 0x24],EAX      ; 0051ded5
    MOV EAX,ESI                         ; 0051ded8
    IMUL EDX                            ; 0051deda
    SHRD EAX,EDX,0x10                   ; 0051dedc
    MOV dword ptr [ESP],EAX             ; 0051dee0
    MOV EDX,dword ptr [ESP]             ; 0051dee3
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051dee6
    ADD EAX,EDX                         ; 0051dee9
    MOV dword ptr [EBP + 0x20],EAX      ; 0051deeb
    MOV EAX,dword ptr [EDI + 0x20]      ; 0051deee
    MOV EDX,dword ptr [EBX + 0x20]      ; 0051def1
    SUB EAX,EDX                         ; 0051def4
    MOV EDX,EAX                         ; 0051def6
    MOV EAX,ECX                         ; 0051def8
    IMUL EDX                            ; 0051defa
    SHRD EAX,EDX,0x10                   ; 0051defc
    MOV EDX,EAX                         ; 0051df00
    MOV dword ptr [EBP + 0x14],EAX      ; 0051df02
    MOV EAX,ESI                         ; 0051df05
    IMUL EDX                            ; 0051df07
    SHRD EAX,EDX,0x10                   ; 0051df09
    MOV dword ptr [ESP],EAX             ; 0051df0d
    MOV EDX,dword ptr [ESP]             ; 0051df10
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051df13
    ADD EAX,EDX                         ; 0051df16
    MOV dword ptr [EBP + 0x10],EAX      ; 0051df18
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0051df1b
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0051df1e
    SUB EAX,EDX                         ; 0051df21
    MOV EDX,EAX                         ; 0051df23
    MOV EAX,ECX                         ; 0051df25
    IMUL EDX                            ; 0051df27
    SHRD EAX,EDX,0x10                   ; 0051df29
    MOV EDX,EAX                         ; 0051df2d
    MOV dword ptr [EBP + 0x34],EAX      ; 0051df2f
    MOV EAX,ESI                         ; 0051df32
    IMUL EDX                            ; 0051df34
    SHRD EAX,EDX,0x10                   ; 0051df36
    MOV dword ptr [ESP],EAX             ; 0051df3a
    MOV EDX,dword ptr [ESP]             ; 0051df3d
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0051df40
    ADD EAX,EDX                         ; 0051df43
    MOV dword ptr [EBP + 0x30],EAX      ; 0051df45
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051df48
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051df4b
    SUB EAX,EDX                         ; 0051df4e
    MOV EDX,EAX                         ; 0051df50
    MOV EAX,ECX                         ; 0051df52
    IMUL EDX                            ; 0051df54
    SHRD EAX,EDX,0x10                   ; 0051df56
    MOV EDX,EAX                         ; 0051df5a
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051df5c
    MOV EAX,ESI                         ; 0051df5f
    IMUL EDX                            ; 0051df61
    SHRD EAX,EDX,0x10                   ; 0051df63
    MOV dword ptr [ESP],EAX             ; 0051df67
    MOV EDX,dword ptr [ESP]             ; 0051df6a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0051df6d
    ADD EAX,EDX                         ; 0051df70
    MOV dword ptr [EBP + 0x28],EAX      ; 0051df72
    MOV EAX,dword ptr [EDI + 0x24]      ; 0051df75
    MOV EDX,dword ptr [EBX + 0x24]      ; 0051df78
    SUB EAX,EDX                         ; 0051df7b
    MOV EDX,EAX                         ; 0051df7d
    MOV EAX,ECX                         ; 0051df7f
    IMUL EDX                            ; 0051df81
    SHRD EAX,EDX,0x10                   ; 0051df83
    MOV EDX,EAX                         ; 0051df87
    MOV dword ptr [EBP + 0x3c],EAX      ; 0051df89
    MOV EAX,ESI                         ; 0051df8c
    IMUL EDX                            ; 0051df8e
    SHRD EAX,EDX,0x10                   ; 0051df90
    MOV dword ptr [ESP],EAX             ; 0051df94
    MOV EDX,dword ptr [ESP]             ; 0051df97
    MOV EAX,dword ptr [EBX + 0x24]      ; 0051df9a
    ADD EAX,EDX                         ; 0051df9d
    MOV dword ptr [EBP + 0x38],EAX      ; 0051df9f
    MOV EDX,dword ptr [EDI + 0x28]      ; 0051dfa2
    MOV EDI,dword ptr [EBX + 0x28]      ; 0051dfa5
    MOV EAX,ECX                         ; 0051dfa8
    SUB EDX,EDI                         ; 0051dfaa
    IMUL EDX                            ; 0051dfac
    SHRD EAX,EDX,0x10                   ; 0051dfae
    MOV EDX,EAX                         ; 0051dfb2
    MOV dword ptr [EBP + 0x44],EAX      ; 0051dfb4
    MOV EAX,ESI                         ; 0051dfb7
    IMUL EDX                            ; 0051dfb9
    SHRD EAX,EDX,0x10                   ; 0051dfbb
    MOV EDX,EAX                         ; 0051dfbf
    MOV EAX,dword ptr [EBX + 0x28]      ; 0051dfc1
    ADD EAX,EDX                         ; 0051dfc4
    MOV dword ptr [EBP + 0x40],EAX      ; 0051dfc6
    INC dword ptr [0x01e61b5c]          ; 0051dfc9 | DAT_01e61b5c
    JMP 0x0051dc00                      ; 0051dfcf
        ;   XREF to: 0051dc00 (UNCONDITIONAL_JUMP)  ; LAB_0051dc00
    MOV EAX,0xffffffff                  ; 0051dfd4
        ;   Label: LAB_0051dfd4
    XOR EDX,EDX                         ; 0051dfd9
    DIV ECX                             ; 0051dfdb
    MOV ECX,EAX                         ; 0051dfdd
    JMP 0x0051de5a                      ; 0051dfdf
        ;   XREF to: 0051de5a (UNCONDITIONAL_JUMP)  ; LAB_0051de5a
    INC ECX                             ; 0051dfe4
        ;   Label: LAB_0051dfe4
    ADD EAX,0x50                        ; 0051dfe5
    CMP ECX,EDX                         ; 0051dfe8
    JL 0x0051dc32                       ; 0051dfea
        ;   XREF to: 0051dc32 (CONDITIONAL_JUMP)  ; LAB_0051dc32
    XOR EAX,EAX                         ; 0051dff0
        ;   Label: LAB_0051dff0
    JMP 0x0051dc42                      ; 0051dff2
        ;   XREF to: 0051dc42 (UNCONDITIONAL_JUMP)  ; LAB_0051dc42
    INC EDX                             ; 0051dff7
        ;   Label: LAB_0051dff7
    ADD EAX,0x50                        ; 0051dff8
    CMP EDX,EBP                         ; 0051dffb
    JL 0x0051dc71                       ; 0051dffd
        ;   XREF to: 0051dc71 (CONDITIONAL_JUMP)  ; LAB_0051dc71
    XOR EAX,EAX                         ; 0051e003
        ;   Label: LAB_0051e003
    JMP 0x0051dc81                      ; 0051e005
        ;   XREF to: 0051dc81 (UNCONDITIONAL_JUMP)  ; LAB_0051dc81
    INC EDX                             ; 0051e00a
        ;   Label: LAB_0051e00a
    ADD EAX,0x50                        ; 0051e00b
    CMP EDX,EDI                         ; 0051e00e
    JL 0x0051dcc6                       ; 0051e010
        ;   XREF to: 0051dcc6 (CONDITIONAL_JUMP)  ; LAB_0051dcc6
    XOR EAX,EAX                         ; 0051e016
        ;   Label: LAB_0051e016
    JMP 0x0051dcd6                      ; 0051e018
        ;   XREF to: 0051dcd6 (UNCONDITIONAL_JUMP)  ; LAB_0051dcd6
    INC EDX                             ; 0051e01d
        ;   Label: LAB_0051e01d
    ADD EAX,0x50                        ; 0051e01e | DAT_01e61bb0
    CMP EDX,ESI                         ; 0051e021
    JL 0x0051dd13                       ; 0051e023
        ;   XREF to: 0051dd13 (CONDITIONAL_JUMP)  ; LAB_0051dd13
    XOR EAX,EAX                         ; 0051e029
        ;   Label: LAB_0051e029
    MOV EBP,EAX                         ; 0051e02b
    TEST EAX,EAX                        ; 0051e02d
    JNZ 0x0051e039                      ; 0051e02f
        ;   XREF to: 0051e039 (CONDITIONAL_JUMP)  ; LAB_0051e039
    ADD ESP,0x14                        ; 0051e031
    POP EBP                             ; 0051e034
    POP EDI                             ; 0051e035
    POP ESI                             ; 0051e036
    POP EBX                             ; 0051e037
    RET                                 ; 0051e038
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051e039
        ;   Label: LAB_0051e039
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051e03d
    MOV EDI,EBP                         ; 0051e041
    CALL FUN_0055d6d7                   ; 0051e043
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d6d7()
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051e048
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051e04c
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051e050
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051e053
    MOV EBX,dword ptr [EDX + 0x18]      ; 0051e056
    MOV ESI,dword ptr [EDX + 0x20]      ; 0051e059
    MOV EDI,dword ptr [EDX + 0x28]      ; 0051e05c
    ADD ECX,EAX                         ; 0051e05f
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0051e061
    MOV dword ptr [EDX + 0x8],ECX       ; 0051e064
    ADD EBX,EAX                         ; 0051e067
    MOV EAX,dword ptr [EDX + 0x24]      ; 0051e069
    MOV dword ptr [EDX + 0x18],EBX      ; 0051e06c
    ADD ESI,EAX                         ; 0051e06f
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0051e071
    MOV dword ptr [EDX + 0x20],ESI      ; 0051e074
    ADD EDI,EAX                         ; 0051e077
    MOV dword ptr [EDX + 0x28],EDI      ; 0051e079
    MOV ECX,dword ptr [EDX + 0x10]      ; 0051e07c
    MOV EBX,dword ptr [EDX + 0x38]      ; 0051e07f
    MOV ESI,dword ptr [EDX + 0x40]      ; 0051e082
    MOV EAX,dword ptr [EDX + 0x14]      ; 0051e085
    MOV EDI,dword ptr [EDX + 0x30]      ; 0051e088
    ADD ECX,EAX                         ; 0051e08b
    MOV EAX,dword ptr [EDX + 0x3c]      ; 0051e08d
    MOV dword ptr [EDX + 0x10],ECX      ; 0051e090
    ADD EBX,EAX                         ; 0051e093
    MOV EAX,dword ptr [EDX + 0x44]      ; 0051e095
    MOV dword ptr [EDX + 0x38],EBX      ; 0051e098
    ADD ESI,EAX                         ; 0051e09b
    MOV EAX,dword ptr [EDX + 0x34]      ; 0051e09d
    MOV dword ptr [EDX + 0x40],ESI      ; 0051e0a0
    ADD EDI,EAX                         ; 0051e0a3
    MOV dword ptr [EDX + 0x30],EDI      ; 0051e0a5
    MOV EAX,dword ptr [EBP + 0xc]       ; 0051e0a8
    MOV EDX,dword ptr [EBP + 0x8]       ; 0051e0ab
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051e0ae
    MOV EBX,dword ptr [EBP + 0x20]      ; 0051e0b1
    ADD EDX,EAX                         ; 0051e0b4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051e0b6
    MOV dword ptr [EBP + 0x8],EDX       ; 0051e0b9
    ADD ECX,EAX                         ; 0051e0bc
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051e0be
    MOV dword ptr [EBP + 0x18],ECX      ; 0051e0c1
    ADD EBX,EAX                         ; 0051e0c4
    MOV dword ptr [EBP + 0x20],EBX      ; 0051e0c6
    MOV ESI,dword ptr [EBP + 0x28]      ; 0051e0c9
    MOV EDI,dword ptr [EBP + 0x10]      ; 0051e0cc
    MOV EDX,dword ptr [EBP + 0x38]      ; 0051e0cf
    MOV ECX,dword ptr [EBP + 0x40]      ; 0051e0d2
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051e0d5
    MOV EBX,dword ptr [EBP + 0x30]      ; 0051e0d8
    ADD ESI,EAX                         ; 0051e0db
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051e0dd
    MOV dword ptr [EBP + 0x28],ESI      ; 0051e0e0
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051e0e3
    ADD EDI,EAX                         ; 0051e0e7
    INC ESI                             ; 0051e0e9
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0051e0ea
    MOV dword ptr [EBP + 0x10],EDI      ; 0051e0ed
    ADD EDX,EAX                         ; 0051e0f0
    MOV EAX,dword ptr [EBP + 0x44]      ; 0051e0f2
    MOV dword ptr [EBP + 0x38],EDX      ; 0051e0f5
    ADD ECX,EAX                         ; 0051e0f8
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051e0fa
    MOV dword ptr [EBP + 0x40],ECX      ; 0051e0fd
    ADD EBX,EAX                         ; 0051e100
    MOV dword ptr [ESP + 0xc],ESI       ; 0051e102
    MOV dword ptr [EBP + 0x30],EBX      ; 0051e106
    JMP 0x0051dc94                      ; 0051e109
        ;   XREF to: 0051dc94 (UNCONDITIONAL_JUMP)  ; LAB_0051dc94

