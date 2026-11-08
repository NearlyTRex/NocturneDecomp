; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040df20(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040df20
        ;   Label: FUN_0040df20
    PUSH ESI                            ; 0040df21
    PUSH EDI                            ; 0040df22
    SUB ESP,0x34                        ; 0040df23
    MOV EBX,dword ptr [ESP + 0x44]      ; 0040df26
    PUSH EBX                            ; 0040df2a
    CALL FUN_004087f0                   ; 0040df2b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0040df30
    PUSH 0x0                            ; 0040df33
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040df35
    PUSH EBX                            ; 0040df3b
    LEA ESI,[ESP + 0x20]                ; 0040df3c
    LEA EDI,[ESP + 0x8]                 ; 0040df40
    CALL dword ptr [EAX + 0x1c]         ; 0040df44
    MOV ECX,0x6                         ; 0040df47
    ADD ESP,0x4                         ; 0040df4c
    LEA EAX,[ESP + 0x4]                 ; 0040df4f
    LEA ESI,[ESP + 0x1c]                ; 0040df53
    PUSH EAX                            ; 0040df57
    MOVSD.REP ES:EDI,ESI                ; 0040df58
    CALL FUN_0041daf0                   ; 0040df5a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0040df5f
    MOV ESI,EAX                         ; 0040df62
    TEST EAX,EAX                        ; 0040df64
    JNZ 0x0040df7a                      ; 0040df66
        ;   XREF to: 0040df7a (CONDITIONAL_JUMP)  ; LAB_0040df7a
    PUSH EBX                            ; 0040df68
    CALL FUN_00408830                   ; 0040df69
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040df6e
    MOV EAX,ESI                         ; 0040df71
    ADD ESP,0x34                        ; 0040df73
    POP EDI                             ; 0040df76
    POP ESI                             ; 0040df77
    POP EBX                             ; 0040df78
    RET                                 ; 0040df79
    FLD float ptr [EBX + 0x31c]         ; 0040df7a
        ;   Label: LAB_0040df7a
    CALL FUN_005a3120                   ; 0040df80
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x30]        ; 0040df85
    MOV EAX,dword ptr [ESP + 0x30]      ; 0040df89
    MOV dword ptr [ESP + 0x30],EAX      ; 0040df8d
    PUSH -0x1                           ; 0040df91
    FILD dword ptr [ESP + 0x34]         ; 0040df93
    SUB ESP,0x4                         ; 0040df97
    LEA EAX,[EBX + 0x158]               ; 0040df9a
    FSTP float ptr [ESP]                ; 0040dfa0
    PUSH EAX                            ; 0040dfa3
    CALL FUN_00462540                   ; 0040dfa4
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0040dfa9
    PUSH EBX                            ; 0040dfac
    CALL FUN_00408830                   ; 0040dfad
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040dfb2
    MOV EAX,ESI                         ; 0040dfb5
    ADD ESP,0x34                        ; 0040dfb7
    POP EDI                             ; 0040dfba
    POP ESI                             ; 0040dfbb
    POP EBX                             ; 0040dfbc
    RET                                 ; 0040dfbd

