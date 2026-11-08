; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047b660(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0047a430 at 0047a435
;
; Referenced Globals:
;   undefined4 DAT_01c2559c
;
; Called Functions:
;   FUN_0047b6f0
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b660
        ;   Label: FUN_0047b660
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047b661
    PUSH 0x9d8                          ; 0047b665
    XOR EDX,EDX                         ; 0047b66a
    PUSH EDX                            ; 0047b66c
    PUSH 0x1c255a0                      ; 0047b66d
    MOV dword ptr [0x01c2559c],EDX      ; 0047b672 | DAT_01c2559c
    CALL FUN_005b77c0                   ; 0047b678
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0047b67d
    PUSH EBX                            ; 0047b680
    CALL FUN_0047b6f0                   ; 0047b681
        ;   XREF to: 0047b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047b6f0()
    ADD ESP,0x4                         ; 0047b686
    MOV EAX,EBX                         ; 0047b689
    POP EBX                             ; 0047b68b
    RET                                 ; 0047b68c

