; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dfilter_cpp_FUN_00459710(int *param_1,char *param_2,int param_3)
;
;
; XREF[2]:
;   core_setutil.cpp_C3DSLight_addFilter_FUN_00542e50 at 00542ee3
;   core_setutil.cpp_C3DSLight_create_FUN_00542940 at 00542a19
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005ba9fa
;   TerminatedCString s_CFilterCache_getFilter_T_005baa0e
;   TerminatedCString s_core_dfilter_cpp_005baa39
;   TerminatedCString s_CFilterCache_getFilter_O_005baa4d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_004598a0
;   core_dfilter.cpp_CDemonFilter_init_FUN_00459b80
;   core_dfilter.cpp_CDemonFilter_load_FUN_00459980
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459710
        ;   Label: core_dfilter.cpp_FUN_00459710
    PUSH ESI                            ; 00459711
    PUSH EBP                            ; 00459712
    MOV EBP,dword ptr [ESP + 0x10]      ; 00459713
    MOV EDX,dword ptr [EBP]             ; 00459717
    XOR EBX,EBX                         ; 0045971a
    TEST EDX,EDX                        ; 0045971c
    JLE 0x00459744                      ; 0045971e
        ;   XREF to: 00459744 (CONDITIONAL_JUMP)  ; LAB_00459744
    LEA ESI,[EBP + 0x4]                 ; 00459720
    MOV EAX,dword ptr [ESP + 0x14]      ; 00459723
        ;   Label: LAB_00459723
    PUSH EAX                            ; 00459727
    PUSH ESI                            ; 00459728
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00459729
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045972e
    TEST EAX,EAX                        ; 00459731
    JZ 0x00459817                       ; 00459733
        ;   XREF to: 00459817 (CONDITIONAL_JUMP)  ; LAB_00459817
    INC EBX                             ; 00459739
    MOV ECX,dword ptr [EBP]             ; 0045973a
    ADD ESI,0x28                        ; 0045973d
    CMP EBX,ECX                         ; 00459740
    JL 0x00459723                       ; 00459742
        ;   XREF to: 00459723 (CONDITIONAL_JUMP)  ; LAB_00459723
    PUSH EDI                            ; 00459744
        ;   Label: LAB_00459744
    CMP dword ptr [EBP],0x40            ; 00459745
    JGE 0x00459822                      ; 00459749
        ;   XREF to: 00459822 (CONDITIONAL_JUMP)  ; LAB_00459822
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045974f
        ;   Label: LAB_0045974f
    LEA EAX,[EBX*0x4 + 0x0]             ; 00459753
    LEA EDI,[EBP + 0x4]                 ; 0045975a
    ADD EAX,EBX                         ; 0045975d
    MOV EDX,dword ptr [EBP]             ; 0045975f
    SHL EAX,0x3                         ; 00459762
    INC EDX                             ; 00459765
    ADD EDI,EAX                         ; 00459766
    MOV dword ptr [EBP],EDX             ; 00459768
    PUSH EDI                            ; 0045976b
    MOV AL,byte ptr [ESI]               ; 0045976c
        ;   Label: LAB_0045976c
    MOV byte ptr [EDI],AL               ; 0045976e
    CMP AL,0x0                          ; 00459770
    JZ 0x00459784                       ; 00459772
        ;   XREF to: 00459784 (CONDITIONAL_JUMP)  ; LAB_00459784
    MOV AL,byte ptr [ESI + 0x1]         ; 00459774
    ADD ESI,0x2                         ; 00459777
    MOV byte ptr [EDI + 0x1],AL         ; 0045977a
    ADD EDI,0x2                         ; 0045977d
    CMP AL,0x0                          ; 00459780
    JNZ 0x0045976c                      ; 00459782
        ;   XREF to: 0045976c (CONDITIONAL_JUMP)  ; LAB_0045976c
    POP EDI                             ; 00459784
        ;   Label: LAB_00459784
    PUSH 0x4c                           ; 00459785
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00459787
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045978c
    TEST EAX,EAX                        ; 0045978f
    JZ 0x0045979c                       ; 00459791
        ;   XREF to: 0045979c (CONDITIONAL_JUMP)  ; LAB_0045979c
    PUSH EAX                            ; 00459793
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_004598a0 ; 00459794
        ;   XREF to: 004598a0 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004598a0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 00459799
    MOV ESI,EAX                         ; 0045979c
        ;   Label: LAB_0045979c
    MOV dword ptr [EBP + EBX*0x4 + 0xa04],ESI ; 0045979e
    TEST ESI,ESI                        ; 004597a5
    JNZ 0x004597cc                      ; 004597a7
        ;   XREF to: 004597cc (CONDITIONAL_JUMP)  ; LAB_004597cc
    MOV ESI,0x5baa39                    ; 004597a9 | = "..\\core\\dfilter.cpp"
    MOV EDI,0x59                        ; 004597ae
    PUSH 0x5baa4d                       ; 004597b3 | = "CFilterCache::getFilter - Out of memory"
    MOV dword ptr [0x01d71de0],ESI      ; 004597b8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004597be | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004597c4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004597c9
    LEA ESI,[EBX*0x4 + 0x0]             ; 004597cc
        ;   Label: LAB_004597cc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004597d3
    ADD ESI,EBP                         ; 004597d7
    PUSH EAX                            ; 004597d9
    MOV EDX,dword ptr [ESI + 0xa04]     ; 004597da
    PUSH EDX                            ; 004597e0
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_00459980 ; 004597e1
        ;   XREF to: 00459980 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_00459980(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004597e6
    CMP dword ptr [ESP + 0x1c],0x0      ; 004597e9
    JZ 0x00459806                       ; 004597ee
        ;   XREF to: 00459806 (CONDITIONAL_JUMP)  ; LAB_00459806
    PUSH 0x1                            ; 004597f0
    MOV EDI,dword ptr [ESI + 0xa04]     ; 004597f2
    PUSH 0x3faa9fbe                     ; 004597f8
    PUSH EDI                            ; 004597fd
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_00459b80 ; 004597fe
        ;   XREF to: 00459b80 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_00459b80(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 00459803
    SHL EBX,0x2                         ; 00459806
        ;   Label: LAB_00459806
    LEA EAX,[EBX + EBP*0x1]             ; 00459809
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0045980c
    POP EDI                             ; 00459812
    POP EBP                             ; 00459813
    POP ESI                             ; 00459814
    POP EBX                             ; 00459815
    RET                                 ; 00459816
    MOV EAX,dword ptr [EBP + EBX*0x4 + 0xa04] ; 00459817
        ;   Label: LAB_00459817
    POP EBP                             ; 0045981e
    POP ESI                             ; 0045981f
    POP EBX                             ; 00459820
    RET                                 ; 00459821
    MOV EDI,0x5ba9fa                    ; 00459822 | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_00459822
    MOV EAX,0x55                        ; 00459827
    PUSH 0x5baa0e                       ; 0045982c | = "CFilterCache::getFilter - Too many fi..."
    MOV dword ptr [0x01d71de0],EDI      ; 00459831 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00459837 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045983c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00459841
    JMP 0x0045974f                      ; 00459844
        ;   XREF to: 0045974f (UNCONDITIONAL_JUMP)  ; LAB_0045974f

