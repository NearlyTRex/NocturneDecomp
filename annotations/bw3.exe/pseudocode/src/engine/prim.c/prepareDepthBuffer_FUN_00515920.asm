; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_prepareDepthBuffer_FUN_00515920(int param_1,int param_2)
;
;
; XREF[7]:
;   core_asgaya.cpp_FUN_005a1ea0 at 005a21b0
;   core_asgaya.cpp_FUN_005a23c0 at 005a264b
;   engine_3d.c_FUN_00407e30 at 00408091
;   engine_prim.c_FUN_00515e80 at 00516088
;   engine_prim.c_FUN_00516de0 at 005170e3
;   engine_prim.c_FUN_00517480 at 005175f2
;   unkafter_dpart.cpp_FUN_004673d0 at 004674ea
;
; Referenced Globals:
;   undefined4 DAT_01c6e2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515920
        ;   Label: engine_prim.c_prepareDepthBuffer_FUN_00515920
    PUSH ESI                            ; 00515921
    MOV EAX,dword ptr [ESP + 0xc]       ; 00515922
    MOV EBX,dword ptr [ESP + 0x10]      ; 00515926
    MOV EDX,dword ptr [0x01c6e2b0]      ; 0051592a | DAT_01c6e2b0
    TEST EDX,EDX                        ; 00515930
    JZ 0x0051595f                       ; 00515932
        ;   XREF to: 0051595f (CONDITIONAL_JUMP)  ; LAB_0051595f
    XOR EDX,EDX                         ; 00515934
    TEST EBX,EBX                        ; 00515936
    JLE 0x00515950                      ; 00515938
        ;   XREF to: 00515950 (CONDITIONAL_JUMP)  ; LAB_00515950
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051593a
        ;   Label: LAB_0051593a
    TEST ECX,ECX                        ; 0051593d
    JNZ 0x00515953                      ; 0051593f
        ;   XREF to: 00515953 (CONDITIONAL_JUMP)  ; LAB_00515953
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 00515941
    INC EDX                             ; 00515948
        ;   Label: LAB_00515948
    ADD EAX,0x30                        ; 00515949
    CMP EDX,EBX                         ; 0051594c
    JL 0x0051593a                       ; 0051594e
        ;   XREF to: 0051593a (CONDITIONAL_JUMP)  ; LAB_0051593a
    POP ESI                             ; 00515950
        ;   Label: LAB_00515950
    POP EBX                             ; 00515951
    RET                                 ; 00515952
    MOV ESI,0x7fffffff                  ; 00515953
        ;   Label: LAB_00515953
    SUB ESI,ECX                         ; 00515958
    MOV dword ptr [EAX + 0x8],ESI       ; 0051595a
    JMP 0x00515948                      ; 0051595d
        ;   XREF to: 00515948 (UNCONDITIONAL_JUMP)  ; LAB_00515948
    TEST EBX,EBX                        ; 0051595f
        ;   Label: LAB_0051595f
    JLE 0x00515950                      ; 00515961
        ;   XREF to: 00515950 (CONDITIONAL_JUMP)  ; LAB_00515950
    MOV ECX,dword ptr [EAX + 0x8]       ; 00515963
        ;   Label: LAB_00515963
    SAR ECX,0x4                         ; 00515966
    TEST ECX,ECX                        ; 00515969
    JNZ 0x0051597e                      ; 0051596b
        ;   XREF to: 0051597e (CONDITIONAL_JUMP)  ; LAB_0051597e
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0051596d
    INC EDX                             ; 00515974
    ADD EAX,0x30                        ; 00515975
    CMP EDX,EBX                         ; 00515978
    JGE 0x00515950                      ; 0051597a
        ;   XREF to: 00515950 (CONDITIONAL_JUMP)  ; LAB_00515950
    JMP 0x00515963                      ; 0051597c
        ;   XREF to: 00515963 (UNCONDITIONAL_JUMP)  ; LAB_00515963
    MOV ECX,dword ptr [EAX + 0xc]       ; 0051597e
        ;   Label: LAB_0051597e
    MOV dword ptr [EAX + 0x8],ECX       ; 00515981
    INC EDX                             ; 00515984
    ADD EAX,0x30                        ; 00515985
    CMP EDX,EBX                         ; 00515988
    JGE 0x00515950                      ; 0051598a
        ;   XREF to: 00515950 (CONDITIONAL_JUMP)  ; LAB_00515950
    JMP 0x00515963                      ; 0051598c
        ;   XREF to: 00515963 (UNCONDITIONAL_JUMP)  ; LAB_00515963

