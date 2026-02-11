; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_gore_cpp_CGore_FUN_004ee0f0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 at 0040caaa
;
; Referenced Globals:
;   double DOUBLE_0062e43a = 0.5
;   double DOUBLE_0062e442 = 1.33300000000000
;   int INT_02d873d8
;   CBloodSplat[2000] DAT_02d873dc
;   undefined4 DAT_02d873e0
;   undefined4 DAT_02d873e4
;   undefined4 DAT_02d873e8
;   undefined4 DAT_02d873ec
;   undefined4 DAT_02d873f0
;   undefined4 DAT_02d87424
;   undefined4 DAT_02d87428
;   undefined4 DAT_02d8742c
;   undefined4 DAT_02d87430
;   undefined4 DAT_02d87434
;   int INT_02da8720
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee0f0
        ;   Label: core_gore.cpp_CGore_FUN_004ee0f0
    PUSH ESI                            ; 004ee0f1
    PUSH EDI                            ; 004ee0f2
    PUSH EBP                            ; 004ee0f3
    MOV EBP,ESP                         ; 004ee0f4
    AND ESP,0xfffffff8                  ; 004ee0f6
    MOV ESI,dword ptr [0x02d873d8]      ; 004ee0f9 | INT_02d873d8
    MOV EDI,dword ptr [0x02da8720]      ; 004ee0ff | INT_02da8720
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ee105
    XOR EBX,EBX                         ; 004ee108
    TEST EDI,EDI                        ; 004ee10a
    JLE 0x004ee12e                      ; 004ee10c
        ;   XREF to: 004ee12e (CONDITIONAL_JUMP)  ; LAB_004ee12e
    MOV EDX,0x2da8724                   ; 004ee10e | DAT_02da8724
    FLD float ptr [ECX + 0x4]           ; 004ee113
        ;   Label: LAB_004ee113
    FSUB float ptr [EDX + 0x8]          ; 004ee116 | DAT_02da872c | DAT_02da8754
    FABS                                ; 004ee119
    FCOMP double ptr [0x0062e43a]       ; 004ee11b | DOUBLE_0062e43a
    FNSTSW AX                           ; 004ee121
    SAHF                                ; 004ee123
    JBE 0x004ee15e                      ; 004ee124
        ;   XREF to: 004ee15e (CONDITIONAL_JUMP)  ; LAB_004ee15e
    INC EBX                             ; 004ee126
        ;   Label: LAB_004ee126
    ADD EDX,0x28                        ; 004ee127
    CMP EBX,EDI                         ; 004ee12a
    JL 0x004ee113                       ; 004ee12c
        ;   XREF to: 004ee113 (CONDITIONAL_JUMP)  ; LAB_004ee113
    XOR EBX,EBX                         ; 004ee12e
        ;   Label: LAB_004ee12e
    TEST ESI,ESI                        ; 004ee130
    JLE 0x004ee147                      ; 004ee132
        ;   XREF to: 004ee147 (CONDITIONAL_JUMP)  ; LAB_004ee147
    MOV EDX,0x2d873dc                   ; 004ee134 | DAT_02d873dc
    CMP dword ptr [EDX + 0x10],0x0      ; 004ee139 | DAT_02d873ec | DAT_02d87430
        ;   Label: LAB_004ee139
    JZ 0x004ee192                       ; 004ee13d
        ;   XREF to: 004ee192 (CONDITIONAL_JUMP)  ; LAB_004ee192
    INC EBX                             ; 004ee13f
        ;   Label: LAB_004ee13f
    ADD EDX,0x44                        ; 004ee140
    CMP EBX,ESI                         ; 004ee143
    JL 0x004ee139                       ; 004ee145
        ;   XREF to: 004ee139 (CONDITIONAL_JUMP)  ; LAB_004ee139
    XOR EDX,EDX                         ; 004ee147
        ;   Label: LAB_004ee147
    MOV EAX,EDX                         ; 004ee149
        ;   Label: LAB_004ee149
    MOV dword ptr [0x02da8720],EDI      ; 004ee14b | INT_02da8720
    MOV dword ptr [0x02d873d8],ESI      ; 004ee151 | INT_02d873d8
    MOV ESP,EBP                         ; 004ee157
    POP EBP                             ; 004ee159
    POP EDI                             ; 004ee15a
    POP ESI                             ; 004ee15b
    POP EBX                             ; 004ee15c
    RET                                 ; 004ee15d
    FLD float ptr [ECX]                 ; 004ee15e
        ;   Label: LAB_004ee15e
    FSUB float ptr [EDX + 0x4]          ; 004ee160 | DAT_02da8728 | DAT_02da8750
    FABS                                ; 004ee163
    FCOMP double ptr [0x0062e442]       ; 004ee165 | DOUBLE_0062e442
    FNSTSW AX                           ; 004ee16b
    SAHF                                ; 004ee16d
    JA 0x004ee126                       ; 004ee16e
        ;   XREF to: 004ee126 (CONDITIONAL_JUMP)  ; LAB_004ee126
    FLD float ptr [ECX + 0x8]           ; 004ee170
    FSUB float ptr [EDX + 0xc]          ; 004ee173 | DAT_02da8730 | DAT_02da8758
    FABS                                ; 004ee176
    FCOMP double ptr [0x0062e442]       ; 004ee178 | DOUBLE_0062e442
    FNSTSW AX                           ; 004ee17e
    SAHF                                ; 004ee180
    JA 0x004ee126                       ; 004ee181
        ;   XREF to: 004ee126 (CONDITIONAL_JUMP)  ; LAB_004ee126
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004ee183
    MOV EDX,dword ptr [EDX + 0x10]      ; 004ee186 | DAT_02da8734 | DAT_02da875c
    MOV dword ptr [ECX],EDX             ; 004ee189
    MOV EDX,0x1                         ; 004ee18b
    JMP 0x004ee149                      ; 004ee190
        ;   XREF to: 004ee149 (UNCONDITIONAL_JUMP)  ; LAB_004ee149
    FLD float ptr [ECX + 0x4]           ; 004ee192
        ;   Label: LAB_004ee192
    FSUB float ptr [EDX + 0x8]          ; 004ee195 | DAT_02d873e4 | DAT_02d87428
    FABS                                ; 004ee198
    FCOMP double ptr [0x0062e43a]       ; 004ee19a | DOUBLE_0062e43a
    FNSTSW AX                           ; 004ee1a0
    SAHF                                ; 004ee1a2
    JA 0x004ee13f                       ; 004ee1a3
        ;   XREF to: 004ee13f (CONDITIONAL_JUMP)  ; LAB_004ee13f
    FLD float ptr [ECX]                 ; 004ee1a5
    FSUB float ptr [EDX + 0x4]          ; 004ee1a7 | DAT_02d873e0 | DAT_02d87424
    FABS                                ; 004ee1aa
    FCOMP double ptr [0x0062e43a]       ; 004ee1ac | DOUBLE_0062e43a
    FNSTSW AX                           ; 004ee1b2
    SAHF                                ; 004ee1b4
    JA 0x004ee13f                       ; 004ee1b5
        ;   XREF to: 004ee13f (CONDITIONAL_JUMP)  ; LAB_004ee13f
    FLD float ptr [ECX + 0x8]           ; 004ee1b7
    FSUB float ptr [EDX + 0xc]          ; 004ee1ba | DAT_02d873e8 | DAT_02d8742c
    FABS                                ; 004ee1bd
    FCOMP double ptr [0x0062e43a]       ; 004ee1bf | DOUBLE_0062e43a
    FNSTSW AX                           ; 004ee1c5
    SAHF                                ; 004ee1c7
    JA 0x004ee13f                       ; 004ee1c8
        ;   XREF to: 004ee13f (CONDITIONAL_JUMP)  ; LAB_004ee13f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004ee1ce
    MOV EDX,dword ptr [EDX + 0x14]      ; 004ee1d1 | DAT_02d873f0 | DAT_02d87434
    MOV dword ptr [ECX],EDX             ; 004ee1d4
    MOV EDX,0x1                         ; 004ee1d6
    JMP 0x004ee149                      ; 004ee1db
        ;   XREF to: 004ee149 (UNCONDITIONAL_JUMP)  ; LAB_004ee149

