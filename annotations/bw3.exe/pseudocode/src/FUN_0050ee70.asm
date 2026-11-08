; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050ee70(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ee70
        ;   Label: FUN_0050ee70
    PUSH ESI                            ; 0050ee71
    PUSH EDI                            ; 0050ee72
    SUB ESP,0x30                        ; 0050ee73
    MOV EBX,dword ptr [ESP + 0x40]      ; 0050ee76
    PUSH EBX                            ; 0050ee7a
    CALL FUN_004087f0                   ; 0050ee7b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0050ee80
    PUSH 0x0                            ; 0050ee83
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050ee85
    PUSH EBX                            ; 0050ee8b
    LEA ESI,[ESP + 0x8]                 ; 0050ee8c
    LEA EDI,[ESP + 0x20]                ; 0050ee90
    CALL dword ptr [EAX + 0x1c]         ; 0050ee94
    MOV ECX,0x6                         ; 0050ee97
    ADD ESP,0x4                         ; 0050ee9c
    LEA EAX,[ESP + 0x1c]                ; 0050ee9f
    LEA ESI,[ESP + 0x4]                 ; 0050eea3
    PUSH EAX                            ; 0050eea7
    MOVSD.REP ES:EDI,ESI                ; 0050eea8
    CALL FUN_0041daf0                   ; 0050eeaa
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0050eeaf
    MOV ESI,EAX                         ; 0050eeb2
    TEST EAX,EAX                        ; 0050eeb4
    JNZ 0x0050eeca                      ; 0050eeb6
        ;   XREF to: 0050eeca (CONDITIONAL_JUMP)  ; LAB_0050eeca
    PUSH EBX                            ; 0050eeb8
    CALL FUN_00408830                   ; 0050eeb9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0050eebe
    MOV EAX,ESI                         ; 0050eec1
    ADD ESP,0x30                        ; 0050eec3
    POP EDI                             ; 0050eec6
    POP ESI                             ; 0050eec7
    POP EBX                             ; 0050eec8
    RET                                 ; 0050eec9
    PUSH -0x1                           ; 0050eeca
        ;   Label: LAB_0050eeca
    LEA EAX,[EBX + 0x158]               ; 0050eecc
    PUSH 0x0                            ; 0050eed2
    PUSH EAX                            ; 0050eed4
    CALL FUN_00462540                   ; 0050eed5
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0050eeda
    PUSH EBX                            ; 0050eedd
    CALL FUN_00408830                   ; 0050eede
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0050eee3
    MOV EAX,ESI                         ; 0050eee6
    ADD ESP,0x30                        ; 0050eee8
    POP EDI                             ; 0050eeeb
    POP ESI                             ; 0050eeec
    POP EBX                             ; 0050eeed
    RET                                 ; 0050eeee

