; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410180(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_summonEvent_005d34e2
;   TerminatedCString s_goAwayEvent_005d34ee
;   TerminatedCString s_summoned_005d34fa
;   undefined4 DAT_00610910
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b670
;   FUN_004eab00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410180
        ;   Label: FUN_00410180
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410181
    PUSH EBX                            ; 00410185
    CALL FUN_004eab00                   ; 00410186
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    MOV EDX,dword ptr [0x00610910]      ; 0041018b | DAT_00610910
    ADD ESP,0x4                         ; 00410191
    CMP EDX,0x2                         ; 00410194
    JGE 0x0041019b                      ; 00410197
        ;   XREF to: 0041019b (CONDITIONAL_JUMP)  ; LAB_0041019b
    POP EBX                             ; 00410199
    RET                                 ; 0041019a
    PUSH 0x5d34e2                       ; 0041019b | = "summonEvent"
        ;   Label: LAB_0041019b
    LEA EAX,[EBX + 0x1ffac]             ; 004101a0
    PUSH EAX                            ; 004101a6
    CALL FUN_0040b440                   ; 004101a7
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004101ac
    PUSH 0x5d34ee                       ; 004101af | = "goAwayEvent"
    LEA EAX,[EBX + 0x20010]             ; 004101b4
    PUSH EAX                            ; 004101ba
    CALL FUN_0040b440                   ; 004101bb
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004101c0
    PUSH 0x5d34fa                       ; 004101c3 | = "summoned"
    ADD EBX,0x200a4                     ; 004101c8
    PUSH EBX                            ; 004101ce
    CALL FUN_0040b670                   ; 004101cf
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004101d4
    POP EBX                             ; 004101d7
    RET                                 ; 004101d8

