; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __softfp_double double crt_math.c_dadd_FUN_0060defc(double a, double b)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   crt_fpemu.c_staticInit_FUN_0060be80 at 0060bed8
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined1 DAT_00684acd
;
; Called Functions:
;   crt_unknown.c_FUN_0060eb57
;
; *****************************************************************************

section .text

    XOR ECX,0x80000000                  ; 0060defc
        ;   Label: crt_math.c_dadd_FUN_0060defc
    OR EBX,EBX                          ; 0060df02
    JNZ 0x0060df0c                      ; 0060df04 | LAB_0060df0c
        ;   XREF to: 0060df0c (CONDITIONAL_JUMP)
    ADD ECX,ECX                         ; 0060df06
    JZ 0x0060df18                       ; 0060df08 | LAB_0060df18
        ;   XREF to: 0060df18 (CONDITIONAL_JUMP)
    RCR ECX,0x1                         ; 0060df0a
    OR EAX,EAX                          ; 0060df0c
        ;   Label: LAB_0060df0c
    JNZ 0x0060df1b                      ; 0060df0e | LAB_0060df1b
        ;   XREF to: 0060df1b (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 0060df10
    JNZ 0x0060df19                      ; 0060df12 | LAB_0060df19
        ;   XREF to: 0060df19 (CONDITIONAL_JUMP)
    MOV EDX,ECX                         ; 0060df14
    MOV EAX,EBX                         ; 0060df16
    RET                                 ; 0060df18
        ;   Label: LAB_0060df18
    RCR EDX,0x1                         ; 0060df19
        ;   Label: LAB_0060df19
    CMP byte ptr [0x00684acd],0x0       ; 0060df1b | undefined1 DAT_00684acd
        ;   Label: LAB_0060df1b
    JZ 0x0060df45                       ; 0060df22 | LAB_0060df45
        ;   XREF to: 0060df45 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0060df24
    PUSH EAX                            ; 0060df25
    FLD double ptr [ESP]                ; 0060df26
    PUSH ECX                            ; 0060df29
    PUSH EBX                            ; 0060df2a
    FADD double ptr [ESP]               ; 0060df2b
    FSTP double ptr [ESP + 0x8]         ; 0060df2e
        ;   Label: LAB_0060df2e
    ADD ESP,0x8                         ; 0060df32
    WAIT                                ; 0060df35
    POP EAX                             ; 0060df36
    POP EDX                             ; 0060df37
    CMP EDX,0x80000000                  ; 0060df38
    JNZ 0x0060df44                      ; 0060df3e | LAB_0060df44
        ;   XREF to: 0060df44 (CONDITIONAL_JUMP)
    SUB EDX,EDX                         ; 0060df40
    MOV EAX,EDX                         ; 0060df42
    RET                                 ; 0060df44
        ;   Label: LAB_0060df44
    PUSH EBP                            ; 0060df45
        ;   Label: LAB_0060df45
    PUSH EDI                            ; 0060df46
    PUSH ESI                            ; 0060df47
    MOV EDI,EDX                         ; 0060df48
    MOV ESI,ECX                         ; 0060df4a
    SAR EDI,0x14                        ; 0060df4c
    SAR ECX,0x14                        ; 0060df4f
    AND EDI,0x800007ff                  ; 0060df52
    AND ECX,0x800007ff                  ; 0060df58
    MOV EBP,ECX                         ; 0060df5e
    ROL EDI,0x10                        ; 0060df60
    ROL ECX,0x10                        ; 0060df63
    ADD CX,DI                           ; 0060df66
    ROL EDI,0x10                        ; 0060df69
    ROL ECX,0x10                        ; 0060df6c
    AND EDX,0xfffff                     ; 0060df6f
    AND ESI,0xfffff                     ; 0060df75
    OR DI,DI                            ; 0060df7b
    JZ 0x0060df86                       ; 0060df7e | LAB_0060df86
        ;   XREF to: 0060df86 (CONDITIONAL_JUMP)
    OR EDX,0x100000                     ; 0060df80
    OR CX,CX                            ; 0060df86
        ;   Label: LAB_0060df86
    JZ 0x0060df91                       ; 0060df89 | LAB_0060df91
        ;   XREF to: 0060df91 (CONDITIONAL_JUMP)
    OR ESI,0x100000                     ; 0060df8b
    ADD EAX,EAX                         ; 0060df91
        ;   Label: LAB_0060df91
    ADC EDX,EDX                         ; 0060df93
    ADD EBX,EBX                         ; 0060df95
    ADC ESI,ESI                         ; 0060df97
    SUB CX,DI                           ; 0060df99
    JZ 0x0060dfcd                       ; 0060df9c | LAB_0060dfcd
        ;   XREF to: 0060dfcd (CONDITIONAL_JUMP)
    JNC 0x0060dfa8                      ; 0060df9e | LAB_0060dfa8
        ;   XREF to: 0060dfa8 (CONDITIONAL_JUMP)
    MOV EBP,EDI                         ; 0060dfa0
    NEG CX                              ; 0060dfa2
    XCHG EAX,EBX                        ; 0060dfa5
    XCHG EDX,ESI                        ; 0060dfa6
    CMP CX,0x36                         ; 0060dfa8
        ;   Label: LAB_0060dfa8
    JBE 0x0060dfcd                      ; 0060dfac | LAB_0060dfcd
        ;   XREF to: 0060dfcd (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 0060dfae
    MOV EAX,EBX                         ; 0060dfb0
    ADD EBP,EBP                         ; 0060dfb2
    RCR EDX,0x1                         ; 0060dfb4
    RCR EAX,0x1                         ; 0060dfb6
    AND EDX,0x800fffff                  ; 0060dfb8
    ROR EBP,0xd                         ; 0060dfbe
    AND EBP,0x7ff00000                  ; 0060dfc1
    OR EDX,EBP                          ; 0060dfc7
    POP ESI                             ; 0060dfc9
    POP EDI                             ; 0060dfca
    POP EBP                             ; 0060dfcb
    RET                                 ; 0060dfcc
    OR ECX,ECX                          ; 0060dfcd
        ;   Label: LAB_0060dfcd
    JNS 0x0060dfde                      ; 0060dfcf | LAB_0060dfde
        ;   XREF to: 0060dfde (CONDITIONAL_JUMP)
    NEG ESI                             ; 0060dfd1
    NEG EBX                             ; 0060dfd3
    SBB ESI,0x0                         ; 0060dfd5
    XOR EBP,0x80000000                  ; 0060dfd8
    SUB EDI,EDI                         ; 0060dfde
        ;   Label: LAB_0060dfde
    CMP CL,0x0                          ; 0060dfe0
    JZ 0x0060e008                       ; 0060dfe3 | LAB_0060e008
        ;   XREF to: 0060e008 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0060dfe5
    SUB EBX,EBX                         ; 0060dfe6
    CMP CL,0x20                         ; 0060dfe8
    JC 0x0060dffa                       ; 0060dfeb | LAB_0060dffa
        ;   XREF to: 0060dffa (CONDITIONAL_JUMP)
    OR EAX,EAX                          ; 0060dfed
    SETNZ BL                            ; 0060dfef
    MOV EDI,EBX                         ; 0060dff2
    SUB EBX,EBX                         ; 0060dff4
    MOV EAX,EDX                         ; 0060dff6
    SUB EDX,EDX                         ; 0060dff8
    SHRD EBX,EAX,CL                     ; 0060dffa
        ;   Label: LAB_0060dffa
    OR EDI,EBX                          ; 0060dffd
    SUB EBX,EBX                         ; 0060dfff
    SHRD EAX,EDX,CL                     ; 0060e001
    SHRD EDX,EBX,CL                     ; 0060e004
    POP EBX                             ; 0060e007
    ADD EAX,EBX                         ; 0060e008
        ;   Label: LAB_0060e008
    ADC EDX,ESI                         ; 0060e00a
    JNS 0x0060e031                      ; 0060e00c | LAB_0060e031
        ;   XREF to: 0060e031 (CONDITIONAL_JUMP)
    CMP CL,0x35                         ; 0060e00e
    JC 0x0060e024                       ; 0060e011 | LAB_0060e024
        ;   XREF to: 0060e024 (CONDITIONAL_JUMP)
    TEST EDI,0x7fffffff                 ; 0060e013
    SETNZ BL                            ; 0060e019
    SHR EBX,0x1                         ; 0060e01c
    ADC EAX,0x0                         ; 0060e01e
    ADC EDX,0x0                         ; 0060e021
    NEG EDX                             ; 0060e024
        ;   Label: LAB_0060e024
    NEG EAX                             ; 0060e026
    SBB EDX,0x0                         ; 0060e028
    XOR EBP,0x80000000                  ; 0060e02b
    MOV EBX,EAX                         ; 0060e031
        ;   Label: LAB_0060e031
    OR EBX,EDX                          ; 0060e033
    JZ 0x0060e0a1                       ; 0060e035 | LAB_0060e0a1
        ;   XREF to: 0060e0a1 (CONDITIONAL_JUMP)
    OR BP,BP                            ; 0060e037
    JZ 0x0060e0a5                       ; 0060e03a | LAB_0060e0a5
        ;   XREF to: 0060e0a5 (CONDITIONAL_JUMP)
    TEST EDX,0x7fe00000                 ; 0060e03c
        ;   Label: LAB_0060e03c
    JNZ 0x0060e04e                      ; 0060e042 | LAB_0060e04e
        ;   XREF to: 0060e04e (CONDITIONAL_JUMP)
    DEC BP                              ; 0060e044
    JZ 0x0060e0a5                       ; 0060e046 | LAB_0060e0a5
        ;   XREF to: 0060e0a5 (CONDITIONAL_JUMP)
    ADD EAX,EAX                         ; 0060e048
    ADC EDX,EDX                         ; 0060e04a
    JMP 0x0060e03c                      ; 0060e04c | LAB_0060e03c
        ;   XREF to: 0060e03c (UNCONDITIONAL_JUMP)
    TEST EDX,0x400000                   ; 0060e04e | IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
        ;   Label: LAB_0060e04e
    JZ 0x0060e066                       ; 0060e054 | LAB_0060e066
        ;   XREF to: 0060e066 (CONDITIONAL_JUMP)
    SHR EDX,0x1                         ; 0060e056
    RCR EAX,0x1                         ; 0060e058
    ADC EDI,0x0                         ; 0060e05a
    INC BP                              ; 0060e05d
    CMP BP,0x7ff                        ; 0060e05f
    JZ 0x0060e0af                       ; 0060e064 | LAB_0060e0af
        ;   XREF to: 0060e0af (CONDITIONAL_JUMP)
    SHR EDX,0x1                         ; 0060e066
        ;   Label: LAB_0060e066
    RCR EAX,0x1                         ; 0060e068
    JNC 0x0060e090                      ; 0060e06a | LAB_0060e090
        ;   XREF to: 0060e090 (CONDITIONAL_JUMP)
    OR EDI,EDI                          ; 0060e06c
    SETNZ BL                            ; 0060e06e
    OR EBX,EAX                          ; 0060e071
    SHR EBX,0x1                         ; 0060e073
    ADC EAX,0x0                         ; 0060e075
    ADC EDX,0x0                         ; 0060e078
    TEST EDX,0x200000                   ; 0060e07b
    JZ 0x0060e090                       ; 0060e081 | LAB_0060e090
        ;   XREF to: 0060e090 (CONDITIONAL_JUMP)
    SHR EDX,0x1                         ; 0060e083
    RCR EAX,0x1                         ; 0060e085
    INC BP                              ; 0060e087
    CMP BP,0x7ff                        ; 0060e089
    JZ 0x0060e0af                       ; 0060e08e | LAB_0060e0af
        ;   XREF to: 0060e0af (CONDITIONAL_JUMP)
    AND EDX,0xfffff                     ; 0060e090
        ;   Label: LAB_0060e090
    MOV ECX,EBP                         ; 0060e096
    SHL EBP,0x15                        ; 0060e098
    ADD ECX,ECX                         ; 0060e09b
    RCR EBP,0x1                         ; 0060e09d
    OR EDX,EBP                          ; 0060e09f
    POP ESI                             ; 0060e0a1
        ;   Label: LAB_0060e0a1
    POP EDI                             ; 0060e0a2
    POP EBP                             ; 0060e0a3
    RET                                 ; 0060e0a4
    ADD EBP,EBP                         ; 0060e0a5
        ;   Label: LAB_0060e0a5
    RCR EDX,0x1                         ; 0060e0a7
    RCR EAX,0x1                         ; 0060e0a9
    POP ESI                             ; 0060e0ab
    POP EDI                             ; 0060e0ac
    POP EBP                             ; 0060e0ad
    RET                                 ; 0060e0ae
    MOV EAX,EBP                         ; 0060e0af
        ;   Label: LAB_0060e0af
    POP ESI                             ; 0060e0b1
    POP EDI                             ; 0060e0b2
    POP EBP                             ; 0060e0b3
    JMP 0x0060eb57                      ; 0060e0b4
        ;   XREF to: 0060eb57 (UNCONDITIONAL_CALL)

