; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460780(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[8]:
;   FUN_004c0b40 at 004c0d95
;   FUN_004c59e0 at 004c5a8d
;   FUN_004dec50 at 004dec9f
;   FUN_004df040 at 004df08a
;   FUN_0050a260 at 0050a5b4
;   FUN_0050e190 at 0050e1c8
;   FUN_005125a0 at 00512dbe
;   FUN_00513720 at 005137dc
;
; Called Functions:
;   FUN_0044d7a0
;   FUN_004607b0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 00460780
        ;   Label: FUN_00460780
    MOV EDX,dword ptr [ESP + 0x30]      ; 00460783
    PUSH EDX                            ; 00460787
    LEA EAX,[ESP + 0x4]                 ; 00460788
    PUSH EAX                            ; 0046078c
    CALL FUN_0044d7a0                   ; 0046078d
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d7a0()
    ADD ESP,0x8                         ; 00460792
    MOV EAX,ESP                         ; 00460795
    PUSH EAX                            ; 00460797
    MOV ECX,dword ptr [ESP + 0x30]      ; 00460798
    PUSH ECX                            ; 0046079c
    CALL FUN_004607b0                   ; 0046079d
        ;   XREF to: 004607b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004607b0()
    ADD ESP,0x8                         ; 004607a2
    ADD ESP,0x28                        ; 004607a5
    RET                                 ; 004607a8

