; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005add3c(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_00607dec = 005ad790
;
; Called Functions:
;   FUN_005ad838
;   FUN_005ad864
;   FUN_005adc04
;   FUN_005ae8c0
;   thunk_FUN_005afcd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005add3c
        ;   Label: FUN_005add3c
    PUSH ESI                            ; 005add3d
    PUSH 0x2d25a50                      ; 005add3e
    MOV EBX,0x2d25a70                   ; 005add43
    CALL dword ptr [0x00607dec]         ; 005add48 | PTR_FUN_00607dec
    ADD ESP,0x4                         ; 005add4e
    LEA ESI,[EBX + 0x100]               ; 005add51
    PUSH EBX                            ; 005add57
        ;   Label: LAB_005add57
    CALL dword ptr [0x00607dec]         ; 005add58 | PTR_FUN_00607dec
    ADD EBX,0x10                        ; 005add5e
    ADD ESP,0x4                         ; 005add61
    CMP EBX,ESI                         ; 005add64
    JNZ 0x005add57                      ; 005add66
        ;   XREF to: 005add57 (CONDITIONAL_JUMP)  ; LAB_005add57
    PUSH 0x2d261a0                      ; 005add68
    CALL dword ptr [0x00607dec]         ; 005add6d | PTR_FUN_00607dec
    ADD ESP,0x4                         ; 005add73
    CALL FUN_005ad864                   ; 005add76
        ;   XREF to: 005ad864 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad864()
    CALL thunk_FUN_005afcd4             ; 005add7b
        ;   XREF to: 005afd40 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005afcd4()
    CALL FUN_005ae8c0                   ; 005add80
        ;   XREF to: 005ae8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae8c0()
    PUSH 0x2d25b70                      ; 005add85
    CALL dword ptr [0x00607dec]         ; 005add8a | PTR_FUN_00607dec
    ADD ESP,0x4                         ; 005add90
    PUSH 0x2d25a60                      ; 005add93
    CALL dword ptr [0x00607dec]         ; 005add98 | PTR_FUN_00607dec
    ADD ESP,0x4                         ; 005add9e
    PUSH 0x2d26190                      ; 005adda1
    CALL dword ptr [0x00607dec]         ; 005adda6 | PTR_FUN_00607dec
    ADD ESP,0x4                         ; 005addac
    PUSH 0x2d26180                      ; 005addaf
    CALL dword ptr [0x00607dec]         ; 005addb4 | PTR_FUN_00607dec
    ADD ESP,0x4                         ; 005addba
    CALL FUN_005ad838                   ; 005addbd
        ;   XREF to: 005ad838 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad838()
    CALL FUN_005adc04                   ; 005addc2
        ;   XREF to: 005adc04 (UNCONDITIONAL_CALL)  ; undefined FUN_005adc04()
    POP ESI                             ; 005addc7
    POP EBX                             ; 005addc8
    RET                                 ; 005addc9

