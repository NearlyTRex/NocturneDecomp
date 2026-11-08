; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004512a0(int param_1)
;
;
; XREF[1]:
;   FUN_00534890 at 00534f6a
;
; Referenced Globals:
;   undefined4 DAT_01c60dac
;
; Called Functions:
;   FUN_00495f68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004512a0
        ;   Label: FUN_004512a0
    PUSH ESI                            ; 004512a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004512a2
    MOV EDX,dword ptr [ESI + 0x148]     ; 004512a6
    XOR EBX,EBX                         ; 004512ac
    TEST EDX,EDX                        ; 004512ae
    JLE 0x004512ed                      ; 004512b0
        ;   XREF to: 004512ed (CONDITIONAL_JUMP)  ; LAB_004512ed
    PUSH EDI                            ; 004512b2
    XOR EDI,EDI                         ; 004512b3
    MOV EDX,dword ptr [ESI + 0x144]     ; 004512b5
        ;   Label: LAB_004512b5
    SHL EDX,0x2                         ; 004512bb
    PUSH EDX                            ; 004512be
    MOV EDX,dword ptr [ESI + 0x144]     ; 004512bf
    IMUL EDX,EBX                        ; 004512c5
    MOV ECX,dword ptr [ESI + 0x15c]     ; 004512c8
    SHL EDX,0x2                         ; 004512ce
    ADD EDX,ECX                         ; 004512d1
    MOV ECX,dword ptr [EDI + 0x1c60dac] ; 004512d3 | DAT_01c60dac
    INC EBX                             ; 004512d9
    CALL FUN_00495f68                   ; 004512da
        ;   XREF to: 00495f68 (UNCONDITIONAL_CALL)  ; undefined FUN_00495f68()
    MOV ECX,dword ptr [ESI + 0x148]     ; 004512df
    ADD EDI,0x4                         ; 004512e5
    CMP EBX,ECX                         ; 004512e8
    JL 0x004512b5                       ; 004512ea
        ;   XREF to: 004512b5 (CONDITIONAL_JUMP)  ; LAB_004512b5
    POP EDI                             ; 004512ec
    POP ESI                             ; 004512ed
        ;   Label: LAB_004512ed
    POP EBX                             ; 004512ee
    RET                                 ; 004512ef

