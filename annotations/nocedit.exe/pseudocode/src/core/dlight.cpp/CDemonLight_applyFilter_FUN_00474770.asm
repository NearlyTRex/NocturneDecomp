; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CDemonFilter *   Stack[0x8]:4   filter_ptr
; int              Stack[0xc]:4   filter_index
; int              Stack[0x10]:4   filter_pos_x
; int              Stack[0x14]:4   filter_pos_y
; Local Variables:
; uchar            Stack[-0x40]:1  local_40
; uint             Stack[-0x38]:4  local_38
; uchar *          Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
;
; XREF[8]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422ae7
;   core_boxactor.cpp_CLightActor_setupLightModel_FUN_00422d60 at 00423059
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0 at 0047286c
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 at 00476626
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 005065a0
;   core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70 at 00586ec8
;   core_setutil.cpp_C3DSLight_process_FUN_00586cb0 at 00586db1
;   core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00 at 00586f3e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474770
        ;   Label: core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
    PUSH ESI                            ; 00474771
    PUSH EDI                            ; 00474772
    PUSH EBP                            ; 00474773
    SUB ESP,0x30                        ; 00474774
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00474777
    MOV EDX,dword ptr [ESP + 0x50]      ; 0047477b
    MOV ECX,dword ptr [ESP + 0x54]      ; 0047477f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00474783
    MOV ESI,dword ptr [ESP + 0x44]      ; 00474787
    MOV EAX,dword ptr [EAX + 0x48]      ; 0047478b
    MOV dword ptr [ESI + 0x1c54],EAX    ; 0047478e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00474794
    MOV EAX,dword ptr [EAX]             ; 00474798
    MOV dword ptr [ESI + 0x1c58],EAX    ; 0047479a
    MOV EAX,dword ptr [ESP + 0x48]      ; 004747a0
    MOV EAX,dword ptr [EAX + 0x4]       ; 004747a4
    MOV dword ptr [ESI + 0x1c5c],EAX    ; 004747a7
    MOV EAX,dword ptr [ESI + 0x1c58]    ; 004747ad
    MOV dword ptr [ESI + 0x1c60],0x0    ; 004747b3
    CMP EAX,0x1                         ; 004747bd
    JLE 0x004747e0                      ; 004747c0
        ;   XREF to: 004747e0 (CONDITIONAL_JUMP)  ; LAB_004747e0
    MOV ESI,dword ptr [ESP + 0x44]      ; 004747c2
    MOV EDI,dword ptr [ESI + 0x1c60]    ; 004747c6
        ;   Label: LAB_004747c6
    INC EDI                             ; 004747cc
    SAR EAX,0x1                         ; 004747cd
    MOV dword ptr [ESI + 0x1c60],EDI    ; 004747cf
    CMP EAX,0x1                         ; 004747d5
    JG 0x004747c6                       ; 004747d8
        ;   XREF to: 004747c6 (CONDITIONAL_JUMP)  ; LAB_004747c6
    LEA EAX,[EAX]                       ; 004747da
    MOV EAX,dword ptr [ESP + 0x44]      ; 004747e0
        ;   Label: LAB_004747e0
    MOV ESI,dword ptr [ESP + 0x44]      ; 004747e4
    MOV EAX,dword ptr [EAX + 0x1c60]    ; 004747e8
    MOV dword ptr [ESI + 0x1cc8],0x8    ; 004747ee
    MOV dword ptr [ESI + 0x1c64],EAX    ; 004747f8
    MOV EAX,dword ptr [ESI + 0x1cc0]    ; 004747fe
    MOV dword ptr [ESI + 0x1ccc],0x8    ; 00474804
    CMP EAX,0x1                         ; 0047480e
    JLE 0x00474840                      ; 00474811
        ;   XREF to: 00474840 (CONDITIONAL_JUMP)  ; LAB_00474840
    MOV ESI,dword ptr [ESP + 0x44]      ; 00474813
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 00474817
        ;   Label: LAB_00474817
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0047481d
    INC EBP                             ; 00474823
    INC EDI                             ; 00474824
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 00474825
    SAR EAX,0x1                         ; 0047482b
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0047482d
    CMP EAX,0x1                         ; 00474833
    JG 0x00474817                       ; 00474836
        ;   XREF to: 00474817 (CONDITIONAL_JUMP)  ; LAB_00474817
    LEA EAX,[EAX]                       ; 00474838
    MOV EDX,EDX                         ; 0047483e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00474840
        ;   Label: LAB_00474840
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 00474844
    CMP EAX,0x100                       ; 0047484a
    JGE 0x00474880                      ; 0047484f
        ;   XREF to: 00474880 (CONDITIONAL_JUMP)  ; LAB_00474880
    MOV ESI,dword ptr [ESP + 0x44]      ; 00474851
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 00474855
        ;   Label: LAB_00474855
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0047485b
    INC EBP                             ; 00474861
    INC EDI                             ; 00474862
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 00474863
    ADD EAX,EAX                         ; 00474869
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0047486b
    CMP EAX,0x100                       ; 00474871
    JL 0x00474855                       ; 00474876
        ;   XREF to: 00474855 (CONDITIONAL_JUMP)  ; LAB_00474855
    LEA EAX,[EAX]                       ; 00474878
    MOV EDX,EDX                         ; 0047487e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00474880
        ;   Label: LAB_00474880
    MOV ESI,dword ptr [EAX + 0x1ccc]    ; 00474884
    MOV EBP,dword ptr [EAX + 0x1cc8]    ; 0047488a
    SUB ESI,EBX                         ; 00474890
    SUB EBP,EBX                         ; 00474892
    MOV dword ptr [EAX + 0x1ccc],ESI    ; 00474894
    MOV dword ptr [EAX + 0x1cc8],EBP    ; 0047489a
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 004748a0
    MOV EBX,dword ptr [ESP + 0x44]      ; 004748a6
    DEC EAX                             ; 004748aa
    MOV EDI,dword ptr [EBX + 0x1c6c]    ; 004748ab
    MOV dword ptr [EBX + 0x1c68],EAX    ; 004748b1
    TEST EDI,EDI                        ; 004748b7
    JZ 0x00474a57                       ; 004748b9
        ;   XREF to: 00474a57 (CONDITIONAL_JUMP)  ; LAB_00474a57
    MOV EAX,EDX                         ; 004748bf
    MOV dword ptr [ESP + 0xc],EDI       ; 004748c1
    XOR EBP,EBP                         ; 004748c5
    SAR EAX,0x8                         ; 004748c7
    AND EDX,0xff                        ; 004748ca
    MOV dword ptr [ESP + 0x10],EBP      ; 004748d0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004748d4
    MOV dword ptr [ESP + 0x24],EDX      ; 004748d8
    MOV EAX,ECX                         ; 004748dc
    MOV EDX,dword ptr [EBX + 0x1c5c]    ; 004748de
    SAR EAX,0x8                         ; 004748e4
    AND ECX,0xff                        ; 004748e7
    MOV dword ptr [ESP + 0x4],EAX       ; 004748ed
    MOV dword ptr [ESP + 0x18],ECX      ; 004748f1
    TEST EDX,EDX                        ; 004748f5
    JLE 0x00474a43                      ; 004748f7
        ;   XREF to: 00474a43 (CONDITIONAL_JUMP)  ; LAB_00474a43
    MOV EAX,0xff                        ; 004748fd
    MOV EBP,dword ptr [ESP + 0x24]      ; 00474902
    SUB EAX,EBP                         ; 00474906
    MOV dword ptr [ESP + 0x20],EAX      ; 00474908
    MOV EAX,0xff                        ; 0047490c
    SUB EAX,ECX                         ; 00474911
    MOV dword ptr [ESP + 0x14],EAX      ; 00474913
    MOV EAX,dword ptr [ESP + 0x4]       ; 00474917
    INC EAX                             ; 0047491b
    MOV dword ptr [ESP + 0x8],EAX       ; 0047491c
    MOV EAX,dword ptr [ESP + 0x44]      ; 00474920
        ;   Label: LAB_00474920
    MOV ECX,dword ptr [ESP + 0x10]      ; 00474924
    MOV EBX,dword ptr [ESP + 0x4]       ; 00474928
    MOV EDX,dword ptr [ESP + 0x44]      ; 0047492c
    MOV EAX,dword ptr [EAX + 0x1c5c]    ; 00474930
    ADD ECX,EBX                         ; 00474936
    DEC EAX                             ; 00474938
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 00474939
    AND ECX,EAX                         ; 0047493f
    IMUL ECX,ESI                        ; 00474941
    MOV EDX,dword ptr [EDX + 0x1c54]    ; 00474944
    MOV EDI,dword ptr [ESP + 0x8]       ; 0047494a
    LEA EBX,[EDX + ECX*0x1]             ; 0047494e
    MOV ECX,dword ptr [ESP + 0x44]      ; 00474951
    AND EAX,EDI                         ; 00474955
    MOV EBP,dword ptr [ECX + 0x1c58]    ; 00474957
    IMUL EAX,EBP                        ; 0047495d
    ADD EDX,EAX                         ; 00474960
    MOV dword ptr [ESP + 0x2c],EBX      ; 00474962
    MOV dword ptr [ESP + 0x28],EDX      ; 00474966
    XOR EAX,EAX                         ; 0047496a
    TEST EBP,EBP                        ; 0047496c
    JLE 0x00474a0b                      ; 0047496e
        ;   XREF to: 00474a0b (CONDITIONAL_JUMP)  ; LAB_00474a0b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00474974
    MOV ECX,dword ptr [ESP + 0xc]       ; 00474978
    INC EBX                             ; 0047497c
    MOV EDX,dword ptr [ESP + 0x44]      ; 0047497d
        ;   Label: LAB_0047497d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00474981
    MOV EDX,dword ptr [EDX + 0x1c58]    ; 00474985
    ADD EDI,EAX                         ; 0047498b
    DEC EDX                             ; 0047498d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0047498e
    AND EDI,EDX                         ; 00474992
    MOV EBP,dword ptr [ESP + 0x20]      ; 00474994
    MOVZX ESI,byte ptr [EDI + ESI*0x1]  ; 00474998
    IMUL EBP,ESI                        ; 0047499c
    MOV ESI,EBX                         ; 0047499f
    AND ESI,EDX                         ; 004749a1
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004749a3
    MOV dword ptr [ESP],EBP             ; 004749a7
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 004749aa
    MOV EBP,dword ptr [ESP + 0x24]      ; 004749ad
    AND EDX,0xff                        ; 004749b1
    IMUL EDX,EBP                        ; 004749b7
    ADD EDX,dword ptr [ESP]             ; 004749ba
    ADD EDI,dword ptr [ESP + 0x28]      ; 004749bd
    MOV EBP,dword ptr [ESP + 0x20]      ; 004749c1
    MOVZX EDI,byte ptr [EDI]            ; 004749c5
    IMUL EDI,EBP                        ; 004749c8
    ADD ESI,dword ptr [ESP + 0x28]      ; 004749cb
    MOV EBP,dword ptr [ESP + 0x24]      ; 004749cf
    MOVZX ESI,byte ptr [ESI]            ; 004749d3
    IMUL ESI,EBP                        ; 004749d6
    ADD ESI,EDI                         ; 004749d9
    MOV EDI,dword ptr [ESP + 0x14]      ; 004749db
    IMUL EDI,EDX                        ; 004749df
    MOV EDX,dword ptr [ESP + 0x18]      ; 004749e2
    IMUL EDX,ESI                        ; 004749e6
    ADD EDX,EDI                         ; 004749e9
    SHR EDX,0x10                        ; 004749eb
    MOV dword ptr [ESP],EDX             ; 004749ee
    MOV DL,byte ptr [ESP]               ; 004749f1
    MOV byte ptr [ECX],DL               ; 004749f4
    MOV EDX,dword ptr [ESP + 0x44]      ; 004749f6
    INC ECX                             ; 004749fa
    INC EAX                             ; 004749fb
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 004749fc
    INC EBX                             ; 00474a02
    CMP EAX,ESI                         ; 00474a03
    JL 0x0047497d                       ; 00474a05
        ;   XREF to: 0047497d (CONDITIONAL_JUMP)  ; LAB_0047497d
    MOV EAX,dword ptr [ESP + 0x44]      ; 00474a0b
        ;   Label: LAB_00474a0b
    MOV ECX,dword ptr [ESP + 0xc]       ; 00474a0f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00474a13
    MOV ESI,dword ptr [ESP + 0x10]      ; 00474a17
    MOV EDX,dword ptr [ESP + 0x44]      ; 00474a1b
    INC EBX                             ; 00474a1f
    INC ESI                             ; 00474a20
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 00474a21
    MOV EDI,dword ptr [EDX + 0x1c5c]    ; 00474a27
    MOV dword ptr [ESP + 0x8],EBX       ; 00474a2d
    ADD ECX,EAX                         ; 00474a31
    MOV dword ptr [ESP + 0x10],ESI      ; 00474a33
    MOV dword ptr [ESP + 0xc],ECX       ; 00474a37
    CMP ESI,EDI                         ; 00474a3b
    JL 0x00474920                       ; 00474a3d
        ;   XREF to: 00474920 (CONDITIONAL_JUMP)  ; LAB_00474920
    MOV EAX,dword ptr [ESP + 0x44]      ; 00474a43
        ;   Label: LAB_00474a43
    MOV EDX,dword ptr [ESP + 0x44]      ; 00474a47
    MOV EAX,dword ptr [EAX + 0x1c6c]    ; 00474a4b
    MOV dword ptr [EDX + 0x1c54],EAX    ; 00474a51
    MOV ESI,dword ptr [ESP + 0x48]      ; 00474a57
        ;   Label: LAB_00474a57
    MOV EDI,dword ptr [ESP + 0x44]      ; 00474a5b
    ADD ESI,0x8                         ; 00474a5f
    ADD EDI,0x1c74                      ; 00474a62
    PUSH EDI                            ; 00474a68
    MOV AL,byte ptr [ESI]               ; 00474a69
        ;   Label: LAB_00474a69
    MOV byte ptr [EDI],AL               ; 00474a6b
    CMP AL,0x0                          ; 00474a6d
    JZ 0x00474a81                       ; 00474a6f
        ;   XREF to: 00474a81 (CONDITIONAL_JUMP)  ; LAB_00474a81
    MOV AL,byte ptr [ESI + 0x1]         ; 00474a71
    ADD ESI,0x2                         ; 00474a74
    MOV byte ptr [EDI + 0x1],AL         ; 00474a77
    ADD EDI,0x2                         ; 00474a7a
    CMP AL,0x0                          ; 00474a7d
    JNZ 0x00474a69                      ; 00474a7f
        ;   XREF to: 00474a69 (CONDITIONAL_JUMP)  ; LAB_00474a69
    POP EDI                             ; 00474a81
        ;   Label: LAB_00474a81
    ADD ESP,0x30                        ; 00474a82
    POP EBP                             ; 00474a85
    POP EDI                             ; 00474a86
    POP ESI                             ; 00474a87
    POP EBX                             ; 00474a88
    RET                                 ; 00474a89

