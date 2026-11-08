; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425120(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5038
;   undefined4 DAT_005d503c
;   undefined4 DAT_005d5040
;   undefined4 DAT_005fd228
;
; Called Functions:
;   FUN_0040cc00
;   FUN_0040cc60
;   FUN_00427a30
;   FUN_004688e0
;   FUN_00468950
;   FUN_004a0510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425120
        ;   Label: FUN_00425120
    PUSH ESI                            ; 00425121
    PUSH EDI                            ; 00425122
    PUSH EBP                            ; 00425123
    MOV EBP,ESP                         ; 00425124
    SUB ESP,0x2c                        ; 00425126
    AND ESP,0xfffffff8                  ; 00425129
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042512c
    MOV dword ptr [EAX + 0x38],0x0      ; 0042512f
    PUSH EAX                            ; 00425136
    MOV EDX,dword ptr [EAX + 0x38]      ; 00425137
    MOV dword ptr [EAX + 0x34],EDX      ; 0042513a
    MOV EDX,dword ptr [EAX + 0x34]      ; 0042513d
    MOV dword ptr [EAX + 0x30],EDX      ; 00425140
    CALL FUN_004a0510                   ; 00425143
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 00425148
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042514b
    MOV dword ptr [EAX + 0x12670],0x4   ; 0042514e
    MOV ECX,dword ptr [EAX + 0x12670]   ; 00425158
    XOR EBX,EBX                         ; 0042515e
    TEST ECX,ECX                        ; 00425160
    JLE 0x00425203                      ; 00425162
        ;   XREF to: 00425203 (CONDITIONAL_JUMP)  ; LAB_00425203
    ADD EAX,0x12674                     ; 00425168
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042516d
    LEA ESI,[EAX + 0x78]                ; 00425171
    IMUL EDI,EBX,0x17c                  ; 00425174
        ;   Label: LAB_00425174
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042517a
    MOV AH,byte ptr [ESI]               ; 0042517e
    ADD EDI,ECX                         ; 00425180
    TEST AH,AH                          ; 00425182
    JNZ 0x0042538e                      ; 00425184
        ;   XREF to: 0042538e (CONDITIONAL_JUMP)  ; LAB_0042538e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042518a
    MOV EDX,dword ptr [EAX + 0x12670]   ; 0042518d
    DEC EDX                             ; 00425193
    MOV EDI,EBX                         ; 00425194
    MOV dword ptr [EAX + 0x12670],EDX   ; 00425196
    CMP EBX,EDX                         ; 0042519c
    JGE 0x004251f4                      ; 0042519e
        ;   XREF to: 004251f4 (CONDITIONAL_JUMP)  ; LAB_004251f4
    IMUL EAX,EBX,0x17c                  ; 004251a0
    LEA EDX,[ECX + EAX*0x1]             ; 004251a6
    ADD EAX,0x1f4                       ; 004251a9
    ADD EAX,ECX                         ; 004251ae
    MOV dword ptr [ESP + 0x20],EDX      ; 004251b0
    MOV dword ptr [ESP + 0x24],EAX      ; 004251b4
    MOV ECX,dword ptr [ESP + 0x24]      ; 004251b8
        ;   Label: LAB_004251b8
    PUSH ECX                            ; 004251bc
    MOV EAX,dword ptr [ESP + 0x24]      ; 004251bd
    PUSH EAX                            ; 004251c1
    CALL FUN_00468950                   ; 004251c2
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004251c7
    INC EDI                             ; 004251ca
    MOV EDX,dword ptr [ESP + 0x20]      ; 004251cb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004251cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004251d3
    ADD EDX,0x17c                       ; 004251d6
    ADD ECX,0x17c                       ; 004251dc
    MOV dword ptr [ESP + 0x20],EDX      ; 004251e2
    MOV EDX,dword ptr [EAX + 0x12670]   ; 004251e6
    MOV dword ptr [ESP + 0x24],ECX      ; 004251ec
    CMP EDI,EDX                         ; 004251f0
    JL 0x004251b8                       ; 004251f2
        ;   XREF to: 004251b8 (CONDITIONAL_JUMP)  ; LAB_004251b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004251f4
        ;   Label: LAB_004251f4
    CMP EBX,dword ptr [EAX + 0x12670]   ; 004251f7
    JL 0x00425174                       ; 004251fd
        ;   XREF to: 00425174 (CONDITIONAL_JUMP)  ; LAB_00425174
    XOR EAX,EAX                         ; 00425203
        ;   Label: LAB_00425203
    MOV dword ptr [ESP + 0x18],EAX      ; 00425205
    MOV EAX,dword ptr [EBP + 0x14]      ; 00425209
    CMP dword ptr [EAX + 0xc26c],0x0    ; 0042520c
    JLE 0x00425353                      ; 00425213
        ;   XREF to: 00425353 (CONDITIONAL_JUMP)  ; LAB_00425353
    FLD float ptr [0x005fd228]          ; 00425219 | DAT_005fd228
    FLD ST0                             ; 0042521f
    FMUL float ptr [0x005d5038]         ; 00425221 | DAT_005d5038
    FXCH                                ; 00425227
    FMUL float ptr [0x005d503c]         ; 00425229 | DAT_005d503c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042522f
    ADD EAX,0xc270                      ; 00425232
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425237
    MOV dword ptr [ESP + 0x10],EAX      ; 0042523a
    ADD EDI,0xc290                      ; 0042523e
    ADD EBX,0xc284                      ; 00425244
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042524a
    FXCH                                ; 0042524d
    FSTP float ptr [ESP]                ; 0042524f
    ADD EAX,0xc278                      ; 00425252
    FSTP float ptr [ESP + 0x4]          ; 00425257
    MOV dword ptr [ESP + 0x14],EAX      ; 0042525b
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042525f
        ;   Label: LAB_0042525f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00425263
    SHL ESI,0x6                         ; 00425267
    ADD ESI,EAX                         ; 0042526a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042526c
    MOV dword ptr [ESI],0x0             ; 0042526f
    MOV EAX,dword ptr [EAX + 0x12670]   ; 00425275
    DEC EAX                             ; 0042527b
    PUSH EAX                            ; 0042527c
    PUSH 0x0                            ; 0042527d
    CALL FUN_0040cc60                   ; 0042527f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 00425284
    FLD double ptr [0x005d5040]         ; 00425287 | DAT_005d5040
    FLD float ptr [ESP]                 ; 0042528d
    FMUL ST1                            ; 00425290
    FLD float ptr [ESP + 0x4]           ; 00425292
    FMULP ST2                           ; 00425296
    FSTP float ptr [ESP + 0x8]          ; 00425298
    PUSH dword ptr [ESP + 0x8]          ; 0042529c
    FSTP float ptr [ESP + 0x10]         ; 004252a0
    PUSH dword ptr [ESP + 0x10]         ; 004252a4
    MOV dword ptr [ESI + 0x4],EAX       ; 004252a8
    CALL FUN_0040cc00                   ; 004252ab
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x30],EAX      ; 004252b0
    FLD float ptr [ESP + 0x30]          ; 004252b4
    ADD ESP,0x8                         ; 004252b8
    PUSH dword ptr [ESP + 0x8]          ; 004252bb
    MOV dword ptr [ESI + 0xc],0x0       ; 004252bf
    PUSH dword ptr [ESP + 0x10]         ; 004252c6
    FSTP float ptr [ESI + 0x8]          ; 004252ca
    CALL FUN_0040cc00                   ; 004252cd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x30],EAX      ; 004252d2
    FLD float ptr [ESP + 0x30]          ; 004252d6
    ADD ESP,0x8                         ; 004252da
    FSTP float ptr [ESI + 0x10]         ; 004252dd
    PUSH 0x40490fdb                     ; 004252e0
    MOV dword ptr [EBX + 0x8],0x0       ; 004252e5
    PUSH 0xc0490fdb                     ; 004252ec
    MOV EAX,dword ptr [EBX + 0x8]       ; 004252f1
    MOV dword ptr [EBX + 0x4],EAX       ; 004252f4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004252f7
    MOV dword ptr [EBX],EAX             ; 004252fa
    CALL FUN_0040cc00                   ; 004252fc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x30],EAX      ; 00425301
    FLD float ptr [ESP + 0x30]          ; 00425305
    ADD ESP,0x8                         ; 00425309
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042530c
    FSTP float ptr [ESI + 0x18]         ; 00425310
    CMP EDI,EDX                         ; 00425313
    JZ 0x00425328                       ; 00425315
        ;   XREF to: 00425328 (CONDITIONAL_JUMP)  ; LAB_00425328
    MOV EAX,dword ptr [EBX + -0xc]      ; 00425317
    MOV dword ptr [EDI],EAX             ; 0042531a
    MOV EAX,dword ptr [EBX + -0x8]      ; 0042531c
    MOV dword ptr [EDI + 0x4],EAX       ; 0042531f
    MOV EAX,dword ptr [EBX + -0x4]      ; 00425322
    MOV dword ptr [EDI + 0x8],EAX       ; 00425325
    MOV ESI,dword ptr [ESP + 0x14]      ; 00425328
        ;   Label: LAB_00425328
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042532c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00425330
    ADD EDI,0x40                        ; 00425333
    ADD EBX,0x40                        ; 00425336
    ADD ESI,0x40                        ; 00425339
    INC EAX                             ; 0042533c
    MOV ECX,dword ptr [EDX + 0xc26c]    ; 0042533d
    MOV dword ptr [ESP + 0x14],ESI      ; 00425343
    MOV dword ptr [ESP + 0x18],EAX      ; 00425347
    CMP EAX,ECX                         ; 0042534b
    JL 0x0042525f                       ; 0042534d
        ;   XREF to: 0042525f (CONDITIONAL_JUMP)  ; LAB_0042525f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425353
        ;   Label: LAB_00425353
    PUSH EBX                            ; 00425356
    CALL FUN_00427a30                   ; 00425357
        ;   XREF to: 00427a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00427a30()
    MOV dword ptr [EBX + 0x19d90],0xffffd8f1 ; 0042535c
    MOV dword ptr [EBX + 0x19d94],0xffffd8f1 ; 00425366
    MOV dword ptr [EBX + 0x100],0x1     ; 00425370
    ADD ESP,0x4                         ; 0042537a
    MOV dword ptr [EBX + 0x19da0],0x0   ; 0042537d
    MOV ESP,EBP                         ; 00425387
    POP EBP                             ; 00425389
    POP EDI                             ; 0042538a
    POP ESI                             ; 0042538b
    POP EBX                             ; 0042538c
    RET                                 ; 0042538d
    PUSH EDI                            ; 0042538e
        ;   Label: LAB_0042538e
    CALL FUN_004688e0                   ; 0042538f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESI,0x17c                       ; 00425394
    INC EBX                             ; 0042539a
    ADD ESP,0x4                         ; 0042539b
    JMP 0x004251f4                      ; 0042539e
        ;   XREF to: 004251f4 (UNCONDITIONAL_JUMP)  ; LAB_004251f4

