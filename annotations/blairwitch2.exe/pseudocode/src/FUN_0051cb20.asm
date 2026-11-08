; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051cb20(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00431d90 at 00431dcf
;
; Referenced Globals:
;   void* switchdataD_0051caf8 = 0051cc30
;   undefined4 DAT_006141e0
;   undefined4 DAT_0061b424
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01e61648
;   undefined4 DAT_01e61b4c
;   undefined4 DAT_01e61b50
;   ... and 1 more
;
; Called Functions:
;   FUN_0051c580
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

    PUSH EBX                            ; 0051cb20
        ;   Label: FUN_0051cb20
    PUSH ESI                            ; 0051cb21
    PUSH EDI                            ; 0051cb22
    PUSH EBP                            ; 0051cb23
    SUB ESP,0x14                        ; 0051cb24
    CMP dword ptr [0x006141e0],0x0      ; 0051cb27 | DAT_006141e0
    JZ 0x0051cb97                       ; 0051cb2e
        ;   XREF to: 0051cb97 (CONDITIONAL_JUMP)  ; LAB_0051cb97
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051cb30
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051cb34
    XOR ESI,ESI                         ; 0051cb38
    TEST EBX,EBX                        ; 0051cb3a
    JLE 0x0051cb97                      ; 0051cb3c
        ;   XREF to: 0051cb97 (CONDITIONAL_JUMP)  ; LAB_0051cb97
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051cb3e
    TEST byte ptr [ECX + 0x13],0x80     ; 0051cb42
        ;   Label: LAB_0051cb42
    JZ 0x0051cb8f                       ; 0051cb46
        ;   XREF to: 0051cb8f (CONDITIONAL_JUMP)  ; LAB_0051cb8f
    MOV EAX,0x7fffffff                  ; 0051cb48
    MOV EDX,EAX                         ; 0051cb4d
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051cb4f
    SAR EDX,0x1f                        ; 0051cb52
    IDIV EBX                            ; 0051cb55
    MOV dword ptr [ECX + 0xc],EAX       ; 0051cb57
    MOV EDX,dword ptr [0x01c35e38]      ; 0051cb5a | DAT_01c35e38
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051cb60
    MOV EAX,dword ptr [ECX]             ; 0051cb63
    IMUL EDX                            ; 0051cb65
    IDIV EBX                            ; 0051cb67
    MOV EDX,dword ptr [0x01c35e40]      ; 0051cb69 | DAT_01c35e40
    ADD EAX,EDX                         ; 0051cb6f
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051cb71
    MOV dword ptr [ECX + 0x10],EAX      ; 0051cb74
    MOV EDX,dword ptr [0x01c35e3c]      ; 0051cb77 | DAT_01c35e3c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0051cb7d
    IMUL EDX                            ; 0051cb80
    IDIV EBX                            ; 0051cb82
    MOV EDX,dword ptr [0x01c35e44]      ; 0051cb84 | DAT_01c35e44
    ADD EAX,EDX                         ; 0051cb8a
    MOV dword ptr [ECX + 0x14],EAX      ; 0051cb8c
    INC ESI                             ; 0051cb8f
        ;   Label: LAB_0051cb8f
    ADD ECX,0x30                        ; 0051cb90
    CMP ESI,EDI                         ; 0051cb93
    JL 0x0051cb42                       ; 0051cb95
        ;   XREF to: 0051cb42 (CONDITIONAL_JUMP)  ; LAB_0051cb42
    CMP dword ptr [0x0070ca7c],0x0      ; 0051cb97 | DAT_0070ca7c
        ;   Label: LAB_0051cb97
    JZ 0x0051cbfc                       ; 0051cb9e
        ;   XREF to: 0051cbfc (CONDITIONAL_JUMP)  ; LAB_0051cbfc
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051cba0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051cba4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051cba8
    ADD EDI,0x30                        ; 0051cbac
    ADD EAX,0x60                        ; 0051cbaf
    CMP EDX,0x3                         ; 0051cbb2
    JLE 0x0051ccc9                      ; 0051cbb5
        ;   XREF to: 0051ccc9 (CONDITIONAL_JUMP)  ; LAB_0051ccc9
    SUB EDX,0x2                         ; 0051cbbb
    MOV ESI,EAX                         ; 0051cbbe
    XOR EBX,EBX                         ; 0051cbc0
    XOR EBP,EBP                         ; 0051cbc2
    MOV dword ptr [ESP + 0x4],EDX       ; 0051cbc4
    TEST EDX,EDX                        ; 0051cbc8
    JLE 0x0051cbf2                      ; 0051cbca
        ;   XREF to: 0051cbf2 (CONDITIONAL_JUMP)  ; LAB_0051cbf2
    PUSH ESI                            ; 0051cbcc
        ;   Label: LAB_0051cbcc
    PUSH EDI                            ; 0051cbcd
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051cbce
    PUSH EAX                            ; 0051cbd2
    CALL FUN_0051c760                   ; 0051cbd3
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051cbd8
    TEST EAX,EAX                        ; 0051cbdb
    JZ 0x0051ccc3                       ; 0051cbdd
        ;   XREF to: 0051ccc3 (CONDITIONAL_JUMP)  ; LAB_0051ccc3
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051cbe3
        ;   Label: LAB_0051cbe3
    ADD EDI,0x30                        ; 0051cbe7
    INC EBX                             ; 0051cbea
    ADD ESI,0x30                        ; 0051cbeb
    CMP EBX,EDX                         ; 0051cbee
    JL 0x0051cbcc                       ; 0051cbf0
        ;   XREF to: 0051cbcc (CONDITIONAL_JUMP)  ; LAB_0051cbcc
    CMP EBP,dword ptr [ESP + 0x4]       ; 0051cbf2
        ;   Label: LAB_0051cbf2
    JZ 0x0051ccbb                       ; 0051cbf6
        ;   XREF to: 0051ccbb (CONDITIONAL_JUMP)  ; LAB_0051ccbb
    CMP dword ptr [0x01c37788],0x0      ; 0051cbfc | DAT_01c37788
        ;   Label: LAB_0051cbfc
    JZ 0x0051cc12                       ; 0051cc03
        ;   XREF to: 0051cc12 (CONDITIONAL_JUMP)  ; LAB_0051cc12
    CMP dword ptr [0x0070ca74],0x0      ; 0051cc05 | DAT_0070ca74
    JZ 0x0051cce8                       ; 0051cc0c
        ;   XREF to: 0051cce8 (CONDITIONAL_JUMP)  ; LAB_0051cce8
    MOV EBX,dword ptr [0x01e61b58]      ; 0051cc12 | DAT_01e61b58
        ;   Label: LAB_0051cc12
    INC EBX                             ; 0051cc18
    MOV EAX,[0x01c38b58]                ; 0051cc19 | DAT_01c38b58
    MOV dword ptr [0x01e61b58],EBX      ; 0051cc1e | DAT_01e61b58
    CMP EAX,0x6                         ; 0051cc24
    JA 0x0051cc30                       ; 0051cc27
        ;   XREF to: 0051cc30 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x51caf8]  ; 0051cc29 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 0051cc30
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 0051cc35
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0051cc37
    MOV dword ptr [0x01e61b50],EDX      ; 0051cc3b | DAT_01e61b50
    MOV dword ptr [0x01e61648],EDX      ; 0051cc41 | DAT_01e61648
    MOV dword ptr [ESP + 0x8],EDX       ; 0051cc47
    MOV [0x01e61b4c],EAX                ; 0051cc4b | DAT_01e61b4c
    TEST ESI,ESI                        ; 0051cc50
    JLE 0x0051cca0                      ; 0051cc52
        ;   XREF to: 0051cca0 (CONDITIONAL_JUMP)  ; LAB_0051cca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051cc54
        ;   Label: LAB_0051cc54
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0051cc58
    INC EAX                             ; 0051cc5c
    CMP EAX,ECX                         ; 0051cc5d
    JL 0x0051cc63                       ; 0051cc5f
        ;   XREF to: 0051cc63 (CONDITIONAL_JUMP)  ; LAB_0051cc63
    XOR EAX,EAX                         ; 0051cc61
    IMUL EAX,EAX,0x30                   ; 0051cc63
        ;   Label: LAB_0051cc63
    MOV EBP,dword ptr [ESP + 0x28]      ; 0051cc66
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051cc6a
    ADD EBP,EAX                         ; 0051cc6e
    IMUL EAX,EBX,0x30                   ; 0051cc70
    ADD EAX,dword ptr [ESP + 0x28]      ; 0051cc73
    MOV EDI,EBP                         ; 0051cc77
    MOV ECX,dword ptr [EAX + 0x14]      ; 0051cc79
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051cc7c
    SAR ECX,0x10                        ; 0051cc7f
    SAR ESI,0x10                        ; 0051cc82
    MOV EBX,EAX                         ; 0051cc85
    CMP ECX,ESI                         ; 0051cc87
    JNZ 0x0051cd91                      ; 0051cc89
        ;   XREF to: 0051cd91 (CONDITIONAL_JUMP)  ; LAB_0051cd91
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051cc8f
        ;   Label: LAB_0051cc8f
    INC ECX                             ; 0051cc93
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051cc94
    MOV dword ptr [ESP + 0x8],ECX       ; 0051cc98
    CMP ECX,EBX                         ; 0051cc9c
    JL 0x0051cc54                       ; 0051cc9e
        ;   XREF to: 0051cc54 (CONDITIONAL_JUMP)  ; LAB_0051cc54
    PUSH 0x0                            ; 0051cca0
        ;   Label: LAB_0051cca0
    MOV ESI,dword ptr [0x01e61b4c]      ; 0051cca2 | DAT_01e61b4c
    PUSH ESI                            ; 0051cca8
    CALL FUN_0051c580                   ; 0051cca9
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051ccae
    MOV EBP,EAX                         ; 0051ccb1
    TEST EAX,EAX                        ; 0051ccb3
    JNZ 0x0051cf08                      ; 0051ccb5
        ;   XREF to: 0051cf08 (CONDITIONAL_JUMP)  ; LAB_0051cf08
    ADD ESP,0x14                        ; 0051ccbb
        ;   Label: LAB_0051ccbb
    POP EBP                             ; 0051ccbe
    POP EDI                             ; 0051ccbf
    POP ESI                             ; 0051ccc0
    POP EBX                             ; 0051ccc1
    RET                                 ; 0051ccc2
    INC EBP                             ; 0051ccc3
        ;   Label: LAB_0051ccc3
    JMP 0x0051cbe3                      ; 0051ccc4
        ;   XREF to: 0051cbe3 (UNCONDITIONAL_JUMP)  ; LAB_0051cbe3
    PUSH EAX                            ; 0051ccc9
        ;   Label: LAB_0051ccc9
    PUSH EDI                            ; 0051ccca
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051cccb
    PUSH ECX                            ; 0051cccf
    CALL FUN_0051c760                   ; 0051ccd0
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 0051ccd5
    TEST EAX,EAX                        ; 0051ccd8
    JNZ 0x0051cbfc                      ; 0051ccda
        ;   XREF to: 0051cbfc (CONDITIONAL_JUMP)  ; LAB_0051cbfc
    ADD ESP,0x14                        ; 0051cce0
    POP EBP                             ; 0051cce3
    POP EDI                             ; 0051cce4
    POP ESI                             ; 0051cce5
    POP EBX                             ; 0051cce6
    RET                                 ; 0051cce7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051cce8
        ;   Label: LAB_0051cce8
    MOV EDI,dword ptr [0x01e61b58]      ; 0051ccec | DAT_01e61b58
    MOV EBP,dword ptr [0x01c38b54]      ; 0051ccf2 | DAT_01c38b54
    SUB EAX,0x2                         ; 0051ccf8
    PUSH EBP                            ; 0051ccfb
    ADD EDI,EAX                         ; 0051ccfc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051ccfe
    PUSH EAX                            ; 0051cd02
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051cd03
    PUSH EDX                            ; 0051cd07
    MOV dword ptr [0x01e61b58],EDI      ; 0051cd08 | DAT_01e61b58
    CALL FUN_0055f8f0                   ; 0051cd0e
        ;   XREF to: 0055f8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f8f0()
    ADD ESP,0xc                         ; 0051cd13
    ADD ESP,0x14                        ; 0051cd16
    POP EBP                             ; 0051cd19
    POP EDI                             ; 0051cd1a
    POP ESI                             ; 0051cd1b
    POP EBX                             ; 0051cd1c
    RET                                 ; 0051cd1d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051cd1e
        ;   Label: caseD_1
    PUSH EDI                            ; 0051cd22
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051cd23
    PUSH EBP                            ; 0051cd27
    CALL FUN_0051c5c0                   ; 0051cd28
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c5c0()
    ADD ESP,0x8                         ; 0051cd2d
    JMP 0x0051cc30                      ; 0051cd30
        ;   XREF to: 0051cc30 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051cd35
        ;   Label: caseD_2
    PUSH EBX                            ; 0051cd39
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0051cd3a
    PUSH ESI                            ; 0051cd3e
    CALL FUN_0051c630                   ; 0051cd3f
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c630()
    ADD ESP,0x8                         ; 0051cd44
    JMP 0x0051cc30                      ; 0051cd47
        ;   XREF to: 0051cc30 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051cd4c
        ;   Label: caseD_3
    PUSH EDX                            ; 0051cd50
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0051cd51
    PUSH ECX                            ; 0051cd55
    CALL FUN_0051c6b0                   ; 0051cd56
        ;   XREF to: 0051c6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c6b0()
    ADD ESP,0x8                         ; 0051cd5b
    JMP 0x0051cc30                      ; 0051cd5e
        ;   XREF to: 0051cc30 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051cd63
        ;   Label: caseD_5
    PUSH EBP                            ; 0051cd67
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051cd68
    PUSH EAX                            ; 0051cd6c
    CALL FUN_0051c630                   ; 0051cd6d
        ;   XREF to: 0051c630 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c630()
    ADD ESP,0x8                         ; 0051cd72
    JMP 0x0051cc30                      ; 0051cd75
        ;   XREF to: 0051cc30 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0051cd7a
        ;   Label: caseD_6
    PUSH ESI                            ; 0051cd7e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051cd7f
    PUSH EDI                            ; 0051cd83
    CALL FUN_0051c720                   ; 0051cd84
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c720()
    ADD ESP,0x8                         ; 0051cd89
    JMP 0x0051cc30                      ; 0051cd8c
        ;   XREF to: 0051cc30 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [EAX + 0x14]      ; 0051cd91
        ;   Label: LAB_0051cd91
    CMP EDX,dword ptr [EBP + 0x14]      ; 0051cd94
    JLE 0x0051cda3                      ; 0051cd97
        ;   XREF to: 0051cda3 (CONDITIONAL_JUMP)  ; LAB_0051cda3
    MOV EDI,EAX                         ; 0051cd99
    MOV EBX,EBP                         ; 0051cd9b
    MOV EAX,ECX                         ; 0051cd9d
    MOV ECX,ESI                         ; 0051cd9f
    MOV ESI,EAX                         ; 0051cda1
    IMUL EBP,dword ptr [0x01e61648],0x50 ; 0051cda3 | DAT_01e61648
        ;   Label: LAB_0051cda3
    ADD EBP,0x1e6164c                   ; 0051cdaa
    MOV dword ptr [EBP],ECX             ; 0051cdb0
    MOV EDX,dword ptr [0x01e61b4c]      ; 0051cdb3 | DAT_01e61b4c
    MOV dword ptr [EBP + 0x4],ESI       ; 0051cdb9
    CMP ECX,EDX                         ; 0051cdbc
    JGE 0x0051cdc6                      ; 0051cdbe
        ;   XREF to: 0051cdc6 (CONDITIONAL_JUMP)  ; LAB_0051cdc6
    MOV dword ptr [0x01e61b4c],ECX      ; 0051cdc0 | DAT_01e61b4c
    CMP ESI,dword ptr [0x01e61b50]      ; 0051cdc6 | DAT_01e61b50
        ;   Label: LAB_0051cdc6
    JLE 0x0051cdd4                      ; 0051cdcc
        ;   XREF to: 0051cdd4 (CONDITIONAL_JUMP)  ; LAB_0051cdd4
    MOV dword ptr [0x01e61b50],ESI      ; 0051cdce | DAT_01e61b50
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051cdd4
        ;   Label: LAB_0051cdd4
    MOV ECX,dword ptr [EDI + 0x14]      ; 0051cdd7
    SUB ECX,ESI                         ; 0051cdda
    CMP ECX,0x10000                     ; 0051cddc
    JNC 0x0051cef8                      ; 0051cde2
        ;   XREF to: 0051cef8 (CONDITIONAL_JUMP)  ; LAB_0051cef8
    XOR ECX,ECX                         ; 0051cde8
    MOV EAX,dword ptr [EDI + 0x10]      ; 0051cdea
        ;   Label: LAB_0051cdea
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051cded
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051cdf0
    SUB EAX,EDX                         ; 0051cdf3
    AND ESI,0xffff                      ; 0051cdf5
    MOV EDX,EAX                         ; 0051cdfb
    MOV EAX,ECX                         ; 0051cdfd
    XOR SI,0xffff                       ; 0051cdff
    IMUL EDX                            ; 0051ce03
    SHRD EAX,EDX,0x10                   ; 0051ce05
    MOV EDX,EAX                         ; 0051ce09
    MOV dword ptr [EBP + 0xc],EAX       ; 0051ce0b
    MOV EAX,ESI                         ; 0051ce0e
    IMUL EDX                            ; 0051ce10
    SHRD EAX,EDX,0x10                   ; 0051ce12
    MOV dword ptr [ESP],EAX             ; 0051ce16
    MOV EDX,dword ptr [ESP]             ; 0051ce19
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051ce1c
    ADD EAX,EDX                         ; 0051ce1f
    MOV dword ptr [EBP + 0x8],EAX       ; 0051ce21
    MOV EAX,dword ptr [EDI + 0x18]      ; 0051ce24
    MOV EDX,dword ptr [EBX + 0x18]      ; 0051ce27
    SUB EAX,EDX                         ; 0051ce2a
    MOV EDX,EAX                         ; 0051ce2c
    MOV EAX,ECX                         ; 0051ce2e
    IMUL EDX                            ; 0051ce30
    SHRD EAX,EDX,0x10                   ; 0051ce32
    MOV EDX,EAX                         ; 0051ce36
    MOV dword ptr [EBP + 0x1c],EAX      ; 0051ce38
    MOV EAX,ESI                         ; 0051ce3b
    IMUL EDX                            ; 0051ce3d
    SHRD EAX,EDX,0x10                   ; 0051ce3f
    MOV dword ptr [ESP],EAX             ; 0051ce43
    MOV EDX,dword ptr [ESP]             ; 0051ce46
    MOV EAX,dword ptr [EBX + 0x18]      ; 0051ce49
    ADD EAX,EDX                         ; 0051ce4c
    MOV dword ptr [EBP + 0x18],EAX      ; 0051ce4e
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051ce51
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051ce54
    SUB EAX,EDX                         ; 0051ce57
    MOV EDX,EAX                         ; 0051ce59
    MOV EAX,ECX                         ; 0051ce5b
    IMUL EDX                            ; 0051ce5d
    SHRD EAX,EDX,0x10                   ; 0051ce5f
    MOV EDX,EAX                         ; 0051ce63
    MOV dword ptr [EBP + 0x24],EAX      ; 0051ce65
    MOV EAX,ESI                         ; 0051ce68
    IMUL EDX                            ; 0051ce6a
    SHRD EAX,EDX,0x10                   ; 0051ce6c
    MOV dword ptr [ESP],EAX             ; 0051ce70
    MOV EDX,dword ptr [ESP]             ; 0051ce73
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051ce76
    ADD EAX,EDX                         ; 0051ce79
    MOV dword ptr [EBP + 0x20],EAX      ; 0051ce7b
    MOV EAX,dword ptr [EDI + 0x20]      ; 0051ce7e
    MOV EDX,dword ptr [EBX + 0x20]      ; 0051ce81
    SUB EAX,EDX                         ; 0051ce84
    MOV EDX,EAX                         ; 0051ce86
    MOV EAX,ECX                         ; 0051ce88
    IMUL EDX                            ; 0051ce8a
    SHRD EAX,EDX,0x10                   ; 0051ce8c
    MOV EDX,EAX                         ; 0051ce90
    MOV dword ptr [EBP + 0x14],EAX      ; 0051ce92
    MOV EAX,ESI                         ; 0051ce95
    IMUL EDX                            ; 0051ce97
    SHRD EAX,EDX,0x10                   ; 0051ce99
    MOV EDX,dword ptr [EBX + 0x20]      ; 0051ce9d
    ADD EDX,EAX                         ; 0051cea0
    MOV dword ptr [EBP + 0x10],EDX      ; 0051cea2
    MOV EDX,dword ptr [EDI + 0x2c]      ; 0051cea5
    SUB EDX,dword ptr [EBX + 0x2c]      ; 0051cea8
    MOV EAX,ECX                         ; 0051ceab
    IMUL EDX                            ; 0051cead
    SHRD EAX,EDX,0x10                   ; 0051ceaf
    MOV EDX,EAX                         ; 0051ceb3
    MOV dword ptr [EBP + 0x34],EAX      ; 0051ceb5
    MOV EAX,ESI                         ; 0051ceb8
    IMUL EDX                            ; 0051ceba
    SHRD EAX,EDX,0x10                   ; 0051cebc
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0051cec0
    ADD EDX,EAX                         ; 0051cec3
    MOV dword ptr [EBP + 0x30],EDX      ; 0051cec5
    MOV EDX,dword ptr [EDI + 0x8]       ; 0051cec8
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051cecb
    MOV EAX,ECX                         ; 0051cece
    SUB EDX,EDI                         ; 0051ced0
    IMUL EDX                            ; 0051ced2
    SHRD EAX,EDX,0x10                   ; 0051ced4
    MOV EDX,EAX                         ; 0051ced8
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051ceda
    MOV EAX,ESI                         ; 0051cedd
    IMUL EDX                            ; 0051cedf
    SHRD EAX,EDX,0x10                   ; 0051cee1
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051cee5
    ADD EDX,EAX                         ; 0051cee8
    MOV dword ptr [EBP + 0x28],EDX      ; 0051ceea
    INC dword ptr [0x01e61648]          ; 0051ceed | DAT_01e61648
    JMP 0x0051cc8f                      ; 0051cef3
        ;   XREF to: 0051cc8f (UNCONDITIONAL_JUMP)  ; LAB_0051cc8f
    MOV EAX,0xffffffff                  ; 0051cef8
        ;   Label: LAB_0051cef8
    XOR EDX,EDX                         ; 0051cefd
    DIV ECX                             ; 0051ceff
    MOV ECX,EAX                         ; 0051cf01
    JMP 0x0051cdea                      ; 0051cf03
        ;   XREF to: 0051cdea (UNCONDITIONAL_JUMP)  ; LAB_0051cdea
    PUSH EAX                            ; 0051cf08
        ;   Label: LAB_0051cf08
    MOV EDI,dword ptr [0x01e61b4c]      ; 0051cf09 | DAT_01e61b4c
    PUSH EDI                            ; 0051cf0f
    CALL FUN_0051c580                   ; 0051cf10
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051cf15
    MOV dword ptr [ESP + 0x10],EAX      ; 0051cf18
    TEST EAX,EAX                        ; 0051cf1c
    JZ 0x0051ccbb                       ; 0051cf1e
        ;   XREF to: 0051ccbb (CONDITIONAL_JUMP)  ; LAB_0051ccbb
    MOV EAX,[0x01e61b4c]                ; 0051cf24 | DAT_01e61b4c
    MOV EDX,dword ptr [0x0061b424]      ; 0051cf29 | DAT_0061b424
    MOV dword ptr [ESP + 0xc],EAX       ; 0051cf2f
    CMP EAX,EDX                         ; 0051cf33
    JGE 0x0051ccbb                      ; 0051cf35
        ;   XREF to: 0051ccbb (CONDITIONAL_JUMP)  ; LAB_0051ccbb
        ;   Label: LAB_0051cf35
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051cf3b
    CMP EAX,dword ptr [EBP + 0x4]       ; 0051cf3f
    JGE 0x0051d01d                      ; 0051cf42
        ;   XREF to: 0051d01d (CONDITIONAL_JUMP)  ; LAB_0051d01d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051cf48
        ;   Label: LAB_0051cf48
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051cf4c
    CMP EAX,dword ptr [EDX + 0x4]       ; 0051cf50
    JL 0x0051cf71                       ; 0051cf53
        ;   XREF to: 0051cf71 (CONDITIONAL_JUMP)  ; LAB_0051cf71
    PUSH EBP                            ; 0051cf55
    PUSH EAX                            ; 0051cf56
    MOV dword ptr [EDX],0xffffffff      ; 0051cf57
    CALL FUN_0051c580                   ; 0051cf5d
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051cf62
    MOV dword ptr [ESP + 0x10],EAX      ; 0051cf65
    TEST EAX,EAX                        ; 0051cf69
    JZ 0x0051ccbb                       ; 0051cf6b
        ;   XREF to: 0051ccbb (CONDITIONAL_JUMP)  ; LAB_0051ccbb
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051cf71
        ;   Label: LAB_0051cf71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051cf75
    MOV ESI,EBP                         ; 0051cf79
    CALL FUN_0055d6d7                   ; 0051cf7b
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d6d7()
    MOV EAX,dword ptr [EBP + 0xc]       ; 0051cf80
    ADD dword ptr [EBP + 0x8],EAX       ; 0051cf83
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051cf86
    MOV EBX,dword ptr [EBP + 0x20]      ; 0051cf89
    MOV ESI,dword ptr [EBP + 0x10]      ; 0051cf8c
    MOV EDI,dword ptr [EBP + 0x28]      ; 0051cf8f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051cf92
    MOV EDX,dword ptr [EBP + 0x30]      ; 0051cf95
    ADD ECX,EAX                         ; 0051cf98
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051cf9a
    MOV dword ptr [EBP + 0x18],ECX      ; 0051cf9d
    ADD EBX,EAX                         ; 0051cfa0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051cfa2
    MOV dword ptr [EBP + 0x20],EBX      ; 0051cfa5
    ADD ESI,EAX                         ; 0051cfa8
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051cfaa
    MOV dword ptr [EBP + 0x10],ESI      ; 0051cfad
    ADD EDI,EAX                         ; 0051cfb0
    MOV EAX,dword ptr [EBP + 0x34]      ; 0051cfb2
    MOV dword ptr [EBP + 0x28],EDI      ; 0051cfb5
    ADD EDX,EAX                         ; 0051cfb8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051cfba
    MOV dword ptr [EBP + 0x30],EDX      ; 0051cfbe
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051cfc1
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051cfc5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051cfc8
    MOV EBX,dword ptr [EDX + 0x18]      ; 0051cfcb
    ADD ECX,EAX                         ; 0051cfce
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0051cfd0
    MOV dword ptr [EDX + 0x8],ECX       ; 0051cfd3
    ADD EBX,EAX                         ; 0051cfd6
    MOV dword ptr [EDX + 0x18],EBX      ; 0051cfd8
    MOV ESI,dword ptr [EDX + 0x20]      ; 0051cfdb
    MOV EDI,dword ptr [EDX + 0x10]      ; 0051cfde
    MOV ECX,dword ptr [EDX + 0x28]      ; 0051cfe1
    MOV EAX,dword ptr [EDX + 0x24]      ; 0051cfe4
    MOV EBX,dword ptr [EDX + 0x30]      ; 0051cfe7
    ADD ESI,EAX                         ; 0051cfea
    MOV EAX,dword ptr [EDX + 0x14]      ; 0051cfec
    MOV dword ptr [EDX + 0x20],ESI      ; 0051cfef
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051cff2
    ADD EDI,EAX                         ; 0051cff6
    INC ESI                             ; 0051cff8
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0051cff9
    MOV dword ptr [EDX + 0x10],EDI      ; 0051cffc
    MOV EDI,dword ptr [0x0061b424]      ; 0051cfff | DAT_0061b424
    ADD ECX,EAX                         ; 0051d005
    MOV EAX,dword ptr [EDX + 0x34]      ; 0051d007
    MOV dword ptr [EDX + 0x28],ECX      ; 0051d00a
    ADD EBX,EAX                         ; 0051d00d
    MOV dword ptr [ESP + 0xc],ESI       ; 0051d00f
    MOV dword ptr [EDX + 0x30],EBX      ; 0051d013
    CMP ESI,EDI                         ; 0051d016
    JMP 0x0051cf35                      ; 0051d018
        ;   XREF to: 0051cf35 (UNCONDITIONAL_JUMP)  ; LAB_0051cf35
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051d01d
        ;   Label: LAB_0051d01d
    PUSH ECX                            ; 0051d021
    PUSH EAX                            ; 0051d022
    MOV dword ptr [EBP],0xffffffff      ; 0051d023
    CALL FUN_0051c580                   ; 0051d02a
        ;   XREF to: 0051c580 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c580()
    ADD ESP,0x8                         ; 0051d02f
    MOV EBP,EAX                         ; 0051d032
    TEST EAX,EAX                        ; 0051d034
    JZ 0x0051ccbb                       ; 0051d036
        ;   XREF to: 0051ccbb (CONDITIONAL_JUMP)  ; LAB_0051ccbb
    JMP 0x0051cf48                      ; 0051d03c
        ;   XREF to: 0051cf48 (UNCONDITIONAL_JUMP)  ; LAB_0051cf48

