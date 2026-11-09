; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trisock_cpp_FUN_0057b680(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_Error_receiving_s_from_s_005ed51e
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
;   support_trisock.cpp_FUN_00579150
;   support_trisock.cpp_FUN_00579240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b680
        ;   Label: support_trisock.cpp_FUN_0057b680
    PUSH ESI                            ; 0057b681
    SUB ESP,0x4                         ; 0057b682
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057b685
    MOV EDX,dword ptr [EBX + 0xa14]     ; 0057b689
    MOV EAX,dword ptr [EBX + 0xa10]     ; 0057b68f
    CMP EAX,EDX                         ; 0057b695
    JGE 0x0057b6ba                      ; 0057b697
        ;   XREF to: 0057b6ba (CONDITIONAL_JUMP)  ; LAB_0057b6ba
    PUSH EDI                            ; 0057b699
    MOV AL,byte ptr [EBX + EAX*0x1 + 0x610] ; 0057b69a
    MOV EDI,dword ptr [EBX + 0xa10]     ; 0057b6a1
    INC EDI                             ; 0057b6a7
    AND EAX,0xff                        ; 0057b6a8
    MOV dword ptr [EBX + 0xa10],EDI     ; 0057b6ad
    POP EDI                             ; 0057b6b3
    ADD ESP,0x4                         ; 0057b6b4
        ;   Label: LAB_0057b6b4
    POP ESI                             ; 0057b6b7
    POP EBX                             ; 0057b6b8
    RET                                 ; 0057b6b9
    MOV ECX,0x4                         ; 0057b6ba
        ;   Label: LAB_0057b6ba
    LEA ESI,[EBX + 0xd2c]               ; 0057b6bf
    MOV dword ptr [EBX + 0xa14],0x0     ; 0057b6c5
    PUSH ESI                            ; 0057b6cf
    MOV dword ptr [EBX + 0xa10],0x0     ; 0057b6d0
    MOV dword ptr [ESP + 0x4],ECX       ; 0057b6da
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_00579090 ; 0057b6de
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_00579090(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057b6e3
    TEST EAX,EAX                        ; 0057b6e6
    JZ 0x0057b6f6                       ; 0057b6e8
        ;   XREF to: 0057b6f6 (CONDITIONAL_JUMP)  ; LAB_0057b6f6
    PUSH ESI                            ; 0057b6ea
    CALL support_trisock.cpp_FUN_00579150 ; 0057b6eb
        ;   XREF to: 00579150 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579150()
    ADD ESP,0x4                         ; 0057b6f0
    MOV dword ptr [ESP],EAX             ; 0057b6f3
    TEST byte ptr [ESP],0x4             ; 0057b6f6
        ;   Label: LAB_0057b6f6
    JNZ 0x0057b725                      ; 0057b6fa
        ;   XREF to: 0057b725 (CONDITIONAL_JUMP)  ; LAB_0057b725
    PUSH 0x0                            ; 0057b6fc
    PUSH 0x200                          ; 0057b6fe
    LEA EAX,[EBX + 0x610]               ; 0057b703
    PUSH EAX                            ; 0057b709
    LEA EAX,[EBX + 0xd2c]               ; 0057b70a
    PUSH EAX                            ; 0057b710
    CALL support_trisock.cpp_FUN_00579240 ; 0057b711
        ;   XREF to: 00579240 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_FUN_00579240(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 0057b716
    CMP EAX,-0x2                        ; 0057b719
    JNZ 0x0057b75c                      ; 0057b71c
        ;   XREF to: 0057b75c (CONDITIONAL_JUMP)  ; LAB_0057b75c
    CMP dword ptr [ESP + 0x14],0x0      ; 0057b71e
    JNZ 0x0057b6b4                      ; 0057b723
        ;   XREF to: 0057b6b4 (CONDITIONAL_JUMP)  ; LAB_0057b6b4
    LEA EAX,[EBX + 0x400]               ; 0057b725
        ;   Label: LAB_0057b725
    PUSH EAX                            ; 0057b72b
    LEA EAX,[EBX + 0x500]               ; 0057b72c
    PUSH EAX                            ; 0057b732
    PUSH 0x5ed51e                       ; 0057b733 | = "Error receiving %s from %s"
    LEA EAX,[EBX + 0xa18]               ; 0057b738
    PUSH EAX                            ; 0057b73e
    CALL crt_unknown.c_FUN_005b7790     ; 0057b73f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0xfffffffd                  ; 0057b744
    ADD ESP,0x10                        ; 0057b749
    MOV dword ptr [EBX + 0xd28],0xfffffffb ; 0057b74c
    ADD ESP,0x4                         ; 0057b756
    POP ESI                             ; 0057b759
    POP EBX                             ; 0057b75a
    RET                                 ; 0057b75b
    TEST EAX,EAX                        ; 0057b75c
        ;   Label: LAB_0057b75c
    JL 0x0057b725                       ; 0057b75e
        ;   XREF to: 0057b725 (CONDITIONAL_JUMP)  ; LAB_0057b725
    MOV dword ptr [EBX + 0xa14],EAX     ; 0057b760
    MOV EAX,0xffffffff                  ; 0057b766
    ADD ESP,0x4                         ; 0057b76b
    POP ESI                             ; 0057b76e
    POP EBX                             ; 0057b76f
    RET                                 ; 0057b770

