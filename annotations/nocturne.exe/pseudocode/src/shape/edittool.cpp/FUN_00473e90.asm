; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00473e90(int *param_1,int param_2,int *param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00473cd0 at 00473cdd
;
; Called Functions:
;   shape_edittool.cpp_CStrList_allocate_FUN_00473de0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473e90
        ;   Label: shape_edittool.cpp_FUN_00473e90
    PUSH ESI                            ; 00473e91
    PUSH EDI                            ; 00473e92
    PUSH EBP                            ; 00473e93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00473e94
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00473e98
    MOV EDX,dword ptr [EDI]             ; 00473e9c
    MOV EAX,dword ptr [EAX]             ; 00473e9e
    ADD EAX,EDX                         ; 00473ea0
    PUSH EAX                            ; 00473ea2
    PUSH EDI                            ; 00473ea3
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00473de0 ; 00473ea4
        ;   XREF to: 00473de0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_allocate_FUN_00473de0()
    ADD ESP,0x8                         ; 00473ea9
    XOR EBX,EBX                         ; 00473eac
    MOV ESI,dword ptr [ESP + 0x18]      ; 00473eae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00473eb2
    MOV EAX,dword ptr [EAX]             ; 00473eb6
    CMP EBX,EAX                         ; 00473eb8
    JL 0x00473ec1                       ; 00473eba
        ;   XREF to: 00473ec1 (CONDITIONAL_JUMP)  ; LAB_00473ec1
    POP EBP                             ; 00473ebc
    POP EDI                             ; 00473ebd
    POP ESI                             ; 00473ebe
    POP EBX                             ; 00473ebf
    RET                                 ; 00473ec0
    PUSH EBX                            ; 00473ec1
        ;   Label: LAB_00473ec1
    MOV ECX,dword ptr [ESP + 0x20]      ; 00473ec2
    PUSH ECX                            ; 00473ec6
    MOV EBP,dword ptr [EDI + 0xc]       ; 00473ec7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00473eca
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 00473ecf
    PUSH EAX                            ; 00473ed2
    PUSH ESI                            ; 00473ed3
    PUSH EDI                            ; 00473ed4
    INC EBX                             ; 00473ed5
    INC ESI                             ; 00473ed6
    CALL dword ptr [EBP + 0xc]          ; 00473ed7
    ADD ESP,0xc                         ; 00473eda
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00473edd
    MOV EAX,dword ptr [EAX]             ; 00473ee1
    CMP EBX,EAX                         ; 00473ee3
    JL 0x00473ec1                       ; 00473ee5
        ;   XREF to: 00473ec1 (CONDITIONAL_JUMP)  ; LAB_00473ec1
    POP EBP                             ; 00473ee7
    POP EDI                             ; 00473ee8
    POP ESI                             ; 00473ee9
    POP EBX                             ; 00473eea
    RET                                 ; 00473eeb

