; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b52f0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053fc60 at 0053feb2
;
; Referenced Globals:
;   undefined4 DAT_00585853
;   undefined4 DAT_0058585b
;   undefined4 DAT_00585863
;   undefined4 DAT_0058586b
;   undefined4 DAT_0058586f
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc3660
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040a290
;   FUN_0040d890
;   FUN_00481890
;   FUN_004c68f0
;   FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b52f0
        ;   Label: FUN_004b52f0
    PUSH ESI                            ; 004b52f1
    PUSH EDI                            ; 004b52f2
    PUSH EBP                            ; 004b52f3
    MOV EBP,ESP                         ; 004b52f4
    SUB ESP,0x40                        ; 004b52f6
    AND ESP,0xfffffff8                  ; 004b52f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b52fc
    MOV EDX,0x7149f2ca                  ; 004b52ff
    XOR EDI,EDI                         ; 004b5304
    ADD EAX,0x20                        ; 004b5306
    XOR ESI,ESI                         ; 004b5309
    MOV dword ptr [ESP + 0x38],EDX      ; 004b530b
    MOV dword ptr [EAX + 0x1f9f0],0x0   ; 004b530f
    MOV dword ptr [ESP + 0x34],EAX      ; 004b5319
    MOV EAX,[0x005be368]                ; 004b531d | DAT_005be368
        ;   Label: LAB_004b531d
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 004b5322 | DAT_01fa3ff0
    JL 0x004b5344                       ; 004b5328
        ;   XREF to: 004b5344 (CONDITIONAL_JUMP)  ; LAB_004b5344
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b532a
    MOV EBX,dword ptr [EAX + 0x1fa10]   ; 004b532d
    TEST EBX,EBX                        ; 004b5333
    JNZ 0x004b545c                      ; 004b5335
        ;   XREF to: 004b545c (CONDITIONAL_JUMP)  ; LAB_004b545c
    XOR EAX,EAX                         ; 004b533b
        ;   Label: LAB_004b533b
    MOV ESP,EBP                         ; 004b533d
    POP EBP                             ; 004b533f
    POP EDI                             ; 004b5340
    POP ESI                             ; 004b5341
    POP EBX                             ; 004b5342
    RET                                 ; 004b5343
    MOV EDX,dword ptr [0x01cc3660]      ; 004b5344 | DAT_01cc3660
        ;   Label: LAB_004b5344
    PUSH EDX                            ; 004b534a
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 004b534b | DAT_01fa3ff4
    PUSH ECX                            ; 004b5352
    CALL FUN_0040d890                   ; 004b5353
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EBX,EAX                         ; 004b5358
    ADD ESP,0x8                         ; 004b535a
    TEST EAX,EAX                        ; 004b535d
    JZ 0x004b5453                       ; 004b535f
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    ADD EAX,0x20                        ; 004b5365
    PUSH EAX                            ; 004b5368
    LEA EAX,[ESP + 0x18]                ; 004b5369
    PUSH EAX                            ; 004b536d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b536e
    PUSH EAX                            ; 004b5371
    CALL FUN_0040a290                   ; 004b5372
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 004b5377
    FLD float ptr [ESP + 0x18]          ; 004b537a
    FABS                                ; 004b537e
    FCOMP double ptr [0x00585853]       ; 004b5380 | DAT_00585853
    FNSTSW AX                           ; 004b5386
    SAHF                                ; 004b5388
    JA 0x004b5453                       ; 004b5389
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    FLD float ptr [ESP + 0x1c]          ; 004b538f
    FLDZ                                ; 004b5393
    FXCH                                ; 004b5395
    FSTP double ptr [ESP]               ; 004b5397
    FCOMP double ptr [ESP]              ; 004b539a
    FNSTSW AX                           ; 004b539d
    SAHF                                ; 004b539f
    JA 0x004b5453                       ; 004b53a0
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    FLD double ptr [ESP]                ; 004b53a6
    FCOMP double ptr [0x0058585b]       ; 004b53a9 | DAT_0058585b
    FNSTSW AX                           ; 004b53af
    SAHF                                ; 004b53b1
    JA 0x004b5453                       ; 004b53b2
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    FLD float ptr [ESP + 0x14]          ; 004b53b8
    FABS                                ; 004b53bc
    FCOMP double ptr [0x0058585b]       ; 004b53be | DAT_0058585b
    FNSTSW AX                           ; 004b53c4
    SAHF                                ; 004b53c6
    JA 0x004b5453                       ; 004b53c7
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    LEA EAX,[ESP + 0x14]                ; 004b53cd
    PUSH EAX                            ; 004b53d1
    LEA EAX,[ESP + 0x24]                ; 004b53d2
    PUSH EAX                            ; 004b53d6
    CALL FUN_0054e4a0                   ; 004b53d7
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004b53dc
    FABS                                ; 004b53df
    ADD ESP,0x8                         ; 004b53e1
    FCOMP double ptr [0x00585863]       ; 004b53e4 | DAT_00585863
    FNSTSW AX                           ; 004b53ea
    SAHF                                ; 004b53ec
    JA 0x004b5453                       ; 004b53ed
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    MOV EDX,dword ptr [ESP + 0x34]      ; 004b53ef
    PUSH EDX                            ; 004b53f3
    PUSH EBX                            ; 004b53f4
    CALL FUN_004c68f0                   ; 004b53f5
        ;   XREF to: 004c68f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c68f0()
    ADD ESP,0x8                         ; 004b53fa
    TEST EAX,EAX                        ; 004b53fd
    JZ 0x004b5453                       ; 004b53ff
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    FLD float ptr [ESP + 0x14]          ; 004b5401
    FADD float ptr [0x0058586b]         ; 004b5405 | DAT_0058586b
    FMUL ST0                            ; 004b540b
    FLD float ptr [ESP + 0x1c]          ; 004b540d
    FADD float ptr [0x0058586f]         ; 004b5411 | DAT_0058586f
    FMUL ST0                            ; 004b5417
    XOR EAX,EAX                         ; 004b5419
    FADDP                               ; 004b541b
    MOV dword ptr [ESP + 0xc],EAX       ; 004b541d
    FSQRT                               ; 004b5421
    MOV ECX,0x3f000000                  ; 004b5423
    MOV EDX,0x40000000                  ; 004b5428
    MOV dword ptr [ESP + 0x8],ECX       ; 004b542d
    MOV dword ptr [ESP + 0x10],EDX      ; 004b5431
    FST float ptr [ESP + 0x3c]          ; 004b5435
    FCOMP float ptr [ESP + 0x38]        ; 004b5439
    FNSTSW AX                           ; 004b543d
    SAHF                                ; 004b543f
    JA 0x004b5453                       ; 004b5440
        ;   XREF to: 004b5453 (CONDITIONAL_JUMP)  ; LAB_004b5453
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b5442
    MOV dword ptr [EAX + 0x1fa10],EBX   ; 004b5445
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b544b
    MOV dword ptr [ESP + 0x38],EAX      ; 004b544f
    INC EDI                             ; 004b5453
        ;   Label: LAB_004b5453
    ADD ESI,0x4                         ; 004b5454
    JMP 0x004b531d                      ; 004b5457
        ;   XREF to: 004b531d (UNCONDITIONAL_JUMP)  ; LAB_004b531d
    LEA EAX,[EBX + 0x418]               ; 004b545c
        ;   Label: LAB_004b545c
    PUSH EAX                            ; 004b5462
    CALL FUN_00481890                   ; 004b5463
        ;   XREF to: 00481890 (UNCONDITIONAL_CALL)  ; undefined FUN_00481890()
    ADD ESP,0x4                         ; 004b5468
    TEST EAX,EAX                        ; 004b546b
    JNZ 0x004b533b                      ; 004b546d
        ;   XREF to: 004b533b (CONDITIONAL_JUMP)  ; LAB_004b533b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b5473
    MOV dword ptr [EAX + 0xbca0],0x0    ; 004b5476
    MOV EAX,0x1                         ; 004b5480
    MOV ESP,EBP                         ; 004b5485
    POP EBP                             ; 004b5487
    POP EDI                             ; 004b5488
    POP ESI                             ; 004b5489
    POP EBX                             ; 004b548a
    RET                                 ; 004b548b

