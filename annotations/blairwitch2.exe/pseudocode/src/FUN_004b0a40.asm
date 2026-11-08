; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0a40(int param_1)
;
;
; XREF[1]:
;   FUN_004af410 at 004af8ad
;
; Referenced Globals:
;   undefined4 DAT_007bc3e0
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_0040e670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0a40
        ;   Label: FUN_004b0a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0a41
    MOV EDX,dword ptr [EBX + 0x25608]   ; 004b0a45
    TEST EDX,EDX                        ; 004b0a4b
    JNZ 0x004b0a51                      ; 004b0a4d
        ;   XREF to: 004b0a51 (CONDITIONAL_JUMP)  ; LAB_004b0a51
    POP EBX                             ; 004b0a4f
    RET                                 ; 004b0a50
    MOV ECX,dword ptr [0x007bc3e0]      ; 004b0a51 | DAT_007bc3e0
        ;   Label: LAB_004b0a51
    PUSH ECX                            ; 004b0a57
    PUSH EDX                            ; 004b0a58
    CALL FUN_0040c8f0                   ; 004b0a59
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b0a5e
    TEST EAX,EAX                        ; 004b0a61
    JZ 0x004b0a75                       ; 004b0a63
        ;   XREF to: 004b0a75 (CONDITIONAL_JUMP)  ; LAB_004b0a75
    LEA EDX,[EBX + 0x2437c]             ; 004b0a65
    PUSH EDX                            ; 004b0a6b
    PUSH EAX                            ; 004b0a6c
    CALL FUN_0040e670                   ; 004b0a6d
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e670()
    ADD ESP,0x8                         ; 004b0a72
    MOV dword ptr [EBX + 0x25608],0x0   ; 004b0a75
        ;   Label: LAB_004b0a75
    POP EBX                             ; 004b0a7f
    RET                                 ; 004b0a80

