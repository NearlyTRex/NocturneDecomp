; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8970(int *param_1)
;
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; Referenced Globals:
;   string s_..\\engine\\pod.cpp_0058dc0d
;   string s_Can't_re-mount_%s_0058dc1f
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_004f7ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8970
        ;   Label: FUN_004f8970
    PUSH ESI                            ; 004f8971
    PUSH EDI                            ; 004f8972
    PUSH EBP                            ; 004f8973
    SUB ESP,0x100                       ; 004f8974
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f897a
    MOV EDX,dword ptr [EAX]             ; 004f8981
    XOR EBP,EBP                         ; 004f8983
    TEST EDX,EDX                        ; 004f8985
    JLE 0x004f89d1                      ; 004f8987
        ;   XREF to: 004f89d1 (CONDITIONAL_JUMP)  ; LAB_004f89d1
    MOV EBX,EAX                         ; 004f8989
    MOV ESI,dword ptr [EBX + 0x4]       ; 004f898b
        ;   Label: LAB_004f898b
    MOV EDI,ESP                         ; 004f898e
    ADD ESI,0x4                         ; 004f8990
    PUSH EDI                            ; 004f8993
    MOV AL,byte ptr [ESI]               ; 004f8994
        ;   Label: LAB_004f8994
    MOV byte ptr [EDI],AL               ; 004f8996
    CMP AL,0x0                          ; 004f8998
    JZ 0x004f89ac                       ; 004f899a
        ;   XREF to: 004f89ac (CONDITIONAL_JUMP)  ; LAB_004f89ac
    MOV AL,byte ptr [ESI + 0x1]         ; 004f899c
    ADD ESI,0x2                         ; 004f899f
    MOV byte ptr [EDI + 0x1],AL         ; 004f89a2
    ADD EDI,0x2                         ; 004f89a5
    CMP AL,0x0                          ; 004f89a8
    JNZ 0x004f8994                      ; 004f89aa
        ;   XREF to: 004f8994 (CONDITIONAL_JUMP)  ; LAB_004f8994
    POP EDI                             ; 004f89ac
        ;   Label: LAB_004f89ac
    MOV EAX,ESP                         ; 004f89ad
    PUSH EAX                            ; 004f89af
    MOV ESI,dword ptr [EBX + 0x4]       ; 004f89b0
    PUSH ESI                            ; 004f89b3
    CALL FUN_004f7ae0                   ; 004f89b4
        ;   XREF to: 004f7ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7ae0()
    ADD ESP,0x8                         ; 004f89b9
    TEST EAX,EAX                        ; 004f89bc
    JZ 0x004f89dc                       ; 004f89be
        ;   XREF to: 004f89dc (CONDITIONAL_JUMP)  ; LAB_004f89dc
    MOV EAX,dword ptr [ESP + 0x114]     ; 004f89c0
        ;   Label: LAB_004f89c0
    INC EBP                             ; 004f89c7
    MOV ECX,dword ptr [EAX]             ; 004f89c8
    ADD EBX,0x4                         ; 004f89ca
    CMP EBP,ECX                         ; 004f89cd
    JL 0x004f898b                       ; 004f89cf
        ;   XREF to: 004f898b (CONDITIONAL_JUMP)  ; LAB_004f898b
    ADD ESP,0x100                       ; 004f89d1
        ;   Label: LAB_004f89d1
    POP EBP                             ; 004f89d7
    POP EDI                             ; 004f89d8
    POP ESI                             ; 004f89d9
    POP EBX                             ; 004f89da
    RET                                 ; 004f89db
    MOV dword ptr [0x01cc4804],0x280    ; 004f89dc | DAT_01cc4804
        ;   Label: LAB_004f89dc
    MOV EAX,ESP                         ; 004f89e6
    PUSH EAX                            ; 004f89e8
    MOV EDI,0x58dc0d                    ; 004f89e9 | = "..\\engine\\pod.cpp"
    PUSH 0x58dc1f                       ; 004f89ee | = "Can't re-mount %s"
    MOV dword ptr [0x01cc4800],EDI      ; 004f89f3 | DAT_01cc4800
    CALL FUN_004c8440                   ; 004f89f9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004f89fe
    JMP 0x004f89c0                      ; 004f8a01
        ;   XREF to: 004f89c0 (UNCONDITIONAL_JUMP)  ; LAB_004f89c0

