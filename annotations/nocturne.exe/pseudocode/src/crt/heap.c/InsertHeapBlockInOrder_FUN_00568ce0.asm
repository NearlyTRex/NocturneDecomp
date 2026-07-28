; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_heap_c_InsertHeapBlockInOrder_FUN_00568ce0(int *param_1)
;
;
; XREF[1]:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00568d58 at 00568dd0
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568ce0
        ;   Label: crt_heap.c_InsertHeapBlockInOrder_FUN_00568ce0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00568ce1
    MOV EAX,[0x005c1680]                ; 00568ce5 | DAT_005c1680
    XOR EBX,EBX                         ; 00568cea
    TEST EAX,EAX                        ; 00568cec
    JZ 0x00568cfd                       ; 00568cee
        ;   XREF to: 00568cfd (CONDITIONAL_JUMP)  ; LAB_00568cfd
    CMP EDX,EAX                         ; 00568cf0
        ;   Label: LAB_00568cf0
    JC 0x00568cfd                       ; 00568cf2
        ;   XREF to: 00568cfd (CONDITIONAL_JUMP)  ; LAB_00568cfd
    MOV EBX,EAX                         ; 00568cf4
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568cf6
    TEST EAX,EAX                        ; 00568cf9
    JNZ 0x00568cf0                      ; 00568cfb
        ;   XREF to: 00568cf0 (CONDITIONAL_JUMP)  ; LAB_00568cf0
    MOV dword ptr [EDX + 0x4],EBX       ; 00568cfd
        ;   Label: LAB_00568cfd
    MOV dword ptr [EDX + 0x8],EAX       ; 00568d00
    TEST EBX,EBX                        ; 00568d03
    JZ 0x00568d0c                       ; 00568d05
        ;   XREF to: 00568d0c (CONDITIONAL_JUMP)  ; LAB_00568d0c
    MOV dword ptr [EBX + 0x8],EDX       ; 00568d07
    JMP 0x00568d12                      ; 00568d0a
        ;   XREF to: 00568d12 (UNCONDITIONAL_JUMP)  ; LAB_00568d12
    MOV dword ptr [0x005c1680],EDX      ; 00568d0c | DAT_005c1680
        ;   Label: LAB_00568d0c
    TEST EAX,EAX                        ; 00568d12
        ;   Label: LAB_00568d12
    JZ 0x00568d19                       ; 00568d14
        ;   XREF to: 00568d19 (CONDITIONAL_JUMP)  ; LAB_00568d19
    MOV dword ptr [EAX + 0x4],EDX       ; 00568d16
    LEA EBX,[EDX + 0x20]                ; 00568d19
        ;   Label: LAB_00568d19
    ADD EDX,0x2c                        ; 00568d1c
    MOV dword ptr [EDX + -0xc],0x0      ; 00568d1f
    MOV dword ptr [EDX + -0x1c],0x0     ; 00568d26
    MOV dword ptr [EDX + -0x14],0x0     ; 00568d2d
    MOV dword ptr [EDX + -0x10],0x0     ; 00568d34
    MOV dword ptr [EDX + -0x8],EBX      ; 00568d3b
    MOV EAX,dword ptr [EDX + -0x2c]     ; 00568d3e
    MOV dword ptr [EDX + -0x4],EBX      ; 00568d41
    SUB EAX,0x2c                        ; 00568d44
    MOV dword ptr [EDX + -0x20],EBX     ; 00568d47
    MOV dword ptr [EDX],EAX             ; 00568d4a
    MOV dword ptr [EDX + EAX*0x1],0xffffffff ; 00568d4c
    MOV EAX,EDX                         ; 00568d53
    POP EBX                             ; 00568d55
    RET                                 ; 00568d56

