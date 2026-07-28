; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_netgame_cpp_matchPacketHeader_FUN_004edc50(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edc50
        ;   Label: core_netgame.cpp_matchPacketHeader_FUN_004edc50
    MOV ECX,dword ptr [ESP + 0x8]       ; 004edc51
    MOV EDX,dword ptr [ESP + 0xc]       ; 004edc55
    MOV BX,word ptr [EDX + 0x4]         ; 004edc59
    CMP BX,word ptr [ECX + 0x4]         ; 004edc5d
    JNZ 0x004edc69                      ; 004edc61
        ;   XREF to: 004edc69 (CONDITIONAL_JUMP)  ; LAB_004edc69
    MOV EAX,dword ptr [ECX]             ; 004edc63
    CMP EAX,dword ptr [EDX]             ; 004edc65
    JZ 0x004edc6d                       ; 004edc67
        ;   XREF to: 004edc6d (CONDITIONAL_JUMP)  ; LAB_004edc6d
    XOR EAX,EAX                         ; 004edc69
        ;   Label: LAB_004edc69
    POP EBX                             ; 004edc6b
    RET                                 ; 004edc6c
    MOV EAX,0x1                         ; 004edc6d
        ;   Label: LAB_004edc6d
    POP EBX                             ; 004edc72
    RET                                 ; 004edc73

