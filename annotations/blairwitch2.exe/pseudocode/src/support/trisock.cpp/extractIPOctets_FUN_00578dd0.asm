; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_extractIPOctets_FUN_00578dd0(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr)
;
; Parameters:
; uchar *          Stack[0x4]:4   ip_bytes
; uint *           Stack[0x8]:4   octet1_ptr
; uint *           Stack[0xc]:4   octet2_ptr
; uint *           Stack[0x10]:4   octet3_ptr
; uint *           Stack[0x14]:4   octet4_ptr
;
; XREF[1]:
;   support_trisock.cpp_FUN_005797b0 at 005797cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578dd0
        ;   Label: support_trisock.cpp_extractIPOctets_FUN_00578dd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00578dd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00578dd5
    MOV ECX,dword ptr [ESP + 0x14]      ; 00578dd9
    TEST EBX,EBX                        ; 00578ddd
    JNZ 0x00578e08                      ; 00578ddf
        ;   XREF to: 00578e08 (CONDITIONAL_JUMP)  ; LAB_00578e08
    CMP dword ptr [ESP + 0x10],0x0      ; 00578de1
        ;   Label: LAB_00578de1
    JZ 0x00578df3                       ; 00578de6
        ;   XREF to: 00578df3 (CONDITIONAL_JUMP)  ; LAB_00578df3
    XOR EDX,EDX                         ; 00578de8
    MOV EBX,dword ptr [ESP + 0x10]      ; 00578dea
    MOV DL,byte ptr [EAX + 0x1]         ; 00578dee
    MOV dword ptr [EBX],EDX             ; 00578df1
    TEST ECX,ECX                        ; 00578df3
        ;   Label: LAB_00578df3
    JZ 0x00578dfe                       ; 00578df5
        ;   XREF to: 00578dfe (CONDITIONAL_JUMP)  ; LAB_00578dfe
    XOR EDX,EDX                         ; 00578df7
    MOV DL,byte ptr [EAX + 0x2]         ; 00578df9
    MOV dword ptr [ECX],EDX             ; 00578dfc
    MOV ECX,dword ptr [ESP + 0x18]      ; 00578dfe
        ;   Label: LAB_00578dfe
    TEST ECX,ECX                        ; 00578e02
    JNZ 0x00578e10                      ; 00578e04
        ;   XREF to: 00578e10 (CONDITIONAL_JUMP)  ; LAB_00578e10
    POP EBX                             ; 00578e06
    RET                                 ; 00578e07
    XOR EDX,EDX                         ; 00578e08
        ;   Label: LAB_00578e08
    MOV DL,byte ptr [EAX]               ; 00578e0a
    MOV dword ptr [EBX],EDX             ; 00578e0c
    JMP 0x00578de1                      ; 00578e0e
        ;   XREF to: 00578de1 (UNCONDITIONAL_JUMP)  ; LAB_00578de1
    MOV AL,byte ptr [EAX + 0x3]         ; 00578e10
        ;   Label: LAB_00578e10
    AND EAX,0xff                        ; 00578e13
    MOV dword ptr [ECX],EAX             ; 00578e18
    POP EBX                             ; 00578e1a
    RET                                 ; 00578e1b

