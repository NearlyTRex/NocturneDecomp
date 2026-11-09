; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_fldnotes_cpp_FUN_004a9d90(int param_1,int param_2)
;
;
; XREF[5]:
;   core_fldnotes.cpp_FUN_004aa810 at 004aa9eb
;   core_fldnotes.cpp_FUN_004abb90 at 004abc2c
;   core_fldnotes.cpp_FUN_004abe00 at 004abe9b
;   unkaddr_004a76f0.cpp_FUN_004a826e at 004a82c2
;   unkaddr_004a76f0.cpp_FUN_004a82ee at 004a834f
;
; Referenced Globals:
;   undefined4 DAT_005c1126
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a8ed0
;   core_fldnotes.cpp_FUN_004a9950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9d90
        ;   Label: core_fldnotes.cpp_FUN_004a9d90
    PUSH ESI                            ; 004a9d91
    PUSH EDI                            ; 004a9d92
    PUSH EBP                            ; 004a9d93
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a9d94
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a9d98
    MOV EAX,dword ptr [EBP + 0x10]      ; 004a9d9c
    MOV EDX,dword ptr [EDI + 0x150]     ; 004a9d9f
    XOR EBX,EBX                         ; 004a9da5
    MOV dword ptr [EDI + 0x140],EAX     ; 004a9da7
    TEST EDX,EDX                        ; 004a9dad
    JLE 0x004a9dd5                      ; 004a9daf
        ;   XREF to: 004a9dd5 (CONDITIONAL_JUMP)  ; LAB_004a9dd5
    MOV ESI,EDI                         ; 004a9db1
    PUSH EBP                            ; 004a9db3
        ;   Label: LAB_004a9db3
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a9db4
    PUSH EAX                            ; 004a9dba
    CALL core_fldnotes.cpp_FUN_004a9950 ; 004a9dbb
        ;   XREF to: 004a9950 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9950()
    ADD ESP,0x8                         ; 004a9dc0
    TEST EAX,EAX                        ; 004a9dc3
    JZ 0x004a9dfd                       ; 004a9dc5
        ;   XREF to: 004a9dfd (CONDITIONAL_JUMP)  ; LAB_004a9dfd
    INC EBX                             ; 004a9dc7
    MOV ECX,dword ptr [EDI + 0x150]     ; 004a9dc8
    ADD ESI,0x4                         ; 004a9dce
    CMP EBX,ECX                         ; 004a9dd1
    JL 0x004a9db3                       ; 004a9dd3
        ;   XREF to: 004a9db3 (CONDITIONAL_JUMP)  ; LAB_004a9db3
    PUSH 0x5c1126                       ; 004a9dd5 | DAT_005c1126
        ;   Label: LAB_004a9dd5
    PUSH EBP                            ; 004a9dda
    CALL core_fldnotes.cpp_FUN_004a8ed0 ; 004a9ddb
        ;   XREF to: 004a8ed0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a8ed0()
    ADD ESP,0x8                         ; 004a9de0
    TEST EAX,EAX                        ; 004a9de3
    JZ 0x004a9dfd                       ; 004a9de5
        ;   XREF to: 004a9dfd (CONDITIONAL_JUMP)  ; LAB_004a9dfd
    MOV EBX,dword ptr [EDI + 0x140]     ; 004a9de7
    MOV EAX,dword ptr [EBP + 0x10]      ; 004a9ded
    SUB EAX,EBX                         ; 004a9df0
    MOV dword ptr [EDI + 0x144],EAX     ; 004a9df2
    MOV EAX,0x1                         ; 004a9df8
    POP EBP                             ; 004a9dfd
        ;   Label: LAB_004a9dfd
    POP EDI                             ; 004a9dfe
    POP ESI                             ; 004a9dff
    POP EBX                             ; 004a9e00
    RET                                 ; 004a9e01

