; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004039d0(int param_1)
;
;
; XREF[16]:
;   FUN_00403c90 at 00403cdb
;   FUN_00403e70 at 00403ec6
;   FUN_00404120 at 0040417d
;   FUN_00404560 at 004045a3
;   FUN_004046e0 at 004047e4
;   FUN_004048e0 at 0040492e
;   FUN_00404b00 at 00404b59
;   FUN_00404fc0 at 00405013
;   FUN_00405ef0 at 00405f4b
;   FUN_00405fa0 at 00405fee
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_01c4f024
;
; Called Functions:
;   FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004039d0
        ;   Label: FUN_004039d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004039d1
    MOV EDX,dword ptr [EAX + 0x10]      ; 004039d5
    PUSH EDX                            ; 004039d8
    MOV ECX,dword ptr [EAX + 0xc]       ; 004039d9
    PUSH ECX                            ; 004039dc
    MOV EBX,dword ptr [EAX + 0x8]       ; 004039dd
    PUSH EBX                            ; 004039e0
    CALL FUN_004ffd40                   ; 004039e1
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; undefined FUN_004ffd40()
    ADD ESP,0xc                         ; 004039e6
    MOV [0x01c4f024],EAX                ; 004039e9 | DAT_01c4f024
    POP EBX                             ; 004039ee
    RET                                 ; 004039ef

