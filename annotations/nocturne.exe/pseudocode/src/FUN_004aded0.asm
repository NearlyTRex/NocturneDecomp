; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aded0(int param_1)
;
;
; XREF[1]:
;   FUN_00509140 at 005094ea
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   FUN_0047dc30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aded0
        ;   Label: FUN_004aded0
    ADD EAX,0x304                       ; 004aded4
    PUSH EAX                            ; 004aded9
    MOV EDX,dword ptr [0x005b7650]      ; 004adeda | DAT_005b7650
    PUSH EDX                            ; 004adee0
    CALL FUN_0047dc30                   ; 004adee1
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 004adee6
    RET                                 ; 004adee9

