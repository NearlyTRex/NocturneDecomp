; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417270(int param_1,int *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   FUN_00416700 at 0041678f
;
; Referenced Globals:
;   undefined4 DAT_005cbf6e
;   undefined4 DAT_005cbf72
;   undefined4 DAT_005cbf76
;
; Called Functions:
;   FUN_00416d70
;   FUN_00449280
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417270
        ;   Label: FUN_00417270
    PUSH ESI                            ; 00417271
    PUSH EDI                            ; 00417272
    PUSH EBP                            ; 00417273
    SUB ESP,0xa8                        ; 00417274
    MOV EDX,0x7fffffff                  ; 0041727a
    XOR ECX,ECX                         ; 0041727f
    MOV dword ptr [ESP + 0x78],EDX      ; 00417281
    MOV dword ptr [ESP + 0x70],ECX      ; 00417285
    MOV EAX,dword ptr [ESP + 0x70]      ; 00417289
        ;   Label: LAB_00417289
    XOR EBX,EBX                         ; 0041728d
    MOV dword ptr [ESP + 0x74],EAX      ; 0041728f
    MOV dword ptr [ESP + 0x7c],EBX      ; 00417293
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00417297
        ;   Label: LAB_00417297
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041729b
    MOV EAX,dword ptr [ESP + 0x74]      ; 004172a2
    FILD dword ptr [ESP + 0xa4]         ; 004172a6
    MOV dword ptr [ESP + 0xa4],EAX      ; 004172ad
    FLD float ptr [0x005cbf6e]          ; 004172b4 | DAT_005cbf6e
    FXCH                                ; 004172ba
    FMUL ST1                            ; 004172bc
    FILD dword ptr [ESP + 0xa4]         ; 004172be
    FMULP ST2                           ; 004172c5
    FLD float ptr [0x005cbf72]          ; 004172c7 | DAT_005cbf72
    FXCH                                ; 004172cd
    FMUL ST1                            ; 004172cf
    FXCH ST2                            ; 004172d1
    FMULP                               ; 004172d3
    XOR ESI,ESI                         ; 004172d5
    LEA EAX,[ESP + 0x4c]                ; 004172d7
    MOV dword ptr [ESP + 0x54],ESI      ; 004172db
    PUSH EAX                            ; 004172df
    LEA EAX,[ESP + 0x4]                 ; 004172e0
    FXCH                                ; 004172e4
    FSTP float ptr [ESP + 0x50]         ; 004172e6
    PUSH EAX                            ; 004172ea
    FSTP float ptr [ESP + 0x58]         ; 004172eb
    CALL FUN_00449280                   ; 004172ef
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 004172f4
    FLD float ptr [ESP]                 ; 004172f7
    FMUL float ptr [0x005cbf76]         ; 004172fa | DAT_005cbf76
    FLD float ptr [ESP + 0x4]           ; 00417300
    FMUL float ptr [0x005cbf76]         ; 00417304 | DAT_005cbf76
    FLD float ptr [ESP + 0x8]           ; 0041730a
    FMUL float ptr [0x005cbf76]         ; 0041730e | DAT_005cbf76
    FLD float ptr [ESP + 0xc]           ; 00417314
    FMUL float ptr [0x005cbf76]         ; 00417318 | DAT_005cbf76
    FLD float ptr [ESP + 0x10]          ; 0041731e
    FMUL float ptr [0x005cbf76]         ; 00417322 | DAT_005cbf76
    FLD float ptr [ESP + 0x14]          ; 00417328
    FMUL float ptr [0x005cbf76]         ; 0041732c | DAT_005cbf76
    FLD float ptr [ESP + 0x18]          ; 00417332
    FMUL float ptr [0x005cbf76]         ; 00417336 | DAT_005cbf76
    MOV EDI,0x7fffffff                  ; 0041733c
    FXCH ST6                            ; 00417341
    CALL FUN_005b7ff0                   ; 00417343
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x98]        ; 00417348
    FLD float ptr [ESP + 0x1c]          ; 0041734f
    FMUL float ptr [0x005cbf76]         ; 00417353 | DAT_005cbf76
    MOV EBP,EDI                         ; 00417359
    FXCH ST5                            ; 0041735b
    CALL FUN_005b7ff0                   ; 0041735d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x9c]        ; 00417362
    FLD float ptr [ESP + 0x20]          ; 00417369
    FMUL float ptr [0x005cbf76]         ; 0041736d | DAT_005cbf76
    XOR EBP,EDI                         ; 00417373
    MOV EDX,0x80000001                  ; 00417375
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0041737a
    MOV dword ptr [ESP + 0x60],EDI      ; 00417381
    MOV dword ptr [ESP + 0x5c],EDI      ; 00417385
    MOV dword ptr [ESP + 0x58],EDI      ; 00417389
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041738d
    MOV dword ptr [ESP + 0x68],EDX      ; 00417391
    MOV dword ptr [ESP + 0x64],EDX      ; 00417395
    MOV ESI,dword ptr [EAX + 0x2d0]     ; 00417399
    FXCH ST4                            ; 0041739f
    CALL FUN_005b7ff0                   ; 004173a1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 004173a6
    CALL FUN_005b7ff0                   ; 004173a8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 004173ad
    CALL FUN_005b7ff0                   ; 004173af
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 004173b4
    CALL FUN_005b7ff0                   ; 004173b6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST6                            ; 004173bb
    CALL FUN_005b7ff0                   ; 004173bd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST5                            ; 004173c2
    CALL FUN_005b7ff0                   ; 004173c4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST4                            ; 004173c9
    CALL FUN_005b7ff0                   ; 004173cb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 004173d0
    FISTP dword ptr [ESP + 0x88]        ; 004173d2
    FXCH                                ; 004173d9
    FISTP dword ptr [ESP + 0x8c]        ; 004173db
    FISTP dword ptr [ESP + 0x90]        ; 004173e2
    FXCH ST3                            ; 004173e9
    FISTP dword ptr [ESP + 0x94]        ; 004173eb
    FXCH                                ; 004173f2
    FISTP dword ptr [ESP + 0x84]        ; 004173f4
    FISTP dword ptr [ESP + 0x80]        ; 004173fb
    FISTP dword ptr [ESP + 0xa0]        ; 00417402
    TEST ESI,ESI                        ; 00417409
    JLE 0x00417539                      ; 0041740b
        ;   XREF to: 00417539 (CONDITIONAL_JUMP)  ; LAB_00417539
    XOR EDI,EDI                         ; 00417411
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00417413
        ;   Label: LAB_00417413
    MOV ECX,dword ptr [ECX + 0x2d4]     ; 0041741a
    MOV EAX,dword ptr [ESP + 0x98]      ; 00417420
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 00417427
    IMUL EDX                            ; 0041742a
    SHRD EAX,EDX,0x10                   ; 0041742c
    MOV EBX,EAX                         ; 00417430
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 00417432
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00417436
    IMUL EDX                            ; 0041743d
    SHRD EAX,EDX,0x10                   ; 0041743f
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 00417443
    ADD EBX,EAX                         ; 00417447
    MOV EAX,dword ptr [ESP + 0x84]      ; 00417449
    IMUL EDX                            ; 00417450
    SHRD EAX,EDX,0x10                   ; 00417452
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 00417456
    ADD EBX,EAX                         ; 00417459
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0041745b
    IMUL EDX                            ; 00417462
    SHRD EAX,EDX,0x10                   ; 00417464
    MOV ESI,EAX                         ; 00417468
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 0041746a
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041746e
    IMUL EDX                            ; 00417475
    SHRD EAX,EDX,0x10                   ; 00417477
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 0041747b
    ADD ESI,EAX                         ; 0041747f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00417481
    IMUL EDX                            ; 00417488
    SHRD EAX,EDX,0x10                   ; 0041748a
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 0041748e
    ADD ESI,EAX                         ; 00417491
    MOV EAX,dword ptr [ESP + 0x88]      ; 00417493
    IMUL EDX                            ; 0041749a
    SHRD EAX,EDX,0x10                   ; 0041749c
    MOV dword ptr [ESP + 0xa4],EAX      ; 004174a0
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 004174a7
    MOV EAX,dword ptr [ESP + 0x94]      ; 004174ab
    IMUL EDX                            ; 004174b2
    SHRD EAX,EDX,0x10                   ; 004174b4
    MOV EDX,dword ptr [ESP + 0xa4]      ; 004174b8
    ADD EDX,EAX                         ; 004174bf
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004174c1
    MOV dword ptr [ESP + 0xa4],EDX      ; 004174c8
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 004174cf
    IMUL EDX                            ; 004174d3
    SHRD EAX,EDX,0x10                   ; 004174d5
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004174d9
    MOV EDX,dword ptr [ESP + 0x58]      ; 004174e0
    ADD EAX,ECX                         ; 004174e4
    CMP EBX,EDX                         ; 004174e6
    JL 0x004175fc                       ; 004174e8
        ;   XREF to: 004175fc (CONDITIONAL_JUMP)  ; LAB_004175fc
    CMP EBX,dword ptr [ESP + 0x64]      ; 004174ee
        ;   Label: LAB_004174ee
    JLE 0x004174f8                      ; 004174f2
        ;   XREF to: 004174f8 (CONDITIONAL_JUMP)  ; LAB_004174f8
    MOV dword ptr [ESP + 0x64],EBX      ; 004174f4
    CMP ESI,dword ptr [ESP + 0x5c]      ; 004174f8
        ;   Label: LAB_004174f8
    JGE 0x00417502                      ; 004174fc
        ;   XREF to: 00417502 (CONDITIONAL_JUMP)  ; LAB_00417502
    MOV dword ptr [ESP + 0x5c],ESI      ; 004174fe
    CMP ESI,dword ptr [ESP + 0x68]      ; 00417502
        ;   Label: LAB_00417502
    JLE 0x0041750c                      ; 00417506
        ;   XREF to: 0041750c (CONDITIONAL_JUMP)  ; LAB_0041750c
    MOV dword ptr [ESP + 0x68],ESI      ; 00417508
    CMP EAX,dword ptr [ESP + 0x60]      ; 0041750c
        ;   Label: LAB_0041750c
    JGE 0x00417516                      ; 00417510
        ;   XREF to: 00417516 (CONDITIONAL_JUMP)  ; LAB_00417516
    MOV dword ptr [ESP + 0x60],EAX      ; 00417512
    CMP EAX,dword ptr [ESP + 0x6c]      ; 00417516
        ;   Label: LAB_00417516
    JLE 0x00417520                      ; 0041751a
        ;   XREF to: 00417520 (CONDITIONAL_JUMP)  ; LAB_00417520
    MOV dword ptr [ESP + 0x6c],EAX      ; 0041751c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00417520
        ;   Label: LAB_00417520
    INC EBP                             ; 00417527
    MOV EDX,dword ptr [EAX + 0x2d0]     ; 00417528
    ADD EDI,0xc                         ; 0041752e
    CMP EBP,EDX                         ; 00417531
    JL 0x00417413                       ; 00417533
        ;   XREF to: 00417413 (CONDITIONAL_JUMP)  ; LAB_00417413
    MOV EDX,dword ptr [ESP + 0x64]      ; 00417539
        ;   Label: LAB_00417539
    MOV ECX,dword ptr [ESP + 0x58]      ; 0041753d
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00417541
    SUB EDX,ECX                         ; 00417545
    MOV ECX,dword ptr [ESP + 0x68]      ; 00417547
    SUB ECX,EBX                         ; 0041754b
    MOV EAX,EDX                         ; 0041754d
    CMP ECX,EDX                         ; 0041754f
    JLE 0x00417555                      ; 00417551
        ;   XREF to: 00417555 (CONDITIONAL_JUMP)  ; LAB_00417555
    MOV EAX,ECX                         ; 00417553
    CMP EAX,dword ptr [ESP + 0x78]      ; 00417555
        ;   Label: LAB_00417555
    JGE 0x00417599                      ; 00417559
        ;   XREF to: 00417599 (CONDITIONAL_JUMP)  ; LAB_00417599
    LEA EDI,[ESP + 0x28]                ; 0041755b
    LEA ESI,[ESP + 0x58]                ; 0041755f
    MOVSD ES:EDI,ESI                    ; 00417563
    MOVSD ES:EDI,ESI                    ; 00417564
    MOVSD ES:EDI,ESI                    ; 00417565
    LEA EDX,[ESP + 0x40]                ; 00417566
    LEA EDI,[ESP + 0x34]                ; 0041756a
    LEA ESI,[ESP + 0x64]                ; 0041756e
    MOV dword ptr [ESP + 0x78],EAX      ; 00417572
    LEA EAX,[ESP + 0x4c]                ; 00417576
    MOVSD ES:EDI,ESI                    ; 0041757a
    MOVSD ES:EDI,ESI                    ; 0041757b
    MOVSD ES:EDI,ESI                    ; 0041757c
    CMP EDX,EAX                         ; 0041757d
    JZ 0x00417599                       ; 0041757f
        ;   XREF to: 00417599 (CONDITIONAL_JUMP)  ; LAB_00417599
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00417581
    MOV dword ptr [ESP + 0x40],EAX      ; 00417585
    MOV EAX,dword ptr [ESP + 0x50]      ; 00417589
    MOV dword ptr [ESP + 0x44],EAX      ; 0041758d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00417591
    MOV dword ptr [ESP + 0x48],EAX      ; 00417595
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00417599
        ;   Label: LAB_00417599
    ADD EDI,0x2                         ; 0041759d
    MOV dword ptr [ESP + 0x7c],EDI      ; 004175a0
    CMP EDI,0x18                        ; 004175a4
    JNZ 0x00417297                      ; 004175a7
        ;   XREF to: 00417297 (CONDITIONAL_JUMP)  ; LAB_00417297
    MOV EAX,dword ptr [ESP + 0x70]      ; 004175ad
    ADD EAX,0x2                         ; 004175b1
    MOV dword ptr [ESP + 0x70],EAX      ; 004175b4
    CMP EAX,EDI                         ; 004175b8
    JNZ 0x00417289                      ; 004175ba
        ;   XREF to: 00417289 (CONDITIONAL_JUMP)  ; LAB_00417289
    MOV EDI,dword ptr [ESP + 0xc0]      ; 004175c0
    LEA ESI,[ESP + 0x28]                ; 004175c7
    MOVSD ES:EDI,ESI                    ; 004175cb
    MOVSD ES:EDI,ESI                    ; 004175cc
    MOVSD ES:EDI,ESI                    ; 004175cd
    MOV EDI,dword ptr [ESP + 0xc4]      ; 004175ce
    LEA ESI,[ESP + 0x34]                ; 004175d5
    LEA EAX,[ESP + 0x40]                ; 004175d9
    MOVSD ES:EDI,ESI                    ; 004175dd
    MOVSD ES:EDI,ESI                    ; 004175de
    MOVSD ES:EDI,ESI                    ; 004175df
    PUSH EAX                            ; 004175e0
    MOV ESI,dword ptr [ESP + 0xc0]      ; 004175e1
    PUSH ESI                            ; 004175e8
    CALL FUN_00416d70                   ; 004175e9
        ;   XREF to: 00416d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00416d70()
    ADD ESP,0x8                         ; 004175ee
    ADD ESP,0xa8                        ; 004175f1
    POP EBP                             ; 004175f7
    POP EDI                             ; 004175f8
    POP ESI                             ; 004175f9
    POP EBX                             ; 004175fa
    RET                                 ; 004175fb
    MOV dword ptr [ESP + 0x58],EBX      ; 004175fc
        ;   Label: LAB_004175fc
    JMP 0x004174ee                      ; 00417600
        ;   XREF to: 004174ee (UNCONDITIONAL_JUMP)  ; LAB_004174ee

