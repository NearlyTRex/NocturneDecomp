; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d570(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[9]:
;   FUN_00455d10 at 004561b6
;   FUN_00485a30 at 00485b08
;   FUN_004e2bf0 at 004e2ca8
;   FUN_0052fad0 at 0052fbf3
;   FUN_0052fea0 at 0052ffca
;   FUN_0053b810 at 0053b876
;   FUN_0053f060 at 0053f138
;   FUN_00589fd0 at 0058a181
;   FUN_0059ccf0 at 0059ce4d
;
; Referenced Globals:
;   undefined4 DAT_005cf57f
;   undefined4 DAT_005cf587
;   undefined4 DAT_0060a084
;   undefined4 DAT_0060a0a4
;
; Called Functions:
;   FUN_0044b600
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0044d570
        ;   Label: FUN_0044d570
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044d573
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d577
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 0044d57b
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 0044d581
    JLE 0x0044d5c3                      ; 0044d58b
        ;   XREF to: 0044d5c3 (CONDITIONAL_JUMP)  ; LAB_0044d5c3
    PUSH EBX                            ; 0044d58d
    FLD float ptr [EAX + 0x2fa8]        ; 0044d58e
    PUSH 0x0                            ; 0044d594
    FMUL double ptr [0x005cf587]        ; 0044d596 | DAT_005cf587
    PUSH 0x0                            ; 0044d59c
    CALL FUN_005b7ff0                   ; 0044d59e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 0044d5a3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d5a7
    PUSH 0x0                            ; 0044d5ab
    MOV EBX,dword ptr [EDX*0x4 + 0x60a0a4] ; 0044d5ad | DAT_0060a0a4
    PUSH EBX                            ; 0044d5b4
    PUSH EAX                            ; 0044d5b5
    CALL FUN_0044b600                   ; 0044d5b6
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b600()
    ADD ESP,0x14                        ; 0044d5bb
    POP EBX                             ; 0044d5be
    ADD ESP,0x4                         ; 0044d5bf
    RET                                 ; 0044d5c2
    FLD float ptr [EAX + 0x2fa8]        ; 0044d5c3
        ;   Label: LAB_0044d5c3
    PUSH 0x0                            ; 0044d5c9
    FMUL double ptr [0x005cf57f]        ; 0044d5cb | DAT_005cf57f
    PUSH 0x0                            ; 0044d5d1
    CALL FUN_005b7ff0                   ; 0044d5d3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 0044d5d8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d5dc
    PUSH 0x0                            ; 0044d5e0
    MOV ECX,dword ptr [EDX*0x4 + 0x60a084] ; 0044d5e2 | DAT_0060a084
    PUSH ECX                            ; 0044d5e9
    PUSH EAX                            ; 0044d5ea
    CALL FUN_0044b600                   ; 0044d5eb
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b600()
    ADD ESP,0x14                        ; 0044d5f0
    ADD ESP,0x4                         ; 0044d5f3
    RET                                 ; 0044d5f6

