; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004493e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_004837b0
;   FUN_00483850
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004493e0
        ;   Label: FUN_004493e0
    PUSH ESI                            ; 004493e1
    PUSH EDI                            ; 004493e2
    SUB ESP,0x30                        ; 004493e3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004493e6
    LEA EAX,[EBX + 0x20]                ; 004493ea
    PUSH EAX                            ; 004493ed
    MOV EDX,dword ptr [0x00612560]      ; 004493ee | DAT_00612560
    PUSH EDX                            ; 004493f4 | DAT_01bc120c
    CALL FUN_004837b0                   ; 004493f5
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004493fa
    PUSH 0x0                            ; 004493fd
    LEA EAX,[EBX + 0x30]                ; 004493ff
    PUSH EAX                            ; 00449402
    MOV ECX,dword ptr [0x00612560]      ; 00449403 | DAT_00612560
    PUSH ECX                            ; 00449409 | DAT_01bc120c
    CALL FUN_00483850                   ; 0044940a
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0044940f
    PUSH 0x0                            ; 00449412
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449414
    PUSH EBX                            ; 0044941a
    LEA ESI,[ESP + 0x20]                ; 0044941b
    LEA EDI,[ESP + 0x8]                 ; 0044941f
    CALL dword ptr [EAX + 0x1c]         ; 00449423
    MOV ECX,0x6                         ; 00449426
    ADD ESP,0x4                         ; 0044942b
    LEA EAX,[ESP + 0x4]                 ; 0044942e
    LEA ESI,[ESP + 0x1c]                ; 00449432
    PUSH EAX                            ; 00449436
    MOVSD.REP ES:EDI,ESI                ; 00449437
    CALL FUN_004207b0                   ; 00449439
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0044943e
    MOV ESI,EAX                         ; 00449441
    TEST EAX,EAX                        ; 00449443
    JNZ 0x00449461                      ; 00449445
        ;   XREF to: 00449461 (CONDITIONAL_JUMP)  ; LAB_00449461
    MOV EBX,dword ptr [0x00612560]      ; 00449447 | DAT_00612560
        ;   Label: LAB_00449447
    PUSH EBX                            ; 0044944d | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 0044944e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 00449453
    MOV EAX,ESI                         ; 00449456
    ADD ESP,0x30                        ; 00449458
    POP EDI                             ; 0044945b
    POP ESI                             ; 0044945c
    POP EBX                             ; 0044945d
    MOV EAX,EAX                         ; 0044945e
    RET                                 ; 00449460
        ;   Label: LAB_00449460
    PUSH -0x1                           ; 00449461
        ;   Label: LAB_00449461
    ADD EBX,0x158                       ; 00449463
    PUSH 0x0                            ; 00449469
    PUSH EBX                            ; 0044946b
    CALL FUN_004688a0                   ; 0044946c
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 00449471
    JMP 0x00449447                      ; 00449474
        ;   XREF to: 00449447 (UNCONDITIONAL_JUMP)  ; LAB_00449447

