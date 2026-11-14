; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00578570(int param_1)
;
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578570
        ;   Label: core_wateract.cpp_FUN_00578570
    PUSH ESI                            ; 00578571
    PUSH EDI                            ; 00578572
    PUSH EBP                            ; 00578573
    SUB ESP,0x40                        ; 00578574
    MOV EAX,dword ptr [ESP + 0x54]      ; 00578577
    XOR EDX,EDX                         ; 0057857b
    MOV ECX,dword ptr [EAX + 0x29c]     ; 0057857d
    MOV dword ptr [ESP + 0x38],EDX      ; 00578583
    TEST ECX,ECX                        ; 00578587
    JLE 0x00578641                      ; 00578589
        ;   XREF to: 00578641 (CONDITIONAL_JUMP)  ; LAB_00578641
    ADD EAX,0x2a0                       ; 0057858f
    MOV dword ptr [ESP + 0x34],EAX      ; 00578594
    MOV EAX,dword ptr [ESP + 0x54]      ; 00578598
    ADD EAX,0x20                        ; 0057859c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057859f
    MOV EAX,dword ptr [ESP + 0x54]      ; 005785a3
    MOV EBX,dword ptr [ESP + 0x54]      ; 005785a7
    ADD EAX,0x3c                        ; 005785ab
    ADD EBX,0x2ac                       ; 005785ae
    MOV dword ptr [ESP + 0x30],EAX      ; 005785b4
    FLD float ptr [EBX]                 ; 005785b8
        ;   Label: LAB_005785b8
    FLD float ptr [EBX + 0x4]           ; 005785ba
    FLD float ptr [EBX + 0x8]           ; 005785bd
    MOV EBP,dword ptr [ESP + 0x38]      ; 005785c0
    MOV EAX,dword ptr [ESP + 0x34]      ; 005785c4
    SHL EBP,0x5                         ; 005785c8
    LEA EDI,[ESP + 0xc]                 ; 005785cb
    ADD EBP,EAX                         ; 005785cf
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005785d1
    LEA ESI,[ESP + 0x24]                ; 005785d5
    MOV EDX,dword ptr [ESP + 0x30]      ; 005785d9
    FXCH ST2                            ; 005785dd
    FSUB float ptr [EAX]                ; 005785df
    FXCH                                ; 005785e1
    FSUB float ptr [EAX + 0x4]          ; 005785e3
    FXCH ST2                            ; 005785e6
    FSUB float ptr [EAX + 0x8]          ; 005785e8
    FXCH                                ; 005785eb
    FSTP float ptr [ESP + 0x24]         ; 005785ed
    FXCH                                ; 005785f1
    FSTP float ptr [ESP + 0x28]         ; 005785f3
    LEA EAX,[ESP + 0xc]                 ; 005785f7
    FSTP float ptr [ESP + 0x2c]         ; 005785fb
    PUSH EAX                            ; 005785ff
    MOVSD ES:EDI,ESI                    ; 00578600
    MOVSD ES:EDI,ESI                    ; 00578601
    MOVSD ES:EDI,ESI                    ; 00578602
    PUSH EDX                            ; 00578603
    LEA ESI,[ESP + 0x20]                ; 00578604
    LEA EDI,[ESP + 0x8]                 ; 00578608
    CALL core_dirmat.cpp_FUN_0045b870   ; 0057860c
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x20]                ; 00578611
    ADD ESP,0x8                         ; 00578615
    MOV EAX,ESP                         ; 00578618
    MOVSD ES:EDI,ESI                    ; 0057861a
    MOVSD ES:EDI,ESI                    ; 0057861b
    MOVSD ES:EDI,ESI                    ; 0057861c
    CMP EBP,EAX                         ; 0057861d
    JNZ 0x00578649                      ; 0057861f
        ;   XREF to: 00578649 (CONDITIONAL_JUMP)  ; LAB_00578649
    MOV ESI,dword ptr [ESP + 0x38]      ; 00578621
        ;   Label: LAB_00578621
    INC ESI                             ; 00578625
    MOV dword ptr [ESP + 0x38],ESI      ; 00578626
    MOV EAX,ESI                         ; 0057862a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0057862c
    MOV EDI,dword ptr [ESI + 0x29c]     ; 00578630
    ADD EBX,0x20                        ; 00578636
    CMP EAX,EDI                         ; 00578639
    JL 0x005785b8                       ; 0057863b
        ;   XREF to: 005785b8 (CONDITIONAL_JUMP)  ; LAB_005785b8
    ADD ESP,0x40                        ; 00578641
        ;   Label: LAB_00578641
    POP EBP                             ; 00578644
    POP EDI                             ; 00578645
    POP ESI                             ; 00578646
    POP EBX                             ; 00578647
    RET                                 ; 00578648
    MOV EAX,dword ptr [ESP]             ; 00578649
        ;   Label: LAB_00578649
    MOV dword ptr [EBP],EAX             ; 0057864c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057864f
    MOV dword ptr [EBP + 0x4],EAX       ; 00578653
    MOV EAX,dword ptr [ESP + 0x8]       ; 00578656
    MOV dword ptr [EBP + 0x8],EAX       ; 0057865a
    JMP 0x00578621                      ; 0057865d
        ;   XREF to: 00578621 (UNCONDITIONAL_JUMP)  ; LAB_00578621

