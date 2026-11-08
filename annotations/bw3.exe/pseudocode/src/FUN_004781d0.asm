; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004781d0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
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
;
; XREF[1]:
;   FUN_0053eea0 at 0053ef0a
;
; Referenced Globals:
;   undefined4 DAT_005bcbf9
;   undefined4 DAT_005bcc01
;
; Called Functions:
;   FUN_0045b550
;   FUN_0045b800
;   FUN_004785c0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004781d0
        ;   Label: FUN_004781d0
    PUSH ESI                            ; 004781d1
    PUSH EDI                            ; 004781d2
    PUSH EBP                            ; 004781d3
    MOV EBP,ESP                         ; 004781d4
    SUB ESP,0xac                        ; 004781d6
    AND ESP,0xfffffff8                  ; 004781dc
    MOV EBX,dword ptr [EBP + 0x24]      ; 004781df
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004781e2
    PUSH EDX                            ; 004781e5
    LEA EAX,[ESP + 0x10]                ; 004781e6
    PUSH EAX                            ; 004781ea
    LEA EDI,[ESP + 0x6c]                ; 004781eb
    LEA ESI,[ESP + 0x48]                ; 004781ef
    CALL FUN_0045b550                   ; 004781f3
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    FLD float ptr [EBX]                 ; 004781f8
    ADD ESP,0x8                         ; 004781fa
    FLD float ptr [EBX + 0x4]           ; 004781fd
    MOV EAX,dword ptr [EBP + 0x20]      ; 00478200
    FLD float ptr [EBX + 0x8]           ; 00478203
    FXCH ST2                            ; 00478206
    FSUB float ptr [EAX]                ; 00478208
    FXCH                                ; 0047820a
    FSUB float ptr [EAX + 0x4]          ; 0047820c
    FXCH ST2                            ; 0047820f
    FSUB float ptr [EAX + 0x8]          ; 00478211
    FXCH                                ; 00478214
    FSTP float ptr [ESP + 0x40]         ; 00478216
    FXCH                                ; 0047821a
    FSTP float ptr [ESP + 0x44]         ; 0047821c
    FSTP float ptr [ESP + 0x48]         ; 00478220
    MOVSD ES:EDI,ESI                    ; 00478224
    MOVSD ES:EDI,ESI                    ; 00478225
    MOVSD ES:EDI,ESI                    ; 00478226
    MOV EAX,dword ptr [EBP + 0x14]      ; 00478227
    FLD float ptr [ESP + 0x64]          ; 0047822a
    FDIV float ptr [EAX + 0x34]         ; 0047822e
    FLD float ptr [ESP + 0x68]          ; 00478231
    FDIV float ptr [EAX + 0x38]         ; 00478235
    FLD float ptr [ESP + 0x6c]          ; 00478238
    FDIV float ptr [EAX + 0x3c]         ; 0047823c
    FXCH ST2                            ; 0047823f
    FLD double ptr [0x005bcbf9]         ; 00478241 | DAT_005bcbf9
    FXCH                                ; 00478247
    FMUL ST1                            ; 00478249
    FLD1                                ; 0047824b
    FADDP                               ; 0047824d
    CALL FUN_005a3120                   ; 0047824f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x94]        ; 00478254
    MOV EAX,dword ptr [ESP + 0x94]      ; 0047825b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00478262
    FILD dword ptr [ESP + 0xa8]         ; 00478269
    FDIVR float ptr [ESP + 0x64]        ; 00478270
    FXCH ST2                            ; 00478274
    FMUL ST1                            ; 00478276
    FLD1                                ; 00478278
    FADDP                               ; 0047827a
    CALL FUN_005a3120                   ; 0047827c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x98]        ; 00478281
    MOV EAX,dword ptr [ESP + 0x98]      ; 00478288
    MOV dword ptr [ESP + 0xa8],EAX      ; 0047828f
    FILD dword ptr [ESP + 0xa8]         ; 00478296
    FDIVR float ptr [ESP + 0x68]        ; 0047829d
    FXCH ST3                            ; 004782a1
    FMULP                               ; 004782a3
    FLD1                                ; 004782a5
    FADDP                               ; 004782a7
    CALL FUN_005a3120                   ; 004782a9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xa0]        ; 004782ae
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004782b5
    MOV dword ptr [ESP + 0xa8],EAX      ; 004782bc
    FILD dword ptr [ESP + 0xa8]         ; 004782c3
    FDIVR float ptr [ESP + 0x6c]        ; 004782ca
    XOR ECX,ECX                         ; 004782ce
    MOV dword ptr [ESP + 0x9c],ECX      ; 004782d0
    MOV EBX,dword ptr [ESP + 0x94]      ; 004782d7
    FXCH                                ; 004782de
    FSTP float ptr [ESP]                ; 004782e0
    FXCH                                ; 004782e3
    FSTP float ptr [ESP + 0x4]          ; 004782e5
    FSTP float ptr [ESP + 0x8]          ; 004782e9
    TEST EBX,EBX                        ; 004782ed
    JLE 0x00478494                      ; 004782ef
        ;   XREF to: 00478494 (CONDITIONAL_JUMP)  ; LAB_00478494
    XOR EAX,EAX                         ; 004782f5
        ;   Label: LAB_004782f5
    MOV EDX,dword ptr [ESP + 0x98]      ; 004782f7
    MOV dword ptr [ESP + 0xa4],EAX      ; 004782fe
    TEST EDX,EDX                        ; 00478305
    JLE 0x00478476                      ; 00478307
        ;   XREF to: 00478476 (CONDITIONAL_JUMP)  ; LAB_00478476
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0047830d
        ;   Label: LAB_0047830d
    XOR EBX,EBX                         ; 00478314
    TEST ESI,ESI                        ; 00478316
    JLE 0x00478458                      ; 00478318
        ;   XREF to: 00478458 (CONDITIONAL_JUMP)  ; LAB_00478458
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0047831e
        ;   Label: LAB_0047831e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00478325
    FLD float ptr [ESP]                 ; 0047832c
    FILD dword ptr [ESP + 0xa8]         ; 0047832f
    FMUL ST1                            ; 00478336
    MOV EAX,dword ptr [EBP + 0x20]      ; 00478338
    FADD float ptr [EAX]                ; 0047833b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0047833d
    MOV dword ptr [ESP + 0xa8],EAX      ; 00478344
    FXCH                                ; 0047834b
    FLD double ptr [0x005bcc01]         ; 0047834d | DAT_005bcc01
    FXCH                                ; 00478353
    FMUL ST1                            ; 00478355
    FLD float ptr [ESP + 0x4]           ; 00478357
    FILD dword ptr [ESP + 0xa8]         ; 0047835b
    FMUL ST1                            ; 00478362
    FXCH ST2                            ; 00478364
    FADDP ST4,ST0                       ; 00478366
    MOV EAX,dword ptr [EBP + 0x20]      ; 00478368
    FXCH ST3                            ; 0047836b
    FSTP float ptr [ESP + 0x34]         ; 0047836d
    FADD float ptr [EAX + 0x4]          ; 00478371
    MOV dword ptr [ESP + 0xa8],EBX      ; 00478374
    FXCH ST2                            ; 0047837b
    FMUL ST1                            ; 0047837d
    FILD dword ptr [ESP + 0xa8]         ; 0047837f
    FXCH                                ; 00478386
    FADDP ST3,ST0                       ; 00478388
    FLD float ptr [ESP + 0x8]           ; 0047838a
    FXCH                                ; 0047838e
    FMUL ST1                            ; 00478390
    FXCH ST3                            ; 00478392
    FSTP float ptr [ESP + 0x38]         ; 00478394
    FXCH ST2                            ; 00478398
    FADD float ptr [EAX + 0x8]          ; 0047839a
    FXCH ST2                            ; 0047839d
    FMULP                               ; 0047839f
    LEA ESI,[ESP + 0x58]                ; 004783a1
    LEA EAX,[ESP + 0x34]                ; 004783a5
    LEA EDI,[ESP + 0x7c]                ; 004783a9
    PUSH EAX                            ; 004783ad
    LEA EAX,[ESP + 0x10]                ; 004783ae
    FADDP                               ; 004783b2
    PUSH EAX                            ; 004783b4
    FSTP float ptr [ESP + 0x44]         ; 004783b5
    CALL FUN_0045b800                   ; 004783b9
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b800()
    LEA ESI,[ESP + 0x60]                ; 004783be
    ADD ESP,0x8                         ; 004783c2
    MOVSD ES:EDI,ESI                    ; 004783c5
    MOVSD ES:EDI,ESI                    ; 004783c6
    MOVSD ES:EDI,ESI                    ; 004783c7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004783c8
    FLD float ptr [ESP + 0x7c]          ; 004783cb
    FLD float ptr [ESP + 0x80]          ; 004783cf
    FLD float ptr [ESP + 0x84]          ; 004783d6
    LEA EDI,[ESP + 0x4c]                ; 004783dd
    LEA ESI,[ESP + 0x70]                ; 004783e1
    FXCH ST2                            ; 004783e5
    FADD float ptr [EAX]                ; 004783e7
    FXCH                                ; 004783e9
    FADD float ptr [EAX + 0x4]          ; 004783eb
    FXCH ST2                            ; 004783ee
    FADD float ptr [EAX + 0x8]          ; 004783f0
    FXCH                                ; 004783f3
    FSTP float ptr [ESP + 0x70]         ; 004783f5
    FXCH                                ; 004783f9
    FSTP float ptr [ESP + 0x74]         ; 004783fb
    FSTP float ptr [ESP + 0x78]         ; 004783ff
    MOVSD ES:EDI,ESI                    ; 00478403
    MOVSD ES:EDI,ESI                    ; 00478404
    MOVSD ES:EDI,ESI                    ; 00478405
    LEA EAX,[ESP + 0x4c]                ; 00478406
    LEA ESI,[ESP + 0x88]                ; 0047840a
    CMP ESI,EAX                         ; 00478411
    JZ 0x00478436                       ; 00478413
        ;   XREF to: 00478436 (CONDITIONAL_JUMP)  ; LAB_00478436
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00478415
    MOV dword ptr [ESP + 0x88],EAX      ; 00478419
    MOV EAX,dword ptr [ESP + 0x50]      ; 00478420
    MOV dword ptr [ESP + 0x8c],EAX      ; 00478424
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047842b
    MOV dword ptr [ESP + 0x90],EAX      ; 0047842f
    LEA EAX,[ESP + 0x88]                ; 00478436
        ;   Label: LAB_00478436
    PUSH EAX                            ; 0047843d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047843e
    PUSH EDI                            ; 00478441
    CALL FUN_004785c0                   ; 00478442
        ;   XREF to: 004785c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004785c0()
    ADD ESP,0x8                         ; 00478447
    INC EBX                             ; 0047844a
    CMP EBX,dword ptr [ESP + 0xa0]      ; 0047844b
    JL 0x0047831e                       ; 00478452
        ;   XREF to: 0047831e (CONDITIONAL_JUMP)  ; LAB_0047831e
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00478458
        ;   Label: LAB_00478458
    INC ECX                             ; 0047845f
    MOV EBX,dword ptr [ESP + 0x98]      ; 00478460
    MOV dword ptr [ESP + 0xa4],ECX      ; 00478467
    CMP ECX,EBX                         ; 0047846e
    JL 0x0047830d                       ; 00478470
        ;   XREF to: 0047830d (CONDITIONAL_JUMP)  ; LAB_0047830d
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00478476
        ;   Label: LAB_00478476
    INC ESI                             ; 0047847d
    MOV EDI,dword ptr [ESP + 0x94]      ; 0047847e
    MOV dword ptr [ESP + 0x9c],ESI      ; 00478485
    CMP ESI,EDI                         ; 0047848c
    JL 0x004782f5                       ; 0047848e
        ;   XREF to: 004782f5 (CONDITIONAL_JUMP)  ; LAB_004782f5
    MOV ESP,EBP                         ; 00478494
        ;   Label: LAB_00478494
    POP EBP                             ; 00478496
    POP EDI                             ; 00478497
    POP ESI                             ; 00478498
    POP EBX                             ; 00478499
    RET                                 ; 0047849a

