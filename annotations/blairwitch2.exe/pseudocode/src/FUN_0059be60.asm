; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059be60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d420
;   FUN_0044fc80
;   FUN_0059ab30
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059be60
        ;   Label: FUN_0059be60
    PUSH EAX                            ; 0059be64
    CALL FUN_0059ab30                   ; 0059be65
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab30()
    ADD ESP,0x4                         ; 0059be6a
    ADD EAX,0x4                         ; 0059be6d
    PUSH EAX                            ; 0059be70
    CALL FUN_0040d420                   ; 0059be71
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 0059be76
    PUSH 0x5fe5f0                       ; 0059be79
    PUSH 0x1e                           ; 0059be7e
    ADD EAX,0x48                        ; 0059be80
    PUSH EAX                            ; 0059be83
    CALL FUN_005b7f5f                   ; 0059be84
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0059be89
    ADD EAX,0x528                       ; 0059be8c
    PUSH EAX                            ; 0059be91
    CALL FUN_0044fc80                   ; 0059be92
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0059be97
    ADD EAX,0x17c                       ; 0059be9a
    PUSH EAX                            ; 0059be9f
    CALL FUN_0044fc80                   ; 0059bea0
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    SUB EAX,0x6f0                       ; 0059bea5
    ADD ESP,0x4                         ; 0059beaa
    MOV dword ptr [EAX],0x5fe524        ; 0059bead
    RET                                 ; 0059beb3

