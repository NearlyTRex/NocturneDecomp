; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bda20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[4]:
;   FUN_004a4b50 at 004a4c6c
;   FUN_004bdb80 at 004bdbdb
;   FUN_004ff2c0 at 00501d2a
;   FUN_005289f0 at 00528aa4
;
; Referenced Globals:
;   undefined4 DAT_00586732
;   undefined4 DAT_00586735
;
; Called Functions:
;   FUN_004bd910
;   FUN_00563c90
;   FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bda20
        ;   Label: FUN_004bda20
    PUSH ESI                            ; 004bda21
    SUB ESP,0x64                        ; 004bda22
    MOV EAX,dword ptr [ESP + 0x78]      ; 004bda25
    MOV EDX,dword ptr [EAX]             ; 004bda29
    PUSH EDX                            ; 004bda2b
    PUSH 0x586732                       ; 004bda2c | DAT_00586732
    LEA EAX,[ESP + 0x8]                 ; 004bda31
    PUSH EAX                            ; 004bda35
    CALL FUN_00563c90                   ; 004bda36
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004bda3b
    PUSH 0x64                           ; 004bda3e
    LEA EAX,[ESP + 0x4]                 ; 004bda40
    PUSH EAX                            ; 004bda44
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004bda45
    PUSH ECX                            ; 004bda49
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004bda4a
    PUSH EBX                            ; 004bda4e
    CALL FUN_004bd910                   ; 004bda4f
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd910()
    ADD ESP,0x10                        ; 004bda54
    MOV ESI,dword ptr [ESP + 0x78]      ; 004bda57
    PUSH ESI                            ; 004bda5b
    PUSH 0x586735                       ; 004bda5c | DAT_00586735
    LEA EAX,[ESP + 0x8]                 ; 004bda61
    PUSH EAX                            ; 004bda65
    CALL FUN_00566b5c                   ; 004bda66
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined FUN_00566b5c()
    ADD ESP,0xc                         ; 004bda6b
    ADD ESP,0x64                        ; 004bda6e
    POP ESI                             ; 004bda71
    POP EBX                             ; 004bda72
    RET                                 ; 004bda73

