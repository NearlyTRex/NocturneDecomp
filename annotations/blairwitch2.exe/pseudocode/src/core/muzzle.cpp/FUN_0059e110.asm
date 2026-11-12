; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_muzzle_cpp_FUN_0059e110(int *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 00450c82
;
; Called Functions:
;   core_muzzle.cpp_FUN_0059dd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e110
        ;   Label: core_muzzle.cpp_FUN_0059e110
    PUSH ESI                            ; 0059e111
    PUSH EDI                            ; 0059e112
    PUSH EBP                            ; 0059e113
    SUB ESP,0x24                        ; 0059e114
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e117
    FLD float ptr [EAX + 0x3c8]         ; 0059e11b
    FSUB float ptr [ESP + 0x3c]         ; 0059e121
    FST float ptr [EAX + 0x3c8]         ; 0059e125
    FLDZ                                ; 0059e12b
    FCOMPP                              ; 0059e12d
    FNSTSW AX                           ; 0059e12f
    SAHF                                ; 0059e131
    JC 0x0059e35f                       ; 0059e132
        ;   XREF to: 0059e35f (CONDITIONAL_JUMP)  ; LAB_0059e35f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e138
    FLD float ptr [EAX + 0x3cc]         ; 0059e13c
    MOV EDX,dword ptr [EAX]             ; 0059e142
    FSTP float ptr [EAX + 0x3c8]        ; 0059e144
    TEST EDX,EDX                        ; 0059e14a
    JZ 0x0059e35f                       ; 0059e14c
        ;   XREF to: 0059e35f (CONDITIONAL_JUMP)  ; LAB_0059e35f
    MOV ECX,dword ptr [EAX + 0x3c4]     ; 0059e152
    TEST ECX,ECX                        ; 0059e158
    JZ 0x0059e35f                       ; 0059e15a
        ;   XREF to: 0059e35f (CONDITIONAL_JUMP)  ; LAB_0059e35f
    XOR EBX,EBX                         ; 0059e160
    MOV dword ptr [ESP + 0x14],EBX      ; 0059e162
    TEST ECX,ECX                        ; 0059e166
    JLE 0x0059e35f                      ; 0059e168
        ;   XREF to: 0059e35f (CONDITIONAL_JUMP)  ; LAB_0059e35f
    ADD EAX,0x4                         ; 0059e16e
    MOV dword ptr [ESP],EAX             ; 0059e171
    MOV dword ptr [ESP + 0x10],EAX      ; 0059e174
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e178
    MOV dword ptr [ESP + 0x4],EAX       ; 0059e17c
    MOV EAX,dword ptr [ESP]             ; 0059e180
    MOV dword ptr [ESP + 0x8],EAX       ; 0059e183
    ADD EAX,0x3c                        ; 0059e187
    MOV dword ptr [ESP + 0xc],EAX       ; 0059e18a
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059e18e
        ;   Label: LAB_0059e18e
    IMUL EDX,EBX,0x3c                   ; 0059e192
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059e195
    MOV ECX,dword ptr [ESP + 0x38]      ; 0059e199
    MOV EAX,dword ptr [EAX + 0x4]       ; 0059e19d
    MOV ESI,dword ptr [ECX]             ; 0059e1a0
    CMP ESI,dword ptr [EAX + 0x342c]    ; 0059e1a2
    JZ 0x0059e2eb                       ; 0059e1a8
        ;   XREF to: 0059e2eb (CONDITIONAL_JUMP)  ; LAB_0059e2eb
    MOV EAX,dword ptr [ESP]             ; 0059e1ae
    MOV dword ptr [EDX + EAX*0x1],0x0   ; 0059e1b1
    MOV dword ptr [EDX + EAX*0x1 + 0x4],0x0 ; 0059e1b8
    MOV dword ptr [EDX + EAX*0x1 + 0x20],0x0 ; 0059e1c0
    MOV dword ptr [EDX + EAX*0x1 + 0x24],0x0 ; 0059e1c8
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x0 ; 0059e1d0
    MOV dword ptr [EDX + EAX*0x1 + 0x2c],0x0 ; 0059e1d8
    MOV dword ptr [EDX + EAX*0x1 + 0x38],0x0 ; 0059e1e0
    MOV dword ptr [EDX + EAX*0x1 + 0x30],0x0 ; 0059e1e8
    MOV dword ptr [EDX + EAX*0x1 + 0x34],0x0 ; 0059e1f0
    LEA EAX,[EBX + 0x1]                 ; 0059e1f8
    MOV EDI,dword ptr [ECX + 0x3c4]     ; 0059e1fb
    MOV dword ptr [ESP + 0x18],EAX      ; 0059e201
    CMP EAX,EDI                         ; 0059e205
    JGE 0x0059e2e1                      ; 0059e207
        ;   XREF to: 0059e2e1 (CONDITIONAL_JUMP)  ; LAB_0059e2e1
    IMUL EAX,EAX,0x3c                   ; 0059e20d
    LEA EBX,[EAX + 0x8]                 ; 0059e210
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059e213
    LEA ECX,[EAX + -0x34]               ; 0059e217
    ADD EBX,ESI                         ; 0059e21a
    ADD ECX,ESI                         ; 0059e21c
    LEA EDI,[ESI + EAX*0x1]             ; 0059e21e
    MOV EBP,dword ptr [ESP + 0x10]      ; 0059e221
    LEA ESI,[EAX + -0x3c]               ; 0059e225
    ADD ESI,EBP                         ; 0059e228
    MOV EBP,dword ptr [EDI]             ; 0059e22a
        ;   Label: LAB_0059e22a
    MOV EAX,ESI                         ; 0059e22c
    MOV dword ptr [ESI],EBP             ; 0059e22e
    MOV EDX,EDI                         ; 0059e230
    MOV EBP,dword ptr [EDI + 0x4]       ; 0059e232
    MOV dword ptr [ESI + 0x4],EBP       ; 0059e235
    CMP ECX,EBX                         ; 0059e238
    JZ 0x0059e24c                       ; 0059e23a
        ;   XREF to: 0059e24c (CONDITIONAL_JUMP)  ; LAB_0059e24c
    MOV EBP,dword ptr [EBX]             ; 0059e23c
    MOV dword ptr [ECX],EBP             ; 0059e23e
    MOV EBP,dword ptr [EBX + 0x4]       ; 0059e240
    MOV dword ptr [ECX + 0x4],EBP       ; 0059e243
    MOV EBP,dword ptr [EBX + 0x8]       ; 0059e246
    MOV dword ptr [ECX + 0x8],EBP       ; 0059e249
    LEA EBP,[EAX + 0x14]                ; 0059e24c
        ;   Label: LAB_0059e24c
    MOV dword ptr [ESP + 0x20],EBP      ; 0059e24f
    LEA EBP,[EDX + 0x14]                ; 0059e253
    MOV dword ptr [ESP + 0x1c],EBP      ; 0059e256
    MOV EBP,dword ptr [ESP + 0x20]      ; 0059e25a
    CMP EBP,dword ptr [ESP + 0x1c]      ; 0059e25e
    JZ 0x0059e28e                       ; 0059e262
        ;   XREF to: 0059e28e (CONDITIONAL_JUMP)  ; LAB_0059e28e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0059e264
    FLD float ptr [EBP]                 ; 0059e268
    MOV EBP,dword ptr [ESP + 0x20]      ; 0059e26b
    FSTP float ptr [EBP]                ; 0059e26f
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0059e272
    FLD float ptr [EBP + 0x4]           ; 0059e276
    MOV EBP,dword ptr [ESP + 0x20]      ; 0059e279
    FSTP float ptr [EBP + 0x4]          ; 0059e27d
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0059e280
    FLD float ptr [EBP + 0x8]           ; 0059e284
    MOV EBP,dword ptr [ESP + 0x20]      ; 0059e287
    FSTP float ptr [EBP + 0x8]          ; 0059e28b
    FLD float ptr [EDX + 0x20]          ; 0059e28e
        ;   Label: LAB_0059e28e
    ADD EBX,0x3c                        ; 0059e291
    ADD ECX,0x3c                        ; 0059e294
    FSTP float ptr [EAX + 0x20]         ; 0059e297
    MOV EBP,dword ptr [EDX + 0x24]      ; 0059e29a
    MOV dword ptr [EAX + 0x24],EBP      ; 0059e29d
    MOV EBP,dword ptr [EDX + 0x28]      ; 0059e2a0
    MOV dword ptr [EAX + 0x28],EBP      ; 0059e2a3
    MOV EBP,dword ptr [EDX + 0x2c]      ; 0059e2a6
    MOV dword ptr [EAX + 0x2c],EBP      ; 0059e2a9
    MOV EBP,dword ptr [EDX + 0x30]      ; 0059e2ac
    MOV dword ptr [EAX + 0x30],EBP      ; 0059e2af
    MOV EBP,dword ptr [EDX + 0x34]      ; 0059e2b2
    ADD EDI,0x3c                        ; 0059e2b5
    MOV dword ptr [EAX + 0x34],EBP      ; 0059e2b8
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059e2bb
    MOV EDX,dword ptr [EDX + 0x38]      ; 0059e2bf
    INC EBP                             ; 0059e2c2
    MOV dword ptr [EAX + 0x38],EDX      ; 0059e2c3
    MOV EDX,dword ptr [ESP + 0x38]      ; 0059e2c6
    MOV dword ptr [ESP + 0x18],EBP      ; 0059e2ca
    MOV EAX,EBP                         ; 0059e2ce
    MOV EBP,dword ptr [EDX + 0x3c4]     ; 0059e2d0
    ADD ESI,0x3c                        ; 0059e2d6
    CMP EAX,EBP                         ; 0059e2d9
    JL 0x0059e22a                       ; 0059e2db
        ;   XREF to: 0059e22a (CONDITIONAL_JUMP)  ; LAB_0059e22a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e2e1
        ;   Label: LAB_0059e2e1
    DEC dword ptr [EAX + 0x3c4]         ; 0059e2e5
    IMUL EBX,dword ptr [ESP + 0x14],0x3c ; 0059e2eb
        ;   Label: LAB_0059e2eb
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059e2f0
    PUSH EDX                            ; 0059e2f4
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0059e2f5
    PUSH ECX                            ; 0059e2f9
    CALL core_muzzle.cpp_FUN_0059dd00   ; 0059e2fa
        ;   XREF to: 0059dd00 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dd00()
    ADD ESP,0x8                         ; 0059e2ff
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e302
    MOV EAX,dword ptr [EAX + 0x3c4]     ; 0059e306
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059e30c
    DEC EAX                             ; 0059e310
    CMP EAX,ESI                         ; 0059e311
    JLE 0x0059e321                      ; 0059e313
        ;   XREF to: 0059e321 (CONDITIONAL_JUMP)  ; LAB_0059e321
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e315
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059e319
    MOV dword ptr [EBX + EAX*0x1 + 0x3c],EDX ; 0059e31d
    MOV EDI,dword ptr [ESP + 0x4]       ; 0059e321
        ;   Label: LAB_0059e321
    MOV EBP,dword ptr [ESP + 0x8]       ; 0059e325
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059e329
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059e32d
    ADD EDI,0x3c                        ; 0059e331
    ADD EAX,0x3c                        ; 0059e334
    INC EDX                             ; 0059e337
    MOV dword ptr [ESP + 0xc],EAX       ; 0059e338
    MOV dword ptr [ESP + 0x14],EDX      ; 0059e33c
    MOV EAX,EDX                         ; 0059e340
    MOV EDX,dword ptr [ESP + 0x38]      ; 0059e342
    ADD EBP,0x3c                        ; 0059e346
    MOV dword ptr [ESP + 0x4],EDI       ; 0059e349
    MOV ECX,dword ptr [EDX + 0x3c4]     ; 0059e34d
    MOV dword ptr [ESP + 0x8],EBP       ; 0059e353
    CMP EAX,ECX                         ; 0059e357
    JL 0x0059e18e                       ; 0059e359
        ;   XREF to: 0059e18e (CONDITIONAL_JUMP)  ; LAB_0059e18e
    ADD ESP,0x24                        ; 0059e35f
        ;   Label: LAB_0059e35f
    POP EBP                             ; 0059e362
    POP EDI                             ; 0059e363
    POP ESI                             ; 0059e364
    POP EBX                             ; 0059e365
    RET                                 ; 0059e366

