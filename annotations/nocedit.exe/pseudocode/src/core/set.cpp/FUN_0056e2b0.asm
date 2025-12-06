; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_set.cpp_FUN_0056e2b0()
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00645e83 = 65535
;   int g_LightAttenuationMax
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e2b0
        ;   Label: core_set.cpp_FUN_0056e2b0
    PUSH ESI                            ; 0056e2b1
    PUSH EDI                            ; 0056e2b2
    PUSH EBP                            ; 0056e2b3
    SUB ESP,0x40                        ; 0056e2b4
    MOV EDX,dword ptr [ESP + 0x54]      ; 0056e2b7
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056e2bb
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0056e2bf
    XOR ESI,ESI                         ; 0056e2c3
    XOR ECX,ECX                         ; 0056e2c5
    XOR EDI,EDI                         ; 0056e2c7
    MOV SI,word ptr [EAX]               ; 0056e2c9
    MOV CX,word ptr [EAX + 0x2]         ; 0056e2cc
    MOV DI,word ptr [EAX + 0x4]         ; 0056e2d0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0056e2d4
    SUB EAX,ECX                         ; 0056e2db
    LEA ECX,[ESI*0x4 + 0x0]             ; 0056e2dd
    SUB ECX,ESI                         ; 0056e2e4
    SHL EAX,0x2                         ; 0056e2e6
    SHL ECX,0x2                         ; 0056e2e9
    ADD EAX,EDX                         ; 0056e2ec
    LEA ESI,[ECX + EDX*0x1]             ; 0056e2ee
    MOV ECX,dword ptr [EAX]             ; 0056e2f1
    MOV EBP,dword ptr [ESI]             ; 0056e2f3
    SUB ECX,EBP                         ; 0056e2f5
    MOV dword ptr [ESP + 0x30],ECX      ; 0056e2f7
    MOV EBP,dword ptr [ESI + 0x4]       ; 0056e2fb
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056e2fe
    SUB ECX,EBP                         ; 0056e301
    MOV dword ptr [ESP + 0x34],ECX      ; 0056e303
    MOV EBP,dword ptr [ESI + 0x8]       ; 0056e307
    MOV ECX,dword ptr [EAX + 0x8]       ; 0056e30a
    SUB ECX,EBP                         ; 0056e30d
    MOV dword ptr [ESP + 0x38],ECX      ; 0056e30f
    LEA ECX,[EDI*0x4 + 0x0]             ; 0056e313
    SUB ECX,EDI                         ; 0056e31a
    SHL ECX,0x2                         ; 0056e31c
    ADD EDX,ECX                         ; 0056e31f
    MOV ESI,dword ptr [EAX]             ; 0056e321
    MOV ECX,dword ptr [EDX]             ; 0056e323
    SUB ECX,ESI                         ; 0056e325
    MOV dword ptr [ESP + 0x3c],ECX      ; 0056e327
    FILD dword ptr [ESP + 0x38]         ; 0056e32b
    FILD dword ptr [ESP + 0x3c]         ; 0056e32f
    FST float ptr [ESP + 0x18]          ; 0056e333
    FMUL ST1                            ; 0056e337
    MOV EBP,dword ptr [EAX + 0x8]       ; 0056e339
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056e33c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0056e33f
    MOV EDI,dword ptr [EAX + 0x4]       ; 0056e342
    MOV EAX,EDX                         ; 0056e345
    FILD dword ptr [ESP + 0x34]         ; 0056e347
    SUB EAX,EBP                         ; 0056e34b
    FLD ST0                             ; 0056e34d
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056e34f
    SUB ECX,EDI                         ; 0056e353
    FILD dword ptr [ESP + 0x3c]         ; 0056e355
    FSTP float ptr [ESP + 0x2c]         ; 0056e359
    FMUL float ptr [ESP + 0x2c]         ; 0056e35d
    MOV dword ptr [ESP + 0x3c],ECX      ; 0056e361
    FILD dword ptr [ESP + 0x3c]         ; 0056e365
    FILD dword ptr [ESP + 0x30]         ; 0056e369
    FST float ptr [ESP + 0xc]           ; 0056e36d
    FMUL ST1                            ; 0056e371
    FXCH                                ; 0056e373
    FMULP ST5                           ; 0056e375
    FLD float ptr [ESP + 0xc]           ; 0056e377
    FMUL float ptr [ESP + 0x2c]         ; 0056e37b
    FXCH ST5                            ; 0056e37f
    FSUBP ST2,ST0                       ; 0056e381
    FLD ST1                             ; 0056e383
    FMUL ST2                            ; 0056e385
    FXCH ST5                            ; 0056e387
    FSUBP ST4,ST0                       ; 0056e389
    FLD ST3                             ; 0056e38b
    FMUL ST4                            ; 0056e38d
    FLD float ptr [ESP + 0x18]          ; 0056e38f
    FMULP ST4                           ; 0056e393
    FADDP ST5,ST0                       ; 0056e395
    FSUBRP ST2,ST0                      ; 0056e397
    FLD ST1                             ; 0056e399
    FMUL ST2                            ; 0056e39b
    FADDP ST4,ST0                       ; 0056e39d
    FXCH ST3                            ; 0056e39f
    FSTP float ptr [ESP + 0x20]         ; 0056e3a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056e3a5
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0056e3a9 | int g_LightAttenuationMax
    SAR EAX,0x1                         ; 0056e3af
    SUB EDX,EAX                         ; 0056e3b1
    MOV dword ptr [ESP + 0x24],EDX      ; 0056e3b3
    FLD float ptr [ESP + 0x24]          ; 0056e3b7
    FMUL double ptr [0x00645e83]        ; 0056e3bb | double DOUBLE_00645e83
    FXCH ST3                            ; 0056e3c1
    FMUL ST3                            ; 0056e3c3
    FXCH ST2                            ; 0056e3c5
    FMUL ST3                            ; 0056e3c7
    FXCH                                ; 0056e3c9
    FMULP ST3                           ; 0056e3cb
    FXCH                                ; 0056e3cd
    FSTP float ptr [EBX]                ; 0056e3cf
    FSTP float ptr [EBX + 0x4]          ; 0056e3d1
    FSTP float ptr [EBX + 0x8]          ; 0056e3d4
    ADD ESP,0x40                        ; 0056e3d7
    POP EBP                             ; 0056e3da
    POP EDI                             ; 0056e3db
    POP ESI                             ; 0056e3dc
    POP EBX                             ; 0056e3dd
    RET                                 ; 0056e3de

