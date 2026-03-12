; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x34]:4  local_34
; CKeyFramedModel * Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b21a
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dd9b
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bdb0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
    PUSH ESI                            ; 0047bdb1
    PUSH EDI                            ; 0047bdb2
    PUSH EBP                            ; 0047bdb3
    SUB ESP,0x24                        ; 0047bdb4
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047bdb7
    PUSH EDX                            ; 0047bdbb
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047bdbc
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047bdc1
    XOR ECX,ECX                         ; 0047bdc4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047bdc6
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047bdca
    MOV ESI,dword ptr [EAX + 0x5584]    ; 0047bdce
    MOV dword ptr [ESP],ECX             ; 0047bdd4
    TEST ESI,ESI                        ; 0047bdd7
    JLE 0x0047bef8                      ; 0047bdd9
        ;   XREF to: 0047bef8 (CONDITIONAL_JUMP)  ; LAB_0047bef8
    MOV dword ptr [ESP + 0x4],EAX       ; 0047bddf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047bde3
        ;   Label: LAB_0047bde3
    MOV dword ptr [ESP + 0x8],EAX       ; 0047bde7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047bdeb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047bdef
    MOV dword ptr [ESP + 0x10],EAX      ; 0047bdf3
    MOV dword ptr [ESP + 0xc],EAX       ; 0047bdf7
    IMUL EAX,EBX,0x48                   ; 0047bdfb
    MOV dword ptr [ESP + 0x18],EAX      ; 0047bdfe
    ADD EAX,0x48                        ; 0047be02
    MOV dword ptr [ESP + 0x14],EAX      ; 0047be05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047be09
        ;   Label: LAB_0047be09
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047be0d
    MOV ESI,dword ptr [EDX + 0x558c]    ; 0047be11
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047be17
    ADD EAX,ESI                         ; 0047be1b
    CMP EAX,EDI                         ; 0047be1d
    JLE 0x0047bed4                      ; 0047be1f
        ;   XREF to: 0047bed4 (CONDITIONAL_JUMP)  ; LAB_0047bed4
    MOV EBX,dword ptr [ESP + 0x38]      ; 0047be25
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047be29
    MOV EBX,dword ptr [EBX + 0x114]     ; 0047be2d
    ADD EBX,EBP                         ; 0047be33
    XOR EDI,EDI                         ; 0047be35
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047be37
    XOR EBP,EBP                         ; 0047be3a
    TEST EAX,EAX                        ; 0047be3c
    JLE 0x0047be80                      ; 0047be3e
        ;   XREF to: 0047be80 (CONDITIONAL_JUMP)  ; LAB_0047be80
    MOV dword ptr [ESP + 0x20],EBX      ; 0047be40
    LEA EAX,[EBP + 0x1]                 ; 0047be44
        ;   Label: LAB_0047be44
    CMP EAX,dword ptr [EBX + 0x4]       ; 0047be47
    JGE 0x0047be6d                      ; 0047be4a
        ;   XREF to: 0047be6d (CONDITIONAL_JUMP)  ; LAB_0047be6d
    IMUL EDX,EAX,0xc                    ; 0047be4c
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047be4f
    ADD EDX,EBX                         ; 0047be53
    MOV ECX,dword ptr [ESI + 0x18]      ; 0047be55
        ;   Label: LAB_0047be55
    CMP ECX,dword ptr [EDX + 0x18]      ; 0047be58
    JNZ 0x0047be62                      ; 0047be5b
        ;   XREF to: 0047be62 (CONDITIONAL_JUMP)  ; LAB_0047be62
    MOV EDI,0x1                         ; 0047be5d
    INC EAX                             ; 0047be62
        ;   Label: LAB_0047be62
    MOV ECX,dword ptr [EBX + 0x4]       ; 0047be63
    ADD EDX,0xc                         ; 0047be66
    CMP EAX,ECX                         ; 0047be69
    JL 0x0047be55                       ; 0047be6b
        ;   XREF to: 0047be55 (CONDITIONAL_JUMP)  ; LAB_0047be55
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047be6d
        ;   Label: LAB_0047be6d
    INC EBP                             ; 0047be71
    ADD EDX,0xc                         ; 0047be72
    MOV ECX,dword ptr [EBX + 0x4]       ; 0047be75
    MOV dword ptr [ESP + 0x20],EDX      ; 0047be78
    CMP EBP,ECX                         ; 0047be7c
    JL 0x0047be44                       ; 0047be7e
        ;   XREF to: 0047be44 (CONDITIONAL_JUMP)  ; LAB_0047be44
    TEST EDI,EDI                        ; 0047be80
        ;   Label: LAB_0047be80
    JZ 0x0047bf0d                       ; 0047be82
        ;   XREF to: 0047bf0d (CONDITIONAL_JUMP)  ; LAB_0047bf0d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047be88
    MOV EBP,dword ptr [EAX + 0x110]     ; 0047be8c
    DEC EBP                             ; 0047be92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047be93
    MOV dword ptr [EAX + 0x110],EBP     ; 0047be97
    MOV EAX,EBP                         ; 0047be9d
    SUB EAX,EDX                         ; 0047be9f
    IMUL EAX,EAX,0x48                   ; 0047bea1
    PUSH EAX                            ; 0047bea4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047bea5
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047bea9
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047bead
    ADD EDX,EAX                         ; 0047beb3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047beb5
    PUSH EDX                            ; 0047beb9
    ADD EAX,ECX                         ; 0047beba
    PUSH EAX                            ; 0047bebc
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0047bebd
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047bec2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047bec5
    DEC dword ptr [EAX + 0x558c]        ; 0047bec9
    JMP 0x0047be09                      ; 0047becf
        ;   XREF to: 0047be09 (UNCONDITIONAL_JUMP)  ; LAB_0047be09
    MOV EDI,dword ptr [ESP + 0x4]       ; 0047bed4
        ;   Label: LAB_0047bed4
    MOV EBP,dword ptr [ESP]             ; 0047bed8
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047bedb
    ADD EDI,0x8                         ; 0047bedf
    INC EBP                             ; 0047bee2
    MOV ECX,dword ptr [EDX + 0x5584]    ; 0047bee3
    MOV dword ptr [ESP + 0x4],EDI       ; 0047bee9
    MOV dword ptr [ESP],EBP             ; 0047beed
    CMP EBP,ECX                         ; 0047bef0
    JL 0x0047bde3                       ; 0047bef2
        ;   XREF to: 0047bde3 (CONDITIONAL_JUMP)  ; LAB_0047bde3
    MOV EBX,dword ptr [ESP + 0x38]      ; 0047bef8
        ;   Label: LAB_0047bef8
    PUSH EBX                            ; 0047befc
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 0047befd
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047bf02
    ADD ESP,0x24                        ; 0047bf05
    POP EBP                             ; 0047bf08
    POP EDI                             ; 0047bf09
    POP ESI                             ; 0047bf0a
    POP EBX                             ; 0047bf0b
    RET                                 ; 0047bf0c
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047bf0d
        ;   Label: LAB_0047bf0d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047bf11
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047bf15
    ADD ESI,0x48                        ; 0047bf19
    INC EDI                             ; 0047bf1c
    ADD EBX,0x48                        ; 0047bf1d
    MOV dword ptr [ESP + 0x14],ESI      ; 0047bf20
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047bf24
    MOV dword ptr [ESP + 0x18],EBX      ; 0047bf28
    JMP 0x0047be09                      ; 0047bf2c
        ;   XREF to: 0047be09 (UNCONDITIONAL_JUMP)  ; LAB_0047be09

