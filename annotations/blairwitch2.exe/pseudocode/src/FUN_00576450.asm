; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00576450(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576450
        ;   Label: FUN_00576450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576451
    PUSH EBX                            ; 00576455
    CALL FUN_00408790                   ; 00576456
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0057645b
    ADD EAX,0x2b4                       ; 0057645e
    PUSH EAX                            ; 00576463
    CALL FUN_0044fc80                   ; 00576464
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00576469
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057646c
    PUSH 0x5eccde                       ; 00576472
    LEA EAX,[EBX + 0x2b4]               ; 00576477
    PUSH EAX                            ; 0057647d
    MOV dword ptr [EBX + 0x2b0],0x5fcfc4 ; 0057647e
    CALL FUN_0044fd70                   ; 00576488
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0057648d
    MOV EAX,EBX                         ; 00576490
    MOV dword ptr [EBX + 0x434],0x0     ; 00576492
    POP EBX                             ; 0057649c
    RET                                 ; 0057649d

