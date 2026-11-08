; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00493000(int param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   FUN_00493070 at 0049308c
;   FUN_004930c0 at 004930e6
;   FUN_004931b0 at 004933d3
;
; Called Functions:
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493000
        ;   Label: FUN_00493000
    PUSH ESI                            ; 00493001
    PUSH EDI                            ; 00493002
    MOV EBX,dword ptr [ESP + 0x10]      ; 00493003
    MOV EDI,dword ptr [ESP + 0x14]      ; 00493007
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049300b
    TEST EDI,EDI                        ; 0049300f
    JL 0x00493069                       ; 00493011
        ;   XREF to: 00493069 (CONDITIONAL_JUMP)  ; LAB_00493069
    MOV EDX,dword ptr [EBX + 0x130]     ; 00493013
        ;   Label: LAB_00493013
    CMP ESI,EDX                         ; 00493019
    JLE 0x0049301f                      ; 0049301b
        ;   XREF to: 0049301f (CONDITIONAL_JUMP)  ; LAB_0049301f
    MOV ESI,EDX                         ; 0049301d
    CMP EDI,ESI                         ; 0049301f
        ;   Label: LAB_0049301f
    JGE 0x00493065                      ; 00493021
        ;   XREF to: 00493065 (CONDITIONAL_JUMP)  ; LAB_00493065
    MOV EAX,dword ptr [EBX + 0x130]     ; 00493023
    SUB EAX,ESI                         ; 00493029
    PUSH EAX                            ; 0049302b
    LEA EAX,[EBX + ESI*0x1]             ; 0049302c
    PUSH EAX                            ; 0049302f
    LEA EAX,[EBX + EDI*0x1]             ; 00493030
    PUSH EAX                            ; 00493033
    SUB ESI,EDI                         ; 00493034
    CALL FUN_005c25d0                   ; 00493036
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    MOV ECX,dword ptr [EBX + 0x130]     ; 0049303b
    ADD ESP,0xc                         ; 00493041
    SUB ECX,ESI                         ; 00493044
    MOV ESI,dword ptr [EBX + 0x134]     ; 00493046
    MOV dword ptr [EBX + 0x130],ECX     ; 0049304c
    CMP ESI,ECX                         ; 00493052
    JLE 0x0049305c                      ; 00493054
        ;   XREF to: 0049305c (CONDITIONAL_JUMP)  ; LAB_0049305c
    MOV dword ptr [EBX + 0x134],ECX     ; 00493056
    ADD EBX,dword ptr [EBX + 0x130]     ; 0049305c
        ;   Label: LAB_0049305c
    MOV byte ptr [EBX],0x0              ; 00493062
    POP EDI                             ; 00493065
        ;   Label: LAB_00493065
    POP ESI                             ; 00493066
    POP EBX                             ; 00493067
    RET                                 ; 00493068
    XOR EDI,EDI                         ; 00493069
        ;   Label: LAB_00493069
    JMP 0x00493013                      ; 0049306b
        ;   XREF to: 00493013 (UNCONDITIONAL_JUMP)  ; LAB_00493013

