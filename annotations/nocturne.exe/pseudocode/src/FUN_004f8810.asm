; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004f8810(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a1484 = 004f8840
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004f8810
        ;   Label: FUN_004f8810
    MOV dword ptr [ECX],0x0             ; 004f8814
    MOV EAX,ECX                         ; 004f881a
    MOV dword ptr [ECX + 0x194],0x5a1484 ; 004f881c | PTR_FUN_005a1484
    LEA EDX,[ECX + 0x190]               ; 004f8826
    ADD EAX,0x4                         ; 004f882c
        ;   Label: LAB_004f882c
    MOV dword ptr [EAX],0x0             ; 004f882f
    CMP EAX,EDX                         ; 004f8835
    JNZ 0x004f882c                      ; 004f8837
        ;   XREF to: 004f882c (CONDITIONAL_JUMP)  ; LAB_004f882c
    MOV EAX,ECX                         ; 004f8839
    RET                                 ; 004f883b

