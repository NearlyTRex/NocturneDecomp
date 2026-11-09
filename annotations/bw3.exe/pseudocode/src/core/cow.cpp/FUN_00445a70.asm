; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_cow_cpp_FUN_00445a70(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445a70
        ;   Label: core_cow.cpp_FUN_00445a70
    PUSH ESI                            ; 00445a71
    PUSH EDI                            ; 00445a72
    SUB ESP,0x18                        ; 00445a73
    MOV EAX,dword ptr [ESP + 0x28]      ; 00445a76
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00445a7a
    MOV EDX,dword ptr [EAX + 0xd054]    ; 00445a7e
    PUSH EDX                            ; 00445a84
    ADD EAX,0x158                       ; 00445a85
    PUSH EAX                            ; 00445a8a
    LEA ESI,[ESP + 0x8]                 ; 00445a8b
    LEA EDI,[ESP + 0x14]                ; 00445a8f
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00445a93
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00445a98
    ADD ESP,0x8                         ; 00445a9c
    LEA EAX,[ESP + 0xc]                 ; 00445a9f
    MOVSD ES:EDI,ESI                    ; 00445aa3
    MOVSD ES:EDI,ESI                    ; 00445aa4
    MOVSD ES:EDI,ESI                    ; 00445aa5
    CMP EBX,EAX                         ; 00445aa6
    JNZ 0x00445ab6                      ; 00445aa8
        ;   XREF to: 00445ab6 (CONDITIONAL_JUMP)  ; LAB_00445ab6
    MOV EAX,0x1                         ; 00445aaa
    ADD ESP,0x18                        ; 00445aaf
    POP EDI                             ; 00445ab2
    POP ESI                             ; 00445ab3
    POP EBX                             ; 00445ab4
    RET                                 ; 00445ab5
    MOV EAX,dword ptr [ESP + 0xc]       ; 00445ab6
        ;   Label: LAB_00445ab6
    MOV dword ptr [EBX],EAX             ; 00445aba
    MOV EAX,dword ptr [ESP + 0x10]      ; 00445abc
    MOV dword ptr [EBX + 0x4],EAX       ; 00445ac0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445ac3
    MOV dword ptr [EBX + 0x8],EAX       ; 00445ac7
    MOV EAX,0x1                         ; 00445aca
    ADD ESP,0x18                        ; 00445acf
    POP EDI                             ; 00445ad2
    POP ESI                             ; 00445ad3
    POP EBX                             ; 00445ad4
    RET                                 ; 00445ad5

