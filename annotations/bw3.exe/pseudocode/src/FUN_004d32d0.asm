; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004d32d0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d4900 at 004d49fe
;
; Referenced Globals:
;   undefined4 DAT_005c4d2d
;   undefined4 DAT_005c4d35
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d70c34
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_00408bf0
;   FUN_0040c840
;   FUN_004e0a30
;   FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d32d0
        ;   Label: FUN_004d32d0
    PUSH ESI                            ; 004d32d1
    PUSH EDI                            ; 004d32d2
    PUSH EBP                            ; 004d32d3
    MOV EBP,ESP                         ; 004d32d4
    SUB ESP,0x50                        ; 004d32d6
    AND ESP,0xfffffff8                  ; 004d32d9
    MOV EDX,0x7149f2ca                  ; 004d32dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d32e1
    XOR ECX,ECX                         ; 004d32e4
    MOV dword ptr [ESP + 0x3c],EDX      ; 004d32e6
    MOV dword ptr [ESP + 0x48],ECX      ; 004d32ea
    ADD EAX,0x20                        ; 004d32ee
    MOV dword ptr [ESP + 0x4c],ECX      ; 004d32f1
    MOV dword ptr [ESP + 0x38],EAX      ; 004d32f5
    MOV EBX,dword ptr [0x00603b28]      ; 004d32f9 | DAT_00603b28
        ;   Label: LAB_004d32f9
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d32ff
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004d3303 | DAT_02024a2c
    JL 0x004d3324                       ; 004d3309
        ;   XREF to: 004d3324 (CONDITIONAL_JUMP)  ; LAB_004d3324
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d330b
    CMP dword ptr [EAX + 0x20b68],0x8   ; 004d330e
    SETZ AL                             ; 004d3315
    AND EAX,0xff                        ; 004d3318
    MOV ESP,EBP                         ; 004d331d
    POP EBP                             ; 004d331f
    POP EDI                             ; 004d3320
    POP ESI                             ; 004d3321
    POP EBX                             ; 004d3322
    RET                                 ; 004d3323
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004d3324
        ;   Label: LAB_004d3324
    MOV EDI,dword ptr [0x01d70c34]      ; 004d3328 | DAT_01d70c34
    ADD EBX,EAX                         ; 004d332e
    PUSH EDI                            ; 004d3330
    MOV EDX,dword ptr [EBX + 0x14d168]  ; 004d3331 | DAT_02024a30
    PUSH EDX                            ; 004d3337
    CALL FUN_0040c840                   ; 004d3338
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV EBX,EAX                         ; 004d333d
    ADD ESP,0x8                         ; 004d333f
    TEST EAX,EAX                        ; 004d3342
    JZ 0x004d343c                       ; 004d3344
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    ADD EAX,0x20                        ; 004d334a
    PUSH EAX                            ; 004d334d
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d334e
    PUSH ECX                            ; 004d3351
    LEA ESI,[ESP + 0x34]                ; 004d3352
    LEA EDI,[ESP + 0x28]                ; 004d3356
    CALL FUN_00408bf0                   ; 004d335a
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x34]                ; 004d335f
    ADD ESP,0x8                         ; 004d3363
    MOVSD ES:EDI,ESI                    ; 004d3366
    MOVSD ES:EDI,ESI                    ; 004d3367
    MOVSD ES:EDI,ESI                    ; 004d3368
    FLD float ptr [ESP + 0x24]          ; 004d3369
    FABS                                ; 004d336d
    FCOMP double ptr [0x005c4d2d]       ; 004d336f | DAT_005c4d2d
    FNSTSW AX                           ; 004d3375
    SAHF                                ; 004d3377
    JA 0x004d343c                       ; 004d3378
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    FLD float ptr [ESP + 0x28]          ; 004d337e
    FLDZ                                ; 004d3382
    FXCH                                ; 004d3384
    FSTP double ptr [ESP]               ; 004d3386
    FCOMP double ptr [ESP]              ; 004d3389
    FNSTSW AX                           ; 004d338c
    SAHF                                ; 004d338e
    JA 0x004d343c                       ; 004d338f
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    FLD double ptr [ESP]                ; 004d3395
    FCOMP double ptr [0x005c4d35]       ; 004d3398 | DAT_005c4d35
    FNSTSW AX                           ; 004d339e
    SAHF                                ; 004d33a0
    JA 0x004d343c                       ; 004d33a1
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    FLD float ptr [ESP + 0x20]          ; 004d33a7
    FABS                                ; 004d33ab
    FCOMP double ptr [0x005c4d35]       ; 004d33ad | DAT_005c4d35
    FNSTSW AX                           ; 004d33b3
    SAHF                                ; 004d33b5
    JA 0x004d343c                       ; 004d33b6
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    LEA EAX,[ESP + 0x20]                ; 004d33bc
    PUSH EAX                            ; 004d33c0
    LEA ESI,[ESP + 0xc]                 ; 004d33c1
    LEA EDI,[ESP + 0x18]                ; 004d33c5
    CALL FUN_00576250                   ; 004d33c9
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0xc]                 ; 004d33ce
    ADD ESP,0x4                         ; 004d33d2
    MOVSD ES:EDI,ESI                    ; 004d33d5
    MOVSD ES:EDI,ESI                    ; 004d33d6
    MOVSD ES:EDI,ESI                    ; 004d33d7
    FLD float ptr [ESP + 0x18]          ; 004d33d8
    FABS                                ; 004d33dc
    FSTP float ptr [ESP + 0x40]         ; 004d33de
    CMP dword ptr [ESP + 0x40],0x3f860a92 ; 004d33e2
    JG 0x004d343c                       ; 004d33ea
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    MOV EDI,dword ptr [ESP + 0x38]      ; 004d33ec
    PUSH EDI                            ; 004d33f0
    PUSH EBX                            ; 004d33f1
    CALL FUN_004e0a30                   ; 004d33f2
        ;   XREF to: 004e0a30 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0a30()
    ADD ESP,0x8                         ; 004d33f7
    TEST EAX,EAX                        ; 004d33fa
    JZ 0x004d343c                       ; 004d33fc
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    FLD float ptr [ESP + 0x40]          ; 004d33fe
    FCHS                                ; 004d3402
    FST float ptr [ESP + 0x44]          ; 004d3404
    FCOMP float ptr [ESP + 0x3c]        ; 004d3408
    FNSTSW AX                           ; 004d340c
    SAHF                                ; 004d340e
    JA 0x004d343c                       ; 004d340f
        ;   XREF to: 004d343c (CONDITIONAL_JUMP)  ; LAB_004d343c
    MOV EAX,dword ptr [ESP + 0x44]      ; 004d3411
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d3415
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3419
    MOV dword ptr [EAX + 0x20b68],0x8   ; 004d341c
    MOV dword ptr [EAX + 0x20b7c],0x0   ; 004d3426
    MOV dword ptr [EAX + 0x20b6c],EBX   ; 004d3430
    MOV dword ptr [EAX + 0x20b70],EBX   ; 004d3436
    MOV EDX,dword ptr [ESP + 0x48]      ; 004d343c
        ;   Label: LAB_004d343c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004d3440
    INC EDX                             ; 004d3444
    ADD EAX,0x4                         ; 004d3445
    MOV dword ptr [ESP + 0x48],EDX      ; 004d3448
    MOV dword ptr [ESP + 0x4c],EAX      ; 004d344c
    JMP 0x004d32f9                      ; 004d3450
        ;   XREF to: 004d32f9 (UNCONDITIONAL_JUMP)  ; LAB_004d32f9

