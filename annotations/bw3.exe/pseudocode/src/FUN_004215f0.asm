; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004215f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_0046cf30
;   FUN_0046d4c0
;   FUN_0046d540
;   FUN_0053b130
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004215f0
        ;   Label: FUN_004215f0
    SUB ESP,0x6c                        ; 004215f1
    MOV EAX,dword ptr [ESP + 0x74]      ; 004215f4
    CMP dword ptr [EAX + 0x24fc],0x0    ; 004215f8
    JZ 0x00421608                       ; 004215ff
        ;   XREF to: 00421608 (CONDITIONAL_JUMP)  ; LAB_00421608
    XOR EAX,EAX                         ; 00421601
        ;   Label: LAB_00421601
    ADD ESP,0x6c                        ; 00421603
    POP EBP                             ; 00421606
    RET                                 ; 00421607
    MOV ECX,dword ptr [0x005f2afc]      ; 00421608 | DAT_005f2afc
        ;   Label: LAB_00421608
    PUSH ECX                            ; 0042160e | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 0042160f
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00421614
    TEST EAX,EAX                        ; 00421617
    JNZ 0x00421601                      ; 00421619
        ;   XREF to: 00421601 (CONDITIONAL_JUMP)  ; LAB_00421601
    PUSH EDI                            ; 0042161b
    PUSH ESI                            ; 0042161c
    PUSH EBX                            ; 0042161d
    MOV EBX,dword ptr [ESP + 0x80]      ; 0042161e
    PUSH EBX                            ; 00421625
    CALL FUN_004087f0                   ; 00421626
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0042162b
    PUSH 0x0                            ; 0042162e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00421630
    PUSH EBX                            ; 00421636
    LEA ESI,[ESP + 0x14]                ; 00421637
    LEA EDI,[ESP + 0x2c]                ; 0042163b
    CALL dword ptr [EAX + 0x1c]         ; 0042163f
    MOV ECX,0x6                         ; 00421642
    ADD ESP,0x4                         ; 00421647
    LEA EAX,[ESP + 0x28]                ; 0042164a
    LEA ESI,[ESP + 0x10]                ; 0042164e
    PUSH EAX                            ; 00421652
    MOVSD.REP ES:EDI,ESI                ; 00421653
    CALL FUN_0041daf0                   ; 00421655
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0042165a
    MOV dword ptr [ESP + 0x60],EAX      ; 0042165d
    TEST EAX,EAX                        ; 00421661
    JZ 0x004217a3                       ; 00421663
        ;   XREF to: 004217a3 (CONDITIONAL_JUMP)  ; LAB_004217a3
    MOV EDI,dword ptr [EBX + 0xd058]    ; 00421669
    XOR EBP,EBP                         ; 0042166f
    TEST EDI,EDI                        ; 00421671
    JLE 0x00421792                      ; 00421673
        ;   XREF to: 00421792 (CONDITIONAL_JUMP)  ; LAB_00421792
    LEA EAX,[EBX + 0x13460]             ; 00421679
    MOV dword ptr [ESP + 0x64],EAX      ; 0042167f
    LEA EAX,[EBX + 0xd05c]              ; 00421683
    MOV dword ptr [ESP + 0x68],EAX      ; 00421689
    LEA EAX,[EBX + 0x20]                ; 0042168d
    MOV dword ptr [ESP + 0x74],EAX      ; 00421690
    LEA EAX,[EBX + 0xd070]              ; 00421694
    MOV dword ptr [ESP + 0x70],EAX      ; 0042169a
    ADD EBX,0xd064                      ; 0042169e
    MOV EDX,dword ptr [ESP + 0x68]      ; 004216a4
        ;   Label: LAB_004216a4
    MOV ESI,dword ptr [ESP + 0x70]      ; 004216a8
    MOV EAX,EBP                         ; 004216ac
    PUSH EBX                            ; 004216ae
    SHL EAX,0x6                         ; 004216af
    PUSH ESI                            ; 004216b2
    MOV EDI,dword ptr [0x005f2afc]      ; 004216b3 | DAT_005f2afc
    ADD EDX,EAX                         ; 004216b9
    PUSH EDI                            ; 004216bb | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x78],EDX      ; 004216bc
    CALL FUN_0046cf30                   ; 004216c0
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 004216c5
    LEA ESI,[ESP + 0x48]                ; 004216c8
    MOV EAX,dword ptr [ESP + 0x74]      ; 004216cc
    LEA EDI,[ESP + 0x3c]                ; 004216d0
    LEA EDX,[ESP + 0x3c]                ; 004216d4
    FLD float ptr [EAX + 0x4]           ; 004216d8
    FLD float ptr [EAX + 0x8]           ; 004216db
    FLD float ptr [EAX]                 ; 004216de
    LEA EAX,[ESP + 0x54]                ; 004216e0
    FADD float ptr [EBX]                ; 004216e4
    FXCH ST2                            ; 004216e6
    FADD float ptr [EBX + 0x4]          ; 004216e8
    FXCH                                ; 004216eb
    FADD float ptr [EBX + 0x8]          ; 004216ed
    FXCH ST2                            ; 004216f0
    FSTP float ptr [ESP + 0x48]         ; 004216f2
    FSTP float ptr [ESP + 0x4c]         ; 004216f6
    FSTP float ptr [ESP + 0x50]         ; 004216fa
    MOVSD ES:EDI,ESI                    ; 004216fe
    MOVSD ES:EDI,ESI                    ; 004216ff
    MOVSD ES:EDI,ESI                    ; 00421700
    CMP EAX,EDX                         ; 00421701
    JZ 0x0042171d                       ; 00421703
        ;   XREF to: 0042171d (CONDITIONAL_JUMP)  ; LAB_0042171d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00421705
    MOV dword ptr [ESP + 0x54],EAX      ; 00421709
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042170d
    MOV dword ptr [ESP + 0x58],EAX      ; 00421711
    MOV EAX,dword ptr [ESP + 0x44]      ; 00421715
    MOV dword ptr [ESP + 0x5c],EAX      ; 00421719
    LEA EAX,[ESP + 0x54]                ; 0042171d
        ;   Label: LAB_0042171d
    PUSH EAX                            ; 00421721
    MOV EAX,[0x00603b28]                ; 00421722 | DAT_00603b28
    PUSH EAX                            ; 00421727 | DAT_01ed78c8
    CALL FUN_0053b130                   ; 00421728
        ;   XREF to: 0053b130 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b130()
    ADD ESP,0x8                         ; 0042172d
    PUSH 0xffff                         ; 00421730
    MOV EDX,dword ptr [0x005f2afc]      ; 00421735 | DAT_005f2afc
    PUSH EDX                            ; 0042173b | DAT_01bdd7e4
    CALL FUN_0046d4c0                   ; 0042173c
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 00421741
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421744
    IMUL EAX,dword ptr [EAX + 0x4],0x17c ; 00421748
    MOV ESI,dword ptr [ESP + 0x64]      ; 0042174f
    PUSH 0x2e7                          ; 00421753
    ADD EAX,ESI                         ; 00421758
    PUSH 0x0                            ; 0042175a
    PUSH EAX                            ; 0042175c
    CALL FUN_00462540                   ; 0042175d
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 00421762
    MOV EDI,dword ptr [0x005f2afc]      ; 00421765 | DAT_005f2afc
    PUSH EDI                            ; 0042176b | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0042176c
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 00421771
    ADD dword ptr [ESP + 0x70],0x40     ; 00421774
    MOV EAX,dword ptr [ESP + 0x80]      ; 00421779
    INC EBP                             ; 00421780
    MOV EDX,dword ptr [EAX + 0xd058]    ; 00421781
    ADD EBX,0x40                        ; 00421787
    CMP EBP,EDX                         ; 0042178a
    JL 0x004216a4                       ; 0042178c
        ;   XREF to: 004216a4 (CONDITIONAL_JUMP)  ; LAB_004216a4
    PUSH 0x0                            ; 00421792
        ;   Label: LAB_00421792
    MOV ECX,dword ptr [0x00603b28]      ; 00421794 | DAT_00603b28
    PUSH ECX                            ; 0042179a | DAT_01ed78c8
    CALL FUN_0053b130                   ; 0042179b
        ;   XREF to: 0053b130 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b130()
    ADD ESP,0x8                         ; 004217a0
    MOV EBP,dword ptr [ESP + 0x80]      ; 004217a3
        ;   Label: LAB_004217a3
    PUSH EBP                            ; 004217aa
    CALL FUN_00408830                   ; 004217ab
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004217b0
    MOV EAX,dword ptr [ESP + 0x60]      ; 004217b3
    POP EBX                             ; 004217b7
    POP ESI                             ; 004217b8
    POP EDI                             ; 004217b9
    ADD ESP,0x6c                        ; 004217ba
    POP EBP                             ; 004217bd
    RET                                 ; 004217be

