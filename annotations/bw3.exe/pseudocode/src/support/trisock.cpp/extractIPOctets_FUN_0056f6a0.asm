; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_extractIPOctets_FUN_0056f6a0(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr)
;
; Parameters:
; uchar *          Stack[0x4]:4   ip_bytes
; uint *           Stack[0x8]:4   octet1_ptr
; uint *           Stack[0xc]:4   octet2_ptr
; uint *           Stack[0x10]:4   octet3_ptr
; uint *           Stack[0x14]:4   octet4_ptr
;
; XREF[1]:
;   unkafter_trisock.cpp_FUN_00572220 at 0057223c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f6a0
        ;   Label: support_trisock.cpp_extractIPOctets_FUN_0056f6a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056f6a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f6a5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056f6a9
    TEST EBX,EBX                        ; 0056f6ad
    JNZ 0x0056f6d8                      ; 0056f6af
        ;   XREF to: 0056f6d8 (CONDITIONAL_JUMP)  ; LAB_0056f6d8
    CMP dword ptr [ESP + 0x10],0x0      ; 0056f6b1
        ;   Label: LAB_0056f6b1
    JZ 0x0056f6c3                       ; 0056f6b6
        ;   XREF to: 0056f6c3 (CONDITIONAL_JUMP)  ; LAB_0056f6c3
    XOR EDX,EDX                         ; 0056f6b8
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056f6ba
    MOV DL,byte ptr [EAX + 0x1]         ; 0056f6be
    MOV dword ptr [EBX],EDX             ; 0056f6c1
    TEST ECX,ECX                        ; 0056f6c3
        ;   Label: LAB_0056f6c3
    JZ 0x0056f6ce                       ; 0056f6c5
        ;   XREF to: 0056f6ce (CONDITIONAL_JUMP)  ; LAB_0056f6ce
    XOR EDX,EDX                         ; 0056f6c7
    MOV DL,byte ptr [EAX + 0x2]         ; 0056f6c9
    MOV dword ptr [ECX],EDX             ; 0056f6cc
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056f6ce
        ;   Label: LAB_0056f6ce
    TEST ECX,ECX                        ; 0056f6d2
    JNZ 0x0056f6e0                      ; 0056f6d4
        ;   XREF to: 0056f6e0 (CONDITIONAL_JUMP)  ; LAB_0056f6e0
    POP EBX                             ; 0056f6d6
    RET                                 ; 0056f6d7
    XOR EDX,EDX                         ; 0056f6d8
        ;   Label: LAB_0056f6d8
    MOV DL,byte ptr [EAX]               ; 0056f6da
    MOV dword ptr [EBX],EDX             ; 0056f6dc
    JMP 0x0056f6b1                      ; 0056f6de
        ;   XREF to: 0056f6b1 (UNCONDITIONAL_JUMP)  ; LAB_0056f6b1
    MOV AL,byte ptr [EAX + 0x3]         ; 0056f6e0
        ;   Label: LAB_0056f6e0
    AND EAX,0xff                        ; 0056f6e3
    MOV dword ptr [ECX],EAX             ; 0056f6e8
    POP EBX                             ; 0056f6ea
    RET                                 ; 0056f6eb

