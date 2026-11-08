; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00555060(int *param_1)
;
;
; XREF[1]:
;   FUN_00557910 at 00557925
;
; Referenced Globals:
;   undefined4 DAT_0264a5c4
;   undefined4 DAT_0264a5c8
;   undefined4 DAT_0264a5cc
;   undefined4 DAT_0264a5d0
;   undefined4 DAT_0264a5d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555060
        ;   Label: FUN_00555060
    PUSH ESI                            ; 00555061
    PUSH EDI                            ; 00555062
    PUSH EBP                            ; 00555063
    MOV ESI,dword ptr [ESP + 0x14]      ; 00555064
    PUSH ESI                            ; 00555068
    MOV EAX,dword ptr [ESI]             ; 00555069
    MOV EDI,0x1                         ; 0055506b
    CALL dword ptr [EAX + 0x8]          ; 00555070
    ADD ESP,0x4                         ; 00555073
    TEST EAX,EAX                        ; 00555076
    JZ 0x00555103                       ; 00555078
        ;   XREF to: 00555103 (CONDITIONAL_JUMP)  ; LAB_00555103
    XOR EBX,EBX                         ; 0055507e
        ;   Label: LAB_0055507e
    PUSH EBX                            ; 00555080
        ;   Label: LAB_00555080
    MOV EAX,dword ptr [ESI]             ; 00555081
    PUSH ESI                            ; 00555083
    INC EBX                             ; 00555084
    CALL dword ptr [EAX + 0x34]         ; 00555085
    ADD ESP,0x8                         ; 00555088
    CMP EBX,0x41                        ; 0055508b
    JL 0x00555080                       ; 0055508e
        ;   XREF to: 00555080 (CONDITIONAL_JUMP)  ; LAB_00555080
    MOV EDX,dword ptr [0x0264a5d0]      ; 00555090 | DAT_0264a5d0
    TEST EDX,EDX                        ; 00555096
    JZ 0x005550a8                       ; 00555098
        ;   XREF to: 005550a8 (CONDITIONAL_JUMP)  ; LAB_005550a8
    PUSH EDX                            ; 0055509a
    MOV EBX,dword ptr [EDX]             ; 0055509b
    CALL dword ptr [EBX + 0x8]          ; 0055509d
    XOR ECX,ECX                         ; 005550a0
    MOV dword ptr [0x0264a5d0],ECX      ; 005550a2 | DAT_0264a5d0
    MOV EBX,dword ptr [0x0264a5cc]      ; 005550a8 | DAT_0264a5cc
        ;   Label: LAB_005550a8
    TEST EBX,EBX                        ; 005550ae
    JZ 0x005550c2                       ; 005550b0
        ;   XREF to: 005550c2 (CONDITIONAL_JUMP)  ; LAB_005550c2
    MOV EAX,EBX                         ; 005550b2
    PUSH EAX                            ; 005550b4
    MOV EBX,dword ptr [EBX]             ; 005550b5
    XOR ESI,ESI                         ; 005550b7
    CALL dword ptr [EBX + 0x8]          ; 005550b9
    MOV dword ptr [0x0264a5cc],ESI      ; 005550bc | DAT_0264a5cc
    MOV EBP,dword ptr [0x0264a5d4]      ; 005550c2 | DAT_0264a5d4
        ;   Label: LAB_005550c2
    TEST EBP,EBP                        ; 005550c8
    JZ 0x005550da                       ; 005550ca
        ;   XREF to: 005550da (CONDITIONAL_JUMP)  ; LAB_005550da
    PUSH EBP                            ; 005550cc
    MOV EBX,dword ptr [EBP]             ; 005550cd
    CALL dword ptr [EBX + 0x8]          ; 005550d0
    XOR EAX,EAX                         ; 005550d3
    MOV [0x0264a5d4],EAX                ; 005550d5 | DAT_0264a5d4
    MOV EDX,dword ptr [0x0264a5c8]      ; 005550da | DAT_0264a5c8
        ;   Label: LAB_005550da
    TEST EDX,EDX                        ; 005550e0
    JZ 0x005550f2                       ; 005550e2
        ;   XREF to: 005550f2 (CONDITIONAL_JUMP)  ; LAB_005550f2
    PUSH EDX                            ; 005550e4
    MOV EBX,dword ptr [EDX]             ; 005550e5
    CALL dword ptr [EBX + 0x8]          ; 005550e7
    XOR ECX,ECX                         ; 005550ea
    MOV dword ptr [0x0264a5c8],ECX      ; 005550ec | DAT_0264a5c8
    MOV EBX,dword ptr [0x0264a5c4]      ; 005550f2 | DAT_0264a5c4
        ;   Label: LAB_005550f2
    TEST EBX,EBX                        ; 005550f8
    JNZ 0x0055510a                      ; 005550fa
        ;   XREF to: 0055510a (CONDITIONAL_JUMP)  ; LAB_0055510a
    MOV EAX,EDI                         ; 005550fc
    POP EBP                             ; 005550fe
    POP EDI                             ; 005550ff
    POP ESI                             ; 00555100
    POP EBX                             ; 00555101
    RET                                 ; 00555102
    XOR EDI,EDI                         ; 00555103
        ;   Label: LAB_00555103
    JMP 0x0055507e                      ; 00555105
        ;   XREF to: 0055507e (UNCONDITIONAL_JUMP)  ; LAB_0055507e
    MOV EAX,EBX                         ; 0055510a
        ;   Label: LAB_0055510a
    PUSH EAX                            ; 0055510c
    MOV EBX,dword ptr [EBX]             ; 0055510d
    XOR ESI,ESI                         ; 0055510f
    CALL dword ptr [EBX + 0x8]          ; 00555111
    MOV dword ptr [0x0264a5c4],ESI      ; 00555114 | DAT_0264a5c4
    MOV EAX,EDI                         ; 0055511a
    POP EBP                             ; 0055511c
    POP EDI                             ; 0055511d
    POP ESI                             ; 0055511e
    POP EBX                             ; 0055511f
    RET                                 ; 00555120

