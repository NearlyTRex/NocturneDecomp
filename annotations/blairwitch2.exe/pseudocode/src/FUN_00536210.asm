; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00536210(undefined4 param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; XREF[2]:
;   FUN_004599a0 at 00459abb
;   FUN_0056b770 at 0056b881
;
; Referenced Globals:
;   undefined4 DAT_005e5db5
;   undefined4 DAT_005e5db9
;
; Called Functions:
;   FUN_00535ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536210
        ;   Label: FUN_00536210
    PUSH ESI                            ; 00536211
    PUSH EDI                            ; 00536212
    PUSH EBP                            ; 00536213
    MOV EBP,ESP                         ; 00536214
    SUB ESP,0xb8                        ; 00536216
    AND ESP,0xfffffff8                  ; 0053621c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053621f
    LEA EDI,[ESP + 0x24]                ; 00536222
    MOV ESI,dword ptr [EBP + 0x18]      ; 00536226
    MOVSD ES:EDI,ESI                    ; 00536229
    MOVSD ES:EDI,ESI                    ; 0053622a
    MOVSD ES:EDI,ESI                    ; 0053622b
    XOR EDX,EDX                         ; 0053622c
    LEA EDI,[ESP + 0x90]                ; 0053622e
    MOV ESI,EAX                         ; 00536235
    XOR EBX,EBX                         ; 00536237
    MOV dword ptr [ESP + 0xac],EDX      ; 00536239
    MOVSD ES:EDI,ESI                    ; 00536240
    MOVSD ES:EDI,ESI                    ; 00536241
    MOVSD ES:EDI,ESI                    ; 00536242
    MOV dword ptr [ESP + 0xb0],EDX      ; 00536243
    MOV ESI,0xbe23d70a                  ; 0053624a
    MOV dword ptr [ESP + 0xa0],EDX      ; 0053624f
    MOV dword ptr [ESP + 0x9c],ESI      ; 00536256
    FLD float ptr [0x005e5db5]          ; 0053625d | DAT_005e5db5
        ;   Label: LAB_0053625d
    FLD float ptr [ESP + 0x90]          ; 00536263
    FMUL ST1                            ; 0053626a
    FLD float ptr [ESP + 0x94]          ; 0053626c
    FMUL ST2                            ; 00536273
    FLD float ptr [ESP + 0x98]          ; 00536275
    FMULP ST3                           ; 0053627c
    FLD float ptr [ESP + 0x24]          ; 0053627e
    FLD float ptr [ESP + 0x28]          ; 00536282
    FLD float ptr [ESP + 0x2c]          ; 00536286
    MOV EAX,0x3dcccccd                  ; 0053628a
    LEA EDI,[ESP + 0x84]                ; 0053628f
    MOV dword ptr [ESP + 0xa8],EAX      ; 00536296
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0053629d
    LEA ESI,[ESP + 0x6c]                ; 005362a4
    MOV dword ptr [ESP + 0x6c],EAX      ; 005362a8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005362ac
    MOV EDX,dword ptr [EBP + 0x14]      ; 005362b3
    MOV dword ptr [ESP + 0x70],EAX      ; 005362b6
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005362ba
    FXCH ST4                            ; 005362c1
    FSTP float ptr [ESP + 0x3c]         ; 005362c3
    MOV dword ptr [ESP + 0x74],EAX      ; 005362c7
    FXCH ST2                            ; 005362cb
    FSTP float ptr [ESP + 0x40]         ; 005362cd
    MOVSD ES:EDI,ESI                    ; 005362d1
    MOVSD ES:EDI,ESI                    ; 005362d2
    MOVSD ES:EDI,ESI                    ; 005362d3
    LEA EAX,[ESP + 0x60]                ; 005362d4
    LEA EDI,[ESP + 0x78]                ; 005362d8
    LEA ESI,[ESP + 0x3c]                ; 005362dc
    FXCH ST3                            ; 005362e0
    FSTP float ptr [ESP + 0x44]         ; 005362e2
    PUSH EAX                            ; 005362e6
    MOVSD ES:EDI,ESI                    ; 005362e7
    MOVSD ES:EDI,ESI                    ; 005362e8
    MOVSD ES:EDI,ESI                    ; 005362e9
    LEA EAX,[ESP + 0x28]                ; 005362ea
    LEA EDI,[ESP + 0x58]                ; 005362ee
    LEA ESI,[ESP + 0x1c]                ; 005362f2
    PUSH EAX                            ; 005362f6
    FXCH ST2                            ; 005362f7
    FADD float ptr [ESP + 0x80]         ; 005362f9
    FXCH ST2                            ; 00536300
    FADD float ptr [ESP + 0x84]         ; 00536302
    FXCH                                ; 00536309
    FADD float ptr [ESP + 0x88]         ; 0053630b
    FXCH ST2                            ; 00536312
    FSTP float ptr [ESP + 0x20]         ; 00536314
    FSTP float ptr [ESP + 0x24]         ; 00536318
    FSTP float ptr [ESP + 0x28]         ; 0053631c
    MOVSD ES:EDI,ESI                    ; 00536320
    MOVSD ES:EDI,ESI                    ; 00536321
    MOVSD ES:EDI,ESI                    ; 00536322
    PUSH EDX                            ; 00536323
    FLD float ptr [ESP + 0x60]          ; 00536324
    FLD float ptr [ESP + 0x64]          ; 00536328
    FLD float ptr [ESP + 0x68]          ; 0053632c
    LEA EDI,[ESP + 0x6c]                ; 00536330
    LEA ESI,[ESP + 0x3c]                ; 00536334
    FXCH ST2                            ; 00536338
    FADD float ptr [ESP + 0x90]         ; 0053633a
    FXCH                                ; 00536341
    FADD float ptr [ESP + 0x94]         ; 00536343
    FXCH ST2                            ; 0053634a
    FADD float ptr [ESP + 0x98]         ; 0053634c
    FXCH                                ; 00536353
    FSTP float ptr [ESP + 0x3c]         ; 00536355
    FXCH                                ; 00536359
    FSTP float ptr [ESP + 0x40]         ; 0053635b
    FSTP float ptr [ESP + 0x44]         ; 0053635f
    MOVSD ES:EDI,ESI                    ; 00536363
    MOVSD ES:EDI,ESI                    ; 00536364
    MOVSD ES:EDI,ESI                    ; 00536365
    CALL FUN_00535ee0                   ; 00536366
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535ee0()
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053636b
    FLD float ptr [ESP + 0xc0]          ; 00536372
    ADD ESP,0xc                         ; 00536379
    FLDZ                                ; 0053637c
    FXCH                                ; 0053637e
    FST float ptr [ESP + 0x8]           ; 00536380
    FSTP double ptr [ESP]               ; 00536384
    FCOMP double ptr [ESP]              ; 00536387
    FNSTSW AX                           ; 0053638a
    SAHF                                ; 0053638c
    JA 0x0053639d                       ; 0053638d
        ;   XREF to: 0053639d (CONDITIONAL_JUMP)  ; LAB_0053639d
    FLD1                                ; 0053638f
    FCOMP double ptr [ESP]              ; 00536391
    FNSTSW AX                           ; 00536394
    SAHF                                ; 00536396
    JNC 0x0053646a                      ; 00536397
        ;   XREF to: 0053646a (CONDITIONAL_JUMP)  ; LAB_0053646a
    LEA EAX,[ESP + 0x24]                ; 0053639d
        ;   Label: LAB_0053639d
    LEA EDX,[ESP + 0x60]                ; 005363a1
    CMP EAX,EDX                         ; 005363a5
    JZ 0x005363c1                       ; 005363a7
        ;   XREF to: 005363c1 (CONDITIONAL_JUMP)  ; LAB_005363c1
    MOV EAX,dword ptr [ESP + 0x60]      ; 005363a9
    MOV dword ptr [ESP + 0x24],EAX      ; 005363ad
    MOV EAX,dword ptr [ESP + 0x64]      ; 005363b1
    MOV dword ptr [ESP + 0x28],EAX      ; 005363b5
    MOV EAX,dword ptr [ESP + 0x68]      ; 005363b9
    MOV dword ptr [ESP + 0x2c],EAX      ; 005363bd
    FLDZ                                ; 005363c1
        ;   Label: LAB_005363c1
    FLD float ptr [ESP + 0xa8]          ; 005363c3
    FXCH                                ; 005363ca
    FMUL ST1                            ; 005363cc
    FLD ST1                             ; 005363ce
    FMUL float ptr [0x005e5db9]         ; 005363d0 | DAT_005e5db9
    FLD float ptr [ESP + 0x90]          ; 005363d6
    FLD float ptr [ESP + 0x94]          ; 005363dd
    FLD float ptr [ESP + 0x98]          ; 005363e4
    FLD float ptr [ESP + 0xac]          ; 005363eb
    LEA EDI,[ESP + 0xc]                 ; 005363f2
    LEA ESI,[ESP + 0x48]                ; 005363f6
    INC EBX                             ; 005363fa
    FXCH ST5                            ; 005363fb
    FSTP float ptr [ESP + 0x48]         ; 005363fd
    MOV EAX,dword ptr [ESP + 0x48]      ; 00536401
    FXCH ST4                            ; 00536405
    FADDP ST5,ST0                       ; 00536407
    MOV dword ptr [ESP + 0x50],EAX      ; 00536409
    FXCH ST2                            ; 0053640d
    FSTP float ptr [ESP + 0x4c]         ; 0053640f
    MOVSD ES:EDI,ESI                    ; 00536413
    MOVSD ES:EDI,ESI                    ; 00536414
    MOVSD ES:EDI,ESI                    ; 00536415
    FXCH ST3                            ; 00536416
    FSTP float ptr [ESP + 0xac]         ; 00536418
    FXCH ST2                            ; 0053641f
    FADD float ptr [ESP + 0xc]          ; 00536421
    FXCH ST2                            ; 00536425
    FADD float ptr [ESP + 0x10]         ; 00536427
    FXCH                                ; 0053642b
    FADD float ptr [ESP + 0x14]         ; 0053642d
    FXCH ST2                            ; 00536431
    FSTP float ptr [ESP + 0x90]         ; 00536433
    FSTP float ptr [ESP + 0x94]         ; 0053643a
    FSTP float ptr [ESP + 0x98]         ; 00536441
    CMP EBX,0x64                        ; 00536448
    JL 0x0053625d                       ; 0053644b
        ;   XREF to: 0053625d (CONDITIONAL_JUMP)  ; LAB_0053625d
    MOV dword ptr [ESP + 0xa4],0xbf800000 ; 00536451
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053645c
    MOV ESP,EBP                         ; 00536463
    POP EBP                             ; 00536465
    POP EDI                             ; 00536466
    POP ESI                             ; 00536467
    POP EBX                             ; 00536468
    RET                                 ; 00536469
    FLD float ptr [ESP + 0x8]           ; 0053646a
        ;   Label: LAB_0053646a
    FMUL float ptr [0x005e5db5]         ; 0053646e | DAT_005e5db5
    FADD float ptr [ESP + 0xac]         ; 00536474
    FSTP float ptr [ESP + 0xa4]         ; 0053647b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00536482
    MOV ESP,EBP                         ; 00536489
    POP EBP                             ; 0053648b
    POP EDI                             ; 0053648c
    POP ESI                             ; 0053648d
    POP EBX                             ; 0053648e
    RET                                 ; 0053648f

