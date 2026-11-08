; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004de950(int param_1)
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

    PUSH EBX                            ; 004de950
        ;   Label: FUN_004de950
    PUSH ESI                            ; 004de951
    PUSH EDI                            ; 004de952
    SUB ESP,0x30                        ; 004de953
    MOV EBX,dword ptr [ESP + 0x40]      ; 004de956
    PUSH EBX                            ; 004de95a
    CALL FUN_004087f0                   ; 004de95b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004de960
    PUSH 0x0                            ; 004de963
    MOV EAX,dword ptr [EBX + 0x154]     ; 004de965
    PUSH EBX                            ; 004de96b
    LEA ESI,[ESP + 0x8]                 ; 004de96c
    LEA EDI,[ESP + 0x20]                ; 004de970
    CALL dword ptr [EAX + 0x1c]         ; 004de974
    MOV ECX,0x6                         ; 004de977
    ADD ESP,0x4                         ; 004de97c
    LEA EAX,[ESP + 0x1c]                ; 004de97f
    LEA ESI,[ESP + 0x4]                 ; 004de983
    PUSH EAX                            ; 004de987
    MOVSD.REP ES:EDI,ESI                ; 004de988
    CALL FUN_0041daf0                   ; 004de98a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004de98f
    MOV ESI,EAX                         ; 004de992
    TEST EAX,EAX                        ; 004de994
    JNZ 0x004de9aa                      ; 004de996
        ;   XREF to: 004de9aa (CONDITIONAL_JUMP)  ; LAB_004de9aa
    PUSH EBX                            ; 004de998
    CALL FUN_00408830                   ; 004de999
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004de99e
    MOV EAX,ESI                         ; 004de9a1
    ADD ESP,0x30                        ; 004de9a3
    POP EDI                             ; 004de9a6
    POP ESI                             ; 004de9a7
    POP EBX                             ; 004de9a8
    RET                                 ; 004de9a9
    PUSH -0x1                           ; 004de9aa
        ;   Label: LAB_004de9aa
    LEA EAX,[EBX + 0x158]               ; 004de9ac
    PUSH 0x0                            ; 004de9b2
    PUSH EAX                            ; 004de9b4
    CALL FUN_00462540                   ; 004de9b5
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 004de9ba
    PUSH EBX                            ; 004de9bd
    CALL FUN_00408830                   ; 004de9be
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004de9c3
    MOV EAX,ESI                         ; 004de9c6
    ADD ESP,0x30                        ; 004de9c8
    POP EDI                             ; 004de9cb
    POP ESI                             ; 004de9cc
    POP EBX                             ; 004de9cd
    RET                                 ; 004de9ce

