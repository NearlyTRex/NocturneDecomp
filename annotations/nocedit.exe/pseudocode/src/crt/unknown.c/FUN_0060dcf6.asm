; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060dcf6()
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   crt_unknown.c_staticInit_FUN_0060be80 at 0060bebb
;
; Referenced Globals:
;   undefined1 DAT_00684acd
;   byte g_UseSoftwareMath = 0x0
;
; Called Functions:
;   crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
;   crt_unknown.c_FUN_0060eb3a
;   crt_unknown.c_FUN_0060eb4b
;   crt_unknown.c_FUN_0060eb57
;
; *****************************************************************************

section .text

    OR EBX,EBX                          ; 0060dcf6
        ;   Label: crt_unknown.c_FUN_0060dcf6
    JNZ 0x0060dd05                      ; 0060dcf8 | LAB_0060dd05
        ;   XREF to: 0060dd05 (CONDITIONAL_JUMP)
    ADD ECX,ECX                         ; 0060dcfa
    JNZ 0x0060dd03                      ; 0060dcfc | LAB_0060dd03
        ;   XREF to: 0060dd03 (CONDITIONAL_JUMP)
    JMP 0x0060eb4b                      ; 0060dcfe
        ;   XREF to: 0060eb4b (UNCONDITIONAL_CALL)
    RCR ECX,0x1                         ; 0060dd03
        ;   Label: LAB_0060dd03
    OR EAX,EAX                          ; 0060dd05
        ;   Label: LAB_0060dd05
    JNZ 0x0060dd10                      ; 0060dd07 | LAB_0060dd10
        ;   XREF to: 0060dd10 (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0060dd09
    JNZ 0x0060dd0e                      ; 0060dd0b | LAB_0060dd0e
        ;   XREF to: 0060dd0e (CONDITIONAL_JUMP)
    RET                                 ; 0060dd0d
    RCR EDX,0x1                         ; 0060dd0e
        ;   Label: LAB_0060dd0e
    CMP byte ptr [0x00684acd],0x0       ; 0060dd10 | undefined1 DAT_00684acd
        ;   Label: LAB_0060dd10
    JZ 0x0060dd49                       ; 0060dd17 | LAB_0060dd49
        ;   XREF to: 0060dd49 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0060dd19
    PUSH EAX                            ; 0060dd1a
    FLD double ptr [ESP]                ; 0060dd1b
    PUSH ECX                            ; 0060dd1e
    PUSH EBX                            ; 0060dd1f
    TEST byte ptr [0x00685060],0x1      ; 0060dd20 | byte g_UseSoftwareMath
    JZ 0x0060dd30                       ; 0060dd27 | LAB_0060dd30
        ;   XREF to: 0060dd30 (CONDITIONAL_JUMP)
    CALL crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98 ; 0060dd29 | float10 crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98(float10 param0, double param1)
        ;   XREF to: 00606f98 (UNCONDITIONAL_CALL)
    JMP 0x0060dd36                      ; 0060dd2e | LAB_0060dd36
        ;   XREF to: 0060dd36 (UNCONDITIONAL_JUMP)
    FDIV double ptr [ESP]               ; 0060dd30
        ;   Label: LAB_0060dd30
    ADD ESP,0x8                         ; 0060dd33
    FSTP double ptr [ESP]               ; 0060dd36
        ;   Label: LAB_0060dd36
    WAIT                                ; 0060dd39
    POP EAX                             ; 0060dd3a
    POP EDX                             ; 0060dd3b
    CMP EDX,0x80000000                  ; 0060dd3c
    JNZ 0x0060dd48                      ; 0060dd42 | LAB_0060dd48
        ;   XREF to: 0060dd48 (CONDITIONAL_JUMP)
    SUB EDX,EDX                         ; 0060dd44
    MOV EAX,EDX                         ; 0060dd46
    RET                                 ; 0060dd48
        ;   Label: LAB_0060dd48
    PUSH EBP                            ; 0060dd49
        ;   Label: LAB_0060dd49
    MOV EBP,ESP                         ; 0060dd4a
    PUSH EDI                            ; 0060dd4c
    PUSH ESI                            ; 0060dd4d
    MOV EDI,EDX                         ; 0060dd4e
    MOV ESI,ECX                         ; 0060dd50
    SAR EDI,0x14                        ; 0060dd52
    SAR ECX,0x14                        ; 0060dd55
    AND EDI,0x800007ff                  ; 0060dd58
    AND ECX,0x800007ff                  ; 0060dd5e
    ROL EDI,0x10                        ; 0060dd64
    ROL ECX,0x10                        ; 0060dd67
    ADD DI,CX                           ; 0060dd6a
    ROL EDI,0x10                        ; 0060dd6d
    ROL ECX,0x10                        ; 0060dd70
    AND EDX,0xfffff                     ; 0060dd73
    AND ESI,0xfffff                     ; 0060dd79
    OR DI,DI                            ; 0060dd7f
    JZ 0x0060dd8c                       ; 0060dd82 | LAB_0060dd8c
        ;   XREF to: 0060dd8c (CONDITIONAL_JUMP)
    OR EDX,0x100000                     ; 0060dd84
    JMP 0x0060dd9a                      ; 0060dd8a | LAB_0060dd9a
        ;   XREF to: 0060dd9a (UNCONDITIONAL_JUMP)
    ADD EAX,EAX                         ; 0060dd8c
        ;   Label: LAB_0060dd8c
    ADC EDX,EDX                         ; 0060dd8e
    DEC DI                              ; 0060dd90
    TEST EDX,0x100000                   ; 0060dd92
    JZ 0x0060dd8c                       ; 0060dd98 | LAB_0060dd8c
        ;   XREF to: 0060dd8c (CONDITIONAL_JUMP)
    OR CX,CX                            ; 0060dd9a
        ;   Label: LAB_0060dd9a
    JZ 0x0060dda7                       ; 0060dd9d | LAB_0060dda7
        ;   XREF to: 0060dda7 (CONDITIONAL_JUMP)
    OR ESI,0x100000                     ; 0060dd9f
    JMP 0x0060ddb5                      ; 0060dda5 | LAB_0060ddb5
        ;   XREF to: 0060ddb5 (UNCONDITIONAL_JUMP)
    ADD EBX,EBX                         ; 0060dda7
        ;   Label: LAB_0060dda7
    ADC ESI,ESI                         ; 0060dda9
    DEC CX                              ; 0060ddab
    TEST ESI,0x100000                   ; 0060ddad
    JZ 0x0060dda7                       ; 0060ddb3 | LAB_0060dda7
        ;   XREF to: 0060dda7 (CONDITIONAL_JUMP)
    SUB DI,CX                           ; 0060ddb5
        ;   Label: LAB_0060ddb5
    ADD DI,0x3ff                        ; 0060ddb8
    JS 0x0060ddd0                       ; 0060ddbd | LAB_0060ddd0
        ;   XREF to: 0060ddd0 (CONDITIONAL_JUMP)
    CMP DI,0x7ff                        ; 0060ddbf
    JC 0x0060ddd0                       ; 0060ddc4 | LAB_0060ddd0
        ;   XREF to: 0060ddd0 (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 0060ddc6
    POP ESI                             ; 0060ddc8
    POP EDI                             ; 0060ddc9
    POP EBP                             ; 0060ddca
    JMP 0x0060eb57                      ; 0060ddcb
        ;   XREF to: 0060eb57 (UNCONDITIONAL_CALL)
    CMP DI,-0x34                        ; 0060ddd0
        ;   Label: LAB_0060ddd0
    JGE 0x0060ddde                      ; 0060ddd4 | LAB_0060ddde
        ;   XREF to: 0060ddde (CONDITIONAL_JUMP)
    POP ESI                             ; 0060ddd6
    POP EDI                             ; 0060ddd7
    POP EBP                             ; 0060ddd8
    JMP 0x0060eb3a                      ; 0060ddd9
        ;   XREF to: 0060eb3a (UNCONDITIONAL_CALL)
    PUSH EDI                            ; 0060ddde
        ;   Label: LAB_0060ddde
    MOV CL,0xb                          ; 0060dddf
    SHLD EDX,EAX,CL                     ; 0060dde1
    SHLD EAX,EBP,CL                     ; 0060dde4
    AND EAX,0xfffff800                  ; 0060dde7
    SHLD ESI,EBX,CL                     ; 0060ddec
    SHLD EBX,EBP,CL                     ; 0060ddef
    AND EBX,0xfffff800                  ; 0060ddf2
    PUSH ESI                            ; 0060ddf8
    PUSH EBX                            ; 0060ddf9
    MOV ECX,ESI                         ; 0060ddfa
    MOV EDI,EDX                         ; 0060ddfc
    MOV ESI,EAX                         ; 0060ddfe
    SUB EAX,EAX                         ; 0060de00
    CMP ECX,EDX                         ; 0060de02
    JA 0x0060de09                       ; 0060de04 | LAB_0060de09
        ;   XREF to: 0060de09 (CONDITIONAL_JUMP)
    SUB EDX,ECX                         ; 0060de06
    INC EAX                             ; 0060de08
    PUSH EAX                            ; 0060de09
        ;   Label: LAB_0060de09
    MOV EAX,ESI                         ; 0060de0a
    DIV ECX                             ; 0060de0c
    PUSH EAX                            ; 0060de0e
    XCHG EAX,EBX                        ; 0060de0f
    MUL EBX                             ; 0060de10
    XCHG EAX,ECX                        ; 0060de12
    XCHG EBX,EDX                        ; 0060de13
    MUL EDX                             ; 0060de15
    ADD EAX,EBX                         ; 0060de17
    ADC EDX,0x0                         ; 0060de19
    MOV EBX,dword ptr [EBP + -0x14]     ; 0060de1c
    TEST byte ptr [EBP + -0x18],0x1     ; 0060de1f
    JZ 0x0060de2a                       ; 0060de23 | LAB_0060de2a
        ;   XREF to: 0060de2a (CONDITIONAL_JUMP)
    ADD EAX,EBX                         ; 0060de25
    ADC EDX,dword ptr [EBP + -0x10]     ; 0060de27
    NEG ECX                             ; 0060de2a
        ;   Label: LAB_0060de2a
    SBB ESI,EAX                         ; 0060de2c
    SBB EDI,EDX                         ; 0060de2e
    JZ 0x0060de44                       ; 0060de30 | LAB_0060de44
        ;   XREF to: 0060de44 (CONDITIONAL_JUMP)
    SUB dword ptr [EBP + -0x1c],0x1     ; 0060de32
        ;   Label: LAB_0060de32
    SBB dword ptr [EBP + -0x18],0x0     ; 0060de36
    ADD ECX,EBX                         ; 0060de3a
    ADC ESI,dword ptr [EBP + -0x10]     ; 0060de3c
    ADC EDI,0x0                         ; 0060de3f
    JNZ 0x0060de32                      ; 0060de42 | LAB_0060de32
        ;   XREF to: 0060de32 (CONDITIONAL_JUMP)
    MOV EDI,ESI                         ; 0060de44
        ;   Label: LAB_0060de44
    MOV ESI,ECX                         ; 0060de46
    MOV ECX,dword ptr [EBP + -0x10]     ; 0060de48
    CMP ECX,EDI                         ; 0060de4b
    JA 0x0060de59                       ; 0060de4d | LAB_0060de59
        ;   XREF to: 0060de59 (CONDITIONAL_JUMP)
    SUB EDI,ECX                         ; 0060de4f
    ADD dword ptr [EBP + -0x1c],0x1     ; 0060de51
    ADC dword ptr [EBP + -0x18],0x0     ; 0060de55
    MOV EDX,EDI                         ; 0060de59
        ;   Label: LAB_0060de59
    MOV EAX,ESI                         ; 0060de5b
    DIV ECX                             ; 0060de5d
    PUSH EAX                            ; 0060de5f
    OR EAX,EAX                          ; 0060de60
    JZ 0x0060de90                       ; 0060de62 | LAB_0060de90
        ;   XREF to: 0060de90 (CONDITIONAL_JUMP)
    XCHG EAX,EBX                        ; 0060de64
    MUL EBX                             ; 0060de65
    XCHG EAX,ECX                        ; 0060de67
    XCHG EBX,EDX                        ; 0060de68
    MUL EDX                             ; 0060de6a
    ADD EAX,EBX                         ; 0060de6c
    ADC EDX,0x0                         ; 0060de6e
    NEG ECX                             ; 0060de71
    SBB ESI,EAX                         ; 0060de73
    SBB EDI,EDX                         ; 0060de75
    JZ 0x0060de90                       ; 0060de77 | LAB_0060de90
        ;   XREF to: 0060de90 (CONDITIONAL_JUMP)
    SUB dword ptr [EBP + -0x20],0x1     ; 0060de79
        ;   Label: LAB_0060de79
    SBB dword ptr [EBP + -0x1c],0x0     ; 0060de7d
    SBB dword ptr [EBP + -0x18],0x0     ; 0060de81
    ADD ECX,dword ptr [EBP + -0x14]     ; 0060de85
    ADC ESI,dword ptr [EBP + -0x10]     ; 0060de88
    ADC EDI,0x0                         ; 0060de8b
    JNZ 0x0060de79                      ; 0060de8e | LAB_0060de79
        ;   XREF to: 0060de79 (CONDITIONAL_JUMP)
    POP EAX                             ; 0060de90
        ;   Label: LAB_0060de90
    POP EDX                             ; 0060de91
    POP EBX                             ; 0060de92
    ADD ESP,0x8                         ; 0060de93
    POP EDI                             ; 0060de96
    DEC DI                              ; 0060de97
    SHR EBX,0x1                         ; 0060de99
    JNC 0x0060dea2                      ; 0060de9b | LAB_0060dea2
        ;   XREF to: 0060dea2 (CONDITIONAL_JUMP)
    RCR EDX,0x1                         ; 0060de9d
    RCR EAX,0x1                         ; 0060de9f
    INC EDI                             ; 0060dea1
    SUB ESI,ESI                         ; 0060dea2
        ;   Label: LAB_0060dea2
    MOV CL,0xb                          ; 0060dea4
    SHRD EAX,EDX,CL                     ; 0060dea6
    RCR ESI,0x1                         ; 0060dea9
    SHRD EDX,ESI,CL                     ; 0060deab
    OR EDX,0xfff00000                   ; 0060deae
    ADD ESI,ESI                         ; 0060deb4
    ADC EAX,0x0                         ; 0060deb6
    ADC EDX,0x0                         ; 0060deb9
    ADC EDI,0x0                         ; 0060debc
    OR DI,DI                            ; 0060debf
    JG 0x0060dee1                       ; 0060dec2 | LAB_0060dee1
        ;   XREF to: 0060dee1 (CONDITIONAL_JUMP)
    JNZ 0x0060deca                      ; 0060dec4 | LAB_0060deca
        ;   XREF to: 0060deca (CONDITIONAL_JUMP)
    MOV CL,0x1                          ; 0060dec6
    JMP 0x0060ded0                      ; 0060dec8 | LAB_0060ded0
        ;   XREF to: 0060ded0 (UNCONDITIONAL_JUMP)
    NEG DI                              ; 0060deca
        ;   Label: LAB_0060deca
    MOV CX,DI                           ; 0060decd
    AND EDX,0x1fffff                    ; 0060ded0
        ;   Label: LAB_0060ded0
    SUB EBX,EBX                         ; 0060ded6
    SHRD EAX,EDX,CL                     ; 0060ded8
    SHRD EDX,EBX,CL                     ; 0060dedb
    SUB DI,DI                           ; 0060dede
    AND EDX,0xfffff                     ; 0060dee1
        ;   Label: LAB_0060dee1
    MOV ESI,EDI                         ; 0060dee7
    ROR EDI,0xb                         ; 0060dee9
    ADD ESI,ESI                         ; 0060deec
    RCR EDI,0x1                         ; 0060deee
    AND EDI,0xfff00000                  ; 0060def0
    OR EDX,EDI                          ; 0060def6
    POP ESI                             ; 0060def8
    POP EDI                             ; 0060def9
    POP EBP                             ; 0060defa
    RET                                 ; 0060defb

