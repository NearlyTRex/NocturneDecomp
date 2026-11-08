; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00442420(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00444550 at 00444556
;
; Referenced Globals:
;   undefined4 DAT_005dd6f0
;   undefined4 DAT_005dd6f4
;
; Called Functions:
;   FUN_00488fd0
;   FUN_0054eae0
;   FUN_005a28f0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442420
        ;   Label: FUN_00442420
    PUSH ESI                            ; 00442421
    PUSH EDI                            ; 00442422
    MOV EBX,dword ptr [ESP + 0x10]      ; 00442423
    PUSH EBX                            ; 00442427
    CALL FUN_00488fd0                   ; 00442428
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 0044242d
    PUSH 0x5dc830                       ; 00442430
    PUSH 0x18                           ; 00442435
    ADD EAX,0xd184                      ; 00442437
    PUSH EAX                            ; 0044243c
    CALL FUN_005a30d7                   ; 0044243d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00442442
    LEA EBX,[EAX + 0xffff2e7c]          ; 00442445
    PUSH 0x5b940f                       ; 0044244b
    LEA EAX,[EBX + 0x158]               ; 00442450
    PUSH EAX                            ; 00442456
    MOV ESI,0x5b941e                    ; 00442457
    MOV dword ptr [EBX + 0x154],0x5dd704 ; 0044245c
    CALL FUN_0054eae0                   ; 00442466
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    LEA EDI,[EBX + 0xd054]              ; 0044246b
    FLD float ptr [0x005dd6f0]          ; 00442471 | DAT_005dd6f0
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 00442477
    FLD float ptr [0x005dd6f4]          ; 00442481 | DAT_005dd6f4
    MOV dword ptr [EBX + 0x3270],0x40000000 ; 00442487
    ADD ESP,0x8                         ; 00442491
    FXCH                                ; 00442494
    FSTP float ptr [EBX + 0x3274]       ; 00442496
    FSTP float ptr [EBX + 0x3278]       ; 0044249c
    PUSH EDI                            ; 004424a2
    MOV AL,byte ptr [ESI]               ; 004424a3
        ;   Label: LAB_004424a3
    MOV byte ptr [EDI],AL               ; 004424a5
    CMP AL,0x0                          ; 004424a7
    JZ 0x004424bb                       ; 004424a9
        ;   XREF to: 004424bb (CONDITIONAL_JUMP)  ; LAB_004424bb
    MOV AL,byte ptr [ESI + 0x1]         ; 004424ab
    ADD ESI,0x2                         ; 004424ae
    MOV byte ptr [EDI + 0x1],AL         ; 004424b1
    ADD EDI,0x2                         ; 004424b4
    CMP AL,0x0                          ; 004424b7
    JNZ 0x004424a3                      ; 004424b9
        ;   XREF to: 004424a3 (CONDITIONAL_JUMP)  ; LAB_004424a3
    POP EDI                             ; 004424bb
        ;   Label: LAB_004424bb
    MOV ESI,0x5b9423                    ; 004424bc
    LEA EDI,[EBX + 0xd114]              ; 004424c1
    PUSH EDI                            ; 004424c7
    MOV AL,byte ptr [ESI]               ; 004424c8
        ;   Label: LAB_004424c8
    MOV byte ptr [EDI],AL               ; 004424ca
    CMP AL,0x0                          ; 004424cc
    JZ 0x004424e0                       ; 004424ce
        ;   XREF to: 004424e0 (CONDITIONAL_JUMP)  ; LAB_004424e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004424d0
    ADD ESI,0x2                         ; 004424d3
    MOV byte ptr [EDI + 0x1],AL         ; 004424d6
    ADD EDI,0x2                         ; 004424d9
    CMP AL,0x0                          ; 004424dc
    JNZ 0x004424c8                      ; 004424de
        ;   XREF to: 004424c8 (CONDITIONAL_JUMP)  ; LAB_004424c8
    POP EDI                             ; 004424e0
        ;   Label: LAB_004424e0
    MOV dword ptr [EBX + 0xd178],0x41000000 ; 004424e1
    MOV dword ptr [EBX + 0xd844],0x0    ; 004424eb
    MOV ESI,0x5b9428                    ; 004424f5
    MOV dword ptr [EBX + 0xd110],0x2    ; 004424fa
    PUSH EDI                            ; 00442504
    MOV AL,byte ptr [ESI]               ; 00442505
        ;   Label: LAB_00442505
    MOV byte ptr [EDI],AL               ; 00442507
    CMP AL,0x0                          ; 00442509
    JZ 0x0044251d                       ; 0044250b
        ;   XREF to: 0044251d (CONDITIONAL_JUMP)  ; LAB_0044251d
    MOV AL,byte ptr [ESI + 0x1]         ; 0044250d
    ADD ESI,0x2                         ; 00442510
    MOV byte ptr [EDI + 0x1],AL         ; 00442513
    ADD EDI,0x2                         ; 00442516
    CMP AL,0x0                          ; 00442519
    JNZ 0x00442505                      ; 0044251b
        ;   XREF to: 00442505 (CONDITIONAL_JUMP)  ; LAB_00442505
    POP EDI                             ; 0044251d
        ;   Label: LAB_0044251d
    PUSH 0x6c0                          ; 0044251e
    PUSH 0x0                            ; 00442523
    LEA EAX,[EBX + 0xd184]              ; 00442525
    PUSH EAX                            ; 0044252b
    MOV dword ptr [EBX + 0xd180],0x0    ; 0044252c
    CALL FUN_005a28f0                   ; 00442536
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV dword ptr [EBX + 0xce58],0x40c00000 ; 0044253b
    MOV dword ptr [EBX + 0xd850],0x0    ; 00442545
    MOV dword ptr [EBX + 0xd180],0x0    ; 0044254f
    MOV dword ptr [EBX + 0xd0f0],0x0    ; 00442559
    MOV dword ptr [EBX + 0xd0f4],0x0    ; 00442563
    MOV dword ptr [EBX + 0xd0f8],0x0    ; 0044256d
    MOV dword ptr [EBX + 0xd0fc],0x0    ; 00442577
    MOV dword ptr [EBX + 0xd100],0x0    ; 00442581
    MOV dword ptr [EBX + 0xd104],0x0    ; 0044258b
    MOV dword ptr [EBX + 0xd108],0x0    ; 00442595
    MOV dword ptr [EBX + 0xd10c],0x0    ; 0044259f
    MOV dword ptr [EBX + 0x2538],0x42340000 ; 004425a9
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 004425b3
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 004425bd
    MOV dword ptr [EBX + 0xd85c],0x1    ; 004425c7
    ADD ESP,0xc                         ; 004425d1
    MOV dword ptr [EBX + 0xd848],0xffffffff ; 004425d4
    MOV EAX,EBX                         ; 004425de
    MOV dword ptr [EBX + 0xd84c],0x0    ; 004425e0
    POP EDI                             ; 004425ea
    POP ESI                             ; 004425eb
    POP EBX                             ; 004425ec
    RET                                 ; 004425ed

