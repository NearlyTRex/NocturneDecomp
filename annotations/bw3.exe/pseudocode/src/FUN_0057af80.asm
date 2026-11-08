; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057af80(int param_1)
;
;
; XREF[3]:
;   FUN_00425360 at 00425368
;   FUN_004a57c0 at 004a57c8
;   FUN_00568c60 at 00568c74
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057af80
        ;   Label: FUN_0057af80
    PUSH ESI                            ; 0057af81
    PUSH EDI                            ; 0057af82
    SUB ESP,0x30                        ; 0057af83
    MOV EBX,dword ptr [ESP + 0x40]      ; 0057af86
    PUSH EBX                            ; 0057af8a
    CALL FUN_004087f0                   ; 0057af8b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0057af90
    PUSH 0x0                            ; 0057af93
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057af95
    PUSH EBX                            ; 0057af9b
    LEA ESI,[ESP + 0x8]                 ; 0057af9c
    LEA EDI,[ESP + 0x20]                ; 0057afa0
    CALL dword ptr [EAX + 0x1c]         ; 0057afa4
    MOV ECX,0x6                         ; 0057afa7
    ADD ESP,0x4                         ; 0057afac
    LEA EAX,[ESP + 0x1c]                ; 0057afaf
    LEA ESI,[ESP + 0x4]                 ; 0057afb3
    PUSH EAX                            ; 0057afb7
    MOVSD.REP ES:EDI,ESI                ; 0057afb8
    CALL FUN_0041daf0                   ; 0057afba
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0057afbf
    MOV ESI,EAX                         ; 0057afc2
    TEST EAX,EAX                        ; 0057afc4
    JZ 0x0057afdb                       ; 0057afc6
        ;   XREF to: 0057afdb (CONDITIONAL_JUMP)  ; LAB_0057afdb
    PUSH -0x1                           ; 0057afc8
    LEA EAX,[EBX + 0x158]               ; 0057afca
    PUSH 0x0                            ; 0057afd0
    PUSH EAX                            ; 0057afd2
    CALL FUN_00462540                   ; 0057afd3
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0057afd8
    PUSH EBX                            ; 0057afdb
        ;   Label: LAB_0057afdb
    CALL FUN_00408830                   ; 0057afdc
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0057afe1
    MOV EDX,dword ptr [0x005f2afc]      ; 0057afe4 | DAT_005f2afc
    PUSH EDX                            ; 0057afea
    MOV dword ptr [EBX + 0x584],0x0     ; 0057afeb
    CALL FUN_0046d540                   ; 0057aff5
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0057affa
    TEST EAX,EAX                        ; 0057affd
    JNZ 0x0057b005                      ; 0057afff
        ;   XREF to: 0057b005 (CONDITIONAL_JUMP)  ; LAB_0057b005
    TEST ESI,ESI                        ; 0057b001
    JNZ 0x0057b00e                      ; 0057b003
        ;   XREF to: 0057b00e (CONDITIONAL_JUMP)  ; LAB_0057b00e
    MOV EAX,ESI                         ; 0057b005
        ;   Label: LAB_0057b005
    ADD ESP,0x30                        ; 0057b007
    POP EDI                             ; 0057b00a
    POP ESI                             ; 0057b00b
    POP EBX                             ; 0057b00c
    RET                                 ; 0057b00d
    MOV dword ptr [EBX + 0x584],0x1     ; 0057b00e
        ;   Label: LAB_0057b00e
    MOV EAX,ESI                         ; 0057b018
    ADD ESP,0x30                        ; 0057b01a
    POP EDI                             ; 0057b01d
    POP ESI                             ; 0057b01e
    POP EBX                             ; 0057b01f
    RET                                 ; 0057b020

