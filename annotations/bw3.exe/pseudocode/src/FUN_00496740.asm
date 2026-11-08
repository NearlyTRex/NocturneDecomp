; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00496740(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_0046cf30
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496740
        ;   Label: FUN_00496740
    PUSH ESI                            ; 00496741
    PUSH EDI                            ; 00496742
    PUSH EBP                            ; 00496743
    SUB ESP,0x48                        ; 00496744
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00496747
    PUSH EBX                            ; 0049674b
    CALL FUN_004087f0                   ; 0049674c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00496751
    PUSH 0x0                            ; 00496754
    MOV EAX,dword ptr [EBX + 0x154]     ; 00496756
    PUSH EBX                            ; 0049675c
    LEA ESI,[ESP + 0x8]                 ; 0049675d
    LEA EDI,[ESP + 0x20]                ; 00496761
    CALL dword ptr [EAX + 0x1c]         ; 00496765
    MOV ECX,0x6                         ; 00496768
    ADD ESP,0x4                         ; 0049676d
    LEA EAX,[ESP + 0x1c]                ; 00496770
    LEA ESI,[ESP + 0x4]                 ; 00496774
    PUSH EAX                            ; 00496778
    MOVSD.REP ES:EDI,ESI                ; 00496779
    CALL FUN_0041daf0                   ; 0049677b
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00496780
    MOV ESI,EAX                         ; 00496783
    TEST EAX,EAX                        ; 00496785
    JNZ 0x0049679c                      ; 00496787
        ;   XREF to: 0049679c (CONDITIONAL_JUMP)  ; LAB_0049679c
    PUSH EBX                            ; 00496789
    CALL FUN_00408830                   ; 0049678a
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0049678f
    MOV EAX,ESI                         ; 00496792
    ADD ESP,0x48                        ; 00496794
    POP EBP                             ; 00496797
    POP EDI                             ; 00496798
    POP ESI                             ; 00496799
    POP EBX                             ; 0049679a
    RET                                 ; 0049679b
    XOR EDX,EDX                         ; 0049679c
        ;   Label: LAB_0049679c
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049679e
    MOV EAX,dword ptr [EBX + 0x3d8]     ; 004967a2
    MOV dword ptr [ESP + 0x44],EAX      ; 004967a8
    LEA EAX,[ESP + 0x30]                ; 004967ac
    MOV dword ptr [ESP + 0x40],EDX      ; 004967b0
    PUSH EAX                            ; 004967b4
    MOV dword ptr [ESP + 0x34],EDX      ; 004967b5
    MOV dword ptr [ESP + 0x3c],EDX      ; 004967b9
    PUSH 0x2cfd900                      ; 004967bd
    MOV EDX,dword ptr [0x005f2afc]      ; 004967c2 | DAT_005f2afc
    MOV EBP,0x40000000                  ; 004967c8
    PUSH EDX                            ; 004967cd
    MOV dword ptr [ESP + 0x40],EBP      ; 004967ce
    CALL FUN_0046cf30                   ; 004967d2
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 004967d7
    PUSH 0x2cfd900                      ; 004967da
    LEA EAX,[ESP + 0x40]                ; 004967df
    PUSH EAX                            ; 004967e3
    MOV ECX,dword ptr [0x005f2afc]      ; 004967e4 | DAT_005f2afc
    PUSH ECX                            ; 004967ea
    CALL FUN_0046cf30                   ; 004967eb
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 004967f0
    PUSH -0x1                           ; 004967f3
    LEA EAX,[EBX + 0x1f4]               ; 004967f5
    PUSH 0x0                            ; 004967fb
    PUSH EAX                            ; 004967fd
    CALL FUN_00462540                   ; 004967fe
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 00496803
    MOV EDI,dword ptr [0x005f2afc]      ; 00496806 | DAT_005f2afc
    PUSH EDI                            ; 0049680c
    CALL thunk_FUN_004e5ef0             ; 0049680d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 00496812
    MOV EBP,dword ptr [0x005f2afc]      ; 00496815 | DAT_005f2afc
    PUSH EBP                            ; 0049681b
    CALL thunk_FUN_004e5ef0             ; 0049681c
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 00496821
    PUSH EBX                            ; 00496824
    CALL FUN_00408830                   ; 00496825
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0049682a
    MOV EAX,ESI                         ; 0049682d
    ADD ESP,0x48                        ; 0049682f
    POP EBP                             ; 00496832
    POP EDI                             ; 00496833
    POP ESI                             ; 00496834
    POP EBX                             ; 00496835
    RET                                 ; 00496836

