; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0056fa80(HANDLE hConsoleInput)
;
; Parameters:
; HANDLE           Stack[0x4]:4   hConsoleInput
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1c]:2  local_1c
; undefined1       Stack[-0x1a]:1  local_1a
; undefined1       Stack[-0x17]:1  local_17
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0056fb98 at 0056fbf8
;
; Referenced Globals:
;   void* PTR_ReadConsoleInputA_00575578 = 00175f2c
;   undefined4 DAT_005c204c
;   undefined4 DAT_02de5d50
;   undefined4 DAT_02de5d54
;   undefined4 DAT_02de5d58
;
; Called Functions:
;   FUN_00571440
;   ReadConsoleInputA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fa80
        ;   Label: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0056fa80
    PUSH ESI                            ; 0056fa81
    PUSH EDI                            ; 0056fa82
    PUSH EBP                            ; 0056fa83
    SUB ESP,0x18                        ; 0056fa84
    MOV ESI,dword ptr [0x02de5d58]      ; 0056fa87 | DAT_02de5d58
    MOV EDI,dword ptr [0x02de5d54]      ; 0056fa8d | DAT_02de5d54
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056fa93
    MOV EAX,[0x005c204c]                ; 0056fa97 | DAT_005c204c
    CMP EAX,0x1                         ; 0056fa9c
    JC 0x0056fae5                       ; 0056fa9f
        ;   XREF to: 0056fae5 (CONDITIONAL_JUMP)  ; LAB_0056fae5
    JBE 0x0056faaa                      ; 0056faa1
        ;   XREF to: 0056faaa (CONDITIONAL_JUMP)  ; LAB_0056faaa
    CMP EAX,0x2                         ; 0056faa3
    JZ 0x0056facc                       ; 0056faa6
        ;   XREF to: 0056facc (CONDITIONAL_JUMP)  ; LAB_0056facc
    JMP 0x0056fae5                      ; 0056faa8
        ;   XREF to: 0056fae5 (UNCONDITIONAL_JUMP)  ; LAB_0056fae5
    DEC ESI                             ; 0056faaa
        ;   Label: LAB_0056faaa
    TEST EDI,EDI                        ; 0056faab
    JZ 0x0056fabb                       ; 0056faad
        ;   XREF to: 0056fabb (CONDITIONAL_JUMP)  ; LAB_0056fabb
    TEST ESI,ESI                        ; 0056faaf
    JNZ 0x0056fac5                      ; 0056fab1
        ;   XREF to: 0056fac5 (CONDITIONAL_JUMP)  ; LAB_0056fac5
    MOV dword ptr [0x005c204c],ESI      ; 0056fab3 | DAT_005c204c
    JMP 0x0056fac5                      ; 0056fab9
        ;   XREF to: 0056fac5 (UNCONDITIONAL_JUMP)  ; LAB_0056fac5
    MOV dword ptr [0x005c204c],0x2      ; 0056fabb | DAT_005c204c
        ;   Label: LAB_0056fabb
    MOV EAX,EDI                         ; 0056fac5
        ;   Label: LAB_0056fac5
    JMP 0x0056fb84                      ; 0056fac7
        ;   XREF to: 0056fb84 (UNCONDITIONAL_JUMP)  ; LAB_0056fb84
    TEST ESI,ESI                        ; 0056facc
        ;   Label: LAB_0056facc
    SETNZ AL                            ; 0056face
    AND EAX,0xff                        ; 0056fad1
    MOV [0x005c204c],EAX                ; 0056fad6 | DAT_005c204c
    MOV EAX,[0x02de5d50]                ; 0056fadb | DAT_02de5d50
    JMP 0x0056fb84                      ; 0056fae0
        ;   XREF to: 0056fb84 (UNCONDITIONAL_JUMP)  ; LAB_0056fb84
    MOV dword ptr [0x02de5d58],ESI      ; 0056fae5 | DAT_02de5d58
        ;   Label: LAB_0056fae5
    MOV dword ptr [0x02de5d54],EDI      ; 0056faeb | DAT_02de5d54
    LEA EAX,[ESP + 0x14]                ; 0056faf1
        ;   Label: LAB_0056faf1
    PUSH EAX                            ; 0056faf5
    PUSH 0x1                            ; 0056faf6
    LEA EAX,[ESP + 0x8]                 ; 0056faf8
    PUSH EAX                            ; 0056fafc
    PUSH EBX                            ; 0056fafd
    CALL dword ptr CS:[0x575578]        ; 0056fafe | PTR_ReadConsoleInputA_00575578
    TEST EAX,EAX                        ; 0056fb05
    JZ 0x0056fb73                       ; 0056fb07
        ;   XREF to: 0056fb73 (CONDITIONAL_JUMP)  ; LAB_0056fb73
    MOV EAX,ESP                         ; 0056fb09
    PUSH EAX                            ; 0056fb0b
    CALL FUN_00571440                   ; 0056fb0c
        ;   XREF to: 00571440 (UNCONDITIONAL_CALL)  ; undefined FUN_00571440()
    ADD ESP,0x4                         ; 0056fb11
    TEST EAX,EAX                        ; 0056fb14
    JZ 0x0056faf1                       ; 0056fb16
        ;   XREF to: 0056faf1 (CONDITIONAL_JUMP)  ; LAB_0056faf1
    XOR EAX,EAX                         ; 0056fb18
    MOV AX,word ptr [ESP + 0x8]         ; 0056fb1a
    LEA ESI,[EAX + -0x1]                ; 0056fb1f
    MOV AH,byte ptr [ESP + 0x11]        ; 0056fb22
    MOVZX EDI,byte ptr [ESP + 0xe]      ; 0056fb26
    TEST AH,0x1                         ; 0056fb2b
    JNZ 0x0056fb34                      ; 0056fb2e
        ;   XREF to: 0056fb34 (CONDITIONAL_JUMP)  ; LAB_0056fb34
    TEST EDI,EDI                        ; 0056fb30
    JNZ 0x0056fb4f                      ; 0056fb32
        ;   XREF to: 0056fb4f (CONDITIONAL_JUMP)  ; LAB_0056fb4f
    MOV EBP,0x2                         ; 0056fb34
        ;   Label: LAB_0056fb34
    XOR EAX,EAX                         ; 0056fb39
    XOR EDI,EDI                         ; 0056fb3b
    MOV AX,word ptr [ESP + 0xc]         ; 0056fb3d
    MOV dword ptr [0x005c204c],EBP      ; 0056fb42 | DAT_005c204c
    MOV [0x02de5d50],EAX                ; 0056fb48 | DAT_02de5d50
    JMP 0x0056fb5d                      ; 0056fb4d
        ;   XREF to: 0056fb5d (UNCONDITIONAL_JUMP)  ; LAB_0056fb5d
    TEST ESI,ESI                        ; 0056fb4f
        ;   Label: LAB_0056fb4f
    JZ 0x0056fb5d                       ; 0056fb51
        ;   XREF to: 0056fb5d (CONDITIONAL_JUMP)  ; LAB_0056fb5d
    MOV dword ptr [0x005c204c],0x1      ; 0056fb53 | DAT_005c204c
    MOV EAX,EDI                         ; 0056fb5d
        ;   Label: LAB_0056fb5d
    MOV dword ptr [0x02de5d54],EDI      ; 0056fb5f | DAT_02de5d54
    MOV dword ptr [0x02de5d58],ESI      ; 0056fb65 | DAT_02de5d58
    ADD ESP,0x18                        ; 0056fb6b
    POP EBP                             ; 0056fb6e
    POP EDI                             ; 0056fb6f
    POP ESI                             ; 0056fb70
    POP EBX                             ; 0056fb71
    RET                                 ; 0056fb72
    MOV EAX,0xffffffff                  ; 0056fb73
        ;   Label: LAB_0056fb73
    MOV EDI,dword ptr [0x02de5d54]      ; 0056fb78 | DAT_02de5d54
    MOV ESI,dword ptr [0x02de5d58]      ; 0056fb7e | DAT_02de5d58
    MOV dword ptr [0x02de5d54],EDI      ; 0056fb84 | DAT_02de5d54
        ;   Label: LAB_0056fb84
    MOV dword ptr [0x02de5d58],ESI      ; 0056fb8a | DAT_02de5d58
    ADD ESP,0x18                        ; 0056fb90
    POP EBP                             ; 0056fb93
    POP EDI                             ; 0056fb94
    POP ESI                             ; 0056fb95
    POP EBX                             ; 0056fb96
    RET                                 ; 0056fb97

