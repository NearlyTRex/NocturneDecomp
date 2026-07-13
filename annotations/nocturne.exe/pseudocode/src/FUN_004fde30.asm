; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fde30(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a16a0
;
; Called Functions:
;   FUN_004b4800
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fde30
        ;   Label: FUN_004fde30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fde31
    TEST byte ptr [ESP + 0xc],0x4       ; 004fde35
    JNZ 0x004fde56                      ; 004fde3a
        ;   XREF to: 004fde56 (CONDITIONAL_JUMP)  ; LAB_004fde56
    PUSH 0x1                            ; 004fde3c
    PUSH EBX                            ; 004fde3e
    CALL FUN_004b4800                   ; 004fde3f
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4800()
    ADD ESP,0x8                         ; 004fde44
    MOV DL,byte ptr [ESP + 0xc]         ; 004fde47
    MOV EBX,EAX                         ; 004fde4b
    TEST DL,0x2                         ; 004fde4d
    JNZ 0x004fde71                      ; 004fde50
        ;   XREF to: 004fde71 (CONDITIONAL_JUMP)  ; LAB_004fde71
    MOV EAX,EBX                         ; 004fde52
    POP EBX                             ; 004fde54
    RET                                 ; 004fde55
    PUSH 0x5a16a0                       ; 004fde56 | DAT_005a16a0
        ;   Label: LAB_004fde56
    PUSH EBX                            ; 004fde5b
    CALL FUN_0056445f                   ; 004fde5c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004fde61
    PUSH EAX                            ; 004fde64
    CALL FUN_00564486                   ; 004fde65
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004fde6a
    MOV EAX,EBX                         ; 004fde6d
    POP EBX                             ; 004fde6f
    RET                                 ; 004fde70
    PUSH EAX                            ; 004fde71
        ;   Label: LAB_004fde71
    CALL FUN_00564494                   ; 004fde72
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004fde77
    MOV EAX,EBX                         ; 004fde7a
    POP EBX                             ; 004fde7c
    RET                                 ; 004fde7d

