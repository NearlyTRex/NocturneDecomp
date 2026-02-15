; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_extractIPOctets_FUN_005e18e0(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr)
;
; Parameters:
; uchar *          Stack[0x4]:4   ip_bytes
; uint *           Stack[0x8]:4   octet1_ptr
; uint *           Stack[0xc]:4   octet2_ptr
; uint *           Stack[0x10]:4   octet3_ptr
; uint *           Stack[0x14]:4   octet4_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e18e0
        ;   Label: support_trisock.cpp_extractIPOctets_FUN_005e18e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e18e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e18e5
    MOV ECX,dword ptr [ESP + 0x14]      ; 005e18e9
    TEST EBX,EBX                        ; 005e18ed
    JNZ 0x005e1918                      ; 005e18ef
        ;   XREF to: 005e1918 (CONDITIONAL_JUMP)  ; LAB_005e1918
    CMP dword ptr [ESP + 0x10],0x0      ; 005e18f1
        ;   Label: LAB_005e18f1
    JZ 0x005e1903                       ; 005e18f6
        ;   XREF to: 005e1903 (CONDITIONAL_JUMP)  ; LAB_005e1903
    XOR EDX,EDX                         ; 005e18f8
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e18fa
    MOV DL,byte ptr [EAX + 0x1]         ; 005e18fe
    MOV dword ptr [EBX],EDX             ; 005e1901
    TEST ECX,ECX                        ; 005e1903
        ;   Label: LAB_005e1903
    JZ 0x005e190e                       ; 005e1905
        ;   XREF to: 005e190e (CONDITIONAL_JUMP)  ; LAB_005e190e
    XOR EDX,EDX                         ; 005e1907
    MOV DL,byte ptr [EAX + 0x2]         ; 005e1909
    MOV dword ptr [ECX],EDX             ; 005e190c
    MOV ECX,dword ptr [ESP + 0x18]      ; 005e190e
        ;   Label: LAB_005e190e
    TEST ECX,ECX                        ; 005e1912
    JNZ 0x005e1920                      ; 005e1914
        ;   XREF to: 005e1920 (CONDITIONAL_JUMP)  ; LAB_005e1920
    POP EBX                             ; 005e1916
    RET                                 ; 005e1917
    XOR EDX,EDX                         ; 005e1918
        ;   Label: LAB_005e1918
    MOV DL,byte ptr [EAX]               ; 005e191a
    MOV dword ptr [EBX],EDX             ; 005e191c
    JMP 0x005e18f1                      ; 005e191e
        ;   XREF to: 005e18f1 (UNCONDITIONAL_JUMP)  ; LAB_005e18f1
    MOV AL,byte ptr [EAX + 0x3]         ; 005e1920
        ;   Label: LAB_005e1920
    AND EAX,0xff                        ; 005e1923
    MOV dword ptr [ECX],EAX             ; 005e1928
    POP EBX                             ; 005e192a
    RET                                 ; 005e192b

