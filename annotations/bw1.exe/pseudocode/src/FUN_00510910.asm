; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510910(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_00441800
;   FUN_00569810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510910
        ;   Label: FUN_00510910
    SUB ESP,0x30                        ; 00510911
    MOV EBX,dword ptr [ESP + 0x38]      ; 00510914
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 00510918
    JZ 0x005109a7                       ; 0051091f
        ;   XREF to: 005109a7 (CONDITIONAL_JUMP)  ; LAB_005109a7
    CMP dword ptr [ESP + 0x3c],0x0      ; 00510925
    JZ 0x00510936                       ; 0051092a
        ;   XREF to: 00510936 (CONDITIONAL_JUMP)  ; LAB_00510936
    MOV dword ptr [EBX + 0x24fc],0x1    ; 0051092c
    PUSH EDI                            ; 00510936
        ;   Label: LAB_00510936
    PUSH ESI                            ; 00510937
    PUSH EBX                            ; 00510938
    CALL FUN_004087b0                   ; 00510939
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 0051093e
    PUSH 0x0                            ; 00510941
    MOV EAX,dword ptr [EBX + 0x154]     ; 00510943
    PUSH EBX                            ; 00510949
    LEA ESI,[ESP + 0x10]                ; 0051094a
    LEA EDI,[ESP + 0x28]                ; 0051094e
    CALL dword ptr [EAX + 0x1c]         ; 00510952
    MOV ECX,0x6                         ; 00510955
    ADD ESP,0x4                         ; 0051095a
    LEA EAX,[ESP + 0x24]                ; 0051095d
    LEA ESI,[ESP + 0xc]                 ; 00510961
    PUSH EAX                            ; 00510965
    MOVSD.REP ES:EDI,ESI                ; 00510966
    CALL FUN_004207b0                   ; 00510968
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0051096d
    TEST EAX,EAX                        ; 00510970
    JZ 0x0051099c                       ; 00510972
        ;   XREF to: 0051099c (CONDITIONAL_JUMP)  ; LAB_0051099c
    PUSH 0x0                            ; 00510974
    PUSH 0x1                            ; 00510976
    PUSH -0x1                           ; 00510978
    PUSH -0x1                           ; 0051097a
    LEA EAX,[EBX + 0x158]               ; 0051097c
    PUSH EAX                            ; 00510982
    CALL FUN_00569810                   ; 00510983
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; undefined FUN_00569810()
    ADD ESP,0x14                        ; 00510988
    PUSH 0x0                            ; 0051098b
    LEA EAX,[EBX + 0xc330]              ; 0051098d
    PUSH EAX                            ; 00510993
    CALL FUN_00441800                   ; 00510994
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; undefined FUN_00441800()
    ADD ESP,0x8                         ; 00510999
    PUSH EBX                            ; 0051099c
        ;   Label: LAB_0051099c
    CALL FUN_004087f0                   ; 0051099d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005109a2
    POP ESI                             ; 005109a5
    POP EDI                             ; 005109a6
    ADD ESP,0x30                        ; 005109a7
        ;   Label: LAB_005109a7
    POP EBX                             ; 005109aa
    RET                                 ; 005109ab

