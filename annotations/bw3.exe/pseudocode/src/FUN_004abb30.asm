; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004abb30(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0048c2e0 at 0048cb4b
;
; Referenced Globals:
;   undefined4 DAT_01d0d210
;
; Called Functions:
;   FUN_004a9c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abb30
        ;   Label: FUN_004abb30
    PUSH ESI                            ; 004abb31
    PUSH EDI                            ; 004abb32
    PUSH EBP                            ; 004abb33
    MOV EDI,dword ptr [ESP + 0x18]      ; 004abb34
    MOV EDX,dword ptr [0x01d0d210]      ; 004abb38 | DAT_01d0d210
    XOR EBP,EBP                         ; 004abb3e
    XOR EBX,EBX                         ; 004abb40
    TEST EDX,EDX                        ; 004abb42
    JLE 0x004abb66                      ; 004abb44
        ;   XREF to: 004abb66 (CONDITIONAL_JUMP)  ; LAB_004abb66
    MOV ESI,0x1d0d214                   ; 004abb46
    PUSH EDI                            ; 004abb4b
        ;   Label: LAB_004abb4b
    PUSH ESI                            ; 004abb4c
    CALL FUN_004a9c30                   ; 004abb4d
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9c30()
    ADD ESP,0x8                         ; 004abb52
    MOV EDX,EAX                         ; 004abb55
    TEST EAX,EAX                        ; 004abb57
    JZ 0x004abb70                       ; 004abb59
        ;   XREF to: 004abb70 (CONDITIONAL_JUMP)  ; LAB_004abb70
    TEST EBP,EBP                        ; 004abb5b
    JZ 0x004abb62                       ; 004abb5d
        ;   XREF to: 004abb62 (CONDITIONAL_JUMP)  ; LAB_004abb62
    MOV dword ptr [EBP],EBX             ; 004abb5f
    TEST EDX,EDX                        ; 004abb62
        ;   Label: LAB_004abb62
    JNZ 0x004abb83                      ; 004abb64
        ;   XREF to: 004abb83 (CONDITIONAL_JUMP)  ; LAB_004abb83
    MOV EAX,0xffffffff                  ; 004abb66
        ;   Label: LAB_004abb66
    POP EBP                             ; 004abb6b
    POP EDI                             ; 004abb6c
    POP ESI                             ; 004abb6d
    POP EBX                             ; 004abb6e
    RET                                 ; 004abb6f
    MOV ECX,dword ptr [0x01d0d210]      ; 004abb70 | DAT_01d0d210
        ;   Label: LAB_004abb70
    INC EBX                             ; 004abb76
    ADD ESI,0x2e4                       ; 004abb77
    CMP EBX,ECX                         ; 004abb7d
    JL 0x004abb4b                       ; 004abb7f
        ;   XREF to: 004abb4b (CONDITIONAL_JUMP)  ; LAB_004abb4b
    JMP 0x004abb66                      ; 004abb81
        ;   XREF to: 004abb66 (UNCONDITIONAL_JUMP)  ; LAB_004abb66
    MOV EAX,dword ptr [EDX + 0x140]     ; 004abb83
        ;   Label: LAB_004abb83
    POP EBP                             ; 004abb89
    POP EDI                             ; 004abb8a
    POP ESI                             ; 004abb8b
    POP EBX                             ; 004abb8c
    RET                                 ; 004abb8d

