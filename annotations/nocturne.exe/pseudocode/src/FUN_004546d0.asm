; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004546d0(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_Spine1_0057cf39
;   string s_Bip01_Head_0057cf46
;
; Called Functions:
;   FUN_004796b0
;   FUN_005179d0
;   FUN_0051dcd0
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004546d0
        ;   Label: FUN_004546d0
    PUSH ESI                            ; 004546d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004546d2
    LEA EBX,[ESI + 0x150]               ; 004546d6
    PUSH EBX                            ; 004546dc
    CALL FUN_0051dcd0                   ; 004546dd
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 004546e2
    PUSH EBX                            ; 004546e5
    CALL FUN_0051e0a0                   ; 004546e6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004546eb
    PUSH 0x1                            ; 004546ee
    PUSH 0x57cf39                       ; 004546f0 | = "Bip01 Spine1"
    PUSH EAX                            ; 004546f5
    MOV EBX,EAX                         ; 004546f6
    CALL FUN_005179d0                   ; 004546f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004546fd
    PUSH 0x1                            ; 00454700
    PUSH 0x57cf46                       ; 00454702 | = "Bip01 Head"
    PUSH EBX                            ; 00454707
    MOV dword ptr [ESI + 0xbd24],EAX    ; 00454708
    CALL FUN_005179d0                   ; 0045470e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 00454713
    PUSH ESI                            ; 00454716
    MOV dword ptr [ESI + 0xbd28],EAX    ; 00454717
    CALL FUN_004796b0                   ; 0045471d
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 00454722
    POP ESI                             ; 00454725
    POP EBX                             ; 00454726
    RET                                 ; 00454727

