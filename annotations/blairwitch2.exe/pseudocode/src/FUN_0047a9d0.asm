; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047a9d0(char *param_1,int param_2,uint param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0047b1f0 at 0047b258
;   FUN_0047d270 at 0047d32a
;
; Called Functions:
;   FUN_005b77c0
;   FUN_005b9cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a9d0
        ;   Label: FUN_0047a9d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047a9d1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047a9d5
    MOV dword ptr [EBX + 0x12c],ECX     ; 0047a9d9
    CMP ECX,0x12c                       ; 0047a9df
    JC 0x0047a9f1                       ; 0047a9e5
        ;   XREF to: 0047a9f1 (CONDITIONAL_JUMP)  ; LAB_0047a9f1
    MOV dword ptr [EBX + 0x12c],0x12b   ; 0047a9e7
    PUSH 0x12c                          ; 0047a9f1
        ;   Label: LAB_0047a9f1
    PUSH 0x0                            ; 0047a9f6
    PUSH EBX                            ; 0047a9f8
    CALL FUN_005b77c0                   ; 0047a9f9
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0047a9fe
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047aa01
    TEST ECX,ECX                        ; 0047aa05
    JNZ 0x0047aa31                      ; 0047aa07
        ;   XREF to: 0047aa31 (CONDITIONAL_JUMP)  ; LAB_0047aa31
    MOV dword ptr [EBX + 0x130],ECX     ; 0047aa09
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047aa0f
        ;   Label: LAB_0047aa0f
    MOV dword ptr [EBX + 0x138],0x0     ; 0047aa15
    MOV dword ptr [EBX + 0x134],ECX     ; 0047aa1f
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047aa25
    MOV dword ptr [EBX + 0x13c],ECX     ; 0047aa29
    POP EBX                             ; 0047aa2f
    RET                                 ; 0047aa30
    PUSH EDI                            ; 0047aa31
        ;   Label: LAB_0047aa31
    PUSH ESI                            ; 0047aa32
    MOV ESI,dword ptr [EBX + 0x12c]     ; 0047aa33
    PUSH ESI                            ; 0047aa39
    PUSH ECX                            ; 0047aa3a
    PUSH EBX                            ; 0047aa3b
    CALL FUN_005b9cf0                   ; 0047aa3c
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9cf0()
    ADD ESP,0xc                         ; 0047aa41
    MOV EDI,EBX                         ; 0047aa44
    SUB ECX,ECX                         ; 0047aa46
    DEC ECX                             ; 0047aa48
    XOR EAX,EAX                         ; 0047aa49
    SCASB.REPNE ES:EDI                  ; 0047aa4b
    NOT ECX                             ; 0047aa4d
    DEC ECX                             ; 0047aa4f
    MOV dword ptr [EBX + 0x130],ECX     ; 0047aa50
    POP ESI                             ; 0047aa56
    POP EDI                             ; 0047aa57
    JMP 0x0047aa0f                      ; 0047aa58
        ;   XREF to: 0047aa0f (UNCONDITIONAL_JUMP)  ; LAB_0047aa0f

