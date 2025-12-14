; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479efb
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b490
;   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0 at 0047bdbc
;   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0 at 0047bbcc
;   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 at 0047aa4f
;   core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820 at 0047a9eb
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 at 0047b021
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_006204cb
;   TerminatedCString s_CKeyFramedModel_part_ver_006204de
;   TerminatedCString s_core_dmodel_cpp_0062050c
;   TerminatedCString s_CKeyFramedModel_partList_0062051f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bf40
        ;   Label: core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
    PUSH ESI                            ; 0047bf41
    PUSH EDI                            ; 0047bf42
    PUSH EBP                            ; 0047bf43
    SUB ESP,0x18                        ; 0047bf44
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047bf47
    XOR EBP,EBP                         ; 0047bf4b
    XOR EAX,EAX                         ; 0047bf4d
    MOV ECX,dword ptr [EBX + 0x5584]    ; 0047bf4f
    MOV dword ptr [ESP],EBP             ; 0047bf55
    TEST ECX,ECX                        ; 0047bf58
    JLE 0x0047bfb2                      ; 0047bf5a
        ;   XREF to: 0047bfb2 (CONDITIONAL_JUMP)  ; LAB_0047bfb2
    MOV dword ptr [ESP + 0x8],EBX       ; 0047bf5c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047bf60
        ;   Label: LAB_0047bf60
    MOV EBX,dword ptr [EBX + 0x5588]    ; 0047bf64
    ADD EBX,EBP                         ; 0047bf6a
    MOV dword ptr [ESP + 0x14],EBX      ; 0047bf6c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047bf70
    MOV EBX,dword ptr [EBX + 0x558c]    ; 0047bf74
    ADD EBX,EAX                         ; 0047bf7a
    MOV dword ptr [ESP + 0x4],EBX       ; 0047bf7c
    CMP EAX,EBX                         ; 0047bf80
    JL 0x0047c032                       ; 0047bf82
        ;   XREF to: 0047c032 (CONDITIONAL_JUMP)  ; LAB_0047c032
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047bf88
        ;   Label: LAB_0047bf88
    MOV ESI,dword ptr [ESP]             ; 0047bf8c
    ADD EBX,0x8                         ; 0047bf8f
    INC ESI                             ; 0047bf92
    MOV dword ptr [ESP + 0x8],EBX       ; 0047bf93
    MOV dword ptr [ESP],ESI             ; 0047bf97
    MOV EBX,ESI                         ; 0047bf9a
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0047bf9c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0047bfa0
    MOV EDI,dword ptr [ESI + 0x5584]    ; 0047bfa4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047bfaa
    CMP EBX,EDI                         ; 0047bfae
    JL 0x0047bf60                       ; 0047bfb0
        ;   XREF to: 0047bf60 (CONDITIONAL_JUMP)  ; LAB_0047bf60
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047bfb2
        ;   Label: LAB_0047bfb2
    CMP EBP,dword ptr [EBX + 0x104]     ; 0047bfb6
    JNZ 0x0047c04e                      ; 0047bfbc
        ;   XREF to: 0047c04e (CONDITIONAL_JUMP)  ; LAB_0047c04e
    CMP EAX,dword ptr [EBX + 0x110]     ; 0047bfc2
    JNZ 0x0047c04e                      ; 0047bfc8
        ;   XREF to: 0047c04e (CONDITIONAL_JUMP)  ; LAB_0047c04e
    ADD ESP,0x18                        ; 0047bfce
    POP EBP                             ; 0047bfd1
    POP EDI                             ; 0047bfd2
    POP ESI                             ; 0047bfd3
    POP EBX                             ; 0047bfd4
    RET                                 ; 0047bfd5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047bfd6
        ;   Label: LAB_0047bfd6
    ADD EAX,0x48                        ; 0047bfda
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047bfdd
    MOV dword ptr [ESP + 0x10],EAX      ; 0047bfe1
    CMP EAX,EDX                         ; 0047bfe5
    JGE 0x0047bf88                      ; 0047bfe7
        ;   XREF to: 0047bf88 (CONDITIONAL_JUMP)  ; LAB_0047bf88
    MOV EDI,dword ptr [ESP + 0x10]      ; 0047bfe9
        ;   Label: LAB_0047bfe9
    XOR ESI,ESI                         ; 0047bfed
    XOR EBX,EBX                         ; 0047bfef
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047bff1
        ;   Label: LAB_0047bff1
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047bff5
    ADD EAX,EDI                         ; 0047bffb
    CMP EBX,dword ptr [EAX + 0x4]       ; 0047bffd
    JGE 0x0047bfd6                      ; 0047c000
        ;   XREF to: 0047bfd6 (CONDITIONAL_JUMP)  ; LAB_0047bfd6
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x18] ; 0047c002
    CMP EAX,EBP                         ; 0047c006
    JGE 0x0047c042                      ; 0047c008
        ;   XREF to: 0047c042 (CONDITIONAL_JUMP)  ; LAB_0047c042
    MOV EAX,0x6204cb                    ; 0047c00a | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0047c00a
    MOV EDX,0xab6                       ; 0047c00f
    PUSH 0x6204de                       ; 0047c014 | = "CKeyFramedModel part vertex overlap d..."
    MOV [0x02f0ca48],EAX                ; 0047c019 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0047c01e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047c024
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047c029
    INC EBX                             ; 0047c02c
    ADD ESI,0xc                         ; 0047c02d
    JMP 0x0047bff1                      ; 0047c030
        ;   XREF to: 0047bff1 (UNCONDITIONAL_JUMP)  ; LAB_0047bff1
    IMUL EAX,EAX,0x48                   ; 0047c032
        ;   Label: LAB_0047c032
    MOV dword ptr [ESP + 0x10],EAX      ; 0047c035
    IMUL EAX,EBX,0x48                   ; 0047c039
    MOV dword ptr [ESP + 0xc],EAX       ; 0047c03c
    JMP 0x0047bfe9                      ; 0047c040
        ;   XREF to: 0047bfe9 (UNCONDITIONAL_JUMP)  ; LAB_0047bfe9
    CMP EAX,dword ptr [ESP + 0x14]      ; 0047c042
        ;   Label: LAB_0047c042
    JGE 0x0047c00a                      ; 0047c046
        ;   XREF to: 0047c00a (CONDITIONAL_JUMP)  ; LAB_0047c00a
    INC EBX                             ; 0047c048
    ADD ESI,0xc                         ; 0047c049
    JMP 0x0047bff1                      ; 0047c04c
        ;   XREF to: 0047bff1 (UNCONDITIONAL_JUMP)  ; LAB_0047bff1
    MOV EBX,0x62050c                    ; 0047c04e | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0047c04e
    MOV ESI,0xabf                       ; 0047c053
    PUSH 0x62051f                       ; 0047c058 | = "CKeyFramedModel partList/mastercount ..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0047c05d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0047c063 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047c069
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047c06e
    ADD ESP,0x18                        ; 0047c071
    POP EBP                             ; 0047c074
    POP EDI                             ; 0047c075
    POP ESI                             ; 0047c076
    POP EBX                             ; 0047c077
    RET                                 ; 0047c078

