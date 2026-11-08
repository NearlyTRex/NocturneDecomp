; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510e20(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;
; Called Functions:
;   FUN_004b59e0
;   FUN_00539810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510e20
        ;   Label: FUN_00510e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510e21
    PUSH dword ptr [ESP + 0xc]          ; 00510e25
    PUSH EBX                            ; 00510e29
    CALL FUN_00539810                   ; 00510e2a
        ;   XREF to: 00539810 (UNCONDITIONAL_CALL)  ; undefined FUN_00539810()
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00510e2f
    ADD ESP,0x8                         ; 00510e35
    CMP EDX,0x3                         ; 00510e38
    JZ 0x00510e42                       ; 00510e3b
        ;   XREF to: 00510e42 (CONDITIONAL_JUMP)  ; LAB_00510e42
    CMP EDX,0x4                         ; 00510e3d
    JNZ 0x00510e5b                      ; 00510e40
        ;   XREF to: 00510e5b (CONDITIONAL_JUMP)  ; LAB_00510e5b
    FLD float ptr [EBX + 0x728]         ; 00510e42
        ;   Label: LAB_00510e42
    FSUB float ptr [ESP + 0xc]          ; 00510e48
    FST float ptr [EBX + 0x728]         ; 00510e4c
    FLDZ                                ; 00510e52
    FCOMPP                              ; 00510e54
    FNSTSW AX                           ; 00510e56
    SAHF                                ; 00510e58
    JA 0x00510e5d                       ; 00510e59
        ;   XREF to: 00510e5d (CONDITIONAL_JUMP)  ; LAB_00510e5d
    POP EBX                             ; 00510e5b
        ;   Label: LAB_00510e5b
    RET                                 ; 00510e5c
    PUSH 0xffff                         ; 00510e5d
        ;   Label: LAB_00510e5d
    PUSH 0x0                            ; 00510e62
    PUSH 0x10000                        ; 00510e64
    PUSH 0x4000                         ; 00510e69
    PUSH 0x0                            ; 00510e6e
    ADD EBX,0x20                        ; 00510e70
    PUSH EBX                            ; 00510e73
    MOV dword ptr [EBX + 0x708],0x3dcccccd ; 00510e74
    MOV EBX,dword ptr [0x0061c010]      ; 00510e7e | DAT_0061c010
    PUSH EBX                            ; 00510e84
    CALL FUN_004b59e0                   ; 00510e85
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b59e0()
    ADD ESP,0x1c                        ; 00510e8a
    POP EBX                             ; 00510e8d
    RET                                 ; 00510e8e

