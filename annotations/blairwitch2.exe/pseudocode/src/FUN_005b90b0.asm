; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b90b0(undefined4 param_1,undefined1 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_005b910c at 005b9119
;
; Called Functions:
;   FUN_005b8e60
;   FUN_005b8f9c
;   FUN_005be750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b90b0
        ;   Label: FUN_005b90b0
    PUSH ESI                            ; 005b90b1
    PUSH EDI                            ; 005b90b2
    SUB ESP,0x4                         ; 005b90b3
    MOV EAX,ESP                         ; 005b90b6
    PUSH EAX                            ; 005b90b8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b90b9
    PUSH EDX                            ; 005b90bd
    CALL FUN_005b8e60                   ; 005b90be
        ;   XREF to: 005b8e60 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e60()
    MOV EBX,EAX                         ; 005b90c3
    ADD ESP,0x8                         ; 005b90c5
    TEST EAX,EAX                        ; 005b90c8
    JZ 0x005b9102                       ; 005b90ca
        ;   XREF to: 005b9102 (CONDITIONAL_JUMP)  ; LAB_005b9102
    PUSH 0x0                            ; 005b90cc
    CALL FUN_005be750                   ; 005b90ce
        ;   XREF to: 005be750 (UNCONDITIONAL_CALL)  ; undefined FUN_005be750()
    ADD ESP,0x4                         ; 005b90d3
    MOV EDX,EAX                         ; 005b90d6
    TEST EAX,EAX                        ; 005b90d8
    JZ 0x005b9100                       ; 005b90da
        ;   XREF to: 005b9100 (CONDITIONAL_JUMP)  ; LAB_005b9100
    PUSH EAX                            ; 005b90dc
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b90dd
    PUSH ECX                            ; 005b90e1
    MOV ESI,dword ptr [ESP + 0x8]       ; 005b90e2
    PUSH ESI                            ; 005b90e6
    MOV EDX,dword ptr [ESP + 0x24]      ; 005b90e7
    XOR EAX,EAX                         ; 005b90eb
    PUSH EBX                            ; 005b90ed
    MOV AL,byte ptr [EDX]               ; 005b90ee
    PUSH EAX                            ; 005b90f0
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b90f1
    PUSH EDI                            ; 005b90f5
    CALL FUN_005b8f9c                   ; 005b90f6
        ;   XREF to: 005b8f9c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8f9c()
    ADD ESP,0x18                        ; 005b90fb
    MOV EDX,EAX                         ; 005b90fe
    MOV EAX,EDX                         ; 005b9100
        ;   Label: LAB_005b9100
    ADD ESP,0x4                         ; 005b9102
        ;   Label: LAB_005b9102
    POP EDI                             ; 005b9105
    POP ESI                             ; 005b9106
    POP EBX                             ; 005b9107
    RET                                 ; 005b9108

