; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_extractIPOctets_FUN_0059c6b0(uchar *ip_bytes,uint *octet1_ptr,uint *octet2_ptr,uint *octet3_ptr,uint *octet4_ptr)
;
; Parameters:
; uchar *          Stack[0x4]:4   ip_bytes
; uint *           Stack[0x8]:4   octet1_ptr
; uint *           Stack[0xc]:4   octet2_ptr
; uint *           Stack[0x10]:4   octet3_ptr
; uint *           Stack[0x14]:4   octet4_ptr
;
; XREF[1]:
;   support_trisock.cpp_FUN_0059f230 at 0059f24c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c6b0
        ;   Label: support_trisock.cpp_extractIPOctets_FUN_0059c6b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059c6b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059c6b5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0059c6b9
    TEST EBX,EBX                        ; 0059c6bd
    JNZ 0x0059c6e8                      ; 0059c6bf
        ;   XREF to: 0059c6e8 (CONDITIONAL_JUMP)  ; LAB_0059c6e8
    CMP dword ptr [ESP + 0x10],0x0      ; 0059c6c1
        ;   Label: LAB_0059c6c1
    JZ 0x0059c6d3                       ; 0059c6c6
        ;   XREF to: 0059c6d3 (CONDITIONAL_JUMP)  ; LAB_0059c6d3
    XOR EDX,EDX                         ; 0059c6c8
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059c6ca
    MOV DL,byte ptr [EAX + 0x1]         ; 0059c6ce
    MOV dword ptr [EBX],EDX             ; 0059c6d1
    TEST ECX,ECX                        ; 0059c6d3
        ;   Label: LAB_0059c6d3
    JZ 0x0059c6de                       ; 0059c6d5
        ;   XREF to: 0059c6de (CONDITIONAL_JUMP)  ; LAB_0059c6de
    XOR EDX,EDX                         ; 0059c6d7
    MOV DL,byte ptr [EAX + 0x2]         ; 0059c6d9
    MOV dword ptr [ECX],EDX             ; 0059c6dc
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059c6de
        ;   Label: LAB_0059c6de
    TEST ECX,ECX                        ; 0059c6e2
    JNZ 0x0059c6f0                      ; 0059c6e4
        ;   XREF to: 0059c6f0 (CONDITIONAL_JUMP)  ; LAB_0059c6f0
    POP EBX                             ; 0059c6e6
    RET                                 ; 0059c6e7
    XOR EDX,EDX                         ; 0059c6e8
        ;   Label: LAB_0059c6e8
    MOV DL,byte ptr [EAX]               ; 0059c6ea
    MOV dword ptr [EBX],EDX             ; 0059c6ec
    JMP 0x0059c6c1                      ; 0059c6ee
        ;   XREF to: 0059c6c1 (UNCONDITIONAL_JUMP)  ; LAB_0059c6c1
    MOV AL,byte ptr [EAX + 0x3]         ; 0059c6f0
        ;   Label: LAB_0059c6f0
    AND EAX,0xff                        ; 0059c6f3
    MOV dword ptr [ECX],EAX             ; 0059c6f8
    POP EBX                             ; 0059c6fa
    RET                                 ; 0059c6fb

