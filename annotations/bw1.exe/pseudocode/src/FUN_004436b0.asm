; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004436b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0044c580 at 0044c5a3
;   FUN_004d6990 at 004d6c91
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd9b4 = 00444210
;
; Called Functions:
;   FUN_00442ba0
;   FUN_00442f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004436b0
        ;   Label: FUN_004436b0
    PUSH EAX                            ; 004436b4
    CALL FUN_00442ba0                   ; 004436b5
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442ba0()
    ADD ESP,0x4                         ; 004436ba
    ADD EAX,0x4                         ; 004436bd
    PUSH EAX                            ; 004436c0
    CALL FUN_00442f70                   ; 004436c1
        ;   XREF to: 00442f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00442f70()
    ADD ESP,0x4                         ; 004436c6
    SUB EAX,0x4                         ; 004436c9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004436cc
    MOV dword ptr [EAX],0x5fd9b4        ; 004436d0 | PTR_FUN_005fd9b4
    MOV dword ptr [EAX + 0x20],EDX      ; 004436d6
    MOV EDX,dword ptr [ESP + 0xc]       ; 004436d9
    MOV dword ptr [EAX + 0x24],EDX      ; 004436dd
    RET                                 ; 004436e0

