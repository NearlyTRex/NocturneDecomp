; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bc450(int *param_1)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004be970 at 004be985
;
; Referenced Globals:
;   undefined4 DAT_005dfc62
;   undefined4 DAT_005dfc6a
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_004bc5a0
;   FUN_004bc6f0
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc450
        ;   Label: FUN_004bc450
    PUSH EBP                            ; 004bc451
    SUB ESP,0x14                        ; 004bc452
    MOV EBX,dword ptr [ESP + 0x20]      ; 004bc455
    MOV EAX,[0x01d06ab4]                ; 004bc459 | DAT_01d06ab4
    SHL EAX,0x2                         ; 004bc45e
    CMP dword ptr [EAX + 0x1d06aa4],0x0 ; 004bc461
    JZ 0x004bc479                       ; 004bc468
        ;   XREF to: 004bc479 (CONDITIONAL_JUMP)  ; LAB_004bc479
    MOV ECX,dword ptr [EBX]             ; 004bc46a
    TEST ECX,ECX                        ; 004bc46c
    JZ 0x004bc479                       ; 004bc46e
        ;   XREF to: 004bc479 (CONDITIONAL_JUMP)  ; LAB_004bc479
    CMP dword ptr [ECX + 0x140],0x6     ; 004bc470
    JZ 0x004bc47f                       ; 004bc477
        ;   XREF to: 004bc47f (CONDITIONAL_JUMP)  ; LAB_004bc47f
    ADD ESP,0x14                        ; 004bc479
        ;   Label: LAB_004bc479
    POP EBP                             ; 004bc47c
    POP EBX                             ; 004bc47d
    RET                                 ; 004bc47e
    LEA EDX,[ESP + 0x8]                 ; 004bc47f
        ;   Label: LAB_004bc47f
    PUSH EDX                            ; 004bc483
    LEA EDX,[ESP + 0x10]                ; 004bc484
    MOV EAX,dword ptr [EAX + 0x1d06aa4] ; 004bc488
    PUSH EDX                            ; 004bc48e
    ADD EAX,0x20                        ; 004bc48f
    PUSH EAX                            ; 004bc492
    PUSH EBX                            ; 004bc493
    CALL FUN_004bc6f0                   ; 004bc494
        ;   XREF to: 004bc6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bc6f0()
    ADD ESP,0x10                        ; 004bc499
    TEST EAX,EAX                        ; 004bc49c
    JL 0x004bc479                       ; 004bc49e
        ;   XREF to: 004bc479 (CONDITIONAL_JUMP)  ; LAB_004bc479
    MOV EDX,EAX                         ; 004bc4a0
    SHL EAX,0x4                         ; 004bc4a2
    ADD EAX,EDX                         ; 004bc4a5
    FLD float ptr [EBX + EAX*0x8 + 0x124] ; 004bc4a7
    FMUL double ptr [0x005dfc62]        ; 004bc4ae | DAT_005dfc62
    SUB ESP,0x8                         ; 004bc4b4
    FSTP double ptr [ESP]               ; 004bc4b7
    CALL FUN_005c0880                   ; 004bc4ba
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x8],EAX       ; 004bc4bf
    MOV dword ptr [ESP + 0xc],EDX       ; 004bc4c3
    FLD double ptr [ESP + 0x8]          ; 004bc4c7
    FADD double ptr [0x005dfc6a]        ; 004bc4cb | DAT_005dfc6a
    ADD ESP,0x8                         ; 004bc4d1
    CALL FUN_005c03a0                   ; 004bc4d4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 004bc4d9
    CMP dword ptr [ESP + 0x10],0x1      ; 004bc4dd
    JGE 0x004bc4ec                      ; 004bc4e2
        ;   XREF to: 004bc4ec (CONDITIONAL_JUMP)  ; LAB_004bc4ec
    MOV dword ptr [ESP + 0x10],0x1      ; 004bc4e4
    PUSH EDI                            ; 004bc4ec
        ;   Label: LAB_004bc4ec
    PUSH ESI                            ; 004bc4ed
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bc4ee
    IMUL EDX,dword ptr [EBX + 0x98]     ; 004bc4f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bc4f9
    MOV ESI,dword ptr [EBX + 0x6c]      ; 004bc4fd
    PUSH EAX                            ; 004bc500
    MOV EAX,EDX                         ; 004bc501
    SAR EDX,0x1f                        ; 004bc503
    IDIV ESI                            ; 004bc506
    MOV EDI,dword ptr [EBX + 0x94]      ; 004bc508
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bc50e
    IMUL EDX,EDI                        ; 004bc512
    MOV EBP,dword ptr [EBX + 0x68]      ; 004bc515
    PUSH EAX                            ; 004bc518
    MOV EAX,EDX                         ; 004bc519
    SAR EDX,0x1f                        ; 004bc51b
    IDIV EBP                            ; 004bc51e
    PUSH EAX                            ; 004bc520
    PUSH EBX                            ; 004bc521
    CALL FUN_004bc5a0                   ; 004bc522
        ;   XREF to: 004bc5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bc5a0()
    ADD ESP,0x10                        ; 004bc527
    POP ESI                             ; 004bc52a
    POP EDI                             ; 004bc52b
    ADD ESP,0x14                        ; 004bc52c
    POP EBP                             ; 004bc52f
    POP EBX                             ; 004bc530
    RET                                 ; 004bc531

