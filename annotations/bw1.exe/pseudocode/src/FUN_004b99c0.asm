; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b99c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df816
;   undefined4 DAT_005df81a
;
; Called Functions:
;   FUN_00468900
;   FUN_00567370
;   FUN_005673f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b99c0
        ;   Label: FUN_004b99c0
    PUSH EDI                            ; 004b99c1
    SUB ESP,0x23c8                      ; 004b99c2
    MOV EBX,ESI                         ; 004b99c8
    MOV EAX,ESP                         ; 004b99ca
    PUSH EAX                            ; 004b99cc
    CALL FUN_00567370                   ; 004b99cd
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; undefined FUN_00567370()
    ADD ESP,0x4                         ; 004b99d2
    MOV EAX,dword ptr [ESP + 0x23d4]    ; 004b99d5
    ADD EAX,0x158                       ; 004b99dc
    PUSH EAX                            ; 004b99e1
    LEA EDI,[ESP + 0x23a8]              ; 004b99e2
    CALL FUN_00468900                   ; 004b99e9
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 004b99ee
    LEA ESI,[EAX + 0x338]               ; 004b99f3
    ADD ESP,0x4                         ; 004b99f9
    MOVSD.REP ES:EDI,ESI                ; 004b99fc
    FLD float ptr [ESP + 0x23b0]        ; 004b99fe
    FMUL float ptr [0x005df816]         ; 004b9a05 | DAT_005df816
    PUSH 0x0                            ; 004b9a0b
    FLD float ptr [ESP + 0x23b8]        ; 004b9a0d
    MOV EAX,dword ptr [ESP + 0x23bc]    ; 004b9a14
    LEA ESI,[ESP + 0x23c0]              ; 004b9a1b
    MOV EDI,EBX                         ; 004b9a22
    MOV dword ptr [ESP + 0x23c8],EAX    ; 004b9a24
    FADD double ptr [0x005df81a]        ; 004b9a2b | DAT_005df81a
    LEA EAX,[ESP + 0x4]                 ; 004b9a31
    FXCH                                ; 004b9a35
    FSTP float ptr [ESP + 0x23c0]       ; 004b9a37
    PUSH EAX                            ; 004b9a3e
    FSTP float ptr [ESP + 0x23c8]       ; 004b9a3f
    CALL FUN_005673f0                   ; 004b9a46
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004b9a4b
    MOVSD ES:EDI,ESI                    ; 004b9a4e
    MOVSD ES:EDI,ESI                    ; 004b9a4f
    MOVSD ES:EDI,ESI                    ; 004b9a50
    MOV EAX,EBX                         ; 004b9a51
    ADD ESP,0x23c8                      ; 004b9a53
    POP EDI                             ; 004b9a59
    POP EBX                             ; 004b9a5a
    RET                                 ; 004b9a5b

