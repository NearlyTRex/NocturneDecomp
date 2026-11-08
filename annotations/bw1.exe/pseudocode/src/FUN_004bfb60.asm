; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfb60(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_count_005e0721
;   TerminatedCString s_followActor_005e0727
;   TerminatedCString s_gatherCount_005e0733
;   TerminatedCString s_gatherTime_005e073f
;   TerminatedCString s_boxSize_005e074a
;   undefined4 DAT_0061d824
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfb60
        ;   Label: FUN_004bfb60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bfb61
    PUSH EBX                            ; 004bfb65
    CALL FUN_0040c040                   ; 004bfb66
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004bfb6b
    PUSH 0x5e0721                       ; 004bfb6e | = "count"
    LEA EAX,[EBX + 0x164]               ; 004bfb73
    PUSH EAX                            ; 004bfb79
    CALL FUN_0040b670                   ; 004bfb7a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV EDX,dword ptr [0x0061d824]      ; 004bfb7f | DAT_0061d824
    ADD ESP,0x8                         ; 004bfb85
    CMP EDX,0x2                         ; 004bfb88
    JGE 0x004bfb98                      ; 004bfb8b
        ;   XREF to: 004bfb98 (CONDITIONAL_JUMP)  ; LAB_004bfb98
    CMP dword ptr [0x0061d824],0x3      ; 004bfb8d | DAT_0061d824
    JGE 0x004bfbdf                      ; 004bfb94
        ;   XREF to: 004bfbdf (CONDITIONAL_JUMP)  ; LAB_004bfbdf
    POP EBX                             ; 004bfb96
    RET                                 ; 004bfb97
    PUSH 0x5e0727                       ; 004bfb98 | = "followActor"
        ;   Label: LAB_004bfb98
    LEA EAX,[EBX + 0x2a08]              ; 004bfb9d
    PUSH EAX                            ; 004bfba3
    CALL FUN_0040b6f0                   ; 004bfba4
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004bfba9
    PUSH 0x5e0733                       ; 004bfbac | = "gatherCount"
    LEA EAX,[EBX + 0x2a0c]              ; 004bfbb1
    PUSH EAX                            ; 004bfbb7
    CALL FUN_0040b670                   ; 004bfbb8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004bfbbd
    PUSH 0x5e073f                       ; 004bfbc0 | = "gatherTime"
    LEA EAX,[EBX + 0x2a14]              ; 004bfbc5
    PUSH EAX                            ; 004bfbcb
    CALL FUN_0040b5f0                   ; 004bfbcc
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004bfbd1
    CMP dword ptr [0x0061d824],0x3      ; 004bfbd4 | DAT_0061d824
    JGE 0x004bfbdf                      ; 004bfbdb
        ;   XREF to: 004bfbdf (CONDITIONAL_JUMP)  ; LAB_004bfbdf
    POP EBX                             ; 004bfbdd
    RET                                 ; 004bfbde
    PUSH 0x5e074a                       ; 004bfbdf | = "boxSize"
        ;   Label: LAB_004bfbdf
    ADD EBX,0x158                       ; 004bfbe4
    PUSH EBX                            ; 004bfbea
    CALL FUN_0040b1c0                   ; 004bfbeb
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 004bfbf0
    POP EBX                             ; 004bfbf3
    RET                                 ; 004bfbf4

