; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516200(int param_1)
;
;
; XREF[5]:
;   FUN_005161b0 at 005161b6
;   FUN_005168e0 at 005168ed
;   FUN_00516a60 at 00516a72
;   FUN_00516f30 at 00516f40
;   FUN_00517130 at 0051713a
;
; Called Functions:
;   FUN_005161d0
;   FUN_005b7fce
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516200
        ;   Label: FUN_00516200
    PUSH ESI                            ; 00516201
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516202
    MOV EDX,dword ptr [EBX + 0x14]      ; 00516206
    TEST EDX,EDX                        ; 00516209
    JNZ 0x00516225                      ; 0051620b
        ;   XREF to: 00516225 (CONDITIONAL_JUMP)  ; LAB_00516225
    MOV ESI,dword ptr [EBX + 0x20]      ; 0051620d
        ;   Label: LAB_0051620d
    PUSH ESI                            ; 00516210
    CALL FUN_005b7fce                   ; 00516211
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00516216
    PUSH EBX                            ; 00516219
    CALL FUN_005161d0                   ; 0051621a
        ;   XREF to: 005161d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005161d0()
    ADD ESP,0x4                         ; 0051621f
    POP ESI                             ; 00516222
    POP EBX                             ; 00516223
    RET                                 ; 00516224
    PUSH EDX                            ; 00516225
        ;   Label: LAB_00516225
    CALL FUN_005b86a0                   ; 00516226
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 0051622b
    JMP 0x0051620d                      ; 0051622e
        ;   XREF to: 0051620d (UNCONDITIONAL_JUMP)  ; LAB_0051620d

