; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054d8a0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   FUN_0055aa00
;   FUN_0055afb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d8a0
        ;   Label: FUN_0054d8a0
    PUSH EDI                            ; 0054d8a1
    PUSH EBP                            ; 0054d8a2
    SUB ESP,0x9c                        ; 0054d8a3
    MOV EBX,ESI                         ; 0054d8a9
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0054d8ab
    MOV EAX,ESI                         ; 0054d8b2
    SHL EAX,0x4                         ; 0054d8b4
    ADD EAX,ESI                         ; 0054d8b7
    MOV EDX,dword ptr [ESP + 0xac]      ; 0054d8b9
    SHL EAX,0x2                         ; 0054d8c0
    MOV EBP,0x40847ae1                  ; 0054d8c3
    ADD EAX,EDX                         ; 0054d8c8
    XOR ECX,ECX                         ; 0054d8ca
    MOV ESI,0x3e03126f                  ; 0054d8cc
    MOV EDI,dword ptr [EAX + 0x24a4]    ; 0054d8d1
    LEA EAX,[ESP + 0x78]                ; 0054d8d7
    MOV dword ptr [ESP + 0x78],ECX      ; 0054d8db
    MOV dword ptr [ESP + 0x7c],ESI      ; 0054d8df
    LEA ESI,[ESP + 0x6c]                ; 0054d8e3
    MOV dword ptr [ESP + 0x80],EBP      ; 0054d8e7
    CMP ESI,EAX                         ; 0054d8ee
    JNZ 0x0054d9a0                      ; 0054d8f0
        ;   XREF to: 0054d9a0 (CONDITIONAL_JUMP)  ; LAB_0054d9a0
    XOR ESI,ESI                         ; 0054d8f6
        ;   Label: LAB_0054d8f6
    MOV EAX,0x4048f5c3                  ; 0054d8f8
    MOV dword ptr [ESP + 0x98],ESI      ; 0054d8fd
    MOV dword ptr [ESP + 0x90],ESI      ; 0054d904
    MOV dword ptr [ESP + 0x94],EAX      ; 0054d90b
    LEA ESI,[ESP + 0x90]                ; 0054d912
    LEA EAX,[ESP + 0x84]                ; 0054d919
    CMP EAX,ESI                         ; 0054d920
    JZ 0x0054d940                       ; 0054d922
        ;   XREF to: 0054d940 (CONDITIONAL_JUMP)  ; LAB_0054d940
    MOV ECX,0x4048f5c3                  ; 0054d924
    XOR EDX,EDX                         ; 0054d929
    MOV dword ptr [ESP + 0x88],ECX      ; 0054d92b
    MOV dword ptr [ESP + 0x8c],EDX      ; 0054d932
    MOV dword ptr [ESP + 0x84],EDX      ; 0054d939
    LEA EAX,[ESP + 0x84]                ; 0054d940
        ;   Label: LAB_0054d940
    PUSH EAX                            ; 0054d947
    LEA EAX,[ESP + 0x70]                ; 0054d948
    PUSH EAX                            ; 0054d94c
    LEA EAX,[ESP + 0x38]                ; 0054d94d
    PUSH EAX                            ; 0054d951
    CALL FUN_0055afb0                   ; 0054d952
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054d957
    ADD ESP,0xc                         ; 0054d95e
    SUB EAX,EDI                         ; 0054d961
    MOV ESI,dword ptr [ESP + 0xac]      ; 0054d963
    SHL EAX,0x4                         ; 0054d96a
    ADD ESI,0xfd0                       ; 0054d96d
    ADD EAX,ESI                         ; 0054d973
    PUSH EAX                            ; 0054d975
    LEA EAX,[ESP + 0x34]                ; 0054d976
    PUSH EAX                            ; 0054d97a
    LEA ESI,[ESP + 0x8]                 ; 0054d97b
    MOV EDI,EBX                         ; 0054d97f
    CALL FUN_0055aa00                   ; 0054d981
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 0054d986
    LEA ESI,[ESP + 0x8]                 ; 0054d98b
    ADD ESP,0x8                         ; 0054d98f
    MOVSD.REP ES:EDI,ESI                ; 0054d992
    MOV EAX,EBX                         ; 0054d994
    ADD ESP,0x9c                        ; 0054d996
    POP EBP                             ; 0054d99c
    POP EDI                             ; 0054d99d
    POP EBX                             ; 0054d99e
    RET                                 ; 0054d99f
    MOV EDX,0x3e03126f                  ; 0054d9a0
        ;   Label: LAB_0054d9a0
    MOV dword ptr [ESP + 0x74],EBP      ; 0054d9a5
    MOV dword ptr [ESP + 0x6c],ECX      ; 0054d9a9
    MOV dword ptr [ESP + 0x70],EDX      ; 0054d9ad
    JMP 0x0054d8f6                      ; 0054d9b1
        ;   XREF to: 0054d8f6 (UNCONDITIONAL_JUMP)  ; LAB_0054d8f6

