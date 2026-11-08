; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f63c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   FUN_004f7590 at 004f7664
;
; Referenced Globals:
;   undefined4 DAT_005c87b2
;   undefined4 DAT_006039e0
;   undefined4 DAT_01ed73e0
;
; Called Functions:
;   FUN_00529410
;   FUN_005a521c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 004f63c0
        ;   Label: FUN_004f63c0
    MOV EAX,dword ptr [ESP + 0x108]     ; 004f63c6
    PUSH 0x5c87b2                       ; 004f63cd | DAT_005c87b2
    ADD EAX,0x133c                      ; 004f63d2
    PUSH EAX                            ; 004f63d7
    PUSH 0x0                            ; 004f63d8
    PUSH 0x0                            ; 004f63da
    LEA EAX,[ESP + 0x10]                ; 004f63dc
    PUSH EAX                            ; 004f63e0
    CALL FUN_005a521c                   ; 004f63e1
        ;   XREF to: 005a521c (UNCONDITIONAL_CALL)  ; undefined FUN_005a521c()
    ADD ESP,0x14                        ; 004f63e6
    MOV EAX,ESP                         ; 004f63e9
    PUSH EAX                            ; 004f63eb
    MOV EDX,dword ptr [0x006039e0]      ; 004f63ec | DAT_006039e0
    PUSH EDX                            ; 004f63f2 | DAT_01ed73e0
    CALL FUN_00529410                   ; 004f63f3
        ;   XREF to: 00529410 (UNCONDITIONAL_CALL)  ; undefined FUN_00529410()
    ADD ESP,0x8                         ; 004f63f8
    ADD ESP,0x104                       ; 004f63fb
    RET                                 ; 004f6401

