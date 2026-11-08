; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494a70(int param_1,char *param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0048c2e0 at 00490769
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005bff00
;   TerminatedCString s_CEventList_setTimerEvent_005bff12
;   TerminatedCString s_core_event_cpp_005bff4a
;   TerminatedCString s_CEventList_setTimerEvent_005bff5c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00494dd0
;   FUN_004e4330
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494a70
        ;   Label: FUN_00494a70
    PUSH ESI                            ; 00494a71
    PUSH EDI                            ; 00494a72
    PUSH EBP                            ; 00494a73
    MOV EBP,ESP                         ; 00494a74
    SUB ESP,0xc                         ; 00494a76
    AND ESP,0xfffffff8                  ; 00494a79
    MOV EBX,dword ptr [EBP + 0x14]      ; 00494a7c
    FLD float ptr [EBP + 0x1c]          ; 00494a7f
    FLDZ                                ; 00494a82
    FXCH                                ; 00494a84
    FSTP double ptr [ESP]               ; 00494a86
    FCOMP double ptr [ESP]              ; 00494a89
    FNSTSW AX                           ; 00494a8c
    SAHF                                ; 00494a8e
    JBE 0x00494ac2                      ; 00494a8f
        ;   XREF to: 00494ac2 (CONDITIONAL_JUMP)  ; LAB_00494ac2
    MOV ESI,dword ptr [ESP + 0x4]       ; 00494a91
    PUSH ESI                            ; 00494a95
    MOV EDI,dword ptr [ESP + 0x4]       ; 00494a96
    PUSH EDI                            ; 00494a9a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00494a9b
    PUSH EAX                            ; 00494a9e
    MOV EDX,0x5bff00                    ; 00494a9f | = "..\\core\\event.cpp"
    MOV ECX,0xe66                       ; 00494aa4
    PUSH 0x5bff12                       ; 00494aa9 | = "CEventList::setTimerEvent - invalid d..."
    MOV dword ptr [0x01d71de0],EDX      ; 00494aae | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00494ab4 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00494aba
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x10                        ; 00494abf
    MOV EDX,dword ptr [EBP + 0x18]      ; 00494ac2
        ;   Label: LAB_00494ac2
    PUSH EDX                            ; 00494ac5
    PUSH EBX                            ; 00494ac6
    CALL FUN_00494dd0                   ; 00494ac7
        ;   XREF to: 00494dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00494dd0()
    MOV ESI,EAX                         ; 00494acc
    ADD ESP,0x8                         ; 00494ace
    TEST EAX,EAX                        ; 00494ad1
    JL 0x00494b60                       ; 00494ad3
        ;   XREF to: 00494b60 (CONDITIONAL_JUMP)  ; LAB_00494b60
    FLD float ptr [EBP + 0x1c]          ; 00494ad9
    FLDZ                                ; 00494adc
    LEA EDI,[EAX*0x4 + 0x0]             ; 00494ade
    FCOMPP                              ; 00494ae5
    FNSTSW AX                           ; 00494ae7
    SAHF                                ; 00494ae9
    JNC 0x00494afd                      ; 00494aea
        ;   XREF to: 00494afd (CONDITIONAL_JUMP)  ; LAB_00494afd
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00494aec
    MOV dword ptr [EDI + EBX*0x1 + 0x3354],EAX ; 00494aef
    MOV ESP,EBP                         ; 00494af6
        ;   Label: LAB_00494af6
    POP EBP                             ; 00494af8
    POP EDI                             ; 00494af9
    POP ESI                             ; 00494afa
    POP EBX                             ; 00494afb
    RET                                 ; 00494afc
    MOV EDX,dword ptr [EBX + 0x3210]    ; 00494afd
        ;   Label: LAB_00494afd
    DEC EDX                             ; 00494b03
    MOV EAX,EDX                         ; 00494b04
    MOV dword ptr [EBX + 0x3210],EDX    ; 00494b06
    SUB EAX,ESI                         ; 00494b0c
    MOV EDX,ESI                         ; 00494b0e
    SHL EAX,0x5                         ; 00494b10
    SHL EDX,0x5                         ; 00494b13
    PUSH EAX                            ; 00494b16
    LEA EAX,[EDX + 0x20]                ; 00494b17
    MOV dword ptr [ESP + 0xc],EAX       ; 00494b1a
    MOV ECX,dword ptr [ESP + 0xc]       ; 00494b1e
    LEA EAX,[EBX + 0x3214]              ; 00494b22
    ADD ECX,EAX                         ; 00494b28
    PUSH ECX                            ; 00494b2a
    ADD EAX,EDX                         ; 00494b2b
    PUSH EAX                            ; 00494b2d
    CALL FUN_005a54c0                   ; 00494b2e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00494b33
    SUB EAX,ESI                         ; 00494b39
    ADD ESP,0xc                         ; 00494b3b
    SHL EAX,0x2                         ; 00494b3e
    ADD EBX,0x3354                      ; 00494b41
    PUSH EAX                            ; 00494b47
    LEA EAX,[EDI + 0x4]                 ; 00494b48
    ADD EAX,EBX                         ; 00494b4b
    PUSH EAX                            ; 00494b4d
    ADD EBX,EDI                         ; 00494b4e
    PUSH EBX                            ; 00494b50
    CALL FUN_005a54c0                   ; 00494b51
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 00494b56
    MOV ESP,EBP                         ; 00494b59
    POP EBP                             ; 00494b5b
    POP EDI                             ; 00494b5c
    POP ESI                             ; 00494b5d
    POP EBX                             ; 00494b5e
    RET                                 ; 00494b5f
    FLD float ptr [EBP + 0x1c]          ; 00494b60
        ;   Label: LAB_00494b60
    FLDZ                                ; 00494b63
    FCOMPP                              ; 00494b65
    FNSTSW AX                           ; 00494b67
    SAHF                                ; 00494b69
    JNC 0x00494af6                      ; 00494b6a
        ;   XREF to: 00494af6 (CONDITIONAL_JUMP)  ; LAB_00494af6
    CMP dword ptr [EBX + 0x3210],0xa    ; 00494b6c
    JL 0x00494b98                       ; 00494b73
        ;   XREF to: 00494b98 (CONDITIONAL_JUMP)  ; LAB_00494b98
    MOV ESI,0x5bff4a                    ; 00494b75 | = "..\\core\\event.cpp"
    MOV EDI,0xe87                       ; 00494b7a
    PUSH 0x5bff5c                       ; 00494b7f | = "CEventList::setTimerEvent - too many ..."
    MOV dword ptr [0x01d71de0],ESI      ; 00494b84 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00494b8a | DAT_01d71de4
    CALL FUN_004e4330                   ; 00494b90
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00494b95
    MOV EDI,dword ptr [EBX + 0x3210]    ; 00494b98
        ;   Label: LAB_00494b98
    LEA EAX,[EBX + 0x3214]              ; 00494b9e
    SHL EDI,0x5                         ; 00494ba4
    MOV ESI,dword ptr [EBP + 0x18]      ; 00494ba7
    ADD EDI,EAX                         ; 00494baa
    PUSH EDI                            ; 00494bac
    MOV AL,byte ptr [ESI]               ; 00494bad
        ;   Label: LAB_00494bad
    MOV byte ptr [EDI],AL               ; 00494baf
    CMP AL,0x0                          ; 00494bb1
    JZ 0x00494bc5                       ; 00494bb3
        ;   XREF to: 00494bc5 (CONDITIONAL_JUMP)  ; LAB_00494bc5
    MOV AL,byte ptr [ESI + 0x1]         ; 00494bb5
    ADD ESI,0x2                         ; 00494bb8
    MOV byte ptr [EDI + 0x1],AL         ; 00494bbb
    ADD EDI,0x2                         ; 00494bbe
    CMP AL,0x0                          ; 00494bc1
    JNZ 0x00494bad                      ; 00494bc3
        ;   XREF to: 00494bad (CONDITIONAL_JUMP)  ; LAB_00494bad
    POP EDI                             ; 00494bc5
        ;   Label: LAB_00494bc5
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00494bc6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00494bcc
    MOV dword ptr [EBX + EAX*0x4 + 0x3354],EDX ; 00494bcf
    INC dword ptr [EBX + 0x3210]        ; 00494bd6
    MOV ESP,EBP                         ; 00494bdc
    POP EBP                             ; 00494bde
    POP EDI                             ; 00494bdf
    POP ESI                             ; 00494be0
    POP EBX                             ; 00494be1
    RET                                 ; 00494be2

