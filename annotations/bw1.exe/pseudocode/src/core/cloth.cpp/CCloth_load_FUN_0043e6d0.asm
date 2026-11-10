; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cloth_cpp_CCloth_load_FUN_0043e6d0(CCloth *this_ptr,char *filename)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_cloth.cpp_CClothList_load_FUN_00441cc0 at 00441d36
;   core_gabriela.cpp_CGabriella_setup_FUN_004c6390 at 004c63c9
;   core_mimic.cpp_CMimic_setup_FUN_0050f290 at 0050f469
;   core_svetlana.cpp_CSvetlana_setup_FUN_00592e90 at 00593083
;   core_vampboss.cpp_CVampireBoss_setup_FUN_005a52a0 at 005a52e2
;
; Referenced Globals:
;   undefined4 DAT_005d673e
;   TerminatedCString s_models_005d6741
;   TerminatedCString s_core_cloth_cpp_005d6748
;   TerminatedCString s_CCloth_load_Unable_to_op_005d675a
;   undefined4 DAT_005d6780
;   TerminatedCString s_core_cloth_cpp_005d6784
;   TerminatedCString s_s_is_version_d_this_EXE_005d6796
;   undefined4 DAT_005d67de
;   TerminatedCString s_f_f_f_f_f_f_005d67e2
;   TerminatedCString s_f_f_f_f_f_f_f_f_005d67f5
;   undefined4 DAT_005d680e
;   undefined4 DAT_005d6812
;   undefined4 DAT_005d6816
;   undefined4 DAT_005d681a
;   undefined4 DAT_005d681e
;   ... and 12 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_allocMemory_FUN_0043e640
;   core_cloth.cpp_FUN_0043ec40
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00467bc0
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e6d0
        ;   Label: core_cloth.cpp_CCloth_load_FUN_0043e6d0
    PUSH ESI                            ; 0043e6d1
    PUSH EDI                            ; 0043e6d2
    PUSH EBP                            ; 0043e6d3
    SUB ESP,0x228                       ; 0043e6d4
    MOV ESI,dword ptr [ESP + 0x23c]     ; 0043e6da
    MOV EBX,dword ptr [ESP + 0x240]     ; 0043e6e1
    PUSH 0x5d673e                       ; 0043e6e8 | DAT_005d673e
    PUSH EBX                            ; 0043e6ed
    PUSH 0x5d6741                       ; 0043e6ee | = "models"
    CALL engine_dosio.cpp_FUN_00479180  ; 0043e6f3
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0043e6f8
    MOV dword ptr [ESP + 0x208],EAX     ; 0043e6fb
    TEST EAX,EAX                        ; 0043e702
    JZ 0x0043ebcb                       ; 0043e704
        ;   XREF to: 0043ebcb (CONDITIONAL_JUMP)  ; LAB_0043ebcb
    MOV EDI,dword ptr [ESP + 0x208]     ; 0043e70a
        ;   Label: LAB_0043e70a
    PUSH EDI                            ; 0043e711
    PUSH 0xff                           ; 0043e712
    LEA EAX,[ESP + 0x108]               ; 0043e717
    PUSH EAX                            ; 0043e71e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e71f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0043e724
    LEA EAX,[ESI + 0x3ab20]             ; 0043e727
    PUSH EAX                            ; 0043e72d
    PUSH 0x5d6780                       ; 0043e72e | DAT_005d6780
    PUSH EDI                            ; 0043e733
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e734
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 0043e739
    ADD ESP,0xc                         ; 0043e73f
    CMP EAX,0x3                         ; 0043e742
    JLE 0x0043e76e                      ; 0043e745
        ;   XREF to: 0043e76e (CONDITIONAL_JUMP)  ; LAB_0043e76e
    PUSH 0x3                            ; 0043e747
    PUSH EAX                            ; 0043e749
    PUSH EBX                            ; 0043e74a
    MOV EDX,0x5d6784                    ; 0043e74b | = "..\\core\\cloth.cpp"
    MOV ECX,0xa2                        ; 0043e750
    PUSH 0x5d6796                       ; 0043e755 | = "%s is version %d, this .EXE is old an..."
    MOV dword ptr [0x01d1d400],EDX      ; 0043e75a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043e760 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043e766
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 0043e76b
    MOV EBP,dword ptr [ESP + 0x208]     ; 0043e76e
        ;   Label: LAB_0043e76e
    PUSH EBP                            ; 0043e775
    PUSH 0xff                           ; 0043e776
    LEA EAX,[ESP + 0x108]               ; 0043e77b
    PUSH EAX                            ; 0043e782
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e783
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0043e788
    MOV EAX,ESP                         ; 0043e78b
    PUSH EAX                            ; 0043e78d
    PUSH 0x5d67de                       ; 0043e78e | DAT_005d67de
    PUSH EBP                            ; 0043e793
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e794
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0043e799
    MOV EAX,ESP                         ; 0043e79c
    PUSH EAX                            ; 0043e79e
    PUSH ESI                            ; 0043e79f
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 ; 0043e7a0
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0043e7a5
    PUSH ESI                            ; 0043e7a8
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00467bc0 ; 0043e7a9
        ;   XREF to: 00467bc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00467bc0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0043e7ae
    PUSH EBP                            ; 0043e7b1
    PUSH 0xff                           ; 0043e7b2
    LEA EAX,[ESP + 0x108]               ; 0043e7b7
    PUSH EAX                            ; 0043e7be
    LEA EBP,[ESI + 0x37b18]             ; 0043e7bf
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e7c5
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    LEA EAX,[ESI + 0x37b1c]             ; 0043e7ca
    LEA EBX,[ESI + 0x37b20]             ; 0043e7d0
    LEA EDX,[ESI + 0x37b24]             ; 0043e7d6
    LEA EDI,[ESI + 0x37b28]             ; 0043e7dc
    ADD ESP,0xc                         ; 0043e7e2
    LEA ECX,[ESI + 0x37b2c]             ; 0043e7e5
    MOV dword ptr [ESP + 0x200],ECX     ; 0043e7eb
    CMP dword ptr [ESI + 0x3ab20],0x3   ; 0043e7f2
    JGE 0x0043ebf4                      ; 0043e7f9
        ;   XREF to: 0043ebf4 (CONDITIONAL_JUMP)  ; LAB_0043ebf4
    MOV ECX,dword ptr [ESP + 0x200]     ; 0043e7ff
    PUSH ECX                            ; 0043e806
    PUSH EDI                            ; 0043e807
    PUSH EDX                            ; 0043e808
    PUSH EBX                            ; 0043e809
    PUSH EAX                            ; 0043e80a
    PUSH EBP                            ; 0043e80b
    PUSH 0x5d67e2                       ; 0043e80c | = "%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x224]     ; 0043e811
    PUSH EBX                            ; 0043e818
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e819
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    FLD float ptr [0x005fd8e8]          ; 0043e81e | DAT_005fd8e8
    FLD float ptr [0x005fd8ec]          ; 0043e824 | DAT_005fd8ec
    FLD float ptr [0x005fd8f0]          ; 0043e82a | DAT_005fd8f0
    FLD float ptr [0x005fd8f4]          ; 0043e830 | DAT_005fd8f4
    FLD float ptr [0x005fd8f8]          ; 0043e836 | DAT_005fd8f8
    FLD float ptr [0x005fd8fc]          ; 0043e83c | DAT_005fd8fc
    FLD float ptr [0x005fd900]          ; 0043e842 | DAT_005fd900
    ADD ESP,0x20                        ; 0043e848
    FXCH ST6                            ; 0043e84b
    FSTP float ptr [ESI + 0x37b18]      ; 0043e84d
    FLD float ptr [0x005fd904]          ; 0043e853 | DAT_005fd904
    FXCH ST5                            ; 0043e859
    FSTP float ptr [ESI + 0x37b1c]      ; 0043e85b
    FXCH ST3                            ; 0043e861
    FSTP float ptr [ESI + 0x37b20]      ; 0043e863
    FXCH                                ; 0043e869
    FSTP float ptr [ESI + 0x37b24]      ; 0043e86b
    FSTP float ptr [ESI + 0x37b28]      ; 0043e871
    FSTP float ptr [ESI + 0x37b2c]      ; 0043e877
    FXCH                                ; 0043e87d
    FSTP float ptr [ESI + 0x37b30]      ; 0043e87f
    FSTP float ptr [ESI + 0x37b34]      ; 0043e885
    MOV EDI,dword ptr [ESP + 0x208]     ; 0043e88b
        ;   Label: LAB_0043e88b
    PUSH EDI                            ; 0043e892
    PUSH 0xff                           ; 0043e893
    LEA EAX,[ESP + 0x108]               ; 0043e898
    PUSH EAX                            ; 0043e89f
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e8a0
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0043e8a5
    LEA EAX,[ESI + 0x37b48]             ; 0043e8a8
    PUSH EAX                            ; 0043e8ae
    PUSH 0x5d680e                       ; 0043e8af | DAT_005d680e
    PUSH EDI                            ; 0043e8b4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e8b5
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [ESI + 0x3ab20]   ; 0043e8ba
    ADD ESP,0xc                         ; 0043e8c0
    CMP EAX,0x2                         ; 0043e8c3
    JL 0x0043ec29                       ; 0043e8c6
        ;   XREF to: 0043ec29 (CONDITIONAL_JUMP)  ; LAB_0043ec29
    PUSH EDI                            ; 0043e8cc
    PUSH 0xff                           ; 0043e8cd
    LEA EAX,[ESP + 0x108]               ; 0043e8d2
    PUSH EAX                            ; 0043e8d9
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e8da
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0043e8df
    LEA EAX,[ESI + 0x37b44]             ; 0043e8e2
    PUSH EAX                            ; 0043e8e8
    PUSH 0x5d6812                       ; 0043e8e9 | DAT_005d6812
    PUSH EDI                            ; 0043e8ee
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e8ef
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0043e8f4
    MOV EBX,dword ptr [ESP + 0x208]     ; 0043e8f7
        ;   Label: LAB_0043e8f7
    PUSH EBX                            ; 0043e8fe
    PUSH 0xff                           ; 0043e8ff
    LEA EAX,[ESP + 0x108]               ; 0043e904
    PUSH EAX                            ; 0043e90b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e90c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0043e911
    LEA EAX,[ESI + 0x39ce8]             ; 0043e914
    PUSH EAX                            ; 0043e91a
    PUSH 0x5d6816                       ; 0043e91b | DAT_005d6816
    PUSH EBX                            ; 0043e920
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e921
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0043e926
    PUSH ESI                            ; 0043e929
    CALL core_cloth.cpp_CCloth_allocMemory_FUN_0043e640 ; 0043e92a
        ;   XREF to: 0043e640 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_allocMemory_FUN_0043e640(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043e92f
    PUSH EBX                            ; 0043e932
    PUSH 0xff                           ; 0043e933
    LEA EAX,[ESP + 0x108]               ; 0043e938
    PUSH EAX                            ; 0043e93f
    XOR EBX,EBX                         ; 0043e940
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e942
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    MOV EAX,dword ptr [ESI + 0x39ce8]   ; 0043e947
    ADD ESP,0xc                         ; 0043e94d
    TEST EAX,EAX                        ; 0043e950
    JLE 0x0043e980                      ; 0043e952
        ;   XREF to: 0043e980 (CONDITIONAL_JUMP)  ; LAB_0043e980
    LEA EDI,[ESI + 0x39cec]             ; 0043e954
    PUSH EDI                            ; 0043e95a
        ;   Label: LAB_0043e95a
    PUSH 0x5d681a                       ; 0043e95b | DAT_005d681a
    MOV EDX,dword ptr [ESP + 0x210]     ; 0043e960
    PUSH EDX                            ; 0043e967
    INC EBX                             ; 0043e968
    ADD EDI,0x4                         ; 0043e969
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e96c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [ESI + 0x39ce8]   ; 0043e971
    ADD ESP,0xc                         ; 0043e977
    CMP EBX,ECX                         ; 0043e97a
    JL 0x0043e95a                       ; 0043e97c
        ;   XREF to: 0043e95a (CONDITIONAL_JUMP)  ; LAB_0043e95a
    MOV EAX,EAX                         ; 0043e97e
    PUSH ESI                            ; 0043e980
        ;   Label: LAB_0043e980
    CALL core_cloth.cpp_FUN_0043ec40    ; 0043e981
        ;   XREF to: 0043ec40 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043ec40(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043e986
    MOV EBX,dword ptr [ESP + 0x208]     ; 0043e989
    PUSH EBX                            ; 0043e990
    PUSH 0xff                           ; 0043e991
    LEA EAX,[ESP + 0x108]               ; 0043e996
    PUSH EAX                            ; 0043e99d
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0043e99e
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0043e9a3
    LEA EAX,[ESI + 0x37b4c]             ; 0043e9a6
    PUSH EAX                            ; 0043e9ac
    PUSH 0x5d681e                       ; 0043e9ad | DAT_005d681e
    PUSH EBX                            ; 0043e9b2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043e9b3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0043e9b8
    MOV EBP,dword ptr [ESI + 0x37b4c]   ; 0043e9bb
    XOR EBX,EBX                         ; 0043e9c1
    TEST EBP,EBP                        ; 0043e9c3
    JLE 0x0043eb50                      ; 0043e9c5
        ;   XREF to: 0043eb50 (CONDITIONAL_JUMP)  ; LAB_0043eb50
    LEA EAX,[ESI + 0x37b50]             ; 0043e9cb
    LEA EBP,[ESI + 0x37b64]             ; 0043e9d1
    MOV dword ptr [ESP + 0x204],EAX     ; 0043e9d7
    LEA EAX,[ESI + 0x37b68]             ; 0043e9de
    MOV dword ptr [ESP + 0x224],EAX     ; 0043e9e4
    LEA EAX,[ESI + 0x37b6c]             ; 0043e9eb
    MOV dword ptr [ESP + 0x220],EAX     ; 0043e9f1
    LEA EAX,[ESI + 0x37b70]             ; 0043e9f8
    MOV dword ptr [ESP + 0x218],EAX     ; 0043e9fe
    LEA EAX,[ESI + 0x37b74]             ; 0043ea05
    MOV dword ptr [ESP + 0x21c],EAX     ; 0043ea0b
    LEA EAX,[ESI + 0x37b78]             ; 0043ea12
    MOV dword ptr [ESP + 0x214],EAX     ; 0043ea18
    LEA EAX,[ESI + 0x37b80]             ; 0043ea1f
    LEA EDI,[ESI + 0x37b7c]             ; 0043ea25
    MOV dword ptr [ESP + 0x20c],EAX     ; 0043ea2b
    LEA EAX,[ESI + 0x37b84]             ; 0043ea32
    MOV dword ptr [ESP + 0x210],EAX     ; 0043ea38
    IMUL EAX,EBX,0xac                   ; 0043ea3f
        ;   Label: LAB_0043ea3f
    MOV ECX,dword ptr [ESP + 0x210]     ; 0043ea45
    PUSH ECX                            ; 0043ea4c
    MOV EDX,dword ptr [ESP + 0x208]     ; 0043ea4d
    PUSH EDI                            ; 0043ea54
    ADD EAX,EDX                         ; 0043ea55
    MOV EDX,dword ptr [ESP + 0x214]     ; 0043ea57
    PUSH EDX                            ; 0043ea5e
    MOV ECX,dword ptr [ESP + 0x220]     ; 0043ea5f
    PUSH ECX                            ; 0043ea66
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0043ea67
    PUSH EDX                            ; 0043ea6e
    MOV ECX,dword ptr [ESP + 0x22c]     ; 0043ea6f
    PUSH ECX                            ; 0043ea76
    MOV EDX,dword ptr [ESP + 0x238]     ; 0043ea77
    PUSH EDX                            ; 0043ea7e
    MOV ECX,dword ptr [ESP + 0x240]     ; 0043ea7f
    PUSH ECX                            ; 0043ea86
    PUSH EBP                            ; 0043ea87
    PUSH EAX                            ; 0043ea88
    PUSH 0x5d6822                       ; 0043ea89 | = "\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f,..."
    MOV EAX,dword ptr [ESP + 0x234]     ; 0043ea8e
    PUSH EAX                            ; 0043ea95
    ADD EDI,0xac                        ; 0043ea96
    INC EBX                             ; 0043ea9c
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043ea9d
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x30                        ; 0043eaa2
    ADD EBP,0xac                        ; 0043eaa5
    MOV EDX,dword ptr [ESP + 0x224]     ; 0043eaab
    MOV ECX,dword ptr [ESP + 0x220]     ; 0043eab2
    MOV EAX,dword ptr [ESP + 0x218]     ; 0043eab9
    ADD EDX,0xac                        ; 0043eac0
    ADD ECX,0xac                        ; 0043eac6
    ADD EAX,0xac                        ; 0043eacc
    MOV dword ptr [ESP + 0x224],EDX     ; 0043ead1
    MOV dword ptr [ESP + 0x220],ECX     ; 0043ead8
    MOV dword ptr [ESP + 0x218],EAX     ; 0043eadf
    MOV EDX,dword ptr [ESP + 0x21c]     ; 0043eae6
    MOV ECX,dword ptr [ESP + 0x214]     ; 0043eaed
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0043eaf4
    ADD EDX,0xac                        ; 0043eafb
    ADD ECX,0xac                        ; 0043eb01
    ADD EAX,0xac                        ; 0043eb07
    MOV dword ptr [ESP + 0x21c],EDX     ; 0043eb0c
    MOV dword ptr [ESP + 0x214],ECX     ; 0043eb13
    MOV EDX,dword ptr [ESP + 0x210]     ; 0043eb1a
    MOV dword ptr [ESP + 0x20c],EAX     ; 0043eb21
    ADD EDX,0xac                        ; 0043eb28
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 0043eb2e
    MOV dword ptr [ESP + 0x210],EDX     ; 0043eb34
    CMP EBX,ECX                         ; 0043eb3b
    JL 0x0043ea3f                       ; 0043eb3d
        ;   XREF to: 0043ea3f (CONDITIONAL_JUMP)  ; LAB_0043ea3f
    LEA EAX,[EAX]                       ; 0043eb43
    LEA EDX,[EDX]                       ; 0043eb49
    NOP                                 ; 0043eb4f
    MOV EBX,dword ptr [ESP + 0x208]     ; 0043eb50
        ;   Label: LAB_0043eb50
    PUSH EBX                            ; 0043eb57
    XOR EDI,EDI                         ; 0043eb58
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0043eb5a
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EBP,dword ptr [ESI + 0x104]     ; 0043eb5f
    ADD ESP,0x4                         ; 0043eb65
    TEST EBP,EBP                        ; 0043eb68
    JLE 0x0043ebc0                      ; 0043eb6a
        ;   XREF to: 0043ebc0 (CONDITIONAL_JUMP)  ; LAB_0043ebc0
    LEA EDX,[ESI + 0x458]               ; 0043eb6c
    XOR EBP,EBP                         ; 0043eb72
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0043eb74
        ;   Label: LAB_0043eb74
    MOV EBX,EDX                         ; 0043eb7a
    ADD EAX,EBP                         ; 0043eb7c
    INC EDI                             ; 0043eb7e
    FILD dword ptr [EAX]                ; 0043eb7f
    FMUL float ptr [0x005fd8d8]         ; 0043eb81 | DAT_005fd8d8
    FSTP float ptr [EBX]                ; 0043eb87
    FILD dword ptr [EAX + 0x4]          ; 0043eb89
    FMUL float ptr [0x005fd8d8]         ; 0043eb8c | DAT_005fd8d8
    FSTP float ptr [EBX + 0x4]          ; 0043eb92
    FILD dword ptr [EAX + 0x8]          ; 0043eb95
    FMUL float ptr [0x005fd8d8]         ; 0043eb98 | DAT_005fd8d8
    FSTP float ptr [EBX + 0x8]          ; 0043eb9e
    ADD EDX,0x11c                       ; 0043eba1
    MOV EAX,dword ptr [ESI + 0x104]     ; 0043eba7
    ADD EBP,0xc                         ; 0043ebad
    CMP EDI,EAX                         ; 0043ebb0
    JL 0x0043eb74                       ; 0043ebb2
        ;   XREF to: 0043eb74 (CONDITIONAL_JUMP)  ; LAB_0043eb74
    LEA EAX,[EAX]                       ; 0043ebb4
    LEA EDX,[EDX]                       ; 0043ebba
    ADD ESP,0x228                       ; 0043ebc0
        ;   Label: LAB_0043ebc0
    POP EBP                             ; 0043ebc6
    POP EDI                             ; 0043ebc7
    POP ESI                             ; 0043ebc8
    POP EBX                             ; 0043ebc9
    RET                                 ; 0043ebca
    PUSH EBX                            ; 0043ebcb
        ;   Label: LAB_0043ebcb
    MOV EDX,0x5d6748                    ; 0043ebcc | = "..\\core\\cloth.cpp"
    MOV ECX,0x9b                        ; 0043ebd1
    PUSH 0x5d675a                       ; 0043ebd6 | = "CCloth::load - Unable to open file %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0043ebdb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043ebe1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043ebe7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0043ebec
    JMP 0x0043e70a                      ; 0043ebef
        ;   XREF to: 0043e70a (UNCONDITIONAL_JUMP)  ; LAB_0043e70a
    LEA ECX,[ESI + 0x37b34]             ; 0043ebf4
        ;   Label: LAB_0043ebf4
    PUSH ECX                            ; 0043ebfa
    LEA ECX,[ESI + 0x37b30]             ; 0043ebfb
    PUSH ECX                            ; 0043ec01
    MOV ECX,dword ptr [ESP + 0x208]     ; 0043ec02
    PUSH ECX                            ; 0043ec09
    PUSH EDI                            ; 0043ec0a
    PUSH EDX                            ; 0043ec0b
    PUSH EBX                            ; 0043ec0c
    PUSH EAX                            ; 0043ec0d
    PUSH EBP                            ; 0043ec0e
    PUSH 0x5d67f5                       ; 0043ec0f | = "%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EBX,dword ptr [ESP + 0x22c]     ; 0043ec14
    PUSH EBX                            ; 0043ec1b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0043ec1c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x28                        ; 0043ec21
    JMP 0x0043e88b                      ; 0043ec24
        ;   XREF to: 0043e88b (UNCONDITIONAL_JUMP)  ; LAB_0043e88b
    MOV dword ptr [ESI + 0x37b44],0x0   ; 0043ec29
        ;   Label: LAB_0043ec29
    JMP 0x0043e8f7                      ; 0043ec33
        ;   XREF to: 0043e8f7 (UNCONDITIONAL_JUMP)  ; LAB_0043e8f7

