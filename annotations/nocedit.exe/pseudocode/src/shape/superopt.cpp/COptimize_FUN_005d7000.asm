; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_COptimize_FUN_005d7000(COptimize * this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_superopt.cpp_COptimize_ctor_FUN_005d6f90 at 005d6fba
;   shape_superopt.cpp_COptimize_dtor_FUN_005d6fd0 at 005d6fdd
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_superopt.cpp_CObj_free_FUN_005d2600
;   shape_superopt.cpp_FUN_005c79d0
;   shape_superopt.cpp_FUN_005c79f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7000
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d7000
    PUSH ESI                            ; 005d7001
    PUSH EDI                            ; 005d7002
    PUSH EBP                            ; 005d7003
    MOV ESI,dword ptr [ESP + 0x14]      ; 005d7004
    PUSH ESI                            ; 005d7008
    CALL shape_superopt.cpp_CObj_free_FUN_005d2600 ; 005d7009
        ;   XREF to: 005d2600 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CObj_free_FUN_005d2600(CObj * this_ptr)
    XOR EDI,EDI                         ; 005d700e
    MOV EDX,dword ptr [ESI + 0x38]      ; 005d7010
    ADD ESP,0x4                         ; 005d7013
    TEST EDX,EDX                        ; 005d7016
    JBE 0x005d7040                      ; 005d7018
        ;   XREF to: 005d7040 (CONDITIONAL_JUMP)  ; LAB_005d7040
    XOR EBX,EBX                         ; 005d701a
    MOV EAX,dword ptr [ESI + 0x3c]      ; 005d701c
        ;   Label: LAB_005d701c
    MOV EBP,dword ptr [EBX + EAX*0x1]   ; 005d701f
    PUSH EBP                            ; 005d7022
    CALL shape_superopt.cpp_FUN_005c79f0 ; 005d7023
        ;   XREF to: 005c79f0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c79f0()
    MOV EAX,dword ptr [ESI + 0x3c]      ; 005d7028
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 005d702b
    ADD ESP,0x4                         ; 005d702e
    TEST EAX,EAX                        ; 005d7031
    JNZ 0x005d70a2                      ; 005d7033
        ;   XREF to: 005d70a2 (CONDITIONAL_JUMP)  ; LAB_005d70a2
    INC EDI                             ; 005d7035
        ;   Label: LAB_005d7035
    MOV ECX,dword ptr [ESI + 0x38]      ; 005d7036
    ADD EBX,0x4                         ; 005d7039
    CMP EDI,ECX                         ; 005d703c
    JC 0x005d701c                       ; 005d703e
        ;   XREF to: 005d701c (CONDITIONAL_JUMP)  ; LAB_005d701c
    MOV EBX,dword ptr [ESI + 0x3c]      ; 005d7040
        ;   Label: LAB_005d7040
    TEST EBX,EBX                        ; 005d7043
    JNZ 0x005d70bb                      ; 005d7045
        ;   XREF to: 005d70bb (CONDITIONAL_JUMP)  ; LAB_005d70bb
    PUSH 0x3f50624d                     ; 005d7047
        ;   Label: LAB_005d7047
    MOV dword ptr [ESI + 0x3c],0x0      ; 005d704c
    PUSH 0xd2f1a9fc                     ; 005d7053
    MOV EAX,dword ptr [ESI + 0x40]      ; 005d7058
    PUSH ESI                            ; 005d705b
    MOV dword ptr [ESI + 0x38],0x0      ; 005d705c
    CALL dword ptr [EAX + 0x4]          ; 005d7063
    ADD ESP,0xc                         ; 005d7066
    PUSH 0x3f50624d                     ; 005d7069
    PUSH 0xd2f1a9fc                     ; 005d706e
    MOV EAX,dword ptr [ESI + 0x40]      ; 005d7073
    PUSH ESI                            ; 005d7076
    CALL dword ptr [EAX + 0xc]          ; 005d7077
    ADD ESP,0xc                         ; 005d707a
    PUSH 0x3f50624d                     ; 005d707d
    PUSH 0xd2f1a9fc                     ; 005d7082
    MOV EAX,dword ptr [ESI + 0x40]      ; 005d7087
    PUSH ESI                            ; 005d708a
    CALL dword ptr [EAX + 0x14]         ; 005d708b
    ADD ESP,0xc                         ; 005d708e
    PUSH 0x10                           ; 005d7091
    MOV EAX,dword ptr [ESI + 0x40]      ; 005d7093
    PUSH ESI                            ; 005d7096
    CALL dword ptr [EAX + 0x1c]         ; 005d7097
    ADD ESP,0x8                         ; 005d709a
    POP EBP                             ; 005d709d
    POP EDI                             ; 005d709e
    POP ESI                             ; 005d709f
    POP EBX                             ; 005d70a0
    RET                                 ; 005d70a1
    PUSH 0x0                            ; 005d70a2
        ;   Label: LAB_005d70a2
    PUSH EAX                            ; 005d70a4
    CALL shape_superopt.cpp_FUN_005c79d0 ; 005d70a5
        ;   XREF to: 005c79d0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c79d0()
    ADD ESP,0x8                         ; 005d70aa
    PUSH EAX                            ; 005d70ad
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d70ae
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d70b3
    JMP 0x005d7035                      ; 005d70b6
        ;   XREF to: 005d7035 (UNCONDITIONAL_JUMP)  ; LAB_005d7035
    PUSH EBX                            ; 005d70bb
        ;   Label: LAB_005d70bb
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d70bc
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005d70c1
    JMP 0x005d7047                      ; 005d70c4
        ;   XREF to: 005d7047 (UNCONDITIONAL_JUMP)  ; LAB_005d7047

