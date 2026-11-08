; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c0fd7(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005ba242 at 005ba263
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0fd7
        ;   Label: FUN_005c0fd7
    PUSH ESI                            ; 005c0fd8
    PUSH EDI                            ; 005c0fd9
    PUSH EBP                            ; 005c0fda
    SUB ESP,0xc                         ; 005c0fdb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c0fde
    MOV EBP,dword ptr [ESP + 0x24]      ; 005c0fe2
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c0fe6
    MOV dword ptr [ESP + 0x4],EDI       ; 005c0fea
    MOV dword ptr [ESP + 0x8],EBX       ; 005c0fee
    XOR EDX,EDX                         ; 005c0ff2
    MOV ESI,dword ptr [EDI + 0x4]       ; 005c0ff4
    MOV dword ptr [ESP],EDX             ; 005c0ff7
    MOV EDI,dword ptr [EDI + 0x10]      ; 005c0ffa
    CMP EBP,dword ptr [ESP]             ; 005c0ffd
        ;   Label: LAB_005c0ffd
    JA 0x005c100e                       ; 005c1000
        ;   XREF to: 005c100e (CONDITIONAL_JUMP)  ; LAB_005c100e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c1002
    ADD ESP,0xc                         ; 005c1006
    POP EBP                             ; 005c1009
    POP EDI                             ; 005c100a
    POP ESI                             ; 005c100b
    POP EBX                             ; 005c100c
    RET                                 ; 005c100d
    PUSH 0x0                            ; 005c100e
        ;   Label: LAB_005c100e
    PUSH EBX                            ; 005c1010
    CALL ESI                            ; 005c1011
    ADD ESP,0x8                         ; 005c1013
    MOV EAX,dword ptr [ESP]             ; 005c1016
    INC EAX                             ; 005c1019
    ADD EBX,EDI                         ; 005c101a
    MOV dword ptr [ESP],EAX             ; 005c101c
    JMP 0x005c0ffd                      ; 005c101f
        ;   XREF to: 005c0ffd (UNCONDITIONAL_JUMP)  ; LAB_005c0ffd

