; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc6b0(int *param_1,int param_2)
;
;
; XREF[4]:
;   FUN_004fc940 at 004fca3d
;   FUN_004fca90 at 004fcaef
;   FUN_004fcb00 at 004fcb5b
;   FUN_004fce00 at 004fcea2
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_004bfa70
;   FUN_004fc350
;   FUN_004fc4c0
;   FUN_0052c0e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc6b0
        ;   Label: FUN_004fc6b0
    PUSH EBP                            ; 004fc6b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fc6b2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fc6b6
    CMP EAX,dword ptr [EBX]             ; 004fc6ba
    JNZ 0x004fc6c1                      ; 004fc6bc
        ;   XREF to: 004fc6c1 (CONDITIONAL_JUMP)  ; LAB_004fc6c1
    POP EBP                             ; 004fc6be
    POP EBX                             ; 004fc6bf
    RET                                 ; 004fc6c0
    PUSH ESI                            ; 004fc6c1
        ;   Label: LAB_004fc6c1
    MOV EDX,EAX                         ; 004fc6c2
    MOV dword ptr [EBX],EAX             ; 004fc6c4
    SHL EDX,0x8                         ; 004fc6c6
    LEA EAX,[EBX + 0x8]                 ; 004fc6c9
    ADD EAX,EDX                         ; 004fc6cc
    PUSH EAX                            ; 004fc6ce
    MOV ECX,dword ptr [0x0061b5a8]      ; 004fc6cf | DAT_0061b5a8
    PUSH ECX                            ; 004fc6d5 | DAT_01e661b8
    CALL FUN_0052c0e0                   ; 004fc6d6
        ;   XREF to: 0052c0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c0e0()
    ADD ESP,0x8                         ; 004fc6db
    PUSH EBX                            ; 004fc6de
    CALL FUN_004fc4c0                   ; 004fc6df
        ;   XREF to: 004fc4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc4c0()
    MOV EAX,dword ptr [EBX + 0x1450]    ; 004fc6e4
    MOV ESI,dword ptr [EBX]             ; 004fc6ea
    ADD ESP,0x4                         ; 004fc6ec
    CMP EAX,ESI                         ; 004fc6ef
    JNZ 0x004fc71e                      ; 004fc6f1
        ;   XREF to: 004fc71e (CONDITIONAL_JUMP)  ; LAB_004fc71e
    XOR ESI,ESI                         ; 004fc6f3
        ;   Label: LAB_004fc6f3
    XOR EBX,EBX                         ; 004fc6f5
    MOV EAX,[0x0061b5a8]                ; 004fc6f7 | DAT_0061b5a8
        ;   Label: LAB_004fc6f7
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004fc6fc | DAT_01fb331c
    JGE 0x004fc729                      ; 004fc702
        ;   XREF to: 004fc729 (CONDITIONAL_JUMP)  ; LAB_004fc729
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004fc704 | DAT_01fb3320
    PUSH EAX                            ; 004fc70b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004fc70c
    ADD ESI,0x4                         ; 004fc712
    INC EBX                             ; 004fc715
    CALL dword ptr [EDX + 0x58]         ; 004fc716
    ADD ESP,0x4                         ; 004fc719
    JMP 0x004fc6f7                      ; 004fc71c
        ;   XREF to: 004fc6f7 (UNCONDITIONAL_JUMP)  ; LAB_004fc6f7
    PUSH EBX                            ; 004fc71e
        ;   Label: LAB_004fc71e
    CALL FUN_004fc350                   ; 004fc71f
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    ADD ESP,0x4                         ; 004fc724
    JMP 0x004fc6f3                      ; 004fc727
        ;   XREF to: 004fc6f3 (UNCONDITIONAL_JUMP)  ; LAB_004fc6f3
    MOV EBP,dword ptr [0x00616494]      ; 004fc729 | DAT_00616494
        ;   Label: LAB_004fc729
    PUSH EBP                            ; 004fc72f | DAT_01cb6900
    CALL FUN_004bfa70                   ; 004fc730
        ;   XREF to: 004bfa70 (UNCONDITIONAL_CALL)  ; undefined FUN_004bfa70()
    ADD ESP,0x4                         ; 004fc735
    POP ESI                             ; 004fc738
    POP EBP                             ; 004fc739
    POP EBX                             ; 004fc73a
    RET                                 ; 004fc73b

