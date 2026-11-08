; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ba60(char *param_1,int param_2,uint param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0047c2c0 at 0047c328
;   FUN_0047e470 at 0047e52a
;
; Called Functions:
;   FUN_005a28f0
;   FUN_005a4ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ba60
        ;   Label: FUN_0047ba60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047ba61
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047ba65
    MOV dword ptr [EBX + 0x12c],ECX     ; 0047ba69
    CMP ECX,0x12c                       ; 0047ba6f
    JC 0x0047ba81                       ; 0047ba75
        ;   XREF to: 0047ba81 (CONDITIONAL_JUMP)  ; LAB_0047ba81
    MOV dword ptr [EBX + 0x12c],0x12b   ; 0047ba77
    PUSH 0x12c                          ; 0047ba81
        ;   Label: LAB_0047ba81
    PUSH 0x0                            ; 0047ba86
    PUSH EBX                            ; 0047ba88
    CALL FUN_005a28f0                   ; 0047ba89
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0047ba8e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ba91
    TEST ECX,ECX                        ; 0047ba95
    JNZ 0x0047bac1                      ; 0047ba97
        ;   XREF to: 0047bac1 (CONDITIONAL_JUMP)  ; LAB_0047bac1
    MOV dword ptr [EBX + 0x130],ECX     ; 0047ba99
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047ba9f
        ;   Label: LAB_0047ba9f
    MOV dword ptr [EBX + 0x138],0x0     ; 0047baa5
    MOV dword ptr [EBX + 0x134],ECX     ; 0047baaf
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047bab5
    MOV dword ptr [EBX + 0x13c],ECX     ; 0047bab9
    POP EBX                             ; 0047babf
    RET                                 ; 0047bac0
    PUSH EDI                            ; 0047bac1
        ;   Label: LAB_0047bac1
    PUSH ESI                            ; 0047bac2
    MOV ESI,dword ptr [EBX + 0x12c]     ; 0047bac3
    PUSH ESI                            ; 0047bac9
    PUSH ECX                            ; 0047baca
    PUSH EBX                            ; 0047bacb
    CALL FUN_005a4ee0                   ; 0047bacc
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    ADD ESP,0xc                         ; 0047bad1
    MOV EDI,EBX                         ; 0047bad4
    SUB ECX,ECX                         ; 0047bad6
    DEC ECX                             ; 0047bad8
    XOR EAX,EAX                         ; 0047bad9
    SCASB.REPNE ES:EDI                  ; 0047badb
    NOT ECX                             ; 0047badd
    DEC ECX                             ; 0047badf
    MOV dword ptr [EBX + 0x130],ECX     ; 0047bae0
    POP ESI                             ; 0047bae6
    POP EDI                             ; 0047bae7
    JMP 0x0047ba9f                      ; 0047bae8
        ;   XREF to: 0047ba9f (UNCONDITIONAL_JUMP)  ; LAB_0047ba9f

