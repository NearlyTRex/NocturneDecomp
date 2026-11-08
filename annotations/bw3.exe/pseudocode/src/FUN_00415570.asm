; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415570(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00415350 at 004153d3
;
; Referenced Globals:
;   undefined4 DAT_005b6c5a
;   undefined4 DAT_005b6c62
;   undefined4 DAT_005b6c6a
;   undefined4 DAT_005b6c72
;
; Called Functions:
;   FUN_00408b80
;   FUN_004a5b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415570
        ;   Label: FUN_00415570
    PUSH ESI                            ; 00415571
    PUSH EDI                            ; 00415572
    PUSH EBP                            ; 00415573
    MOV EBP,ESP                         ; 00415574
    SUB ESP,0x3c                        ; 00415576
    AND ESP,0xfffffff8                  ; 00415579
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041557c
    CMP dword ptr [EAX + 0x74c],0x0     ; 0041557f
    JZ 0x004156a7                       ; 00415586
        ;   XREF to: 004156a7 (CONDITIONAL_JUMP)  ; LAB_004156a7
    FLD float ptr [EAX + 0xccc]         ; 0041558c
    FSUB float ptr [EBP + 0x18]         ; 00415592
    FST float ptr [EAX + 0xccc]         ; 00415595
    FLDZ                                ; 0041559b
    FCOMPP                              ; 0041559d
    FNSTSW AX                           ; 0041559f
    SAHF                                ; 004155a1
    JA 0x004156ae                       ; 004155a2
        ;   XREF to: 004156ae (CONDITIONAL_JUMP)  ; LAB_004156ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004155a8
    XOR ECX,ECX                         ; 004155ab
    MOV EBX,dword ptr [EAX + 0x74c]     ; 004155ad
    MOV dword ptr [ESP + 0x34],ECX      ; 004155b3
    TEST EBX,EBX                        ; 004155b7
    JLE 0x004156a7                      ; 004155b9
        ;   XREF to: 004156a7 (CONDITIONAL_JUMP)  ; LAB_004156a7
    ADD EAX,0x750                       ; 004155bf
    MOV dword ptr [ESP + 0x30],EAX      ; 004155c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004155c8
    ADD EAX,0x77c                       ; 004155cb
    MOV dword ptr [ESP + 0x38],EAX      ; 004155d0
    IMUL EBX,dword ptr [ESP + 0x34],0x2b0 ; 004155d4
        ;   Label: LAB_004155d4
    ADD EBX,dword ptr [ESP + 0x30]      ; 004155dc
    PUSH EBX                            ; 004155e0
    MOV EDI,dword ptr [EBP + 0x14]      ; 004155e1
    PUSH EDI                            ; 004155e4
    LEA ESI,[ESP + 0x20]                ; 004155e5
    CALL FUN_00408b80                   ; 004155e9
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA EDI,[ESP + 0x14]                ; 004155ee
    LEA ESI,[ESP + 0x20]                ; 004155f2
    ADD ESP,0x8                         ; 004155f6
    MOVSD ES:EDI,ESI                    ; 004155f9
    MOVSD ES:EDI,ESI                    ; 004155fa
    MOVSD ES:EDI,ESI                    ; 004155fb
    MOV ESI,dword ptr [ESP + 0x38]      ; 004155fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00415600
    MOV dword ptr [ESI],EAX             ; 00415604
    MOV EAX,dword ptr [ESP + 0x10]      ; 00415606
    MOV dword ptr [ESI + 0x4],EAX       ; 0041560a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041560d
    MOV dword ptr [ESI + 0x8],EAX       ; 00415611
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00415614
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041561c
    FLD float ptr [EAX + 0xccc]         ; 0041561f
    FST double ptr [ESP]                ; 00415625
    FCOMP double ptr [0x005b6c72]       ; 00415628 | DAT_005b6c72
    FNSTSW AX                           ; 0041562e
    SAHF                                ; 00415630
    JNC 0x00415640                      ; 00415631
        ;   XREF to: 00415640 (CONDITIONAL_JUMP)  ; LAB_00415640
    FLD double ptr [ESP]                ; 00415633
    FMUL double ptr [0x005b6c6a]        ; 00415636 | DAT_005b6c6a
    FSTP float ptr [ESP + 0x8]          ; 0041563c
    FLD float ptr [ESP + 0x8]           ; 00415640
        ;   Label: LAB_00415640
    FLD ST0                             ; 00415644
    FMUL double ptr [0x005b6c5a]        ; 00415646 | DAT_005b6c5a
    FXCH                                ; 0041564c
    FMUL double ptr [0x005b6c62]        ; 0041564e | DAT_005b6c62
    ADD EBX,0xc                         ; 00415654
    FXCH                                ; 00415657
    FSTP float ptr [ESP + 0x2c]         ; 00415659
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041565d
    PUSH dword ptr [EBP + 0x18]         ; 00415661
    MOV dword ptr [EBX + 0x158],EAX     ; 00415664
    PUSH EBX                            ; 0041566a
    FSTP float ptr [EBX + 0x15c]        ; 0041566b
    MOV dword ptr [EBX + 0x160],EAX     ; 00415671
    CALL FUN_004a5b10                   ; 00415677
        ;   XREF to: 004a5b10 (UNCONDITIONAL_CALL)  ; undefined FUN_004a5b10()
    ADD ESP,0x8                         ; 0041567c
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041567f
    MOV EDI,dword ptr [ESP + 0x34]      ; 00415683
    MOV EBX,dword ptr [EBP + 0x14]      ; 00415687
    ADD ESI,0x2b0                       ; 0041568a
    INC EDI                             ; 00415690
    MOV EDX,dword ptr [EBX + 0x74c]     ; 00415691
    MOV dword ptr [ESP + 0x38],ESI      ; 00415697
    MOV dword ptr [ESP + 0x34],EDI      ; 0041569b
    CMP EDI,EDX                         ; 0041569f
    JL 0x004155d4                       ; 004156a1
        ;   XREF to: 004155d4 (CONDITIONAL_JUMP)  ; LAB_004155d4
    MOV ESP,EBP                         ; 004156a7
        ;   Label: LAB_004156a7
    POP EBP                             ; 004156a9
    POP EDI                             ; 004156aa
    POP ESI                             ; 004156ab
    POP EBX                             ; 004156ac
    RET                                 ; 004156ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 004156ae
        ;   Label: LAB_004156ae
    MOV dword ptr [EAX + 0x74c],0x0     ; 004156b1
    MOV dword ptr [EAX + 0xccc],0x0     ; 004156bb
    MOV ESP,EBP                         ; 004156c5
    POP EBP                             ; 004156c7
    POP EDI                             ; 004156c8
    POP ESI                             ; 004156c9
    POP EBX                             ; 004156ca
    RET                                 ; 004156cb

