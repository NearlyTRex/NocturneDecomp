; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_buildIPAddress_FUN_00548c60(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4)
;
; Parameters:
; uint8_t *        Stack[0x4]:4   dest_ip
; int              Stack[0x8]:4   octet1
; int              Stack[0xc]:4   octet2
; int              Stack[0x10]:4   octet3
; int              Stack[0x14]:4   octet4
;
; XREF[2]:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40 at 00548b5d
;   support_trisock.cpp_parseIPComponents_FUN_00548bf0 at 00548c42
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548c60
        ;   Label: support_trisock.cpp_buildIPAddress_FUN_00548c60
    PUSH ESI                            ; 00548c61
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548c62
    MOV EBX,dword ptr [ESP + 0x14]      ; 00548c66
    MOV ECX,dword ptr [ESP + 0x18]      ; 00548c6a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00548c6e
    MOV ESI,dword ptr [ESP + 0x10]      ; 00548c72
    TEST ESI,ESI                        ; 00548c76
    JL 0x00548ca6                       ; 00548c78
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    CMP ESI,0xff                        ; 00548c7a
    JG 0x00548ca6                       ; 00548c80
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    TEST EBX,EBX                        ; 00548c82
    JL 0x00548ca6                       ; 00548c84
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    CMP EBX,0xff                        ; 00548c86
    JG 0x00548ca6                       ; 00548c8c
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    TEST ECX,ECX                        ; 00548c8e
    JL 0x00548ca6                       ; 00548c90
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    CMP ECX,0xff                        ; 00548c92
    JG 0x00548ca6                       ; 00548c98
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    TEST EDX,EDX                        ; 00548c9a
    JL 0x00548ca6                       ; 00548c9c
        ;   XREF to: 00548ca6 (CONDITIONAL_JUMP)  ; LAB_00548ca6
    CMP EDX,0xff                        ; 00548c9e
    JLE 0x00548cab                      ; 00548ca4
        ;   XREF to: 00548cab (CONDITIONAL_JUMP)  ; LAB_00548cab
    XOR EAX,EAX                         ; 00548ca6
        ;   Label: LAB_00548ca6
    POP ESI                             ; 00548ca8
    POP EBX                             ; 00548ca9
    RET                                 ; 00548caa
    MOV byte ptr [EAX + 0x1],BL         ; 00548cab
        ;   Label: LAB_00548cab
    MOV DH,byte ptr [ESP + 0x10]        ; 00548cae
    MOV byte ptr [EAX + 0x2],CL         ; 00548cb2
    MOV byte ptr [EAX + 0x3],DL         ; 00548cb5
    MOV byte ptr [EAX],DH               ; 00548cb8
    MOV EAX,0x1                         ; 00548cba
    POP ESI                             ; 00548cbf
    POP EBX                             ; 00548cc0
    RET                                 ; 00548cc1

