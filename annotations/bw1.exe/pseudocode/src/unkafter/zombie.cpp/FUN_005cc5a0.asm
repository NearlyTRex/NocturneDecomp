; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * unkafter_zombie_cpp_FUN_005cc5a0(char *param_1,char *param_2,ulong param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8ff0 at 005c9010
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc5a0
        ;   Label: unkafter_zombie.cpp_FUN_005cc5a0
    PUSH ESI                            ; 005cc5a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005cc5a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cc5a6
    MOV EBX,dword ptr [ESP + 0x14]      ; 005cc5aa
    MOV EDX,ESI                         ; 005cc5ae
    TEST EBX,EBX                        ; 005cc5b0
    JBE 0x005cc5c5                      ; 005cc5b2
        ;   XREF to: 005cc5c5 (CONDITIONAL_JUMP)  ; LAB_005cc5c5
    CMP byte ptr [EAX],0x0              ; 005cc5b4
        ;   Label: LAB_005cc5b4
    JZ 0x005cc5c5                       ; 005cc5b7
        ;   XREF to: 005cc5c5 (CONDITIONAL_JUMP)  ; LAB_005cc5c5
    INC EDX                             ; 005cc5b9
    MOV CL,byte ptr [EAX]               ; 005cc5ba
    INC EAX                             ; 005cc5bc
    DEC EBX                             ; 005cc5bd
    MOV byte ptr [EDX + -0x1],CL        ; 005cc5be
    TEST EBX,EBX                        ; 005cc5c1
    JA 0x005cc5b4                       ; 005cc5c3
        ;   XREF to: 005cc5b4 (CONDITIONAL_JUMP)  ; LAB_005cc5b4
    CMP byte ptr [EAX],0x0              ; 005cc5c5
        ;   Label: LAB_005cc5c5
    JZ 0x005cc5f2                       ; 005cc5c8
        ;   XREF to: 005cc5f2 (CONDITIONAL_JUMP)  ; LAB_005cc5f2
    CMP EDX,ESI                         ; 005cc5ca
    JBE 0x005cc5f2                      ; 005cc5cc
        ;   XREF to: 005cc5f2 (CONDITIONAL_JUMP)  ; LAB_005cc5f2
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cc5ce | DAT_02c9f6e0
    JZ 0x005cc5f2                       ; 005cc5d5
        ;   XREF to: 005cc5f2 (CONDITIONAL_JUMP)  ; LAB_005cc5f2
    MOV AL,byte ptr [EAX + -0x1]        ; 005cc5d7
    AND EAX,0xff                        ; 005cc5da
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005cc5df
    AND AL,0x1                          ; 005cc5e5
    AND EAX,0xff                        ; 005cc5e7
    JZ 0x005cc5f2                       ; 005cc5ec
        ;   XREF to: 005cc5f2 (CONDITIONAL_JUMP)  ; LAB_005cc5f2
    MOV byte ptr [EDX + -0x1],0x0       ; 005cc5ee
    TEST EBX,EBX                        ; 005cc5f2
        ;   Label: LAB_005cc5f2
    JBE 0x005cc602                      ; 005cc5f4
        ;   XREF to: 005cc602 (CONDITIONAL_JUMP)  ; LAB_005cc602
    PUSH EBX                            ; 005cc5f6
    PUSH 0x0                            ; 005cc5f7
    PUSH EDX                            ; 005cc5f9
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005cc5fa
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005cc5ff
    MOV EAX,ESI                         ; 005cc602
        ;   Label: LAB_005cc602
    POP ESI                             ; 005cc604
    POP EBX                             ; 005cc605
    RET                                 ; 005cc606

