; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00571d80(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   support_trisock.cpp_FUN_00571e50 at 00571e8a
;
; Referenced Globals:
;   TerminatedCString s_Error_receiving_s_from_s_005d6da5
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960
;   support_trisock.cpp_CSocket_receiveSocketData_FUN_0056fb10
;   support_trisock.cpp_FUN_0056fa20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571d80
        ;   Label: support_trisock.cpp_FUN_00571d80
    PUSH ESI                            ; 00571d81
    SUB ESP,0x4                         ; 00571d82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00571d85
    MOV EDX,0x4                         ; 00571d89
    LEA ESI,[EBX + 0xd2c]               ; 00571d8e
    MOV dword ptr [EBX + 0xa14],0x0     ; 00571d94
    PUSH ESI                            ; 00571d9e
    MOV dword ptr [EBX + 0xa10],0x0     ; 00571d9f
    MOV dword ptr [ESP + 0x4],EDX       ; 00571da9
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960 ; 00571dad
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00571db2
    TEST EAX,EAX                        ; 00571db5
    JNZ 0x00571dee                      ; 00571db7
        ;   XREF to: 00571dee (CONDITIONAL_JUMP)  ; LAB_00571dee
    TEST byte ptr [ESP],0x4             ; 00571db9
        ;   Label: LAB_00571db9
    JNZ 0x00571dfc                      ; 00571dbd
        ;   XREF to: 00571dfc (CONDITIONAL_JUMP)  ; LAB_00571dfc
    PUSH 0x0                            ; 00571dbf
    PUSH 0x200                          ; 00571dc1
    LEA EAX,[EBX + 0x610]               ; 00571dc6
    PUSH EAX                            ; 00571dcc
    LEA EAX,[EBX + 0xd2c]               ; 00571dcd
    PUSH EAX                            ; 00571dd3
    CALL support_trisock.cpp_CSocket_receiveSocketData_FUN_0056fb10 ; 00571dd4
        ;   XREF to: 0056fb10 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_receiveSocketData_FUN_0056fb10(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 00571dd9
    CMP EAX,-0x2                        ; 00571ddc
    JNZ 0x00571e2f                      ; 00571ddf
        ;   XREF to: 00571e2f (CONDITIONAL_JUMP)  ; LAB_00571e2f
    CMP dword ptr [ESP + 0x14],0x0      ; 00571de1
    JZ 0x00571dfc                       ; 00571de6
        ;   XREF to: 00571dfc (CONDITIONAL_JUMP)  ; LAB_00571dfc
    ADD ESP,0x4                         ; 00571de8
        ;   Label: LAB_00571de8
    POP ESI                             ; 00571deb
    POP EBX                             ; 00571dec
    RET                                 ; 00571ded
    PUSH ESI                            ; 00571dee
        ;   Label: LAB_00571dee
    CALL support_trisock.cpp_FUN_0056fa20 ; 00571def
        ;   XREF to: 0056fa20 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0056fa20()
    ADD ESP,0x4                         ; 00571df4
    MOV dword ptr [ESP],EAX             ; 00571df7
    JMP 0x00571db9                      ; 00571dfa
        ;   XREF to: 00571db9 (UNCONDITIONAL_JUMP)  ; LAB_00571db9
    LEA EAX,[EBX + 0x400]               ; 00571dfc
        ;   Label: LAB_00571dfc
    PUSH EAX                            ; 00571e02
    LEA EAX,[EBX + 0x500]               ; 00571e03
    PUSH EAX                            ; 00571e09
    PUSH 0x5d6da5                       ; 00571e0a | = "Error receiving %s from %s"
    LEA EAX,[EBX + 0xa18]               ; 00571e0f
    PUSH EAX                            ; 00571e15
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571e16
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0xfffffffd                  ; 00571e1b
    ADD ESP,0x10                        ; 00571e20
    MOV dword ptr [EBX + 0xd28],0xfffffffb ; 00571e23
    JMP 0x00571de8                      ; 00571e2d
        ;   XREF to: 00571de8 (UNCONDITIONAL_JUMP)  ; LAB_00571de8
    TEST EAX,EAX                        ; 00571e2f
        ;   Label: LAB_00571e2f
    JL 0x00571dfc                       ; 00571e31
        ;   XREF to: 00571dfc (CONDITIONAL_JUMP)  ; LAB_00571dfc
    MOV dword ptr [EBX + 0xa14],EAX     ; 00571e33
    MOV EAX,0xfffffffc                  ; 00571e39
    ADD ESP,0x4                         ; 00571e3e
    POP ESI                             ; 00571e41
    POP EBX                             ; 00571e42
    RET                                 ; 00571e43

