; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd4a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6b73
;   undefined4 DAT_005e6b7b
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd4a0
        ;   Label: FUN_004fd4a0
    PUSH EDI                            ; 004fd4a1
    SUB ESP,0x30                        ; 004fd4a2
    MOV EBX,ESI                         ; 004fd4a5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004fd4a7
    LEA EAX,[ESI + 0x158]               ; 004fd4ab
    PUSH EAX                            ; 004fd4b1
    CALL FUN_00468900                   ; 004fd4b2
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004fd4b7
    ADD ESP,0x4                         ; 004fd4bd
    CMP EDX,0x1                         ; 004fd4c0
    JGE 0x004fd53f                      ; 004fd4c3
        ;   XREF to: 004fd53f (CONDITIONAL_JUMP)  ; LAB_004fd53f
    FLD double ptr [0x005e6b73]         ; 004fd4c5 | DAT_005e6b73
    FLD float ptr [ESI + 0x2d4]         ; 004fd4cb
    FMUL ST1                            ; 004fd4d1
    FLD float ptr [ESI + 0x2dc]         ; 004fd4d3
    FMUL ST2                            ; 004fd4d9
    FLD float ptr [ESI + 0x2d4]         ; 004fd4db
    FCHS                                ; 004fd4e1
    FMUL ST3                            ; 004fd4e3
    FLD float ptr [ESI + 0x2dc]         ; 004fd4e5
    FCHS                                ; 004fd4eb
    FMULP ST4                           ; 004fd4ed
    FLD float ptr [ESI + 0x2d8]         ; 004fd4ef
    MOV ECX,0xbdcccccd                  ; 004fd4f5
    LEA EDI,[ESP + 0x18]                ; 004fd4fa
    MOV ESI,ESP                         ; 004fd4fe
    MOV dword ptr [ESP + 0x4],ECX       ; 004fd500
    FADD double ptr [0x005e6b7b]        ; 004fd504 | DAT_005e6b7b
    FXCH ST3                            ; 004fd50a
    FSTP float ptr [ESP + 0xc]          ; 004fd50c
    FXCH ST2                            ; 004fd510
    FSTP float ptr [ESP + 0x10]         ; 004fd512
    FSTP float ptr [ESP + 0x14]         ; 004fd516
    MOV ECX,0x6                         ; 004fd51a
    FXCH                                ; 004fd51f
    FSTP float ptr [ESP + 0x8]          ; 004fd521
    FSTP float ptr [ESP]                ; 004fd525
    MOVSD.REP ES:EDI,ESI                ; 004fd528
        ;   Label: LAB_004fd528
    MOV ECX,0x6                         ; 004fd52a
    LEA ESI,[ESP + 0x18]                ; 004fd52f
    MOV EDI,EBX                         ; 004fd533
    MOVSD.REP ES:EDI,ESI                ; 004fd535
    MOV EAX,EBX                         ; 004fd537
    ADD ESP,0x30                        ; 004fd539
    POP EDI                             ; 004fd53c
    POP EBX                             ; 004fd53d
    RET                                 ; 004fd53e
    ADD ESI,0x158                       ; 004fd53f
        ;   Label: LAB_004fd53f
    PUSH ESI                            ; 004fd545
    LEA EDI,[ESP + 0x1c]                ; 004fd546
    CALL FUN_00468900                   ; 004fd54a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 004fd54f
    LEA ESI,[EAX + 0x338]               ; 004fd554
    ADD ESP,0x4                         ; 004fd55a
    JMP 0x004fd528                      ; 004fd55d
        ;   XREF to: 004fd528 (UNCONDITIONAL_JUMP)  ; LAB_004fd528

