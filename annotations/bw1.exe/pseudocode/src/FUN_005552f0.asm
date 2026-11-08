; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005552f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_005640d0 at 00564205
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf59c
;   undefined4 DAT_01ccf5a0
;
; Called Functions:
;   FUN_00483e60
;   FUN_004844f0
;   FUN_00554d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005552f0
        ;   Label: FUN_005552f0
    PUSH EBP                            ; 005552f1
    MOV EAX,[0x0061d95c]                ; 005552f2 | DAT_0061d95c | DAT_01ccf390
    CMP dword ptr [EAX + 0x20c],0x0     ; 005552f7 | DAT_01ccf59c
    JNZ 0x0055533a                      ; 005552fe
        ;   XREF to: 0055533a (CONDITIONAL_JUMP)  ; LAB_0055533a
    CMP dword ptr [EAX + 0x210],0x0     ; 00555300 | DAT_01ccf5a0
    JZ 0x0055531c                       ; 00555307
        ;   XREF to: 0055531c (CONDITIONAL_JUMP)  ; LAB_0055531c
    MOV EBX,dword ptr [0x00612560]      ; 00555309 | DAT_00612560
    PUSH EBX                            ; 0055530f | DAT_01bc120c
    CALL FUN_00483e60                   ; 00555310
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00555315
    TEST EAX,EAX                        ; 00555318
    JZ 0x0055533d                       ; 0055531a
        ;   XREF to: 0055533d (CONDITIONAL_JUMP)  ; LAB_0055533d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055531c
        ;   Label: LAB_0055531c
    PUSH EAX                            ; 00555320
    MOV EDX,dword ptr [ESP + 0x18]      ; 00555321
    PUSH EDX                            ; 00555325
    MOV ECX,dword ptr [ESP + 0x18]      ; 00555326
    PUSH ECX                            ; 0055532a
    MOV EBX,dword ptr [0x00612560]      ; 0055532b | DAT_00612560
    PUSH EBX                            ; 00555331 | DAT_01bc120c
    CALL FUN_004844f0                   ; 00555332
        ;   XREF to: 004844f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004844f0()
    ADD ESP,0x10                        ; 00555337
    POP EBP                             ; 0055533a
        ;   Label: LAB_0055533a
    POP EBX                             ; 0055533b
    RET                                 ; 0055533c
    PUSH EDI                            ; 0055533d
        ;   Label: LAB_0055533d
    PUSH ESI                            ; 0055533e
    PUSH 0xffff                         ; 0055533f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00555344
    PUSH ESI                            ; 00555348
    MOV EDI,dword ptr [ESP + 0x20]      ; 00555349
    PUSH EDI                            ; 0055534d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0055534e
    PUSH EBP                            ; 00555352
    CALL FUN_00554d30                   ; 00555353
        ;   XREF to: 00554d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00554d30()
    ADD ESP,0x10                        ; 00555358
    POP ESI                             ; 0055535b
    POP EDI                             ; 0055535c
    POP EBP                             ; 0055535d
    POP EBX                             ; 0055535e
    RET                                 ; 0055535f

