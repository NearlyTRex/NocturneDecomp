; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562e30(void)
;
;
; Called Functions:
;   FUN_005238f0
;   FUN_00562f70
;   FUN_005c3187
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00562e30
        ;   Label: FUN_00562e30
    CALL FUN_005c3187                   ; 00562e35
        ;   XREF to: 005c3187 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3187()
    PUSH 0x1                            ; 00562e3a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00562e3c
    PUSH EDX                            ; 00562e40
    CALL FUN_00562f70                   ; 00562e41
        ;   XREF to: 00562f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00562f70()
    ADD ESP,0x8                         ; 00562e46
    PUSH 0x1                            ; 00562e49
    MOV ECX,dword ptr [ESP + 0x8]       ; 00562e4b
    PUSH ECX                            ; 00562e4f
    CALL FUN_005238f0                   ; 00562e50
        ;   XREF to: 005238f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005238f0()
    ADD ESP,0x8                         ; 00562e55
    RET                                 ; 00562e58

