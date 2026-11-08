; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532370(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed785c
;   undefined4 DAT_01ed7870
;   undefined4 DAT_01ed7874
;   undefined4 DAT_01ed7880
;   undefined4 DAT_01ed7888
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532370
        ;   Label: FUN_00532370
    PUSH ESI                            ; 00532371
    PUSH EDI                            ; 00532372
    PUSH EBP                            ; 00532373
    SUB ESP,0x7c                        ; 00532374
    MOV EBP,dword ptr [ESP + 0x90]      ; 00532377
    MOV EBX,dword ptr [ESP + 0x94]      ; 0053237e
    MOV ECX,dword ptr [0x01ed785c]      ; 00532385 | DAT_01ed785c
    MOV EDX,0x5                         ; 0053238b
    PUSH ECX                            ; 00532390
    LEA EAX,[EBP + 0x158]               ; 00532391
    LEA ESI,[ESP + 0x4c]                ; 00532397
    PUSH EAX                            ; 0053239b
    LEA EDI,[ESP + 0x44]                ; 0053239c
    MOV dword ptr [ESP + 0x80],EDX      ; 005323a0
    CALL FUN_0054dcc0                   ; 005323a7
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x50]                ; 005323ac
    ADD ESP,0x8                         ; 005323b0
    LEA EAX,[ESP + 0x3c]                ; 005323b3
    MOVSD ES:EDI,ESI                    ; 005323b7
    MOVSD ES:EDI,ESI                    ; 005323b8
    MOVSD ES:EDI,ESI                    ; 005323b9
    CMP EBX,EAX                         ; 005323ba
    JZ 0x005323d2                       ; 005323bc
        ;   XREF to: 005323d2 (CONDITIONAL_JUMP)  ; LAB_005323d2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005323be
    MOV dword ptr [EBX],EAX             ; 005323c2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005323c4
    MOV dword ptr [EBX + 0x4],EAX       ; 005323c8
    MOV EAX,dword ptr [ESP + 0x44]      ; 005323cb
    MOV dword ptr [EBX + 0x8],EAX       ; 005323cf
    MOV ESI,dword ptr [0x01ed7870]      ; 005323d2 | DAT_01ed7870
        ;   Label: LAB_005323d2
    PUSH ESI                            ; 005323d8
    LEA EAX,[EBP + 0x158]               ; 005323d9
    PUSH EAX                            ; 005323df
    LEA ESI,[ESP + 0x8]                 ; 005323e0
    LEA EDI,[ESP + 0x14]                ; 005323e4
    CALL FUN_0054dcc0                   ; 005323e8
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 005323ed
    LEA EAX,[ESP + 0x14]                ; 005323f1
    ADD ESP,0x8                         ; 005323f5
    LEA EDX,[EBX + 0xc]                 ; 005323f8
    MOVSD ES:EDI,ESI                    ; 005323fb
    MOVSD ES:EDI,ESI                    ; 005323fc
    MOVSD ES:EDI,ESI                    ; 005323fd
    CMP EDX,EAX                         ; 005323fe
    JZ 0x00532416                       ; 00532400
        ;   XREF to: 00532416 (CONDITIONAL_JUMP)  ; LAB_00532416
    MOV EAX,dword ptr [ESP + 0xc]       ; 00532402
    MOV dword ptr [EDX],EAX             ; 00532406
    MOV EAX,dword ptr [ESP + 0x10]      ; 00532408
    MOV dword ptr [EDX + 0x4],EAX       ; 0053240c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053240f
    MOV dword ptr [EDX + 0x8],EAX       ; 00532413
    MOV EDI,dword ptr [0x01ed7874]      ; 00532416 | DAT_01ed7874
        ;   Label: LAB_00532416
    PUSH EDI                            ; 0053241c
    LEA EAX,[EBP + 0x158]               ; 0053241d
    PUSH EAX                            ; 00532423
    LEA ESI,[ESP + 0x74]                ; 00532424
    LEA EDI,[ESP + 0x20]                ; 00532428
    CALL FUN_0054dcc0                   ; 0053242c
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x74]                ; 00532431
    LEA EAX,[ESP + 0x20]                ; 00532435
    ADD ESP,0x8                         ; 00532439
    LEA EDX,[EBX + 0x18]                ; 0053243c
    MOVSD ES:EDI,ESI                    ; 0053243f
    MOVSD ES:EDI,ESI                    ; 00532440
    MOVSD ES:EDI,ESI                    ; 00532441
    CMP EDX,EAX                         ; 00532442
    JZ 0x0053245a                       ; 00532444
        ;   XREF to: 0053245a (CONDITIONAL_JUMP)  ; LAB_0053245a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00532446
    MOV dword ptr [EDX],EAX             ; 0053244a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053244c
    MOV dword ptr [EDX + 0x4],EAX       ; 00532450
    MOV EAX,dword ptr [ESP + 0x20]      ; 00532453
    MOV dword ptr [EDX + 0x8],EAX       ; 00532457
    MOV EAX,[0x01ed7880]                ; 0053245a | DAT_01ed7880
        ;   Label: LAB_0053245a
    PUSH EAX                            ; 0053245f
    LEA EAX,[EBP + 0x158]               ; 00532460
    PUSH EAX                            ; 00532466
    LEA ESI,[ESP + 0x38]                ; 00532467
    LEA EDI,[ESP + 0x5c]                ; 0053246b
    CALL FUN_0054dcc0                   ; 0053246f
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x38]                ; 00532474
    LEA EAX,[ESP + 0x5c]                ; 00532478
    ADD ESP,0x8                         ; 0053247c
    LEA EDX,[EBX + 0x24]                ; 0053247f
    MOVSD ES:EDI,ESI                    ; 00532482
    MOVSD ES:EDI,ESI                    ; 00532483
    MOVSD ES:EDI,ESI                    ; 00532484
    CMP EDX,EAX                         ; 00532485
    JZ 0x0053249d                       ; 00532487
        ;   XREF to: 0053249d (CONDITIONAL_JUMP)  ; LAB_0053249d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00532489
    MOV dword ptr [EDX],EAX             ; 0053248d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0053248f
    MOV dword ptr [EDX + 0x4],EAX       ; 00532493
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00532496
    MOV dword ptr [EDX + 0x8],EAX       ; 0053249a
    MOV EDX,dword ptr [0x01ed7888]      ; 0053249d | DAT_01ed7888
        ;   Label: LAB_0053249d
    PUSH EDX                            ; 005324a3
    ADD EBP,0x158                       ; 005324a4
    LEA ESI,[ESP + 0x64]                ; 005324aa
    PUSH EBP                            ; 005324ae
    LEA EDI,[ESP + 0x2c]                ; 005324af
    ADD EBX,0x30                        ; 005324b3
    CALL FUN_0054dcc0                   ; 005324b6
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x68]                ; 005324bb
    ADD ESP,0x8                         ; 005324bf
    LEA EAX,[ESP + 0x24]                ; 005324c2
    MOVSD ES:EDI,ESI                    ; 005324c6
    MOVSD ES:EDI,ESI                    ; 005324c7
    MOVSD ES:EDI,ESI                    ; 005324c8
    CMP EBX,EAX                         ; 005324c9
    JNZ 0x005324d9                      ; 005324cb
        ;   XREF to: 005324d9 (CONDITIONAL_JUMP)  ; LAB_005324d9
    MOV EAX,dword ptr [ESP + 0x78]      ; 005324cd
    ADD ESP,0x7c                        ; 005324d1
    POP EBP                             ; 005324d4
    POP EDI                             ; 005324d5
    POP ESI                             ; 005324d6
    POP EBX                             ; 005324d7
    RET                                 ; 005324d8
    MOV EAX,dword ptr [ESP + 0x24]      ; 005324d9
        ;   Label: LAB_005324d9
    MOV dword ptr [EBX],EAX             ; 005324dd
    MOV EAX,dword ptr [ESP + 0x28]      ; 005324df
    MOV dword ptr [EBX + 0x4],EAX       ; 005324e3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005324e6
    MOV dword ptr [EBX + 0x8],EAX       ; 005324ea
    MOV EAX,dword ptr [ESP + 0x78]      ; 005324ed
    ADD ESP,0x7c                        ; 005324f1
    POP EBP                             ; 005324f4
    POP EDI                             ; 005324f5
    POP ESI                             ; 005324f6
    POP EBX                             ; 005324f7
    RET                                 ; 005324f8

