; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005897b0(void)
;
;
; Referenced Globals:
;   void* PTR_ShowWindow_005c84fc = 001c8c00
;   undefined4 DAT_0264bba0
;   undefined4 DAT_02661af8
;   undefined4 DAT_02664628
;
; Called Functions:
;   FUN_0055f8c0
;   ShowWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bba0],0x0      ; 005897b0 | DAT_0264bba0
        ;   Label: FUN_005897b0
    JZ 0x005897c2                       ; 005897b7
        ;   XREF to: 005897c2 (CONDITIONAL_JUMP)  ; LAB_005897c2
    CMP dword ptr [0x02661af8],0x0      ; 005897b9 | DAT_02661af8
    JNZ 0x005897c3                      ; 005897c0
        ;   XREF to: 005897c3 (CONDITIONAL_JUMP)  ; LAB_005897c3
    RET                                 ; 005897c2
        ;   Label: LAB_005897c2
    PUSH EBX                            ; 005897c3
        ;   Label: LAB_005897c3
    CALL FUN_0055f8c0                   ; 005897c4
        ;   XREF to: 0055f8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f8c0()
    PUSH 0x6                            ; 005897c9
    MOV EBX,dword ptr [0x02664628]      ; 005897cb | DAT_02664628
    PUSH EBX                            ; 005897d1
    CALL dword ptr CS:[0x5c84fc]        ; 005897d2 | PTR_ShowWindow_005c84fc
    POP EBX                             ; 005897d9
    RET                                 ; 005897da

