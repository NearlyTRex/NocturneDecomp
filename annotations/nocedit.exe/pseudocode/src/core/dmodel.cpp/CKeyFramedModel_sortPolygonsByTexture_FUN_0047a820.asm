; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; CKeyFramedModel * Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a7f4
;
; Referenced Globals:
;   WatcomTypeInfo g_RA4HQPointTypeInfo
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   crt_memory.c___arrcopy_FUN_00600bc2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a820
        ;   Label: core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
    PUSH ESI                            ; 0047a821
    PUSH EDI                            ; 0047a822
    PUSH EBP                            ; 0047a823
    SUB ESP,0x6c                        ; 0047a824
    MOV EDX,dword ptr [ESP + 0x80]      ; 0047a827
    PUSH EDX                            ; 0047a82e
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047a82f
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047a834
    XOR ECX,ECX                         ; 0047a837
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047a839
    MOV dword ptr [ESP + 0x58],ECX      ; 0047a840
    MOV ESI,dword ptr [EAX + 0x5584]    ; 0047a844
    MOV dword ptr [ESP + 0x54],ECX      ; 0047a84a
    TEST ESI,ESI                        ; 0047a84e
    JLE 0x0047a9e3                      ; 0047a850
        ;   XREF to: 0047a9e3 (CONDITIONAL_JUMP)  ; LAB_0047a9e3
    MOV dword ptr [ESP + 0x50],EAX      ; 0047a856
    MOV EDX,dword ptr [ESP + 0x50]      ; 0047a85a
        ;   Label: LAB_0047a85a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047a85e
    MOV EBX,dword ptr [EDX + 0x558c]    ; 0047a862
    ADD EAX,EBX                         ; 0047a868
    MOV dword ptr [ESP + 0x4c],EAX      ; 0047a86a
    DEC EAX                             ; 0047a86e
    MOV ESI,dword ptr [ESP + 0x58]      ; 0047a86f
    MOV dword ptr [ESP + 0x5c],EAX      ; 0047a873
    CMP EAX,ESI                         ; 0047a877
    JLE 0x0047a9b2                      ; 0047a879
        ;   XREF to: 0047a9b2 (CONDITIONAL_JUMP)  ; LAB_0047a9b2
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0047a87f
        ;   Label: LAB_0047a87f
    MOV EBP,dword ptr [ESP + 0x58]      ; 0047a883
    CMP EBP,EDX                         ; 0047a887
    JGE 0x0047a99d                      ; 0047a889
        ;   XREF to: 0047a99d (CONDITIONAL_JUMP)  ; LAB_0047a99d
    LEA EBX,[EBP*0x4 + 0x0]             ; 0047a88f
    IMUL EAX,EBP,0x48                   ; 0047a896
    MOV dword ptr [ESP + 0x68],EAX      ; 0047a899
    ADD EAX,0x48                        ; 0047a89d
    MOV dword ptr [ESP + 0x64],EAX      ; 0047a8a0
    MOV EDI,dword ptr [ESP + 0x80]      ; 0047a8a4
        ;   Label: LAB_0047a8a4
    MOV EDI,dword ptr [EDI + 0x118]     ; 0047a8ab
    MOV EAX,dword ptr [EDI + EBX*0x1]   ; 0047a8b1
    CMP EAX,EAX                         ; 0047a8b4
    JLE 0x0047a977                      ; 0047a8b6
        ;   XREF to: 0047a977 (CONDITIONAL_JUMP)  ; LAB_0047a977
    LEA EAX,[EBP + 0x1]                 ; 0047a8bc
    MOV EDI,dword ptr [ESP + 0x80]      ; 0047a8bf
    MOV dword ptr [ESP + 0x60],EAX      ; 0047a8c6
    MOV EDI,dword ptr [EDI + 0x114]     ; 0047a8ca
    MOV EAX,dword ptr [ESP + 0x64]      ; 0047a8d0
    MOV ESI,dword ptr [ESP + 0x68]      ; 0047a8d4
    ADD EAX,EDI                         ; 0047a8d8
    ADD EDI,ESI                         ; 0047a8da
    MOV dword ptr [ESP + 0x48],EAX      ; 0047a8dc
    MOV EAX,dword ptr [EDI]             ; 0047a8e0
    MOV dword ptr [ESP],EAX             ; 0047a8e2
    MOV EAX,dword ptr [EDI + 0x4]       ; 0047a8e5
    MOV dword ptr [ESP + 0x4],EAX       ; 0047a8e8
    MOV EAX,dword ptr [EDI + 0x8]       ; 0047a8ec
    MOV dword ptr [ESP + 0x8],EAX       ; 0047a8ef
    MOV EAX,dword ptr [EDI + 0xc]       ; 0047a8f3
    MOV dword ptr [ESP + 0xc],EAX       ; 0047a8f6
    MOV EAX,dword ptr [EDI + 0x10]      ; 0047a8fa
    MOV dword ptr [ESP + 0x10],EAX      ; 0047a8fd
    PUSH 0x65c9f0                       ; 0047a901 | g_RA4HQPointTypeInfo
    MOV EAX,dword ptr [EDI + 0x14]      ; 0047a906
    PUSH 0x4                            ; 0047a909
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047a90b
    LEA EAX,[EDI + 0x18]                ; 0047a90f
    PUSH EAX                            ; 0047a912
    LEA EAX,[ESP + 0x24]                ; 0047a913
    PUSH EAX                            ; 0047a917
    CALL crt_memory.c___arrcopy_FUN_00600bc2 ; 0047a918
        ;   XREF to: 00600bc2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrcopy_FUN_00600bc2(void * dest, void * source, int count, WatcomTypeInfo * type_info)
    ADD ESP,0x10                        ; 0047a91d
    MOV ECX,0x12                        ; 0047a920
    MOV ESI,dword ptr [ESP + 0x48]      ; 0047a925
    MOVSD.REP ES:EDI,ESI                ; 0047a929
    MOV ECX,0x12                        ; 0047a92b
    MOV EDI,dword ptr [ESP + 0x48]      ; 0047a930
    MOV ESI,ESP                         ; 0047a934
    MOVSD.REP ES:EDI,ESI                ; 0047a936
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047a938
    LEA EDI,[EBX + 0x4]                 ; 0047a93f
    MOV EAX,dword ptr [EAX + 0x118]     ; 0047a942
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 0047a948
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 0047a94b
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 0047a94e
    MOV dword ptr [EDI + EAX*0x1],ECX   ; 0047a951
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047a954
    MOV EDI,dword ptr [EAX + 0x11c]     ; 0047a95b
    TEST EDI,EDI                        ; 0047a961
    JZ 0x0047a977                       ; 0047a963
        ;   XREF to: 0047a977 (CONDITIONAL_JUMP)  ; LAB_0047a977
    MOV EAX,EDI                         ; 0047a965
    MOV EDI,dword ptr [ESP + 0x60]      ; 0047a967
    MOV DH,byte ptr [EAX + EBP*0x1]     ; 0047a96b
    MOV DL,byte ptr [EDI + EAX*0x1]     ; 0047a96e
    MOV byte ptr [EAX + EBP*0x1],DL     ; 0047a971
    MOV byte ptr [EDI + EAX*0x1],DH     ; 0047a974
    MOV ECX,dword ptr [ESP + 0x68]      ; 0047a977
        ;   Label: LAB_0047a977
    MOV ESI,dword ptr [ESP + 0x64]      ; 0047a97b
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0047a97f
    ADD EBX,0x4                         ; 0047a983
    INC EBP                             ; 0047a986
    ADD ECX,0x48                        ; 0047a987
    ADD ESI,0x48                        ; 0047a98a
    MOV dword ptr [ESP + 0x68],ECX      ; 0047a98d
    MOV dword ptr [ESP + 0x64],ESI      ; 0047a991
    CMP EBP,EDI                         ; 0047a995
    JL 0x0047a8a4                       ; 0047a997
        ;   XREF to: 0047a8a4 (CONDITIONAL_JUMP)  ; LAB_0047a8a4
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0047a99d
        ;   Label: LAB_0047a99d
    DEC EDI                             ; 0047a9a1
    MOV EBP,dword ptr [ESP + 0x58]      ; 0047a9a2
    MOV dword ptr [ESP + 0x5c],EDI      ; 0047a9a6
    CMP EDI,EBP                         ; 0047a9aa
    JG 0x0047a87f                       ; 0047a9ac
        ;   XREF to: 0047a87f (CONDITIONAL_JUMP)  ; LAB_0047a87f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047a9b2
        ;   Label: LAB_0047a9b2
    MOV EDI,dword ptr [ESP + 0x50]      ; 0047a9b6
    MOV EBP,dword ptr [ESP + 0x54]      ; 0047a9ba
    MOV EDX,dword ptr [ESP + 0x80]      ; 0047a9be
    MOV dword ptr [ESP + 0x58],EAX      ; 0047a9c5
    ADD EDI,0x8                         ; 0047a9c9
    INC EBP                             ; 0047a9cc
    MOV ECX,dword ptr [EDX + 0x5584]    ; 0047a9cd
    MOV dword ptr [ESP + 0x50],EDI      ; 0047a9d3
    MOV dword ptr [ESP + 0x54],EBP      ; 0047a9d7
    CMP EBP,ECX                         ; 0047a9db
    JL 0x0047a85a                       ; 0047a9dd
        ;   XREF to: 0047a85a (CONDITIONAL_JUMP)  ; LAB_0047a85a
    MOV EBP,dword ptr [ESP + 0x80]      ; 0047a9e3
        ;   Label: LAB_0047a9e3
    PUSH EBP                            ; 0047a9ea
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047a9eb
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047a9f0
    ADD ESP,0x6c                        ; 0047a9f3
    POP EBP                             ; 0047a9f6
    POP EDI                             ; 0047a9f7
    POP ESI                             ; 0047a9f8
    POP EBX                             ; 0047a9f9
    RET                                 ; 0047a9fa

