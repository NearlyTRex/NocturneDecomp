; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00445690(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x13]:1  local_13
;
; XREF[1]:
;   FUN_004ce580 at 004cef89
;
; Referenced Globals:
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   FUN_004011a0
;   FUN_00402090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445690
        ;   Label: FUN_00445690
    PUSH ESI                            ; 00445691
    PUSH EDI                            ; 00445692
    PUSH EBP                            ; 00445693
    SUB ESP,0x14                        ; 00445694
    MOV EBX,dword ptr [ESP + 0x28]      ; 00445697
    XOR AH,AH                           ; 0044569b
    MOV byte ptr [ESP + 0x11],AH        ; 0044569d
    XOR EDX,EDX                         ; 004456a1
    MOV ECX,dword ptr [EBX + 0xfb4]     ; 004456a3
    MOV dword ptr [ESP + 0x4],EDX       ; 004456a9
    TEST ECX,ECX                        ; 004456ad
    JLE 0x00445744                      ; 004456af
        ;   XREF to: 00445744 (CONDITIONAL_JUMP)  ; LAB_00445744
    XOR ECX,ECX                         ; 004456b5
    MOV dword ptr [ESP],EBX             ; 004456b7
    MOV dword ptr [ESP + 0xc],ECX       ; 004456ba
    MOV ESI,dword ptr [EBX + 0xfb0]     ; 004456be
        ;   Label: LAB_004456be
    XOR EBP,EBP                         ; 004456c4
    TEST ESI,ESI                        ; 004456c6
    JLE 0x00445719                      ; 004456c8
        ;   XREF to: 00445719 (CONDITIONAL_JUMP)  ; LAB_00445719
    MOV EAX,dword ptr [ESP + 0xc]       ; 004456ca
    MOV ESI,dword ptr [ESP]             ; 004456ce
    XOR EDI,EDI                         ; 004456d1
    MOV dword ptr [ESP + 0x8],EAX       ; 004456d3
    MOV AL,byte ptr [ESI + 0x8]         ; 004456d7
        ;   Label: LAB_004456d7
    MOV byte ptr [ESP + 0x10],AL        ; 004456da
    TEST AL,AL                          ; 004456de
    JZ 0x0044570a                       ; 004456e0
        ;   XREF to: 0044570a (CONDITIONAL_JUMP)  ; LAB_0044570a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004456e2
    MOV EDX,dword ptr [EBX + 0xfbc]     ; 004456e6
    PUSH 0xf8                           ; 004456ec
    ADD EAX,EDX                         ; 004456f1
    PUSH EAX                            ; 004456f3
    MOV EAX,dword ptr [EBX + 0xfb8]     ; 004456f4
    ADD EAX,EDI                         ; 004456fa
    PUSH EAX                            ; 004456fc
    LEA EAX,[ESP + 0x1c]                ; 004456fd
    PUSH EAX                            ; 00445701
    CALL FUN_00402090                   ; 00445702
        ;   XREF to: 00402090 (UNCONDITIONAL_CALL)  ; undefined FUN_00402090()
    ADD ESP,0x10                        ; 00445707
    INC ESI                             ; 0044570a
        ;   Label: LAB_0044570a
    INC EBP                             ; 0044570b
    MOV EAX,dword ptr [EBX + 0xfb0]     ; 0044570c
    ADD EDI,0x7                         ; 00445712
    CMP EBP,EAX                         ; 00445715
    JL 0x004456d7                       ; 00445717
        ;   XREF to: 004456d7 (CONDITIONAL_JUMP)  ; LAB_004456d7
    MOV ESI,dword ptr [ESP]             ; 00445719
        ;   Label: LAB_00445719
    MOV EDI,dword ptr [ESP + 0xc]       ; 0044571c
    MOV EBP,dword ptr [ESP + 0x4]       ; 00445720
    MOV EDX,dword ptr [EBX + 0xfb4]     ; 00445724
    ADD ESI,0x50                        ; 0044572a
    ADD EDI,0xb                         ; 0044572d
    INC EBP                             ; 00445730
    MOV dword ptr [ESP],ESI             ; 00445731
    MOV dword ptr [ESP + 0xc],EDI       ; 00445734
    MOV dword ptr [ESP + 0x4],EBP       ; 00445738
    CMP EBP,EDX                         ; 0044573c
    JL 0x004456be                       ; 0044573e
        ;   XREF to: 004456be (CONDITIONAL_JUMP)  ; LAB_004456be
    MOV EBP,dword ptr [EBX + 0xfb0]     ; 00445744
        ;   Label: LAB_00445744
    MOV ESI,dword ptr [EBX + 0xfb8]     ; 0044574a
    LEA EAX,[EBP*0x8 + 0x0]             ; 00445750
    MOV EDI,dword ptr [EBX + 0xfbc]     ; 00445757
    SUB EAX,EBP                         ; 0044575d
    MOV EBX,dword ptr [EBX + 0xfb4]     ; 0044575f
    LEA EBP,[ESI + EAX*0x1]             ; 00445765
    LEA EAX,[EBX*0x4 + 0x0]             ; 00445768
    SUB EAX,EBX                         ; 0044576f
    SHL EAX,0x2                         ; 00445771
    SUB EAX,EBX                         ; 00445774
    LEA EBX,[EDI + EAX*0x1]             ; 00445776
    DEC EDI                             ; 00445779
    PUSH EDI                            ; 0044577a
    PUSH EBP                            ; 0044577b
    PUSH EDI                            ; 0044577c
    MOV ECX,0xf8                        ; 0044577d
    PUSH ESI                            ; 00445782
    MOV dword ptr [0x01c4f020],ECX      ; 00445783 | DAT_01c4f020
    CALL FUN_004011a0                   ; 00445789
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 0044578e
    INC EBX                             ; 00445791
    PUSH EBX                            ; 00445792
    PUSH EBP                            ; 00445793
    PUSH EBX                            ; 00445794
    PUSH ESI                            ; 00445795
    CALL FUN_004011a0                   ; 00445796
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 0044579b
    PUSH EBX                            ; 0044579e
    DEC ESI                             ; 0044579f
    PUSH ESI                            ; 004457a0
    PUSH EDI                            ; 004457a1
    PUSH ESI                            ; 004457a2
    CALL FUN_004011a0                   ; 004457a3
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 004457a8
    PUSH EBX                            ; 004457ab
    INC EBP                             ; 004457ac
    PUSH EBP                            ; 004457ad
    PUSH EDI                            ; 004457ae
    PUSH EBP                            ; 004457af
    CALL FUN_004011a0                   ; 004457b0
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 004457b5
    ADD ESP,0x14                        ; 004457b8
    POP EBP                             ; 004457bb
    POP EDI                             ; 004457bc
    POP ESI                             ; 004457bd
    POP EBX                             ; 004457be
    RET                                 ; 004457bf

