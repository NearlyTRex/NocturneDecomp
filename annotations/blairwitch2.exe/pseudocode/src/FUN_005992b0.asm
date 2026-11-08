; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005992b0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ef35a
;
; Called Functions:
;   FUN_00408d70
;   FUN_005038a0
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005992b0
        ;   Label: FUN_005992b0
    PUSH EBP                            ; 005992b1
    SUB ESP,0x7c                        ; 005992b2
    MOV EBP,dword ptr [ESP + 0x88]      ; 005992b5
    PUSH 0x3                            ; 005992bc
    LEA EBX,[EBP + 0x2b4]               ; 005992be
    PUSH EBX                            ; 005992c4
    CALL FUN_005038a0                   ; 005992c5
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x80],EAX      ; 005992ca
    FLD float ptr [ESP + 0x80]          ; 005992d1
    FLDZ                                ; 005992d8
    ADD ESP,0x8                         ; 005992da
    FCOMPP                              ; 005992dd
    FNSTSW AX                           ; 005992df
    SAHF                                ; 005992e1
    JC 0x005992ec                       ; 005992e2
        ;   XREF to: 005992ec (CONDITIONAL_JUMP)  ; LAB_005992ec
    XOR EAX,EAX                         ; 005992e4
    ADD ESP,0x7c                        ; 005992e6
    POP EBP                             ; 005992e9
    POP EBX                             ; 005992ea
    RET                                 ; 005992eb
    PUSH EDI                            ; 005992ec
        ;   Label: LAB_005992ec
    PUSH ESI                            ; 005992ed
    MOV EDX,dword ptr [EBP + 0x10b8c]   ; 005992ee
    PUSH EDX                            ; 005992f4
    PUSH EBX                            ; 005992f5
    LEA ESI,[ESP + 0x70]                ; 005992f6
    LEA EDI,[ESP + 0x10]                ; 005992fa
    CALL FUN_00546a90                   ; 005992fe
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x70]                ; 00599303
    ADD ESP,0x8                         ; 00599307
    MOVSD ES:EDI,ESI                    ; 0059930a
    MOVSD ES:EDI,ESI                    ; 0059930b
    MOVSD ES:EDI,ESI                    ; 0059930c
    MOV ECX,dword ptr [EBP + 0x10b90]   ; 0059930d
    PUSH ECX                            ; 00599313
    PUSH EBX                            ; 00599314
    LEA ESI,[ESP + 0x40]                ; 00599315
    LEA EDI,[ESP + 0x58]                ; 00599319
    CALL FUN_00546a90                   ; 0059931d
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 00599322
    LEA ESI,[ESP + 0x38]                ; 00599325
    FLD float ptr [ESP + 0x8]           ; 00599329
    FLD float ptr [ESP + 0xc]           ; 0059932d
    MOVSD ES:EDI,ESI                    ; 00599331
    MOVSD ES:EDI,ESI                    ; 00599332
    MOVSD ES:EDI,ESI                    ; 00599333
    FLD float ptr [ESP + 0x10]          ; 00599334
    LEA EDI,[ESP + 0x44]                ; 00599338
    LEA ESI,[ESP + 0x74]                ; 0059933c
    FXCH ST2                            ; 00599340
    FADD float ptr [ESP + 0x50]         ; 00599342
    FXCH                                ; 00599346
    FADD float ptr [ESP + 0x54]         ; 00599348
    FXCH ST2                            ; 0059934c
    FADD float ptr [ESP + 0x58]         ; 0059934e
    FXCH                                ; 00599352
    FSTP float ptr [ESP + 0x74]         ; 00599354
    FXCH                                ; 00599358
    FSTP float ptr [ESP + 0x78]         ; 0059935a
    FSTP float ptr [ESP + 0x7c]         ; 0059935e
    MOVSD ES:EDI,ESI                    ; 00599362
    MOVSD ES:EDI,ESI                    ; 00599363
    MOVSD ES:EDI,ESI                    ; 00599364
    FLD float ptr [0x005ef35a]          ; 00599365 | DAT_005ef35a
    FLD float ptr [ESP + 0x44]          ; 0059936b
    FMUL ST1                            ; 0059936f
    FLD float ptr [ESP + 0x48]          ; 00599371
    FMUL ST2                            ; 00599375
    LEA EAX,[ESP + 0x20]                ; 00599377
    FLD float ptr [ESP + 0x4c]          ; 0059937b
    FMULP ST3                           ; 0059937f
    PUSH EAX                            ; 00599381
    LEA EDI,[ESP + 0x24]                ; 00599382
    LEA ESI,[ESP + 0x18]                ; 00599386
    FXCH                                ; 0059938a
    FSTP float ptr [ESP + 0x18]         ; 0059938c
    FSTP float ptr [ESP + 0x1c]         ; 00599390
    FSTP float ptr [ESP + 0x20]         ; 00599394
    MOVSD ES:EDI,ESI                    ; 00599398
    MOVSD ES:EDI,ESI                    ; 00599399
    MOVSD ES:EDI,ESI                    ; 0059939a
    PUSH EBP                            ; 0059939b
    LEA ESI,[ESP + 0x64]                ; 0059939c
    LEA EDI,[ESP + 0x34]                ; 005993a0
    CALL FUN_00408d70                   ; 005993a4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x64]                ; 005993a9
    ADD ESP,0x8                         ; 005993ad
    LEA EAX,[ESP + 0x2c]                ; 005993b0
    MOV EBX,dword ptr [ESP + 0x94]      ; 005993b4
    MOVSD ES:EDI,ESI                    ; 005993bb
    MOVSD ES:EDI,ESI                    ; 005993bc
    MOVSD ES:EDI,ESI                    ; 005993bd
    CMP EAX,EBX                         ; 005993be
    JZ 0x005993d6                       ; 005993c0
        ;   XREF to: 005993d6 (CONDITIONAL_JUMP)  ; LAB_005993d6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005993c2
    MOV dword ptr [EBX],EAX             ; 005993c6
    MOV EAX,dword ptr [ESP + 0x30]      ; 005993c8
    MOV dword ptr [EBX + 0x4],EAX       ; 005993cc
    MOV EAX,dword ptr [ESP + 0x34]      ; 005993cf
    MOV dword ptr [EBX + 0x8],EAX       ; 005993d3
    MOV EAX,0x1                         ; 005993d6
        ;   Label: LAB_005993d6
    POP ESI                             ; 005993db
    POP EDI                             ; 005993dc
    ADD ESP,0x7c                        ; 005993dd
    POP EBP                             ; 005993e0
    POP EBX                             ; 005993e1
    RET                                 ; 005993e2

