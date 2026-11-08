; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005675f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   FUN_00469060 at 0046929b
;   FUN_00569cc0 at 00569cfe
;   FUN_00585670 at 005858ab
;   FUN_00599150 at 0059955d
;
; Called Functions:
;   FUN_00567620
;   FUN_00569180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005675f0
        ;   Label: FUN_005675f0
    PUSH -0x1                           ; 005675f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 005675f3
    PUSH dword ptr [ESP + 0x14]         ; 005675f7
    PUSH EDX                            ; 005675fb
    MOV ECX,dword ptr [ESP + 0x14]      ; 005675fc
    PUSH ECX                            ; 00567600
    CALL FUN_00567620                   ; 00567601
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined FUN_00567620()
    ADD ESP,0x10                        ; 00567606
    MOV EBX,dword ptr [ESP + 0x8]       ; 00567609
    PUSH EBX                            ; 0056760d
    CALL FUN_00569180                   ; 0056760e
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; undefined FUN_00569180()
    ADD ESP,0x4                         ; 00567613
    POP EBX                             ; 00567616
    RET                                 ; 00567617

