; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00493070(int param_1)
;
;
; XREF[3]:
;   FUN_004931b0 at 00493297
;   FUN_00493720 at 00493af2
;   FUN_004958d0 at 00495d18
;
; Called Functions:
;   FUN_00493000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493070
        ;   Label: FUN_00493070
    MOV EBX,dword ptr [ESP + 0x8]       ; 00493071
    MOV EDX,dword ptr [EBX + 0x138]     ; 00493075
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049307b
    CMP EAX,EDX                         ; 00493081
    JG 0x00493089                       ; 00493083
        ;   XREF to: 00493089 (CONDITIONAL_JUMP)  ; LAB_00493089
    JL 0x004930a2                       ; 00493085
        ;   XREF to: 004930a2 (CONDITIONAL_JUMP)  ; LAB_004930a2
    POP EBX                             ; 00493087
    RET                                 ; 00493088
    PUSH EAX                            ; 00493089
        ;   Label: LAB_00493089
    PUSH EDX                            ; 0049308a
    PUSH EBX                            ; 0049308b
    CALL FUN_00493000                   ; 0049308c
        ;   XREF to: 00493000 (UNCONDITIONAL_CALL)  ; undefined FUN_00493000()
    MOV EAX,dword ptr [EBX + 0x138]     ; 00493091
    ADD ESP,0xc                         ; 00493097
    MOV dword ptr [EBX + 0x134],EAX     ; 0049309a
    POP EBX                             ; 004930a0
    RET                                 ; 004930a1
    PUSH EDX                            ; 004930a2
        ;   Label: LAB_004930a2
    PUSH EAX                            ; 004930a3
    PUSH EBX                            ; 004930a4
    CALL FUN_00493000                   ; 004930a5
        ;   XREF to: 00493000 (UNCONDITIONAL_CALL)  ; undefined FUN_00493000()
    MOV EAX,dword ptr [EBX + 0x134]     ; 004930aa
    ADD ESP,0xc                         ; 004930b0
    MOV dword ptr [EBX + 0x138],EAX     ; 004930b3
    POP EBX                             ; 004930b9
    RET                                 ; 004930ba

