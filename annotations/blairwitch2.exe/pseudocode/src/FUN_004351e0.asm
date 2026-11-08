; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004351e0(int param_1)
;
;
; XREF[2]:
;   FUN_00434f40 at 00434f53
;   FUN_00435270 at 00435277
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004351e0
        ;   Label: FUN_004351e0
    PUSH ESI                            ; 004351e1
    PUSH EBP                            ; 004351e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004351e3
    MOV EDX,dword ptr [EBX + 0x4]       ; 004351e7
    TEST EDX,EDX                        ; 004351ea
    JZ 0x0043520b                       ; 004351ec
        ;   XREF to: 0043520b (CONDITIONAL_JUMP)  ; LAB_0043520b
    CMP dword ptr [EBX + 0xc],0x0       ; 004351ee
    JZ 0x00435204                       ; 004351f2
        ;   XREF to: 00435204 (CONDITIONAL_JUMP)  ; LAB_00435204
    MOV EAX,EDX                         ; 004351f4
    TEST EDX,EDX                        ; 004351f6
    JZ 0x00435204                       ; 004351f8
        ;   XREF to: 00435204 (CONDITIONAL_JUMP)  ; LAB_00435204
    PUSH 0x2                            ; 004351fa
    MOV EDX,dword ptr [EDX]             ; 004351fc
    PUSH EAX                            ; 004351fe
    CALL dword ptr [EDX]                ; 004351ff
    ADD ESP,0x8                         ; 00435201
    MOV dword ptr [EBX + 0x4],0x0       ; 00435204
        ;   Label: LAB_00435204
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043520b
        ;   Label: LAB_0043520b
    TEST ESI,ESI                        ; 0043520e
    JZ 0x0043522f                       ; 00435210
        ;   XREF to: 0043522f (CONDITIONAL_JUMP)  ; LAB_0043522f
    CMP dword ptr [EBX + 0xc],0x0       ; 00435212
    JZ 0x00435228                       ; 00435216
        ;   XREF to: 00435228 (CONDITIONAL_JUMP)  ; LAB_00435228
    MOV EAX,ESI                         ; 00435218
    TEST ESI,ESI                        ; 0043521a
    JZ 0x00435228                       ; 0043521c
        ;   XREF to: 00435228 (CONDITIONAL_JUMP)  ; LAB_00435228
    PUSH 0x2                            ; 0043521e
    MOV EDX,dword ptr [ESI]             ; 00435220
    PUSH ESI                            ; 00435222
    CALL dword ptr [EDX]                ; 00435223
    ADD ESP,0x8                         ; 00435225
    MOV dword ptr [EBX + 0x8],0x0       ; 00435228
        ;   Label: LAB_00435228
    MOV EBP,dword ptr [EBX + 0x10]      ; 0043522f
        ;   Label: LAB_0043522f
    TEST EBP,EBP                        ; 00435232
    JNZ 0x0043525d                      ; 00435234
        ;   XREF to: 0043525d (CONDITIONAL_JUMP)  ; LAB_0043525d
    MOV dword ptr [EBX + 0x14],0x0      ; 00435236
        ;   Label: LAB_00435236
    MOV dword ptr [EBX + 0x18],0x0      ; 0043523d
    MOV dword ptr [EBX + 0x1c],0x0      ; 00435244
    MOV dword ptr [EBX + 0x20],0x0      ; 0043524b
    MOV dword ptr [EBX + 0xc],0x0       ; 00435252
    POP EBP                             ; 00435259
    POP ESI                             ; 0043525a
    POP EBX                             ; 0043525b
    RET                                 ; 0043525c
    PUSH EBP                            ; 0043525d
        ;   Label: LAB_0043525d
    CALL FUN_005b86a0                   ; 0043525e
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00435263
    MOV dword ptr [EBX + 0x10],0x0      ; 00435266
    JMP 0x00435236                      ; 0043526d
        ;   XREF to: 00435236 (UNCONDITIONAL_JUMP)  ; LAB_00435236

