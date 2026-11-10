; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_dpart_cpp_findEdgeByYStart_FUN_00466d0e(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01bdcfd4
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00466d0e
        ;   Label: core_dpart.cpp_findEdgeByYStart_FUN_00466d0e
    PUSH EBX                            ; 00466d10
    PUSH ESI                            ; 00466d11
    MOV EBX,dword ptr [0x01bdcfd4]      ; 00466d12 | DAT_01bdcfd4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00466d18
    MOV ESI,dword ptr [ESP + 0x10]      ; 00466d1c
    MOV EAX,0x1bdcfd8                   ; 00466d20
    XOR EDX,EDX                         ; 00466d25
    TEST EBX,EBX                        ; 00466d27
    JLE 0x00466d3b                      ; 00466d29
        ;   XREF to: 00466d3b (CONDITIONAL_JUMP)  ; LAB_00466d3b
    CMP ECX,dword ptr [EAX]             ; 00466d2b
        ;   Label: LAB_00466d2b
    JNZ 0x00466d33                      ; 00466d2d
        ;   XREF to: 00466d33 (CONDITIONAL_JUMP)  ; LAB_00466d33
    CMP EAX,ESI                         ; 00466d2f
    JNZ 0x00466d3d                      ; 00466d31
        ;   XREF to: 00466d3d (CONDITIONAL_JUMP)  ; LAB_00466d3d
    INC EDX                             ; 00466d33
        ;   Label: LAB_00466d33
    ADD EAX,0x50                        ; 00466d34
    CMP EDX,EBX                         ; 00466d37
    JL 0x00466d2b                       ; 00466d39
        ;   XREF to: 00466d2b (CONDITIONAL_JUMP)  ; LAB_00466d2b
    XOR EAX,EAX                         ; 00466d3b
        ;   Label: LAB_00466d3b
    MOV dword ptr [0x01bdcfd4],EBX      ; 00466d3d | DAT_01bdcfd4
        ;   Label: LAB_00466d3d
    POP ESI                             ; 00466d43
    POP EBX                             ; 00466d44
    RET                                 ; 00466d45

