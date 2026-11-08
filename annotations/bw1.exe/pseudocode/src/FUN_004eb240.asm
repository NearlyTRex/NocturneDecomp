; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004eb240(int param_1)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004c65f0 at 004c78d6
;   FUN_004e9250 at 004e96f9
;   FUN_004eca10 at 004eca67
;   FUN_004f0e50 at 004f141e
;   FUN_00591120 at 005912f7
;   FUN_00593150 at 005936e3
;
; Referenced Globals:
;   undefined4 DAT_005e4835
;   undefined4 DAT_005e483d
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fd1210
;
; Called Functions:
;   FUN_00408b00
;   FUN_00408b40
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb240
        ;   Label: FUN_004eb240
    PUSH ESI                            ; 004eb241
    PUSH EDI                            ; 004eb242
    PUSH EBP                            ; 004eb243
    MOV EBP,ESP                         ; 004eb244
    SUB ESP,0x78                        ; 004eb246
    AND ESP,0xfffffff8                  ; 004eb249
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eb24c
    MOV ESI,0x3fc00000                  ; 004eb24f
    LEA EAX,[ESP + 0x24]                ; 004eb254
    MOV EDI,0x40a00000                  ; 004eb258
    XOR EDX,EDX                         ; 004eb25d
    PUSH EAX                            ; 004eb25f
    MOV dword ptr [ESP + 0x28],EDX      ; 004eb260
    MOV dword ptr [ESP + 0x30],ESI      ; 004eb264
    PUSH EBX                            ; 004eb268
    LEA ESI,[ESP + 0x50]                ; 004eb269
    MOV dword ptr [ESP + 0x30],EDX      ; 004eb26d
    CALL FUN_00408b40                   ; 004eb271
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 004eb276
    XOR EAX,EAX                         ; 004eb279
    XOR EDX,EDX                         ; 004eb27b
    MOV dword ptr [ESP + 0x60],EDI      ; 004eb27d
    MOV dword ptr [ESP + 0x70],EAX      ; 004eb281
    LEA EAX,[EBX + 0x20]                ; 004eb285
    MOV dword ptr [ESP + 0x6c],EDX      ; 004eb288
    MOV dword ptr [ESP + 0x68],EAX      ; 004eb28c
    MOV EAX,[0x00622c18]                ; 004eb290 | DAT_00622c18
        ;   Label: LAB_004eb290
    MOV ESI,dword ptr [ESP + 0x70]      ; 004eb295
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 004eb299 | DAT_01fd1210
    JGE 0x004eb3c4                      ; 004eb29f
        ;   XREF to: 004eb3c4 (CONDITIONAL_JUMP)  ; LAB_004eb3c4
    ADD EAX,dword ptr [ESP + 0x6c]      ; 004eb2a5
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 004eb2a9
    MOV DL,byte ptr [EAX + 0x2698]      ; 004eb2af
    MOV dword ptr [ESP + 0x74],EAX      ; 004eb2b5
    TEST DL,DL                          ; 004eb2b9
    JNZ 0x004eb2d3                      ; 004eb2bb
        ;   XREF to: 004eb2d3 (CONDITIONAL_JUMP)  ; LAB_004eb2d3
    MOV ECX,dword ptr [ESP + 0x70]      ; 004eb2bd
        ;   Label: LAB_004eb2bd
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004eb2c1
    INC ECX                             ; 004eb2c5
    ADD EDX,0x4                         ; 004eb2c6
    MOV dword ptr [ESP + 0x70],ECX      ; 004eb2c9
    MOV dword ptr [ESP + 0x6c],EDX      ; 004eb2cd
    JMP 0x004eb290                      ; 004eb2d1
        ;   XREF to: 004eb290 (UNCONDITIONAL_JUMP)  ; LAB_004eb290
    CMP EBX,EAX                         ; 004eb2d3
        ;   Label: LAB_004eb2d3
    JZ 0x004eb2bd                       ; 004eb2d5
        ;   XREF to: 004eb2bd (CONDITIONAL_JUMP)  ; LAB_004eb2bd
    FLD float ptr [EAX + 0x20]          ; 004eb2d7
    FLD float ptr [EAX + 0x24]          ; 004eb2da
    MOV ESI,dword ptr [ESP + 0x68]      ; 004eb2dd
    FLD float ptr [EAX + 0x28]          ; 004eb2e1
    LEA EDI,[ESP + 0xc]                 ; 004eb2e4
    FXCH ST2                            ; 004eb2e8
    FSUB float ptr [ESI]                ; 004eb2ea
    FXCH                                ; 004eb2ec
    FSUB float ptr [ESI + 0x4]          ; 004eb2ee
    FXCH ST2                            ; 004eb2f1
    FSUB float ptr [ESI + 0x8]          ; 004eb2f3
    FXCH                                ; 004eb2f6
    FSTP float ptr [ESP + 0x18]         ; 004eb2f8
    FXCH                                ; 004eb2fc
    FSTP float ptr [ESP + 0x1c]         ; 004eb2fe
    LEA ESI,[ESP + 0x18]                ; 004eb302
    FSTP float ptr [ESP + 0x20]         ; 004eb306
    MOVSD ES:EDI,ESI                    ; 004eb30a
    MOVSD ES:EDI,ESI                    ; 004eb30b
    MOVSD ES:EDI,ESI                    ; 004eb30c
    FLD float ptr [ESP + 0x10]          ; 004eb30d
    FABS                                ; 004eb311
    FCOMP double ptr [0x005e4835]       ; 004eb313 | DAT_005e4835
    FNSTSW AX                           ; 004eb319
    SAHF                                ; 004eb31b
    JA 0x004eb2bd                       ; 004eb31c
        ;   XREF to: 004eb2bd (CONDITIONAL_JUMP)  ; LAB_004eb2bd
    FLD float ptr [ESP + 0xc]           ; 004eb31e
    FMUL ST0                            ; 004eb322
    FLD float ptr [ESP + 0x14]          ; 004eb324
    FMUL ST0                            ; 004eb328
    XOR EAX,EAX                         ; 004eb32a
    FADDP                               ; 004eb32c
    MOV dword ptr [ESP + 0x10],EAX      ; 004eb32e
    FSQRT                               ; 004eb332
    FST float ptr [ESP + 0x64]          ; 004eb334
    FCOMP float ptr [ESP + 0x60]        ; 004eb338
    FNSTSW AX                           ; 004eb33c
    SAHF                                ; 004eb33e
    JNC 0x004eb2bd                      ; 004eb33f
        ;   XREF to: 004eb2bd (CONDITIONAL_JUMP)  ; LAB_004eb2bd
    LEA EAX,[ESP + 0xc]                 ; 004eb345
    PUSH EAX                            ; 004eb349
    PUSH EBX                            ; 004eb34a
    LEA ESI,[ESP + 0x38]                ; 004eb34b
    LEA EDI,[ESP + 0x44]                ; 004eb34f
    CALL FUN_00408b00                   ; 004eb353
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x38]                ; 004eb358
    ADD ESP,0x8                         ; 004eb35c
    LEA EAX,[ESP + 0x3c]                ; 004eb35f
    MOVSD ES:EDI,ESI                    ; 004eb363
    MOVSD ES:EDI,ESI                    ; 004eb364
    MOVSD ES:EDI,ESI                    ; 004eb365
    PUSH EAX                            ; 004eb366
    LEA ESI,[ESP + 0x4]                 ; 004eb367
    LEA EDI,[ESP + 0x58]                ; 004eb36b
    CALL FUN_005a7520                   ; 004eb36f
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x4]                 ; 004eb374
    ADD ESP,0x4                         ; 004eb378
    MOVSD ES:EDI,ESI                    ; 004eb37b
    MOVSD ES:EDI,ESI                    ; 004eb37c
    MOVSD ES:EDI,ESI                    ; 004eb37d
    FLD float ptr [ESP + 0x58]          ; 004eb37e
    FABS                                ; 004eb382
    FCOMP double ptr [0x005e483d]       ; 004eb384 | DAT_005e483d
    FNSTSW AX                           ; 004eb38a
    SAHF                                ; 004eb38c
    JA 0x004eb2bd                       ; 004eb38d
        ;   XREF to: 004eb2bd (CONDITIONAL_JUMP)  ; LAB_004eb2bd
    MOV EAX,dword ptr [ESP + 0x74]      ; 004eb393
    MOV dword ptr [EBX + 0x1ff70],0x0   ; 004eb397
    MOV dword ptr [EBX + 0x1ff64],EAX   ; 004eb3a1
    MOV dword ptr [EBX + 0x1ff68],EAX   ; 004eb3a7
    MOV EAX,dword ptr [ESP + 0x64]      ; 004eb3ad
    MOV dword ptr [EBX + 0x1ff60],0x2   ; 004eb3b1
    MOV dword ptr [ESP + 0x60],EAX      ; 004eb3bb
    JMP 0x004eb2bd                      ; 004eb3bf
        ;   XREF to: 004eb2bd (UNCONDITIONAL_JUMP)  ; LAB_004eb2bd
    CMP dword ptr [EBX + 0x1ff60],0x2   ; 004eb3c4
        ;   Label: LAB_004eb3c4
    SETZ AL                             ; 004eb3cb
    AND EAX,0xff                        ; 004eb3ce
    MOV ESP,EBP                         ; 004eb3d3
    POP EBP                             ; 004eb3d5
    POP EDI                             ; 004eb3d6
    POP ESI                             ; 004eb3d7
    POP EBX                             ; 004eb3d8
    RET                                 ; 004eb3d9

