; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f0a0(char *param_1,int param_2,uint param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0046f7e0 at 0046f848
;   FUN_00470eb0 at 00470f6a
;
; Called Functions:
;   FUN_00563cc0
;   FUN_00565f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f0a0
        ;   Label: FUN_0046f0a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f0a1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046f0a5
    MOV dword ptr [EBX + 0x12c],ECX     ; 0046f0a9
    CMP ECX,0x12c                       ; 0046f0af
    JC 0x0046f0c1                       ; 0046f0b5
        ;   XREF to: 0046f0c1 (CONDITIONAL_JUMP)  ; LAB_0046f0c1
    MOV dword ptr [EBX + 0x12c],0x12b   ; 0046f0b7
    PUSH 0x12c                          ; 0046f0c1
        ;   Label: LAB_0046f0c1
    PUSH 0x0                            ; 0046f0c6
    PUSH EBX                            ; 0046f0c8
    CALL FUN_00563cc0                   ; 0046f0c9
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 0046f0ce
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046f0d1
    TEST ECX,ECX                        ; 0046f0d5
    JNZ 0x0046f101                      ; 0046f0d7
        ;   XREF to: 0046f101 (CONDITIONAL_JUMP)  ; LAB_0046f101
    MOV dword ptr [EBX + 0x130],ECX     ; 0046f0d9
    MOV ECX,dword ptr [EBX + 0x130]     ; 0046f0df
        ;   Label: LAB_0046f0df
    MOV dword ptr [EBX + 0x138],0x0     ; 0046f0e5
    MOV dword ptr [EBX + 0x134],ECX     ; 0046f0ef
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046f0f5
    MOV dword ptr [EBX + 0x13c],ECX     ; 0046f0f9
    POP EBX                             ; 0046f0ff
    RET                                 ; 0046f100
    PUSH EDI                            ; 0046f101
        ;   Label: LAB_0046f101
    PUSH ESI                            ; 0046f102
    MOV ESI,dword ptr [EBX + 0x12c]     ; 0046f103
    PUSH ESI                            ; 0046f109
    PUSH ECX                            ; 0046f10a
    PUSH EBX                            ; 0046f10b
    CALL FUN_00565f70                   ; 0046f10c
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00565f70()
    ADD ESP,0xc                         ; 0046f111
    MOV EDI,EBX                         ; 0046f114
    SUB ECX,ECX                         ; 0046f116
    DEC ECX                             ; 0046f118
    XOR EAX,EAX                         ; 0046f119
    SCASB.REPNE ES:EDI                  ; 0046f11b
    NOT ECX                             ; 0046f11d
    DEC ECX                             ; 0046f11f
    MOV dword ptr [EBX + 0x130],ECX     ; 0046f120
    POP ESI                             ; 0046f126
    POP EDI                             ; 0046f127
    JMP 0x0046f0df                      ; 0046f128
        ;   XREF to: 0046f0df (UNCONDITIONAL_JUMP)  ; LAB_0046f0df

