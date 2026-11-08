; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005acbd7(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005a5512 at 005a5533
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acbd7
        ;   Label: FUN_005acbd7
    PUSH ESI                            ; 005acbd8
    PUSH EDI                            ; 005acbd9
    PUSH EBP                            ; 005acbda
    SUB ESP,0xc                         ; 005acbdb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005acbde
    MOV EBP,dword ptr [ESP + 0x24]      ; 005acbe2
    MOV EDI,dword ptr [ESP + 0x28]      ; 005acbe6
    MOV dword ptr [ESP + 0x4],EDI       ; 005acbea
    MOV dword ptr [ESP + 0x8],EBX       ; 005acbee
    XOR EDX,EDX                         ; 005acbf2
    MOV ESI,dword ptr [EDI + 0x4]       ; 005acbf4
    MOV dword ptr [ESP],EDX             ; 005acbf7
    MOV EDI,dword ptr [EDI + 0x10]      ; 005acbfa
    CMP EBP,dword ptr [ESP]             ; 005acbfd
        ;   Label: LAB_005acbfd
    JA 0x005acc0e                       ; 005acc00
        ;   XREF to: 005acc0e (CONDITIONAL_JUMP)  ; LAB_005acc0e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005acc02
    ADD ESP,0xc                         ; 005acc06
    POP EBP                             ; 005acc09
    POP EDI                             ; 005acc0a
    POP ESI                             ; 005acc0b
    POP EBX                             ; 005acc0c
    RET                                 ; 005acc0d
    PUSH 0x0                            ; 005acc0e
        ;   Label: LAB_005acc0e
    PUSH EBX                            ; 005acc10
    CALL ESI                            ; 005acc11
    ADD ESP,0x8                         ; 005acc13
    MOV EAX,dword ptr [ESP]             ; 005acc16
    INC EAX                             ; 005acc19
    ADD EBX,EDI                         ; 005acc1a
    MOV dword ptr [ESP],EAX             ; 005acc1c
    JMP 0x005acbfd                      ; 005acc1f
        ;   XREF to: 005acbfd (UNCONDITIONAL_JUMP)  ; LAB_005acbfd

