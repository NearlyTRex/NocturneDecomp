; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004795b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[10]:
;   FUN_004795e0 at 00479630
;   FUN_004796b0 at 00479703
;   FUN_00479770 at 0047985f
;   FUN_00494fd0 at 00495084
;   FUN_00499c80 at 00499d1e
;   FUN_00499ed0 at 00499fb4
;   FUN_0049a0d0 at 0049a1b4
;   FUN_0049a480 at 0049a4e0
;   FUN_004c0cd0 at 004c0e3d
;   FUN_0056e130 at 0056e1c7
;
; Called Functions:
;   FUN_005c232c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004795b0
        ;   Label: FUN_004795b0
    PUSH ESI                            ; 004795b1
    PUSH EDI                            ; 004795b2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004795b3
    PUSH EDX                            ; 004795b7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004795b8
    PUSH ECX                            ; 004795bc
    MOV EBX,dword ptr [ESP + 0x20]      ; 004795bd
    PUSH EBX                            ; 004795c1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004795c2
    PUSH ESI                            ; 004795c6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004795c7
    PUSH EDI                            ; 004795cb
    CALL FUN_005c232c                   ; 004795cc
        ;   XREF to: 005c232c (UNCONDITIONAL_CALL)  ; undefined FUN_005c232c()
    ADD ESP,0x14                        ; 004795d1
    POP EDI                             ; 004795d4
    POP ESI                             ; 004795d5
    POP EBX                             ; 004795d6
    RET                                 ; 004795d7

