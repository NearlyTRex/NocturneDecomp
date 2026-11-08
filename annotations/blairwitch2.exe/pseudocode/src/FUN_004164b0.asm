; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004164b0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004162b0 at 00416333
;
; Referenced Globals:
;   undefined4 DAT_005cbf3a
;   undefined4 DAT_005cbf42
;   undefined4 DAT_005cbf4a
;   undefined4 DAT_005cbf52
;
; Called Functions:
;   FUN_00408d70
;   FUN_0049f2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004164b0
        ;   Label: FUN_004164b0
    PUSH ESI                            ; 004164b1
    PUSH EDI                            ; 004164b2
    PUSH EBP                            ; 004164b3
    MOV EBP,ESP                         ; 004164b4
    SUB ESP,0x3c                        ; 004164b6
    AND ESP,0xfffffff8                  ; 004164b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004164bc
    CMP dword ptr [EAX + 0x8a8],0x0     ; 004164bf
    JZ 0x004165e7                       ; 004164c6
        ;   XREF to: 004165e7 (CONDITIONAL_JUMP)  ; LAB_004165e7
    FLD float ptr [EAX + 0x10dc]        ; 004164cc
    FSUB float ptr [EBP + 0x18]         ; 004164d2
    FST float ptr [EAX + 0x10dc]        ; 004164d5
    FLDZ                                ; 004164db
    FCOMPP                              ; 004164dd
    FNSTSW AX                           ; 004164df
    SAHF                                ; 004164e1
    JA 0x004165ee                       ; 004164e2
        ;   XREF to: 004165ee (CONDITIONAL_JUMP)  ; LAB_004165ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 004164e8
    XOR ECX,ECX                         ; 004164eb
    MOV EBX,dword ptr [EAX + 0x8a8]     ; 004164ed
    MOV dword ptr [ESP + 0x34],ECX      ; 004164f3
    TEST EBX,EBX                        ; 004164f7
    JLE 0x004165e7                      ; 004164f9
        ;   XREF to: 004165e7 (CONDITIONAL_JUMP)  ; LAB_004165e7
    ADD EAX,0x8ac                       ; 004164ff
    MOV dword ptr [ESP + 0x30],EAX      ; 00416504
    MOV EAX,dword ptr [EBP + 0x14]      ; 00416508
    ADD EAX,0x8d8                       ; 0041650b
    MOV dword ptr [ESP + 0x38],EAX      ; 00416510
    IMUL EBX,dword ptr [ESP + 0x34],0x40c ; 00416514
        ;   Label: LAB_00416514
    ADD EBX,dword ptr [ESP + 0x30]      ; 0041651c
    PUSH EBX                            ; 00416520
    MOV EDI,dword ptr [EBP + 0x14]      ; 00416521
    PUSH EDI                            ; 00416524
    LEA ESI,[ESP + 0x14]                ; 00416525
    CALL FUN_00408d70                   ; 00416529
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[ESP + 0x20]                ; 0041652e
    LEA ESI,[ESP + 0x14]                ; 00416532
    ADD ESP,0x8                         ; 00416536
    MOVSD ES:EDI,ESI                    ; 00416539
    MOVSD ES:EDI,ESI                    ; 0041653a
    MOVSD ES:EDI,ESI                    ; 0041653b
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041653c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00416540
    MOV dword ptr [ESI],EAX             ; 00416544
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00416546
    MOV dword ptr [ESI + 0x4],EAX       ; 0041654a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041654d
    MOV dword ptr [ESI + 0x8],EAX       ; 00416551
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00416554
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041655c
    FLD float ptr [EAX + 0x10dc]        ; 0041655f
    FST double ptr [ESP]                ; 00416565
    FCOMP double ptr [0x005cbf52]       ; 00416568 | DAT_005cbf52
    FNSTSW AX                           ; 0041656e
    SAHF                                ; 00416570
    JNC 0x00416580                      ; 00416571
        ;   XREF to: 00416580 (CONDITIONAL_JUMP)  ; LAB_00416580
    FLD double ptr [ESP]                ; 00416573
    FMUL double ptr [0x005cbf4a]        ; 00416576 | DAT_005cbf4a
    FSTP float ptr [ESP + 0x8]          ; 0041657c
    FLD float ptr [ESP + 0x8]           ; 00416580
        ;   Label: LAB_00416580
    FLD ST0                             ; 00416584
    FMUL double ptr [0x005cbf3a]        ; 00416586 | DAT_005cbf3a
    FXCH                                ; 0041658c
    FMUL double ptr [0x005cbf42]        ; 0041658e | DAT_005cbf42
    ADD EBX,0xc                         ; 00416594
    FXCH                                ; 00416597
    FSTP float ptr [ESP + 0x2c]         ; 00416599
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041659d
    PUSH dword ptr [EBP + 0x18]         ; 004165a1
    MOV dword ptr [EBX + 0x2b4],EAX     ; 004165a4
    PUSH EBX                            ; 004165aa
    FSTP float ptr [EBX + 0x2b8]        ; 004165ab
    MOV dword ptr [EBX + 0x2bc],EAX     ; 004165b1
    CALL FUN_0049f2e0                   ; 004165b7
        ;   XREF to: 0049f2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f2e0()
    ADD ESP,0x8                         ; 004165bc
    MOV ESI,dword ptr [ESP + 0x38]      ; 004165bf
    MOV EDI,dword ptr [ESP + 0x34]      ; 004165c3
    MOV EBX,dword ptr [EBP + 0x14]      ; 004165c7
    ADD ESI,0x40c                       ; 004165ca
    INC EDI                             ; 004165d0
    MOV EDX,dword ptr [EBX + 0x8a8]     ; 004165d1
    MOV dword ptr [ESP + 0x38],ESI      ; 004165d7
    MOV dword ptr [ESP + 0x34],EDI      ; 004165db
    CMP EDI,EDX                         ; 004165df
    JL 0x00416514                       ; 004165e1
        ;   XREF to: 00416514 (CONDITIONAL_JUMP)  ; LAB_00416514
    MOV ESP,EBP                         ; 004165e7
        ;   Label: LAB_004165e7
    POP EBP                             ; 004165e9
    POP EDI                             ; 004165ea
    POP ESI                             ; 004165eb
    POP EBX                             ; 004165ec
    RET                                 ; 004165ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 004165ee
        ;   Label: LAB_004165ee
    MOV dword ptr [EAX + 0x8a8],0x0     ; 004165f1
    MOV dword ptr [EAX + 0x10dc],0x0    ; 004165fb
    MOV ESP,EBP                         ; 00416605
    POP EBP                             ; 00416607
    POP EDI                             ; 00416608
    POP ESI                             ; 00416609
    POP EBX                             ; 0041660a
    RET                                 ; 0041660b

