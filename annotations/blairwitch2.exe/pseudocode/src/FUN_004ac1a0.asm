; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ac1a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_00438a50
;   FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ac1a0
        ;   Label: FUN_004ac1a0
    PUSH EAX                            ; 004ac1a4
    CALL FUN_00408790                   ; 004ac1a5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004ac1aa
    ADD EAX,0x2e0                       ; 004ac1ad
    PUSH EAX                            ; 004ac1b2
    CALL FUN_0044fc80                   ; 004ac1b3
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004ac1b8
    ADD EAX,0x17c                       ; 004ac1bb
    PUSH EAX                            ; 004ac1c0
    CALL FUN_00438a50                   ; 004ac1c1
        ;   XREF to: 00438a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a50()
    ADD ESP,0x4                         ; 004ac1c6
    ADD EAX,0xc                         ; 004ac1c9
    PUSH EAX                            ; 004ac1cc
    CALL FUN_0044fc80                   ; 004ac1cd
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    MOV dword ptr [EAX + 0xfffffe48],0x5f7204 ; 004ac1d2
    MOV dword ptr [EAX + 0xfffffe50],0x0 ; 004ac1dc
    MOV byte ptr [EAX + 0xfffffe54],0x0 ; 004ac1e6
    MOV dword ptr [EAX + 0xfffffe74],0x0 ; 004ac1ed
    ADD ESP,0x4                         ; 004ac1f7
    MOV dword ptr [EAX + 0x180],0x0     ; 004ac1fa
    SUB EAX,0x468                       ; 004ac204
    RET                                 ; 004ac209

