; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b7510(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004b7050 at 004b70de
;
; Called Functions:
;   FUN_004b7140
;   FUN_004b76c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7510
        ;   Label: FUN_004b7510
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7511
    PUSH EDX                            ; 004b7515
    CALL FUN_004b7140                   ; 004b7516
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7140()
    ADD ESP,0x4                         ; 004b751b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b751e
    PUSH ECX                            ; 004b7522
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b7523
    PUSH EBX                            ; 004b7527
    CALL FUN_004b76c0                   ; 004b7528
        ;   XREF to: 004b76c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b76c0()
    ADD ESP,0x8                         ; 004b752d
    POP EBX                             ; 004b7530
    LEA EAX,[EAX]                       ; 004b7531
    LEA EDX,[EDX]                       ; 004b7537
    LEA EAX,[EAX]                       ; 004b753d
    RET                                 ; 004b7540

