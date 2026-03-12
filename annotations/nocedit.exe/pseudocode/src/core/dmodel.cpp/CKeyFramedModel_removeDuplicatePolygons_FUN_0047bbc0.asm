; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x3c]:4  local_3c
; CKeyFramedModel * Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; SMRGLPrimitiveQuad * Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b225
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047ddaa
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bbc0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
    PUSH ESI                            ; 0047bbc1
    PUSH EDI                            ; 0047bbc2
    PUSH EBP                            ; 0047bbc3
    SUB ESP,0x2c                        ; 0047bbc4
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047bbc7
    PUSH EDX                            ; 0047bbcb
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047bbcc
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047bbd1
    XOR ECX,ECX                         ; 0047bbd4
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047bbd6
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047bbda
    MOV ESI,dword ptr [EAX + 0x5584]    ; 0047bbde
    MOV dword ptr [ESP],ECX             ; 0047bbe4
    TEST ESI,ESI                        ; 0047bbe7
    JLE 0x0047bd07                      ; 0047bbe9
        ;   XREF to: 0047bd07 (CONDITIONAL_JUMP)  ; LAB_0047bd07
    MOV dword ptr [ESP + 0x4],EAX       ; 0047bbef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047bbf3
        ;   Label: LAB_0047bbf3
    MOV dword ptr [ESP + 0x14],EAX      ; 0047bbf7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047bbfb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047bbff
    MOV dword ptr [ESP + 0xc],EAX       ; 0047bc03
    MOV dword ptr [ESP + 0x8],EAX       ; 0047bc07
    IMUL EAX,EBX,0x48                   ; 0047bc0b
    MOV dword ptr [ESP + 0x18],EAX      ; 0047bc0e
    ADD EAX,0x48                        ; 0047bc12
    MOV dword ptr [ESP + 0x10],EAX      ; 0047bc15
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047bc19
        ;   Label: LAB_0047bc19
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047bc1d
    MOV ESI,dword ptr [EDX + 0x558c]    ; 0047bc21
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047bc27
    ADD EAX,ESI                         ; 0047bc2b
    CMP EAX,EDI                         ; 0047bc2d
    JLE 0x0047bce3                      ; 0047bc2f
        ;   XREF to: 0047bce3 (CONDITIONAL_JUMP)  ; LAB_0047bce3
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047bc35
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047bc39
    XOR EBP,EBP                         ; 0047bc3d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047bc3f
    MOV dword ptr [ESP + 0x28],EBP      ; 0047bc43
    MOV EDX,dword ptr [EDX + 0x114]     ; 0047bc47
    MOV dword ptr [ESP + 0x24],EAX      ; 0047bc4d
    ADD EBX,EDX                         ; 0047bc51
    CMP EAX,EDI                         ; 0047bc53
    JGE 0x0047bc8c                      ; 0047bc55
        ;   XREF to: 0047bc8c (CONDITIONAL_JUMP)  ; LAB_0047bc8c
    IMUL EAX,EAX,0x48                   ; 0047bc57
    ADD EAX,EDX                         ; 0047bc5a
    MOV dword ptr [ESP + 0x20],EAX      ; 0047bc5c
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047bc60
        ;   Label: LAB_0047bc60
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047bc64
    CMP EAX,dword ptr [EDX + 0x4]       ; 0047bc67
    JZ 0x0047bd1c                       ; 0047bc6a
        ;   XREF to: 0047bd1c (CONDITIONAL_JUMP)  ; LAB_0047bd1c
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047bc70
        ;   Label: LAB_0047bc70
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047bc74
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047bc78
    ADD ESI,0x48                        ; 0047bc7c
    INC EDI                             ; 0047bc7f
    MOV dword ptr [ESP + 0x20],ESI      ; 0047bc80
    MOV dword ptr [ESP + 0x24],EDI      ; 0047bc84
    CMP EDI,EBP                         ; 0047bc88
    JL 0x0047bc60                       ; 0047bc8a
        ;   XREF to: 0047bc60 (CONDITIONAL_JUMP)  ; LAB_0047bc60
    CMP dword ptr [ESP + 0x28],0x0      ; 0047bc8c
        ;   Label: LAB_0047bc8c
    JZ 0x0047bd7d                       ; 0047bc91
        ;   XREF to: 0047bd7d (CONDITIONAL_JUMP)  ; LAB_0047bd7d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047bc97
    MOV EBP,dword ptr [EAX + 0x110]     ; 0047bc9b
    DEC EBP                             ; 0047bca1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047bca2
    MOV dword ptr [EAX + 0x110],EBP     ; 0047bca6
    MOV EAX,EBP                         ; 0047bcac
    SUB EAX,EDX                         ; 0047bcae
    IMUL EAX,EAX,0x48                   ; 0047bcb0
    PUSH EAX                            ; 0047bcb3
    MOV EAX,dword ptr [ESP + 0x44]      ; 0047bcb4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047bcb8
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047bcbc
    ADD EDX,EAX                         ; 0047bcc2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047bcc4
    PUSH EDX                            ; 0047bcc8
    ADD EAX,ECX                         ; 0047bcc9
    PUSH EAX                            ; 0047bccb
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0047bccc
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047bcd1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047bcd4
    DEC dword ptr [EAX + 0x558c]        ; 0047bcd8
    JMP 0x0047bc19                      ; 0047bcde
        ;   XREF to: 0047bc19 (UNCONDITIONAL_JUMP)  ; LAB_0047bc19
    MOV EDI,dword ptr [ESP + 0x4]       ; 0047bce3
        ;   Label: LAB_0047bce3
    MOV EBP,dword ptr [ESP]             ; 0047bce7
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047bcea
    ADD EDI,0x8                         ; 0047bcee
    INC EBP                             ; 0047bcf1
    MOV ECX,dword ptr [EDX + 0x5584]    ; 0047bcf2
    MOV dword ptr [ESP + 0x4],EDI       ; 0047bcf8
    MOV dword ptr [ESP],EBP             ; 0047bcfc
    CMP EBP,ECX                         ; 0047bcff
    JL 0x0047bbf3                       ; 0047bd01
        ;   XREF to: 0047bbf3 (CONDITIONAL_JUMP)  ; LAB_0047bbf3
    MOV ESI,dword ptr [ESP + 0x40]      ; 0047bd07
        ;   Label: LAB_0047bd07
    PUSH ESI                            ; 0047bd0b
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047bd0c
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047bd11
    ADD ESP,0x2c                        ; 0047bd14
    POP EBP                             ; 0047bd17
    POP EDI                             ; 0047bd18
    POP ESI                             ; 0047bd19
    POP EBX                             ; 0047bd1a
    RET                                 ; 0047bd1b
    MOV EDI,dword ptr [EBX + 0x4]       ; 0047bd1c
        ;   Label: LAB_0047bd1c
    XOR EBP,EBP                         ; 0047bd1f
    TEST EDI,EDI                        ; 0047bd21
    JLE 0x0047bd5f                      ; 0047bd23
        ;   XREF to: 0047bd5f (CONDITIONAL_JUMP)  ; LAB_0047bd5f
    MOV ECX,0x1                         ; 0047bd25
        ;   Label: LAB_0047bd25
    MOV ESI,dword ptr [EBX + 0x4]       ; 0047bd2a
    XOR EDI,EDI                         ; 0047bd2d
    MOV dword ptr [ESP + 0x28],ECX      ; 0047bd2f
    TEST ESI,ESI                        ; 0047bd33
    JLE 0x0047bd59                      ; 0047bd35
        ;   XREF to: 0047bd59 (CONDITIONAL_JUMP)  ; LAB_0047bd59
    MOV ECX,EBP                         ; 0047bd37
    MOV ESI,EBX                         ; 0047bd39
    MOV EDX,ECX                         ; 0047bd3b
        ;   Label: LAB_0047bd3b
    MOV EAX,ECX                         ; 0047bd3d
    SAR EDX,0x1f                        ; 0047bd3f
    IDIV dword ptr [EBX + 0x4]          ; 0047bd42
    IMUL EDX,EDX,0xc                    ; 0047bd45
    LEA EAX,[EBX + EDX*0x1]             ; 0047bd48
    MOV EDX,dword ptr [ESI + 0x18]      ; 0047bd4b
    CMP EDX,dword ptr [EAX + 0x18]      ; 0047bd4e
    JZ 0x0047bd6f                       ; 0047bd51
        ;   XREF to: 0047bd6f (CONDITIONAL_JUMP)  ; LAB_0047bd6f
    XOR EDX,EDX                         ; 0047bd53
    MOV dword ptr [ESP + 0x28],EDX      ; 0047bd55
    INC EBP                             ; 0047bd59
        ;   Label: LAB_0047bd59
    CMP EBP,dword ptr [EBX + 0x4]       ; 0047bd5a
    JL 0x0047bd25                       ; 0047bd5d
        ;   XREF to: 0047bd25 (CONDITIONAL_JUMP)  ; LAB_0047bd25
    CMP dword ptr [ESP + 0x28],0x0      ; 0047bd5f
        ;   Label: LAB_0047bd5f
    JNZ 0x0047bc8c                      ; 0047bd64
        ;   XREF to: 0047bc8c (CONDITIONAL_JUMP)  ; LAB_0047bc8c
    JMP 0x0047bc70                      ; 0047bd6a
        ;   XREF to: 0047bc70 (UNCONDITIONAL_JUMP)  ; LAB_0047bc70
    ADD ESI,0xc                         ; 0047bd6f
        ;   Label: LAB_0047bd6f
    INC EDI                             ; 0047bd72
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047bd73
    INC ECX                             ; 0047bd76
    CMP EDI,EAX                         ; 0047bd77
    JL 0x0047bd3b                       ; 0047bd79
        ;   XREF to: 0047bd3b (CONDITIONAL_JUMP)  ; LAB_0047bd3b
    JMP 0x0047bd59                      ; 0047bd7b
        ;   XREF to: 0047bd59 (UNCONDITIONAL_JUMP)  ; LAB_0047bd59
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047bd7d
        ;   Label: LAB_0047bd7d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047bd81
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047bd85
    ADD ESI,0x48                        ; 0047bd89
    INC EDI                             ; 0047bd8c
    ADD EBX,0x48                        ; 0047bd8d
    MOV dword ptr [ESP + 0x10],ESI      ; 0047bd90
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047bd94
    MOV dword ptr [ESP + 0x18],EBX      ; 0047bd98
    JMP 0x0047bc19                      ; 0047bd9c
        ;   XREF to: 0047bc19 (UNCONDITIONAL_JUMP)  ; LAB_0047bc19

