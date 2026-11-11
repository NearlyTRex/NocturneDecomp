; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dfilter_cpp_FUN_0045d7c0(int *param_1,char *param_2,int param_3)
;
;
; XREF[4]:
;   core_lightgun.cpp_CLightGun_process_FUN_00500d20 at 00500e46
;   core_lightpis.cpp_CLightPis_process_FUN_00502480 at 005025a6
;   core_setutil.cpp_C3DSLight_addFilter_FUN_0055d490 at 0055d523
;   core_setutil.cpp_C3DSLight_create_FUN_0055cf80 at 0055d059
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005d83a1
;   TerminatedCString s_CFilterCache_getFilter_T_005d83b5
;   TerminatedCString s_core_dfilter_cpp_005d83e0
;   TerminatedCString s_CFilterCache_getFilter_O_005d83f4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950
;   core_dfilter.cpp_CDemonFilter_init_FUN_0045dc30
;   core_dfilter.cpp_CDemonFilter_load_FUN_0045da30
;   core_main.c_FUN_005030e0
;   crt_memory.c_operator_new_FUN_005c0f32
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d7c0
        ;   Label: core_dfilter.cpp_FUN_0045d7c0
    PUSH ESI                            ; 0045d7c1
    PUSH EBP                            ; 0045d7c2
    MOV EBP,dword ptr [ESP + 0x10]      ; 0045d7c3
    MOV EDX,dword ptr [EBP]             ; 0045d7c7
    XOR EBX,EBX                         ; 0045d7ca
    TEST EDX,EDX                        ; 0045d7cc
    JLE 0x0045d7f4                      ; 0045d7ce
        ;   XREF to: 0045d7f4 (CONDITIONAL_JUMP)  ; LAB_0045d7f4
    LEA ESI,[EBP + 0x4]                 ; 0045d7d0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045d7d3
        ;   Label: LAB_0045d7d3
    PUSH EAX                            ; 0045d7d7
    PUSH ESI                            ; 0045d7d8
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0045d7d9
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0045d7de
    TEST EAX,EAX                        ; 0045d7e1
    JZ 0x0045d8c7                       ; 0045d7e3
        ;   XREF to: 0045d8c7 (CONDITIONAL_JUMP)  ; LAB_0045d8c7
    INC EBX                             ; 0045d7e9
    MOV ECX,dword ptr [EBP]             ; 0045d7ea
    ADD ESI,0x28                        ; 0045d7ed
    CMP EBX,ECX                         ; 0045d7f0
    JL 0x0045d7d3                       ; 0045d7f2
        ;   XREF to: 0045d7d3 (CONDITIONAL_JUMP)  ; LAB_0045d7d3
    PUSH EDI                            ; 0045d7f4
        ;   Label: LAB_0045d7f4
    CMP dword ptr [EBP],0x40            ; 0045d7f5
    JGE 0x0045d8d2                      ; 0045d7f9
        ;   XREF to: 0045d8d2 (CONDITIONAL_JUMP)  ; LAB_0045d8d2
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045d7ff
        ;   Label: LAB_0045d7ff
    LEA EAX,[EBX*0x4 + 0x0]             ; 0045d803
    LEA EDI,[EBP + 0x4]                 ; 0045d80a
    ADD EAX,EBX                         ; 0045d80d
    MOV EDX,dword ptr [EBP]             ; 0045d80f
    SHL EAX,0x3                         ; 0045d812
    INC EDX                             ; 0045d815
    ADD EDI,EAX                         ; 0045d816
    MOV dword ptr [EBP],EDX             ; 0045d818
    PUSH EDI                            ; 0045d81b
    MOV AL,byte ptr [ESI]               ; 0045d81c
        ;   Label: LAB_0045d81c
    MOV byte ptr [EDI],AL               ; 0045d81e
    CMP AL,0x0                          ; 0045d820
    JZ 0x0045d834                       ; 0045d822
        ;   XREF to: 0045d834 (CONDITIONAL_JUMP)  ; LAB_0045d834
    MOV AL,byte ptr [ESI + 0x1]         ; 0045d824
    ADD ESI,0x2                         ; 0045d827
    MOV byte ptr [EDI + 0x1],AL         ; 0045d82a
    ADD EDI,0x2                         ; 0045d82d
    CMP AL,0x0                          ; 0045d830
    JNZ 0x0045d81c                      ; 0045d832
        ;   XREF to: 0045d81c (CONDITIONAL_JUMP)  ; LAB_0045d81c
    POP EDI                             ; 0045d834
        ;   Label: LAB_0045d834
    PUSH 0x4c                           ; 0045d835
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0045d837
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045d83c
    TEST EAX,EAX                        ; 0045d83f
    JZ 0x0045d84c                       ; 0045d841
        ;   XREF to: 0045d84c (CONDITIONAL_JUMP)  ; LAB_0045d84c
    PUSH EAX                            ; 0045d843
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950 ; 0045d844
        ;   XREF to: 0045d950 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0045d849
    MOV ESI,EAX                         ; 0045d84c
        ;   Label: LAB_0045d84c
    MOV dword ptr [EBP + EBX*0x4 + 0xa04],ESI ; 0045d84e
    TEST ESI,ESI                        ; 0045d855
    JNZ 0x0045d87c                      ; 0045d857
        ;   XREF to: 0045d87c (CONDITIONAL_JUMP)  ; LAB_0045d87c
    MOV ESI,0x5d83e0                    ; 0045d859 | = "..\\core\\dfilter.cpp"
    MOV EDI,0x59                        ; 0045d85e
    PUSH 0x5d83f4                       ; 0045d863 | = "CFilterCache::getFilter - Out of memory"
    MOV dword ptr [0x01d1d400],ESI      ; 0045d868 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0045d86e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045d874
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045d879
    LEA ESI,[EBX*0x4 + 0x0]             ; 0045d87c
        ;   Label: LAB_0045d87c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045d883
    ADD ESI,EBP                         ; 0045d887
    PUSH EAX                            ; 0045d889
    MOV EDX,dword ptr [ESI + 0xa04]     ; 0045d88a
    PUSH EDX                            ; 0045d890
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_0045da30 ; 0045d891
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_0045da30(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0045d896
    CMP dword ptr [ESP + 0x1c],0x0      ; 0045d899
    JZ 0x0045d8b6                       ; 0045d89e
        ;   XREF to: 0045d8b6 (CONDITIONAL_JUMP)  ; LAB_0045d8b6
    PUSH 0x1                            ; 0045d8a0
    MOV EDI,dword ptr [ESI + 0xa04]     ; 0045d8a2
    PUSH 0x3faa9fbe                     ; 0045d8a8
    PUSH EDI                            ; 0045d8ad
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_0045dc30 ; 0045d8ae
        ;   XREF to: 0045dc30 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_0045dc30(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 0045d8b3
    SHL EBX,0x2                         ; 0045d8b6
        ;   Label: LAB_0045d8b6
    LEA EAX,[EBX + EBP*0x1]             ; 0045d8b9
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0045d8bc
    POP EDI                             ; 0045d8c2
    POP EBP                             ; 0045d8c3
    POP ESI                             ; 0045d8c4
    POP EBX                             ; 0045d8c5
    RET                                 ; 0045d8c6
    MOV EAX,dword ptr [EBP + EBX*0x4 + 0xa04] ; 0045d8c7
        ;   Label: LAB_0045d8c7
    POP EBP                             ; 0045d8ce
    POP ESI                             ; 0045d8cf
    POP EBX                             ; 0045d8d0
    RET                                 ; 0045d8d1
    MOV EDI,0x5d83a1                    ; 0045d8d2 | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_0045d8d2
    MOV EAX,0x55                        ; 0045d8d7
    PUSH 0x5d83b5                       ; 0045d8dc | = "CFilterCache::getFilter - Too many fi..."
    MOV dword ptr [0x01d1d400],EDI      ; 0045d8e1 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045d8e7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045d8ec
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045d8f1
    JMP 0x0045d7ff                      ; 0045d8f4
        ;   XREF to: 0045d7ff (UNCONDITIONAL_JUMP)  ; LAB_0045d7ff

