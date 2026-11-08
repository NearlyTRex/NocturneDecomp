; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005abde0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   DirectDrawCreate
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abde0
        ;   Label: FUN_005abde0
    PUSH EDI                            ; 005abde1
    PUSH EBP                            ; 005abde2
    MOV EDX,dword ptr [0x02c9930c]      ; 005abde3 | DAT_02c9930c
    TEST EDX,EDX                        ; 005abde9
    JNZ 0x005abe59                      ; 005abdeb
        ;   XREF to: 005abe59 (CONDITIONAL_JUMP)  ; LAB_005abe59
    MOV EBX,dword ptr [0x02c99308]      ; 005abded | DAT_02c99308
        ;   Label: LAB_005abded
    TEST EBX,EBX                        ; 005abdf3
    JZ 0x005abe07                       ; 005abdf5
        ;   XREF to: 005abe07 (CONDITIONAL_JUMP)  ; LAB_005abe07
    PUSH ESI                            ; 005abdf7
    PUSH EBX                            ; 005abdf8
    MOV EDX,dword ptr [EBX]             ; 005abdf9
    XOR ESI,ESI                         ; 005abdfb
    CALL dword ptr [EDX + 0x8]          ; 005abdfd
    MOV dword ptr [0x02c99308],ESI      ; 005abe00 | DAT_02c99308
    POP ESI                             ; 005abe06
    MOV EDI,dword ptr [0x02c99304]      ; 005abe07 | DAT_02c99304
        ;   Label: LAB_005abe07
    TEST EDI,EDI                        ; 005abe0d
    JZ 0x005abe1f                       ; 005abe0f
        ;   XREF to: 005abe1f (CONDITIONAL_JUMP)  ; LAB_005abe1f
    PUSH EDI                            ; 005abe11
    MOV EDX,dword ptr [EDI]             ; 005abe12
    XOR EBP,EBP                         ; 005abe14
    CALL dword ptr [EDX + 0x8]          ; 005abe16
    MOV dword ptr [0x02c99304],EBP      ; 005abe19 | DAT_02c99304
    MOV EAX,[0x02c99300]                ; 005abe1f | DAT_02c99300
        ;   Label: LAB_005abe1f
    TEST EAX,EAX                        ; 005abe24
    JZ 0x005abe41                       ; 005abe26
        ;   XREF to: 005abe41 (CONDITIONAL_JUMP)  ; LAB_005abe41
    PUSH EAX                            ; 005abe28
    MOV EDX,dword ptr [EAX]             ; 005abe29
    CALL dword ptr [EDX + 0x4c]         ; 005abe2b
    MOV EAX,[0x02c99300]                ; 005abe2e | DAT_02c99300
    PUSH EAX                            ; 005abe33
    MOV EDX,dword ptr [EAX]             ; 005abe34
    CALL dword ptr [EDX + 0x8]          ; 005abe36
    XOR EDX,EDX                         ; 005abe39
    MOV dword ptr [0x02c99300],EDX      ; 005abe3b | DAT_02c99300
    PUSH 0x0                            ; 005abe41
        ;   Label: LAB_005abe41
    PUSH 0x2c99300                      ; 005abe43
    PUSH 0x0                            ; 005abe48
    CALL DirectDrawCreate               ; 005abe4a
        ;   XREF to: 005cf7ba (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 005abe4f
    JZ 0x005abe6b                       ; 005abe51
        ;   XREF to: 005abe6b (CONDITIONAL_JUMP)  ; LAB_005abe6b
    XOR EAX,EAX                         ; 005abe53
        ;   Label: LAB_005abe53
    POP EBP                             ; 005abe55
    POP EDI                             ; 005abe56
    POP EBX                             ; 005abe57
    RET                                 ; 005abe58
    MOV EAX,EDX                         ; 005abe59
        ;   Label: LAB_005abe59
    PUSH EAX                            ; 005abe5b
    MOV EDX,dword ptr [EDX]             ; 005abe5c
    CALL dword ptr [EDX + 0x8]          ; 005abe5e
    XOR ECX,ECX                         ; 005abe61
    MOV dword ptr [0x02c9930c],ECX      ; 005abe63 | DAT_02c9930c
    JMP 0x005abded                      ; 005abe69
        ;   XREF to: 005abded (UNCONDITIONAL_JUMP)  ; LAB_005abded
    PUSH 0x11                           ; 005abe6b
        ;   Label: LAB_005abe6b
    MOV ECX,dword ptr [0x02c9be68]      ; 005abe6d | DAT_02c9be68
    MOV EAX,[0x02c99300]                ; 005abe73 | DAT_02c99300
    PUSH ECX                            ; 005abe78
    MOV EDX,dword ptr [EAX]             ; 005abe79
    PUSH EAX                            ; 005abe7b
    CALL dword ptr [EDX + 0x50]         ; 005abe7c
    TEST EAX,EAX                        ; 005abe7f
    JNZ 0x005abe53                      ; 005abe81
        ;   XREF to: 005abe53 (CONDITIONAL_JUMP)  ; LAB_005abe53
    MOV EAX,0x1                         ; 005abe83
    POP EBP                             ; 005abe88
    POP EDI                             ; 005abe89
    POP EBX                             ; 005abe8a
    RET                                 ; 005abe8b

