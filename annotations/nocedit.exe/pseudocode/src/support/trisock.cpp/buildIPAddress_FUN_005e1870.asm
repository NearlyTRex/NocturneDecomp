; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_buildIPAddress_FUN_005e1870(uint8_t *dest_ip,int octet1,int octet2,int octet3,int octet4)
;
; Parameters:
; uint8_t *        Stack[0x4]:4   dest_ip
; int              Stack[0x8]:4   octet1
; int              Stack[0xc]:4   octet2
; int              Stack[0x10]:4   octet3
; int              Stack[0x14]:4   octet4
;
; XREF[2]:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750 at 005e176d
;   support_trisock.cpp_parseIPComponents_FUN_005e1800 at 005e1852
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1870
        ;   Label: support_trisock.cpp_buildIPAddress_FUN_005e1870
    PUSH ESI                            ; 005e1871
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e1872
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e1876
    MOV ECX,dword ptr [ESP + 0x18]      ; 005e187a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005e187e
    MOV ESI,dword ptr [ESP + 0x10]      ; 005e1882
    TEST ESI,ESI                        ; 005e1886
    JL 0x005e18b6                       ; 005e1888
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    CMP ESI,0xff                        ; 005e188a
    JG 0x005e18b6                       ; 005e1890
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    TEST EBX,EBX                        ; 005e1892
    JL 0x005e18b6                       ; 005e1894
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    CMP EBX,0xff                        ; 005e1896
    JG 0x005e18b6                       ; 005e189c
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    TEST ECX,ECX                        ; 005e189e
    JL 0x005e18b6                       ; 005e18a0
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    CMP ECX,0xff                        ; 005e18a2
    JG 0x005e18b6                       ; 005e18a8
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    TEST EDX,EDX                        ; 005e18aa
    JL 0x005e18b6                       ; 005e18ac
        ;   XREF to: 005e18b6 (CONDITIONAL_JUMP)  ; LAB_005e18b6
    CMP EDX,0xff                        ; 005e18ae
    JLE 0x005e18bb                      ; 005e18b4
        ;   XREF to: 005e18bb (CONDITIONAL_JUMP)  ; LAB_005e18bb
    XOR EAX,EAX                         ; 005e18b6
        ;   Label: LAB_005e18b6
    POP ESI                             ; 005e18b8
    POP EBX                             ; 005e18b9
    RET                                 ; 005e18ba
    MOV byte ptr [EAX + 0x1],BL         ; 005e18bb
        ;   Label: LAB_005e18bb
    MOV DH,byte ptr [ESP + 0x10]        ; 005e18be
    MOV byte ptr [EAX + 0x2],CL         ; 005e18c2
    MOV byte ptr [EAX + 0x3],DL         ; 005e18c5
    MOV byte ptr [EAX],DH               ; 005e18c8
    MOV EAX,0x1                         ; 005e18ca
    POP ESI                             ; 005e18cf
    POP EBX                             ; 005e18d0
    RET                                 ; 005e18d1

