; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00548b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   support_trisock.cpp_staticInit_FUN_00548aa0 at 00548ab9
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596bd8
;   TerminatedCString s_Invalid_IP_values_d_d_d_00596bef
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   support_trisock.cpp_buildIPAddress_FUN_00548c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548b40
        ;   Label: support_trisock.cpp_FUN_00548b40
    PUSH ESI                            ; 00548b41
    PUSH EDI                            ; 00548b42
    PUSH EBP                            ; 00548b43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00548b44
    MOV EDX,dword ptr [ESP + 0x24]      ; 00548b48
    PUSH EDX                            ; 00548b4c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00548b4d
    PUSH ECX                            ; 00548b51
    MOV ESI,dword ptr [ESP + 0x24]      ; 00548b52
    PUSH ESI                            ; 00548b56
    MOV EDI,dword ptr [ESP + 0x24]      ; 00548b57
    PUSH EDI                            ; 00548b5b
    PUSH EBX                            ; 00548b5c
    CALL support_trisock.cpp_buildIPAddress_FUN_00548c60 ; 00548b5d
        ;   XREF to: 00548c60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_00548c60()
    ADD ESP,0x14                        ; 00548b62
    TEST EAX,EAX                        ; 00548b65
    JZ 0x00548b70                       ; 00548b67
        ;   XREF to: 00548b70 (CONDITIONAL_JUMP)  ; LAB_00548b70
    MOV EAX,EBX                         ; 00548b69
    POP EBP                             ; 00548b6b
    POP EDI                             ; 00548b6c
    POP ESI                             ; 00548b6d
    POP EBX                             ; 00548b6e
    RET                                 ; 00548b6f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00548b70
        ;   Label: LAB_00548b70
    PUSH EDX                            ; 00548b74
    MOV ECX,dword ptr [ESP + 0x24]      ; 00548b75
    PUSH ECX                            ; 00548b79
    PUSH ESI                            ; 00548b7a
    PUSH EDI                            ; 00548b7b
    MOV EBP,0x596bd8                    ; 00548b7c | = "..\\support\\trisock.cpp"
    MOV EAX,0x41                        ; 00548b81
    PUSH 0x596bef                       ; 00548b86 | = "Invalid IP values: %d, %d, %d, %d"
    MOV dword ptr [0x01cc4800],EBP      ; 00548b8b | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00548b91 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00548b96
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x14                        ; 00548b9b
    MOV EAX,EBX                         ; 00548b9e
    POP EBP                             ; 00548ba0
    POP EDI                             ; 00548ba1
    POP ESI                             ; 00548ba2
    POP EBX                             ; 00548ba3
    RET                                 ; 00548ba4

