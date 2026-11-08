; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005caecc(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_00626a48 = 005ca920
;
; Called Functions:
;   FUN_005ca9c8
;   FUN_005ca9f4
;   FUN_005cad94
;   FUN_005cba50
;   thunk_FUN_005ccf44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005caecc
        ;   Label: FUN_005caecc
    PUSH ESI                            ; 005caecd
    PUSH 0x2c9f800                      ; 005caece
    MOV EBX,0x2c9f820                   ; 005caed3
    CALL dword ptr [0x00626a48]         ; 005caed8 | PTR_FUN_00626a48
    ADD ESP,0x4                         ; 005caede
    LEA ESI,[EBX + 0x100]               ; 005caee1
    PUSH EBX                            ; 005caee7
        ;   Label: LAB_005caee7
    CALL dword ptr [0x00626a48]         ; 005caee8 | PTR_FUN_00626a48
    ADD EBX,0x10                        ; 005caeee
    ADD ESP,0x4                         ; 005caef1
    CMP EBX,ESI                         ; 005caef4
    JNZ 0x005caee7                      ; 005caef6
        ;   XREF to: 005caee7 (CONDITIONAL_JUMP)  ; LAB_005caee7
    PUSH 0x2c9ff50                      ; 005caef8
    CALL dword ptr [0x00626a48]         ; 005caefd | PTR_FUN_00626a48
    ADD ESP,0x4                         ; 005caf03
    CALL FUN_005ca9f4                   ; 005caf06
        ;   XREF to: 005ca9f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca9f4()
    CALL thunk_FUN_005ccf44             ; 005caf0b
        ;   XREF to: 005ccfb0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005ccf44()
    CALL FUN_005cba50                   ; 005caf10
        ;   XREF to: 005cba50 (UNCONDITIONAL_CALL)  ; undefined FUN_005cba50()
    PUSH 0x2c9f920                      ; 005caf15
    CALL dword ptr [0x00626a48]         ; 005caf1a | PTR_FUN_00626a48
    ADD ESP,0x4                         ; 005caf20
    PUSH 0x2c9f810                      ; 005caf23
    CALL dword ptr [0x00626a48]         ; 005caf28 | PTR_FUN_00626a48
    ADD ESP,0x4                         ; 005caf2e
    PUSH 0x2c9ff40                      ; 005caf31
    CALL dword ptr [0x00626a48]         ; 005caf36 | PTR_FUN_00626a48
    ADD ESP,0x4                         ; 005caf3c
    PUSH 0x2c9ff30                      ; 005caf3f
    CALL dword ptr [0x00626a48]         ; 005caf44 | PTR_FUN_00626a48
    ADD ESP,0x4                         ; 005caf4a
    CALL FUN_005ca9c8                   ; 005caf4d
        ;   XREF to: 005ca9c8 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca9c8()
    CALL FUN_005cad94                   ; 005caf52
        ;   XREF to: 005cad94 (UNCONDITIONAL_CALL)  ; undefined FUN_005cad94()
    POP ESI                             ; 005caf57
    POP EBX                             ; 005caf58
    RET                                 ; 005caf59

