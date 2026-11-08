; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00454360(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
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
; XREF[3]:
;   FUN_00473cd0 at 004742f1
;   FUN_00474400 at 0047489f
;   FUN_00474940 at 00474a54
;
; Referenced Globals:
;   undefined4 DAT_01548b58
;   undefined4 DAT_01548b5c
;   undefined4 DAT_01548b60
;   undefined4 DAT_01548b64
;   undefined4 DAT_01548b68
;   undefined4 DAT_01548b6c
;   undefined4 DAT_01548b70
;   undefined4 DAT_01548b74
;   undefined4 DAT_01548b78
;
; Called Functions:
;   FUN_00452240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454360
        ;   Label: FUN_00454360
    PUSH ESI                            ; 00454361
    PUSH EDI                            ; 00454362
    PUSH EBP                            ; 00454363
    MOV EBP,ESP                         ; 00454364
    SUB ESP,0x30                        ; 00454366
    AND ESP,0xfffffff8                  ; 00454369
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045436c
    MOV ECX,0xffffffff                  ; 0045436f
    MOV EDX,0x3f800347                  ; 00454374
    MOV EDI,dword ptr [EBX + 0x28]      ; 00454379
    XOR ESI,ESI                         ; 0045437c
    MOV dword ptr [ESP + 0x24],ECX      ; 0045437e
    MOV dword ptr [ESP + 0x28],EDX      ; 00454382
    TEST EDI,EDI                        ; 00454386
    JLE 0x004543eb                      ; 00454388
        ;   XREF to: 004543eb (CONDITIONAL_JUMP)  ; LAB_004543eb
    XOR EDI,EDI                         ; 0045438a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045438c
        ;   Label: LAB_0045438c
    PUSH EAX                            ; 0045438f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00454390
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00454393
    PUSH EDX                            ; 00454396
    ADD EAX,EDI                         ; 00454397
    PUSH EAX                            ; 00454399
    CALL FUN_00452240                   ; 0045439a
        ;   XREF to: 00452240 (UNCONDITIONAL_CALL)  ; undefined FUN_00452240()
    MOV dword ptr [ESP + 0x38],EAX      ; 0045439f
    FLD float ptr [ESP + 0x38]          ; 004543a3
    ADD ESP,0xc                         ; 004543a7
    FLDZ                                ; 004543aa
    FXCH                                ; 004543ac
    FST float ptr [ESP + 0x8]           ; 004543ae
    FSTP double ptr [ESP]               ; 004543b2
    FCOMP double ptr [ESP]              ; 004543b5
    FNSTSW AX                           ; 004543b8
    SAHF                                ; 004543ba
    JA 0x004543e0                       ; 004543bb
        ;   XREF to: 004543e0 (CONDITIONAL_JUMP)  ; LAB_004543e0
    FLD float ptr [ESP + 0x8]           ; 004543bd
    FCOMP float ptr [ESP + 0x28]        ; 004543c1
    FNSTSW AX                           ; 004543c5
    SAHF                                ; 004543c7
    JNC 0x004543e0                      ; 004543c8
        ;   XREF to: 004543e0 (CONDITIONAL_JUMP)  ; LAB_004543e0
    FLD1                                ; 004543ca
    FCOMP double ptr [ESP]              ; 004543cc
    FNSTSW AX                           ; 004543cf
    SAHF                                ; 004543d1
    JC 0x004543e0                       ; 004543d2
        ;   XREF to: 004543e0 (CONDITIONAL_JUMP)  ; LAB_004543e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004543d4
    MOV dword ptr [ESP + 0x24],ESI      ; 004543d8
    MOV dword ptr [ESP + 0x28],EAX      ; 004543dc
    INC ESI                             ; 004543e0
        ;   Label: LAB_004543e0
    MOV EAX,dword ptr [EBX + 0x28]      ; 004543e1
    ADD EDI,0x20                        ; 004543e4
    CMP ESI,EAX                         ; 004543e7
    JL 0x0045438c                       ; 004543e9
        ;   XREF to: 0045438c (CONDITIONAL_JUMP)  ; LAB_0045438c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004543eb
        ;   Label: LAB_004543eb
    TEST EDX,EDX                        ; 004543ef
    JL 0x004544c8                       ; 004543f1
        ;   XREF to: 004544c8 (CONDITIONAL_JUMP)  ; LAB_004544c8
    LEA EDI,[ESP + 0xc]                 ; 004543f7
    MOV EAX,EDX                         ; 004543fb
    MOV ESI,dword ptr [EBX + 0x2c]      ; 004543fd
    SHL EAX,0x5                         ; 00454400
    MOV ECX,dword ptr [EBP + 0x20]      ; 00454403
    FLD float ptr [ESI + EAX*0x1 + 0xc] ; 00454406
    FLD float ptr [ESI + EAX*0x1 + 0x10] ; 0045440a
    FLD float ptr [ESI + EAX*0x1 + 0x14] ; 0045440e
    FXCH ST2                            ; 00454412
    FCHS                                ; 00454414
    FXCH                                ; 00454416
    FCHS                                ; 00454418
    FXCH ST2                            ; 0045441a
    FCHS                                ; 0045441c
    LEA ESI,[ESP + 0x18]                ; 0045441e
    LEA EAX,[ESP + 0xc]                 ; 00454422
    FXCH                                ; 00454426
    FSTP float ptr [ESP + 0x18]         ; 00454428
    FXCH                                ; 0045442c
    FSTP float ptr [ESP + 0x1c]         ; 0045442e
    FSTP float ptr [ESP + 0x20]         ; 00454432
    MOVSD ES:EDI,ESI                    ; 00454436
    MOVSD ES:EDI,ESI                    ; 00454437
    MOVSD ES:EDI,ESI                    ; 00454438
    CMP EAX,ECX                         ; 00454439
    JNZ 0x004544d3                      ; 0045443b
        ;   XREF to: 004544d3 (CONDITIONAL_JUMP)  ; LAB_004544d3
    MOV ESI,dword ptr [ESP + 0x24]      ; 00454441
        ;   Label: LAB_00454441
    MOV EAX,dword ptr [EBX + 0x30]      ; 00454445
    ADD EAX,ESI                         ; 00454448
    MOV AL,byte ptr [EAX]               ; 0045444a
    MOV ESI,dword ptr [EBP + 0x24]      ; 0045444c
    AND EAX,0xff                        ; 0045444f
    MOV dword ptr [ESI],EAX             ; 00454454
    MOV EAX,dword ptr [ESP + 0x24]      ; 00454456
    MOV ESI,dword ptr [EBX + 0x2c]      ; 0045445a
    SHL EAX,0x5                         ; 0045445d
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 00454460
    CMP EAX,0x1548b58                   ; 00454463
    JZ 0x00454484                       ; 00454468
        ;   XREF to: 00454484 (CONDITIONAL_JUMP)  ; LAB_00454484
    FLD float ptr [EAX]                 ; 0045446a
    FLD float ptr [EAX + 0x8]           ; 0045446c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045446f
    MOV dword ptr [0x01548b5c],EDX      ; 00454472 | DAT_01548b5c
    FSTP float ptr [0x01548b60]         ; 00454478 | DAT_01548b60
    FSTP float ptr [0x01548b58]         ; 0045447e | DAT_01548b58
    MOV EAX,dword ptr [ESP + 0x24]      ; 00454484
        ;   Label: LAB_00454484
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00454488
    SHL EAX,0x5                         ; 0045448b
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0045448e
    CMP EAX,0x1548b64                   ; 00454492
    JZ 0x004544b3                       ; 00454497
        ;   XREF to: 004544b3 (CONDITIONAL_JUMP)  ; LAB_004544b3
    FLD float ptr [EAX]                 ; 00454499
    FLD float ptr [EAX + 0x8]           ; 0045449b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045449e
    MOV dword ptr [0x01548b68],EDX      ; 004544a1 | DAT_01548b68
    FSTP float ptr [0x01548b6c]         ; 004544a7 | DAT_01548b6c
    FSTP float ptr [0x01548b64]         ; 004544ad | DAT_01548b64
    MOV EAX,dword ptr [ESP + 0x24]      ; 004544b3
        ;   Label: LAB_004544b3
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004544b7
    SHL EAX,0x5                         ; 004544ba
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004544bd
    CMP EAX,0x1548b70                   ; 004544c1
    JNZ 0x004544ec                      ; 004544c6
        ;   XREF to: 004544ec (CONDITIONAL_JUMP)  ; LAB_004544ec
    MOV EAX,dword ptr [ESP + 0x28]      ; 004544c8
        ;   Label: LAB_004544c8
    MOV ESP,EBP                         ; 004544cc
    POP EBP                             ; 004544ce
    POP EDI                             ; 004544cf
    POP ESI                             ; 004544d0
    POP EBX                             ; 004544d1
    RET                                 ; 004544d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004544d3
        ;   Label: LAB_004544d3
    MOV dword ptr [ECX],EAX             ; 004544d7
    MOV EAX,dword ptr [ESP + 0x10]      ; 004544d9
    MOV dword ptr [ECX + 0x4],EAX       ; 004544dd
    MOV EAX,dword ptr [ESP + 0x14]      ; 004544e0
    MOV dword ptr [ECX + 0x8],EAX       ; 004544e4
    JMP 0x00454441                      ; 004544e7
        ;   XREF to: 00454441 (UNCONDITIONAL_JUMP)  ; LAB_00454441
    FLD float ptr [EAX]                 ; 004544ec
        ;   Label: LAB_004544ec
    FLD float ptr [EAX + 0x8]           ; 004544ee
    MOV EDX,dword ptr [EAX + 0x4]       ; 004544f1
    MOV dword ptr [0x01548b74],EDX      ; 004544f4 | DAT_01548b74
    FSTP float ptr [0x01548b78]         ; 004544fa | DAT_01548b78
    FSTP float ptr [0x01548b70]         ; 00454500 | DAT_01548b70
    MOV EAX,dword ptr [ESP + 0x28]      ; 00454506
    MOV ESP,EBP                         ; 0045450a
    POP EBP                             ; 0045450c
    POP EDI                             ; 0045450d
    POP ESI                             ; 0045450e
    POP EBX                             ; 0045450f
    RET                                 ; 00454510

