; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_getFilter_FUN_00447660(CFilterCache *this_ptr,char *filter_name,int blend_filter)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filter_name
; int              Stack[0xc]:4   blend_filter
;
; XREF[3]:
;   core_lightgun.cpp_CLightGun_process_FUN_004e38d0 at 004e39f6
;   core_setutil.cpp_C3DSLight_addFilter_FUN_0053bbc0 at 0053bc53
;   core_setutil.cpp_C3DSLight_create_FUN_0053b6b0 at 0053b789
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005ceaa8
;   TerminatedCString s_CFilterCache_getFilter_T_005ceabc
;   TerminatedCString s_core_dfilter_cpp_005ceae7
;   TerminatedCString s_CFilterCache_getFilter_O_005ceafb
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0
;   core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0
;   core_dfilter.cpp_CDemonFilter_load_FUN_004478d0
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_FUN_005b8be2
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447660
        ;   Label: core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660
    PUSH ESI                            ; 00447661
    PUSH EBP                            ; 00447662
    MOV EBP,dword ptr [ESP + 0x10]      ; 00447663
    MOV EDX,dword ptr [EBP]             ; 00447667
    XOR EBX,EBX                         ; 0044766a
    TEST EDX,EDX                        ; 0044766c
    JLE 0x00447694                      ; 0044766e
        ;   XREF to: 00447694 (CONDITIONAL_JUMP)  ; LAB_00447694
    LEA ESI,[EBP + 0x4]                 ; 00447670
    MOV EAX,dword ptr [ESP + 0x14]      ; 00447673
        ;   Label: LAB_00447673
    PUSH EAX                            ; 00447677
    PUSH ESI                            ; 00447678
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00447679
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044767e
    TEST EAX,EAX                        ; 00447681
    JZ 0x00447767                       ; 00447683
        ;   XREF to: 00447767 (CONDITIONAL_JUMP)  ; LAB_00447767
    INC EBX                             ; 00447689
    MOV ECX,dword ptr [EBP]             ; 0044768a
    ADD ESI,0x28                        ; 0044768d
    CMP EBX,ECX                         ; 00447690
    JL 0x00447673                       ; 00447692
        ;   XREF to: 00447673 (CONDITIONAL_JUMP)  ; LAB_00447673
    PUSH EDI                            ; 00447694
        ;   Label: LAB_00447694
    CMP dword ptr [EBP],0x40            ; 00447695
    JGE 0x00447772                      ; 00447699
        ;   XREF to: 00447772 (CONDITIONAL_JUMP)  ; LAB_00447772
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044769f
        ;   Label: LAB_0044769f
    LEA EAX,[EBX*0x4 + 0x0]             ; 004476a3
    LEA EDI,[EBP + 0x4]                 ; 004476aa
    ADD EAX,EBX                         ; 004476ad
    MOV EDX,dword ptr [EBP]             ; 004476af
    SHL EAX,0x3                         ; 004476b2
    INC EDX                             ; 004476b5
    ADD EDI,EAX                         ; 004476b6
    MOV dword ptr [EBP],EDX             ; 004476b8
    PUSH EDI                            ; 004476bb
    MOV AL,byte ptr [ESI]               ; 004476bc
        ;   Label: LAB_004476bc
    MOV byte ptr [EDI],AL               ; 004476be
    CMP AL,0x0                          ; 004476c0
    JZ 0x004476d4                       ; 004476c2
        ;   XREF to: 004476d4 (CONDITIONAL_JUMP)  ; LAB_004476d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004476c4
    ADD ESI,0x2                         ; 004476c7
    MOV byte ptr [EDI + 0x1],AL         ; 004476ca
    ADD EDI,0x2                         ; 004476cd
    CMP AL,0x0                          ; 004476d0
    JNZ 0x004476bc                      ; 004476d2
        ;   XREF to: 004476bc (CONDITIONAL_JUMP)  ; LAB_004476bc
    POP EDI                             ; 004476d4
        ;   Label: LAB_004476d4
    PUSH 0x4c                           ; 004476d5
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004476d7
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004476dc
    TEST EAX,EAX                        ; 004476df
    JZ 0x004476ec                       ; 004476e1
        ;   XREF to: 004476ec (CONDITIONAL_JUMP)  ; LAB_004476ec
    PUSH EAX                            ; 004476e3
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0 ; 004476e4
        ;   XREF to: 004477f0 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004477f0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004476e9
    MOV ESI,EAX                         ; 004476ec
        ;   Label: LAB_004476ec
    MOV dword ptr [EBP + EBX*0x4 + 0xa04],ESI ; 004476ee
    TEST ESI,ESI                        ; 004476f5
    JNZ 0x0044771c                      ; 004476f7
        ;   XREF to: 0044771c (CONDITIONAL_JUMP)  ; LAB_0044771c
    MOV ESI,0x5ceae7                    ; 004476f9 | = "..\\core\\dfilter.cpp"
    MOV EDI,0x59                        ; 004476fe
    PUSH 0x5ceafb                       ; 00447703 | = "CFilterCache::getFilter - Out of memory"
    MOV dword ptr [0x01d046a0],ESI      ; 00447708 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0044770e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00447714
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00447719
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044771c
        ;   Label: LAB_0044771c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00447723
    ADD ESI,EBP                         ; 00447727
    PUSH EAX                            ; 00447729
    MOV EDX,dword ptr [ESI + 0xa04]     ; 0044772a
    PUSH EDX                            ; 00447730
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_004478d0 ; 00447731
        ;   XREF to: 004478d0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_004478d0(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00447736
    CMP dword ptr [ESP + 0x1c],0x0      ; 00447739
    JZ 0x00447756                       ; 0044773e
        ;   XREF to: 00447756 (CONDITIONAL_JUMP)  ; LAB_00447756
    PUSH 0x1                            ; 00447740
    MOV EDI,dword ptr [ESI + 0xa04]     ; 00447742
    PUSH 0x3faa9fbe                     ; 00447748
    PUSH EDI                            ; 0044774d
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0 ; 0044774e
        ;   XREF to: 00447ad0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 00447753
    SHL EBX,0x2                         ; 00447756
        ;   Label: LAB_00447756
    LEA EAX,[EBX + EBP*0x1]             ; 00447759
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0044775c
    POP EDI                             ; 00447762
    POP EBP                             ; 00447763
    POP ESI                             ; 00447764
    POP EBX                             ; 00447765
    RET                                 ; 00447766
    MOV EAX,dword ptr [EBP + EBX*0x4 + 0xa04] ; 00447767
        ;   Label: LAB_00447767
    POP EBP                             ; 0044776e
    POP ESI                             ; 0044776f
    POP EBX                             ; 00447770
    RET                                 ; 00447771
    MOV EDI,0x5ceaa8                    ; 00447772 | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_00447772
    MOV EAX,0x55                        ; 00447777
    PUSH 0x5ceabc                       ; 0044777c | = "CFilterCache::getFilter - Too many fi..."
    MOV dword ptr [0x01d046a0],EDI      ; 00447781 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00447787 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044778c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00447791
    JMP 0x0044769f                      ; 00447794
        ;   XREF to: 0044769f (UNCONDITIONAL_JUMP)  ; LAB_0044769f

