; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443490(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00453610 at 004537b7
;   FUN_004d6420 at 004d677e
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd984 = 00444270
;
; Called Functions:
;   FUN_00442ba0
;   FUN_00442f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00443490
        ;   Label: FUN_00443490
    PUSH EAX                            ; 00443494
    CALL FUN_00442ba0                   ; 00443495
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442ba0()
    ADD ESP,0x4                         ; 0044349a
    ADD EAX,0x4                         ; 0044349d
    PUSH EAX                            ; 004434a0
    CALL FUN_00442f70                   ; 004434a1
        ;   XREF to: 00442f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00442f70()
    ADD ESP,0x4                         ; 004434a6
    SUB EAX,0x4                         ; 004434a9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004434ac
    MOV dword ptr [EAX + 0x20],EDX      ; 004434b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004434b3
    MOV dword ptr [EAX + 0x24],EDX      ; 004434b7
    MOV EDX,0xffffffff                  ; 004434ba
    MOV CL,byte ptr [EAX + 0x24]        ; 004434bf
    MOV dword ptr [EAX],0x5fd984        ; 004434c2 | PTR_FUN_005fd984
    SHL EDX,CL                          ; 004434c8
    MOV dword ptr [EAX + 0x28],EDX      ; 004434ca
    NOT EDX                             ; 004434cd
    MOV dword ptr [EAX + 0x28],EDX      ; 004434cf
    RET                                 ; 004434d2

