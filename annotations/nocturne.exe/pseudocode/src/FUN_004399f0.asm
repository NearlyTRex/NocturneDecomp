; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004399f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004a4170 at 004a44b1
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059b444 = 00439c10
;
; Called Functions:
;   FUN_00438f20
;   FUN_00439350
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004399f0
        ;   Label: FUN_004399f0
    PUSH EAX                            ; 004399f4
    CALL FUN_00438f20                   ; 004399f5
        ;   XREF to: 00438f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00438f20()
    ADD ESP,0x4                         ; 004399fa
    ADD EAX,0x4                         ; 004399fd
    PUSH EAX                            ; 00439a00
    CALL FUN_00439350                   ; 00439a01
        ;   XREF to: 00439350 (UNCONDITIONAL_CALL)  ; undefined FUN_00439350()
    ADD ESP,0x4                         ; 00439a06
    SUB EAX,0x4                         ; 00439a09
    MOV EDX,dword ptr [ESP + 0x8]       ; 00439a0c
    MOV dword ptr [EAX],0x59b444        ; 00439a10 | PTR_FUN_0059b444
    MOV dword ptr [EAX + 0x20],EDX      ; 00439a16
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439a19
    MOV dword ptr [EAX + 0x24],EDX      ; 00439a1d
    RET                                 ; 00439a20

