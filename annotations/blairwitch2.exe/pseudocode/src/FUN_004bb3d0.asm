; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb3d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b5190 at 004b568a
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_00616044
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01caf5ac
;   undefined4 DAT_01cb80e0
;   undefined4 DAT_01cb810c
;   undefined4 DAT_01cb8110
;   undefined4 DAT_01cb8114
;
; Called Functions:
;   FUN_004031c0
;   FUN_004bb2c0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb3d0
        ;   Label: FUN_004bb3d0
    PUSH ESI                            ; 004bb3d1
    PUSH EDI                            ; 004bb3d2
    PUSH EBP                            ; 004bb3d3
    SUB ESP,0x8                         ; 004bb3d4
    MOV EDI,dword ptr [0x006141b8]      ; 004bb3d7 | DAT_006141b8
    MOV EBP,dword ptr [0x01cb8114]      ; 004bb3dd | DAT_01cb8114
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004bb3e3
    CMP dword ptr [EAX + 0xaf4],0x3f800000 ; 004bb3e7
    JZ 0x004bb41d                       ; 004bb3f1
        ;   XREF to: 004bb41d (CONDITIONAL_JUMP)  ; LAB_004bb41d
    MOV ECX,dword ptr [0x01cb80e0]      ; 004bb3f3 | DAT_01cb80e0
        ;   Label: LAB_004bb3f3
    MOV dword ptr [0x006141b8],EDI      ; 004bb3f9 | DAT_006141b8
    TEST ECX,ECX                        ; 004bb3ff
    JZ 0x004bb40f                       ; 004bb401
        ;   XREF to: 004bb40f (CONDITIONAL_JUMP)  ; LAB_004bb40f
    MOV EAX,[0x00616044]                ; 004bb403 | DAT_00616044
    MOV EBX,dword ptr [EAX + 0x40]      ; 004bb408 | DAT_01caf5ac
    TEST EBX,EBX                        ; 004bb40b
    JZ 0x004bb43e                       ; 004bb40d
        ;   XREF to: 004bb43e (CONDITIONAL_JUMP)  ; LAB_004bb43e
    MOV EDI,dword ptr [0x006141b8]      ; 004bb40f | DAT_006141b8
        ;   Label: LAB_004bb40f
    ADD ESP,0x8                         ; 004bb415
    POP EBP                             ; 004bb418
    POP EDI                             ; 004bb419
    POP ESI                             ; 004bb41a
    POP EBX                             ; 004bb41b
    RET                                 ; 004bb41c
    MOV EAX,[0x006141bc]                ; 004bb41d | DAT_006141bc
        ;   Label: LAB_004bb41d
    PUSH 0x0                            ; 004bb422
    DEC EAX                             ; 004bb424
    PUSH EAX                            ; 004bb425
    LEA EAX,[EDI + -0x1]                ; 004bb426
    PUSH EAX                            ; 004bb429
    PUSH 0x0                            ; 004bb42a
    PUSH 0x0                            ; 004bb42c
    CALL FUN_004031c0                   ; 004bb42e
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    MOV EDI,dword ptr [0x006141b8]      ; 004bb433 | DAT_006141b8
    ADD ESP,0x14                        ; 004bb439
    JMP 0x004bb3f3                      ; 004bb43c
        ;   XREF to: 004bb3f3 (UNCONDITIONAL_JUMP)  ; LAB_004bb3f3
    CALL FUN_004bb2c0                   ; 004bb43e
        ;   XREF to: 004bb2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb2c0()
        ;   Label: LAB_004bb43e
    CMP dword ptr [0x006141c0],0x20     ; 004bb443 | DAT_006141c0
    JNZ 0x004bb40f                      ; 004bb44a
        ;   XREF to: 004bb40f (CONDITIONAL_JUMP)  ; LAB_004bb40f
    FLD float ptr [0x01cb810c]          ; 004bb44c | DAT_01cb810c
    FMUL ST0                            ; 004bb452
    MOV EAX,[0x006141bc]                ; 004bb454 | DAT_006141bc
    XOR ESI,ESI                         ; 004bb459
    CALL FUN_005b7ff0                   ; 004bb45b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 004bb460
    TEST EAX,EAX                        ; 004bb464
    JLE 0x004bb40f                      ; 004bb466
        ;   XREF to: 004bb40f (CONDITIONAL_JUMP)  ; LAB_004bb40f
    MOV dword ptr [ESP],EBX             ; 004bb468
    MOV EDX,dword ptr [ESP]             ; 004bb46b
        ;   Label: LAB_004bb46b
    MOV EDI,dword ptr [0x006141b8]      ; 004bb46e | DAT_006141b8
    MOV EBP,dword ptr [0x01cb8114]      ; 004bb474 | DAT_01cb8114
    XOR EAX,EAX                         ; 004bb47a
    MOV EDX,dword ptr [EDX + 0x1c2a38c] ; 004bb47c | DAT_01c2a38c | DAT_01c2a390
    TEST EDI,EDI                        ; 004bb482
    JLE 0x004bb4a8                      ; 004bb484
        ;   XREF to: 004bb4a8 (CONDITIONAL_JUMP)  ; LAB_004bb4a8
    MOV ECX,dword ptr [0x01cb8110]      ; 004bb486 | DAT_01cb8110
        ;   Label: LAB_004bb486
    SUB ECX,EAX                         ; 004bb48c
    IMUL ECX,ECX                        ; 004bb48e
    MOV EBX,EBP                         ; 004bb491
    SUB EBX,ESI                         ; 004bb493
    IMUL EBX,EBX                        ; 004bb495
    ADD ECX,EBX                         ; 004bb498
    CMP ECX,dword ptr [ESP + 0x4]       ; 004bb49a
    JG 0x004bb4ce                       ; 004bb49e
        ;   XREF to: 004bb4ce (CONDITIONAL_JUMP)  ; LAB_004bb4ce
    INC EAX                             ; 004bb4a0
        ;   Label: LAB_004bb4a0
    ADD EDX,0x4                         ; 004bb4a1
    CMP EAX,EDI                         ; 004bb4a4
    JL 0x004bb486                       ; 004bb4a6
        ;   XREF to: 004bb486 (CONDITIONAL_JUMP)  ; LAB_004bb486
    MOV EDX,dword ptr [ESP]             ; 004bb4a8
        ;   Label: LAB_004bb4a8
    MOV ECX,dword ptr [0x006141bc]      ; 004bb4ab | DAT_006141bc
    INC ESI                             ; 004bb4b1
    MOV dword ptr [0x006141b8],EDI      ; 004bb4b2 | DAT_006141b8
    ADD EDX,0x4                         ; 004bb4b8
    MOV dword ptr [0x01cb8114],EBP      ; 004bb4bb | DAT_01cb8114
    MOV dword ptr [ESP],EDX             ; 004bb4c1
    CMP ESI,ECX                         ; 004bb4c4
    JGE 0x004bb40f                      ; 004bb4c6
        ;   XREF to: 004bb40f (CONDITIONAL_JUMP)  ; LAB_004bb40f
    JMP 0x004bb46b                      ; 004bb4cc
        ;   XREF to: 004bb46b (UNCONDITIONAL_JUMP)  ; LAB_004bb46b
    ADD word ptr [EDX + 0x2],0x10       ; 004bb4ce
        ;   Label: LAB_004bb4ce
    JMP 0x004bb4a0                      ; 004bb4d3
        ;   XREF to: 004bb4a0 (UNCONDITIONAL_JUMP)  ; LAB_004bb4a0

