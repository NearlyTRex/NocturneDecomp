; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047c740(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0047b4c0 at 0047b4c5
;
; Referenced Globals:
;   undefined4 DAT_01c5b104
;
; Called Functions:
;   FUN_0047c7d0
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c740
        ;   Label: FUN_0047c740
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047c741
    PUSH 0x9d8                          ; 0047c745
    XOR EDX,EDX                         ; 0047c74a
    PUSH EDX                            ; 0047c74c
    PUSH 0x1c5b108                      ; 0047c74d
    MOV dword ptr [0x01c5b104],EDX      ; 0047c752 | DAT_01c5b104
    CALL FUN_005a28f0                   ; 0047c758
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0047c75d
    PUSH EBX                            ; 0047c760
    CALL FUN_0047c7d0                   ; 0047c761
        ;   XREF to: 0047c7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c7d0()
    ADD ESP,0x4                         ; 0047c766
    MOV EAX,EBX                         ; 0047c769
    POP EBX                             ; 0047c76b
    RET                                 ; 0047c76c

