; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040f330(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f330
        ;   Label: FUN_0040f330
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f331
    PUSH EBX                            ; 0040f335
    CALL FUN_00408790                   ; 0040f336
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0040f33b
    ADD EAX,0x2b8                       ; 0040f33e
    PUSH EAX                            ; 0040f343
    CALL FUN_0044fc80                   ; 0040f344
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0040f349
    LEA EBX,[EAX + 0xfffffd48]          ; 0040f34c
    PUSH 0x5cb3c1                       ; 0040f352
    LEA EAX,[EBX + 0x2b8]               ; 0040f357
    PUSH EAX                            ; 0040f35d
    MOV dword ptr [EBX + 0x2b0],0x5f2864 ; 0040f35e
    CALL FUN_0044fd70                   ; 0040f368
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x434],0x0     ; 0040f36d
    ADD ESP,0x8                         ; 0040f377
    MOV dword ptr [EBX + 0x438],0x0     ; 0040f37a
    MOV EAX,EBX                         ; 0040f384
    MOV dword ptr [EBX + 0x2b4],0x1     ; 0040f386
    POP EBX                             ; 0040f390
    RET                                 ; 0040f391

