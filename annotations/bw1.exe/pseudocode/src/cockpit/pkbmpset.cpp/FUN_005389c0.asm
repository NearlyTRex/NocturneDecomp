; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_005389c0(int *param_1,int param_2)
;
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60 at 00538a92
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538c06
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00538990
;   core_main.c_FUN_005030e0
;   crt_memory.c___vec_new_FUN_005c2694
;   crt_memory.c_operator_new_array_FUN_005c1268
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005389c0
        ;   Label: cockpit_pkbmpset.cpp_FUN_005389c0
    PUSH ESI                            ; 005389c1
    SUB ESP,0xc8                        ; 005389c2
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005389c8
    MOV EBX,dword ptr [ESP + 0xd8]      ; 005389cf
    PUSH ESI                            ; 005389d6
    CALL cockpit_pkbitmap.cpp_FUN_00538990 ; 005389d7
        ;   XREF to: 00538990 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00538990()
    ADD ESP,0x4                         ; 005389dc
    TEST EBX,EBX                        ; 005389df
    JG 0x005389ec                       ; 005389e1
        ;   XREF to: 005389ec (CONDITIONAL_JUMP)  ; LAB_005389ec
    ADD ESP,0xc8                        ; 005389e3
    POP ESI                             ; 005389e9
    POP EBX                             ; 005389ea
    RET                                 ; 005389eb
    PUSH EDI                            ; 005389ec
        ;   Label: LAB_005389ec
    PUSH 0x6048f0                       ; 005389ed
    PUSH EBX                            ; 005389f2
    LEA EDI,[EBX*0x8 + 0x0]             ; 005389f3
    ADD EDI,EBX                         ; 005389fa
    SHL EDI,0x2                         ; 005389fc
    LEA EAX,[EDI + 0x4]                 ; 005389ff
    PUSH EAX                            ; 00538a02
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 00538a03
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 00538a08
    PUSH EAX                            ; 00538a0b
    CALL crt_memory.c___vec_new_FUN_005c2694 ; 00538a0c
        ;   XREF to: 005c2694 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005c2694()
    ADD ESP,0xc                         ; 00538a11
    MOV dword ptr [ESI + 0x4],EAX       ; 00538a14
    TEST EAX,EAX                        ; 00538a17
    JNZ 0x00538a52                      ; 00538a19
        ;   XREF to: 00538a52 (CONDITIONAL_JUMP)  ; LAB_00538a52
    PUSH EBX                            ; 00538a1b
    PUSH EDI                            ; 00538a1c
    PUSH 0x5ed113                       ; 00538a1d
    LEA EAX,[ESP + 0x10]                ; 00538a22
    PUSH EAX                            ; 00538a26
    MOV EDI,0x6e                        ; 00538a27
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538a2c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00538a31
    LEA EAX,[ESP + 0x4]                 ; 00538a34
    MOV ECX,0x5ed160                    ; 00538a38
    PUSH EAX                            ; 00538a3d
    MOV dword ptr [0x01d1d404],EDI      ; 00538a3e | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 00538a44 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00538a4a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538a4f
    MOV dword ptr [ESI],EBX             ; 00538a52
        ;   Label: LAB_00538a52
    POP EDI                             ; 00538a54
    ADD ESP,0xc8                        ; 00538a55
    POP ESI                             ; 00538a5b
    POP EBX                             ; 00538a5c
    RET                                 ; 00538a5d

