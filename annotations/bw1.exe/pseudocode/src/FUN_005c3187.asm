; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c3187(void)
;
;
; XREF[2]:
;   FUN_00562dd0 at 00562dd5
;   FUN_00562e30 at 00562e35
;
; Called Functions:
;   FUN_005c3197
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005c3187
        ;   Label: FUN_005c3187
    CALL FUN_005c3197                   ; 005c318b
        ;   XREF to: 005c3197 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3197()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c3190
    RET 0x4                             ; 005c3194

