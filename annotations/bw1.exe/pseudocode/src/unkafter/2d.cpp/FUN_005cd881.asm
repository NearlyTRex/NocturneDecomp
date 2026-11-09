; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double unkafter_2d_cpp_FUN_005cd881(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cbd30 at 005cbd77
;
; Referenced Globals:
;   undefined4 DAT_0062621d
;
; Called Functions:
;   crt_unknown.c_FUN_005c646c
;   unkafter_2d.cpp_FUN_005cebd0
;
; *****************************************************************************

section .text

    OR EAX,EAX                          ; 005cd881
        ;   Label: unkafter_2d.cpp_FUN_005cd881
    JNZ 0x005cd88c                      ; 005cd883
        ;   XREF to: 005cd88c (CONDITIONAL_JUMP)  ; LAB_005cd88c
    ADD EDX,EDX                         ; 005cd885
    JNZ 0x005cd88a                      ; 005cd887
        ;   XREF to: 005cd88a (CONDITIONAL_JUMP)  ; LAB_005cd88a
    RET                                 ; 005cd889
    RCR EDX,0x1                         ; 005cd88a
        ;   Label: LAB_005cd88a
    OR EBX,EBX                          ; 005cd88c
        ;   Label: LAB_005cd88c
    JNZ 0x005cd89b                      ; 005cd88e
        ;   XREF to: 005cd89b (CONDITIONAL_JUMP)  ; LAB_005cd89b
    ADD ECX,ECX                         ; 005cd890
    JNZ 0x005cd899                      ; 005cd892
        ;   XREF to: 005cd899 (CONDITIONAL_JUMP)  ; LAB_005cd899
    SUB EAX,EAX                         ; 005cd894
    SUB EDX,EDX                         ; 005cd896
    RET                                 ; 005cd898
    RCR ECX,0x1                         ; 005cd899
        ;   Label: LAB_005cd899
    CMP byte ptr [0x0062621d],0x0       ; 005cd89b | DAT_0062621d
        ;   Label: LAB_005cd89b
    JZ 0x005cd8b3                       ; 005cd8a2
        ;   XREF to: 005cd8b3 (CONDITIONAL_JUMP)  ; LAB_005cd8b3
    PUSH EDX                            ; 005cd8a4
    PUSH EAX                            ; 005cd8a5
    FLD double ptr [ESP]                ; 005cd8a6
    PUSH ECX                            ; 005cd8a9
    PUSH EBX                            ; 005cd8aa
    FMUL double ptr [ESP]               ; 005cd8ab
    JMP 0x005cd6f6                      ; 005cd8ae
        ;   XREF to: 005cd6f6 (UNCONDITIONAL_JUMP)  ; LAB_005cd6f6
    PUSH EBP                            ; 005cd8b3
        ;   Label: LAB_005cd8b3
    PUSH EDI                            ; 005cd8b4
    PUSH ESI                            ; 005cd8b5
    MOV EDI,EDX                         ; 005cd8b6
    MOV ESI,ECX                         ; 005cd8b8
    SAR EDI,0x14                        ; 005cd8ba
    SAR ECX,0x14                        ; 005cd8bd
    AND EDI,0x800007ff                  ; 005cd8c0
    AND ECX,0x800007ff                  ; 005cd8c6
    ROL EDI,0x10                        ; 005cd8cc
    ROL ECX,0x10                        ; 005cd8cf
    ADD CX,DI                           ; 005cd8d2
    ROL EDI,0x10                        ; 005cd8d5
    ROL ECX,0x10                        ; 005cd8d8
    AND EDX,0xfffff                     ; 005cd8db
    AND ESI,0xfffff                     ; 005cd8e1
    OR DI,DI                            ; 005cd8e7
    JNZ 0x005cd8fc                      ; 005cd8ea
        ;   XREF to: 005cd8fc (CONDITIONAL_JUMP)  ; LAB_005cd8fc
    INC DI                              ; 005cd8ec
    DEC DI                              ; 005cd8ee
        ;   Label: LAB_005cd8ee
    ADD EAX,EAX                         ; 005cd8f0
    ADC EDX,EDX                         ; 005cd8f2
    TEST EDX,0x100000                   ; 005cd8f4
    JZ 0x005cd8ee                       ; 005cd8fa
        ;   XREF to: 005cd8ee (CONDITIONAL_JUMP)  ; LAB_005cd8ee
    OR EDX,0x100000                     ; 005cd8fc
        ;   Label: LAB_005cd8fc
    OR CX,CX                            ; 005cd902
    JNZ 0x005cd917                      ; 005cd905
        ;   XREF to: 005cd917 (CONDITIONAL_JUMP)  ; LAB_005cd917
    INC CX                              ; 005cd907
    DEC CX                              ; 005cd909
        ;   Label: LAB_005cd909
    ADD EBX,EBX                         ; 005cd90b
    ADC ESI,ESI                         ; 005cd90d
    TEST ESI,0x100000                   ; 005cd90f
    JZ 0x005cd909                       ; 005cd915
        ;   XREF to: 005cd909 (CONDITIONAL_JUMP)  ; LAB_005cd909
    OR ESI,0x100000                     ; 005cd917
        ;   Label: LAB_005cd917
    ADD CX,DI                           ; 005cd91d
    SUB CX,0x3ff                        ; 005cd920
    JS 0x005cd938                       ; 005cd925
        ;   XREF to: 005cd938 (CONDITIONAL_JUMP)  ; LAB_005cd938
    CMP CX,0x7ff                        ; 005cd927
    JC 0x005cd938                       ; 005cd92c
        ;   XREF to: 005cd938 (CONDITIONAL_JUMP)  ; LAB_005cd938
    MOV EAX,ECX                         ; 005cd92e
    POP ESI                             ; 005cd930
    POP EDI                             ; 005cd931
    POP EBP                             ; 005cd932
    JMP 0x005ce0cb                      ; 005cd933
        ;   XREF to: 005ce0cb (UNCONDITIONAL_JUMP)  ; LAB_005ce0cb
    CMP CX,-0x35                        ; 005cd938
        ;   Label: LAB_005cd938
    JGE 0x005cd946                      ; 005cd93c
        ;   XREF to: 005cd946 (CONDITIONAL_JUMP)  ; LAB_005cd946
    POP ESI                             ; 005cd93e
    POP EDI                             ; 005cd93f
    POP EBP                             ; 005cd940
    JMP 0x005ce0ae                      ; 005cd941
        ;   XREF to: 005ce0ae (UNCONDITIONAL_JUMP)  ; LAB_005ce0ae
    PUSH ECX                            ; 005cd946
        ;   Label: LAB_005cd946
    MOV CL,0xb                          ; 005cd947
    SHLD EDX,EAX,CL                     ; 005cd949
    SHLD EAX,EBP,CL                     ; 005cd94c
    AND EAX,0xfffff800                  ; 005cd94f
    SHLD ESI,EBX,CL                     ; 005cd954
    SHLD EBX,EBP,CL                     ; 005cd957
    AND EBX,0xfffff800                  ; 005cd95a
    SUB EBP,EBP                         ; 005cd960
    PUSH ESI                            ; 005cd962
    PUSH EDX                            ; 005cd963
    PUSH EAX                            ; 005cd964
    MUL EBX                             ; 005cd965
    XCHG EAX,ESI                        ; 005cd967
    MOV ECX,EDX                         ; 005cd968
    POP EDX                             ; 005cd96a
    MUL EDX                             ; 005cd96b
    MOV EDI,EDX                         ; 005cd96d
    ADD ECX,EAX                         ; 005cd96f
    ADC EDI,EBP                         ; 005cd971
    ADC EBP,EBP                         ; 005cd973
    POP EAX                             ; 005cd975
    XCHG EAX,EBX                        ; 005cd976
    MUL EBX                             ; 005cd977
    ADD ECX,EAX                         ; 005cd979
    ADC EDI,EDX                         ; 005cd97b
    ADC EBP,0x0                         ; 005cd97d
    MOV EAX,EBX                         ; 005cd980
    POP EDX                             ; 005cd982
    MUL EDX                             ; 005cd983
    ADD EAX,EDI                         ; 005cd985
    ADC EDX,EBP                         ; 005cd987
    SUB EBX,EBX                         ; 005cd989
    MOV CL,0xa                          ; 005cd98b
    SHRD EBX,EAX,CL                     ; 005cd98d
    SHRD EAX,EDX,CL                     ; 005cd990
    SHRD EDX,EBX,CL                     ; 005cd993
    POP ECX                             ; 005cd996
    TEST EDX,0x200000                   ; 005cd997
        ;   Label: LAB_005cd997
    JZ 0x005cd9b0                       ; 005cd99d
        ;   XREF to: 005cd9b0 (CONDITIONAL_JUMP)  ; LAB_005cd9b0
    SHR EDX,0x1                         ; 005cd99f
    RCR EAX,0x1                         ; 005cd9a1
    RCR EBX,0x1                         ; 005cd9a3
    INC CX                              ; 005cd9a5
    CMP CX,0x7ff                        ; 005cd9a7
    JZ 0x005cda14                       ; 005cd9ac
        ;   XREF to: 005cda14 (CONDITIONAL_JUMP)  ; LAB_005cda14
    JMP 0x005cd997                      ; 005cd9ae
        ;   XREF to: 005cd997 (UNCONDITIONAL_JUMP)  ; LAB_005cd997
    ADD EBX,EBX                         ; 005cd9b0
        ;   Label: LAB_005cd9b0
    JNC 0x005cd9de                      ; 005cd9b2
        ;   XREF to: 005cd9de (CONDITIONAL_JUMP)  ; LAB_005cd9de
    JNZ 0x005cd9c3                      ; 005cd9b4
        ;   XREF to: 005cd9c3 (CONDITIONAL_JUMP)  ; LAB_005cd9c3
    OR ESI,ESI                          ; 005cd9b6
    SETNZ BL                            ; 005cd9b8
    SHR EBX,0x1                         ; 005cd9bb
    JC 0x005cd9c3                       ; 005cd9bd
        ;   XREF to: 005cd9c3 (CONDITIONAL_JUMP)  ; LAB_005cd9c3
    MOV ESI,EAX                         ; 005cd9bf
    SHR ESI,0x1                         ; 005cd9c1
    ADC EAX,0x0                         ; 005cd9c3
        ;   Label: LAB_005cd9c3
    ADC EDX,0x0                         ; 005cd9c6
    TEST EDX,0x200000                   ; 005cd9c9
    JZ 0x005cd9de                       ; 005cd9cf
        ;   XREF to: 005cd9de (CONDITIONAL_JUMP)  ; LAB_005cd9de
    SHR EDX,0x1                         ; 005cd9d1
    RCR EAX,0x1                         ; 005cd9d3
    INC CX                              ; 005cd9d5
    CMP CX,0x7ff                        ; 005cd9d7
    JZ 0x005cda14                       ; 005cd9dc
        ;   XREF to: 005cda14 (CONDITIONAL_JUMP)  ; LAB_005cda14
    OR CX,CX                            ; 005cd9de
        ;   Label: LAB_005cd9de
    JG 0x005cd9f9                       ; 005cd9e1
        ;   XREF to: 005cd9f9 (CONDITIONAL_JUMP)  ; LAB_005cd9f9
    JNZ 0x005cd9e9                      ; 005cd9e3
        ;   XREF to: 005cd9e9 (CONDITIONAL_JUMP)  ; LAB_005cd9e9
    MOV CL,0x1                          ; 005cd9e5
    JMP 0x005cd9ee                      ; 005cd9e7
        ;   XREF to: 005cd9ee (UNCONDITIONAL_JUMP)  ; LAB_005cd9ee
    NEG CX                              ; 005cd9e9
        ;   Label: LAB_005cd9e9
    DEC CX                              ; 005cd9ec
    SUB EBX,EBX                         ; 005cd9ee
        ;   Label: LAB_005cd9ee
    SHRD EAX,EDX,CL                     ; 005cd9f0
    SHRD EDX,EBX,CL                     ; 005cd9f3
    SUB CX,CX                           ; 005cd9f6
    AND EDX,0xfffff                     ; 005cd9f9
        ;   Label: LAB_005cd9f9
    MOV ESI,ECX                         ; 005cd9ff
    ROR ECX,0xb                         ; 005cda01
    ADD ESI,ESI                         ; 005cda04
    RCR ECX,0x1                         ; 005cda06
    AND ECX,0xfff00000                  ; 005cda08
    OR EDX,ECX                          ; 005cda0e
    POP ESI                             ; 005cda10
    POP EDI                             ; 005cda11
    POP EBP                             ; 005cda12
    RET                                 ; 005cda13
    MOV EAX,ECX                         ; 005cda14
        ;   Label: LAB_005cda14
    POP ESI                             ; 005cda16
    POP EDI                             ; 005cda17
    POP EBP                             ; 005cda18
    JMP 0x005ce0cb                      ; 005cda19
        ;   XREF to: 005ce0cb (UNCONDITIONAL_JUMP)  ; LAB_005ce0cb
    SUB EDX,EDX                         ; 005ce0ae
        ;   Label: LAB_005ce0ae
    SUB EAX,EAX                         ; 005ce0b0
    RET                                 ; 005ce0b2
    PUSH EAX                            ; 005ce0cb
        ;   Label: LAB_005ce0cb
    CALL crt_unknown.c_FUN_005c646c     ; 005ce0cc
        ;   XREF to: 005c646c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c646c()
    MOV EAX,0x84                        ; 005ce0d1
    CALL unkafter_2d.cpp_FUN_005cebd0   ; 005ce0d6
        ;   XREF to: 005cebd0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cebd0()
    POP EAX                             ; 005ce0db
    AND EAX,0x80000000                  ; 005ce0dc
        ;   Label: LAB_005ce0dc
    OR EAX,0x7ff00000                   ; 005ce0e1
    MOV EDX,EAX                         ; 005ce0e6
    SUB EAX,EAX                         ; 005ce0e8
    RET                                 ; 005ce0ea

