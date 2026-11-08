; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00499270(int param_1)
;
;
; Called Functions:
;   FUN_0044fc80
;   FUN_005b1bc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499270
        ;   Label: FUN_00499270
    ADD EAX,0x4                         ; 00499274
    PUSH EAX                            ; 00499277
    CALL FUN_0044fc80                   ; 00499278
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0049927d
    ADD EAX,0x17c                       ; 00499280
    PUSH EAX                            ; 00499285
    CALL FUN_005b1bc0                   ; 00499286
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1bc0()
    ADD ESP,0x4                         ; 0049928b
    MOV dword ptr [EAX + 0x25c],0x0     ; 0049928e
    SUB EAX,0x180                       ; 00499298
    RET                                 ; 0049929d

