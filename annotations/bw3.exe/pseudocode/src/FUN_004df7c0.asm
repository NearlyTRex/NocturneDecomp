; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df7c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c6855
;   undefined4 DAT_005c685d
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df7c0
        ;   Label: FUN_004df7c0
    PUSH EDI                            ; 004df7c1
    SUB ESP,0x30                        ; 004df7c2
    MOV EBX,ESI                         ; 004df7c5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004df7c7
    LEA EAX,[ESI + 0x158]               ; 004df7cb
    PUSH EAX                            ; 004df7d1
    CALL FUN_004625a0                   ; 004df7d2
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004df7d7
    ADD ESP,0x4                         ; 004df7dd
    CMP EDX,0x1                         ; 004df7e0
    JGE 0x004df85f                      ; 004df7e3
        ;   XREF to: 004df85f (CONDITIONAL_JUMP)  ; LAB_004df85f
    FLD double ptr [0x005c6855]         ; 004df7e5 | DAT_005c6855
    FLD float ptr [ESI + 0x2d4]         ; 004df7eb
    FMUL ST1                            ; 004df7f1
    FLD float ptr [ESI + 0x2dc]         ; 004df7f3
    FMUL ST2                            ; 004df7f9
    FLD float ptr [ESI + 0x2d4]         ; 004df7fb
    FCHS                                ; 004df801
    FMUL ST3                            ; 004df803
    FLD float ptr [ESI + 0x2dc]         ; 004df805
    FCHS                                ; 004df80b
    FMULP ST4                           ; 004df80d
    FLD float ptr [ESI + 0x2d8]         ; 004df80f
    MOV ECX,0xbdcccccd                  ; 004df815
    LEA EDI,[ESP + 0x18]                ; 004df81a
    MOV ESI,ESP                         ; 004df81e
    MOV dword ptr [ESP + 0x4],ECX       ; 004df820
    FADD double ptr [0x005c685d]        ; 004df824 | DAT_005c685d
    FXCH ST3                            ; 004df82a
    FSTP float ptr [ESP + 0xc]          ; 004df82c
    FXCH ST2                            ; 004df830
    FSTP float ptr [ESP + 0x10]         ; 004df832
    FSTP float ptr [ESP + 0x14]         ; 004df836
    MOV ECX,0x6                         ; 004df83a
    FXCH                                ; 004df83f
    FSTP float ptr [ESP + 0x8]          ; 004df841
    FSTP float ptr [ESP]                ; 004df845
    MOVSD.REP ES:EDI,ESI                ; 004df848
        ;   Label: LAB_004df848
    MOV ECX,0x6                         ; 004df84a
    LEA ESI,[ESP + 0x18]                ; 004df84f
    MOV EDI,EBX                         ; 004df853
    MOVSD.REP ES:EDI,ESI                ; 004df855
    MOV EAX,EBX                         ; 004df857
    ADD ESP,0x30                        ; 004df859
    POP EDI                             ; 004df85c
    POP EBX                             ; 004df85d
    RET                                 ; 004df85e
    ADD ESI,0x158                       ; 004df85f
        ;   Label: LAB_004df85f
    PUSH ESI                            ; 004df865
    LEA EDI,[ESP + 0x1c]                ; 004df866
    CALL FUN_004625a0                   ; 004df86a
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 004df86f
    LEA ESI,[EAX + 0x338]               ; 004df874
    ADD ESP,0x4                         ; 004df87a
    JMP 0x004df848                      ; 004df87d
        ;   XREF to: 004df848 (UNCONDITIONAL_JUMP)  ; LAB_004df848

