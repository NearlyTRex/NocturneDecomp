; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00439b30(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,int param_6 )
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00443250 at 0044354f
;
; Called Functions:
;   FUN_004394f0
;   FUN_00439630
;   FUN_004397d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439b30
        ;   Label: FUN_00439b30
    PUSH ESI                            ; 00439b31
    PUSH EDI                            ; 00439b32
    PUSH EBP                            ; 00439b33
    SUB ESP,0x8                         ; 00439b34
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00439b37
    MOV EBP,dword ptr [ESP + 0x28]      ; 00439b3b
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00439b3f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00439b43
    MOV dword ptr [ESP + 0x4],EBP       ; 00439b47
    MOV dword ptr [ESP],EAX             ; 00439b4b
    CMP dword ptr [EBX + 0x2c],0x0      ; 00439b4e
    JL 0x00439b93                       ; 00439b52
        ;   XREF to: 00439b93 (CONDITIONAL_JUMP)  ; LAB_00439b93
    LEA EAX,[ESP + 0x4]                 ; 00439b54
        ;   Label: LAB_00439b54
    PUSH EAX                            ; 00439b58
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00439b59
    PUSH EAX                            ; 00439b5c
    LEA ESI,[EBX + 0x4]                 ; 00439b5d
    PUSH ESI                            ; 00439b60
    CALL FUN_004397d0                   ; 00439b61
        ;   XREF to: 004397d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004397d0()
    MOV EDX,dword ptr [EBX + 0x28]      ; 00439b66
    ADD ESP,0xc                         ; 00439b69
    TEST EDX,EDX                        ; 00439b6c
    JL 0x00439b86                       ; 00439b6e
        ;   XREF to: 00439b86 (CONDITIONAL_JUMP)  ; LAB_00439b86
    PUSH EDX                            ; 00439b70
    PUSH EAX                            ; 00439b71
    PUSH ESI                            ; 00439b72
    CALL FUN_004394f0                   ; 00439b73
        ;   XREF to: 004394f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004394f0()
    ADD ESP,0xc                         ; 00439b78
    TEST EAX,EAX                        ; 00439b7b
    JZ 0x00439b86                       ; 00439b7d
        ;   XREF to: 00439b86 (CONDITIONAL_JUMP)  ; LAB_00439b86
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00439b7f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00439b86
        ;   Label: LAB_00439b86
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00439b89
    MOV dword ptr [EBX + 0x28],EAX      ; 00439b90
    MOV ECX,dword ptr [ESP + 0x24]      ; 00439b93
        ;   Label: LAB_00439b93
    PUSH ECX                            ; 00439b97
    LEA EAX,[ESP + 0x4]                 ; 00439b98
    PUSH EAX                            ; 00439b9c
    LEA EAX,[EBX + 0x18]                ; 00439b9d
    PUSH EAX                            ; 00439ba0
    LEA EAX,[EBX + 0x4]                 ; 00439ba1
    PUSH EAX                            ; 00439ba4
    CALL FUN_00439630                   ; 00439ba5
        ;   XREF to: 00439630 (UNCONDITIONAL_CALL)  ; undefined FUN_00439630()
    ADD ESP,0x10                        ; 00439baa
    MOV dword ptr [EBX + 0x2c],EAX      ; 00439bad
    TEST EAX,EAX                        ; 00439bb0
    JGE 0x00439b54                      ; 00439bb2
        ;   XREF to: 00439b54 (CONDITIONAL_JUMP)  ; LAB_00439b54
    MOV EAX,dword ptr [ESP + 0x4]       ; 00439bb4
    MOV ESI,dword ptr [EDI]             ; 00439bb8
    SUB EAX,EBP                         ; 00439bba
    SUB ESI,EAX                         ; 00439bbc
    MOV EBP,dword ptr [ESP + 0x30]      ; 00439bbe
    MOV dword ptr [EDI],ESI             ; 00439bc2
    TEST EBP,EBP                        ; 00439bc4
    JNZ 0x00439bd5                      ; 00439bc6
        ;   XREF to: 00439bd5 (CONDITIONAL_JUMP)  ; LAB_00439bd5
    MOV EAX,0x1                         ; 00439bc8
        ;   Label: LAB_00439bc8
    ADD ESP,0x8                         ; 00439bcd
    POP EBP                             ; 00439bd0
    POP EDI                             ; 00439bd1
    POP ESI                             ; 00439bd2
    POP EBX                             ; 00439bd3
    RET                                 ; 00439bd4
    PUSH EDI                            ; 00439bd5
        ;   Label: LAB_00439bd5
    MOV EDX,dword ptr [ESP + 0x8]       ; 00439bd6
    PUSH EDX                            ; 00439bda
    MOV EAX,dword ptr [EBX]             ; 00439bdb
    PUSH EBX                            ; 00439bdd
    CALL dword ptr [EAX + 0x20]         ; 00439bde
    ADD ESP,0xc                         ; 00439be1
    TEST EAX,EAX                        ; 00439be4
    JNZ 0x00439bc8                      ; 00439be6
        ;   XREF to: 00439bc8 (CONDITIONAL_JUMP)  ; LAB_00439bc8
    ADD ESP,0x8                         ; 00439be8
    POP EBP                             ; 00439beb
    POP EDI                             ; 00439bec
    POP ESI                             ; 00439bed
    POP EBX                             ; 00439bee
    RET                                 ; 00439bef

