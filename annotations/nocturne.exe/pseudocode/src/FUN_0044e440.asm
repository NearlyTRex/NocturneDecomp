; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044e440(int param_1)
;
;
; XREF[2]:
;   FUN_0044e2c0 at 0044e2d1
;   FUN_005088f0 at 005089b9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044e440
        ;   Label: FUN_0044e440
    CMP dword ptr [EAX + 0x2f9c],0x0    ; 0044e444
    JNZ 0x0044e44e                      ; 0044e44b
        ;   XREF to: 0044e44e (CONDITIONAL_JUMP)  ; LAB_0044e44e
    RET                                 ; 0044e44d
    MOV dword ptr [EAX + 0x164],0x0     ; 0044e44e
        ;   Label: LAB_0044e44e
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 0044e458
    RET                                 ; 0044e462

