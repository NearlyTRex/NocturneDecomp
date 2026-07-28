; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; SInputFace *     Stack[0xc]:4   face_data
; STextureSet *    Stack[0x10]:4   texture_sets
; int *            Stack[0x14]:4   index_data
; int              Stack[0x18]:4   start_face
; int              Stack[0x1c]:4   face_count
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460 at 004df597
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0058ac56
;   TerminatedCString s_CMorphModel_setFaceList_0058ac68
;   TerminatedCString s_core_morph_cpp_0058ac96
;   TerminatedCString s_CMorphModel_setFaceList_0058aca8
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cd4314
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df9e0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0
    PUSH ESI                            ; 004df9e1
    PUSH EDI                            ; 004df9e2
    PUSH EBP                            ; 004df9e3
    SUB ESP,0x18                        ; 004df9e4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004df9e7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004df9eb
    MOV EDI,dword ptr [ESP + 0x40]      ; 004df9ef
    TEST ESI,ESI                        ; 004df9f3
    JL 0x004df9fb                       ; 004df9f5
        ;   XREF to: 004df9fb (CONDITIONAL_JUMP)  ; LAB_004df9fb
    CMP ESI,dword ptr [EBX]             ; 004df9f7
    JL 0x004dfa1e                       ; 004df9f9
        ;   XREF to: 004dfa1e (CONDITIONAL_JUMP)  ; LAB_004dfa1e
    MOV ECX,0x58ac56                    ; 004df9fb | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df9fb
    MOV EBP,0x191                       ; 004dfa00
    PUSH 0x58ac68                       ; 004dfa05 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x01cc4800],ECX      ; 004dfa0a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004dfa10 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dfa16
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dfa1b
    MOV EAX,ESI                         ; 004dfa1e
        ;   Label: LAB_004dfa1e
    SHL EAX,0x4                         ; 004dfa20
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 004dfa23
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004dfa27
    MOV EAX,dword ptr [ESP + 0x44]      ; 004dfa2b
    ADD EDI,EDX                         ; 004dfa2f
    ADD EDX,ECX                         ; 004dfa31
    ADD EAX,EDI                         ; 004dfa33
    CMP EAX,EDX                         ; 004dfa35
    JLE 0x004dfa5b                      ; 004dfa37
        ;   XREF to: 004dfa5b (CONDITIONAL_JUMP)  ; LAB_004dfa5b
    MOV EBP,0x58ac96                    ; 004dfa39 | = "..\\core\\morph.cpp"
    MOV EAX,0x198                       ; 004dfa3e
    PUSH 0x58aca8                       ; 004dfa43 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x01cc4800],EBP      ; 004dfa48 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004dfa4e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dfa53
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dfa58
    MOV EAX,dword ptr [ESP + 0x34]      ; 004dfa5b
        ;   Label: LAB_004dfa5b
    XOR EDX,EDX                         ; 004dfa5f
    MOV ECX,dword ptr [ESP + 0x44]      ; 004dfa61
    MOV dword ptr [ESP + 0xc],EDX       ; 004dfa65
    MOV dword ptr [ESP + 0x4],EAX       ; 004dfa69
    TEST ECX,ECX                        ; 004dfa6d
    JLE 0x004dfb90                      ; 004dfa6f
        ;   XREF to: 004dfb90 (CONDITIONAL_JUMP)  ; LAB_004dfb90
    SHL ESI,0x4                         ; 004dfa75
    LEA EAX,[EBX + ESI*0x1]             ; 004dfa78
    MOV dword ptr [ESP + 0x10],EAX      ; 004dfa7b
    LEA EAX,[EDI*0x4 + 0x0]             ; 004dfa7f
    MOV EDX,EAX                         ; 004dfa86
    SHL EAX,0x4                         ; 004dfa88
    SUB EAX,EDX                         ; 004dfa8b
    MOV dword ptr [ESP + 0x14],EAX      ; 004dfa8d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004dfa91
    MOV dword ptr [ESP + 0x8],EAX       ; 004dfa95
    MOV EAX,dword ptr [ESP + 0x8]       ; 004dfa99
        ;   Label: LAB_004dfa99
    IMUL EAX,dword ptr [EAX],0x48       ; 004dfa9d
    ADD EAX,dword ptr [ESP + 0x38]      ; 004dfaa0
    ADD EAX,0x8                         ; 004dfaa4
    PUSH EAX                            ; 004dfaa7
    PUSH EBX                            ; 004dfaa8
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0 ; 004dfaa9
        ;   XREF to: 004dfba0 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0(CMorphModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004dfaae
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dfab1
    MOV dword ptr [ESP],EAX             ; 004dfab5
    MOV EAX,dword ptr [EBX + 0x60]      ; 004dfab8
    ADD EAX,EDI                         ; 004dfabb
    XOR EDX,EDX                         ; 004dfabd
    MOV ESI,EDI                         ; 004dfabf
    MOV dword ptr [EAX + 0x4],0x3       ; 004dfac1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004dfac8
    CMP dword ptr [0x01cd4314],0x0      ; 004dfacc | DAT_01cd4314
        ;   Label: LAB_004dfacc
    JZ 0x004dfb98                       ; 004dfad3
        ;   XREF to: 004dfb98 (CONDITIONAL_JUMP)  ; LAB_004dfb98
    MOV ECX,0x2                         ; 004dfad9
    SUB ECX,EDX                         ; 004dfade
    IMUL ECX,ECX,0xc                    ; 004dfae0
        ;   Label: LAB_004dfae0
    MOV EDI,dword ptr [EBX + 0x60]      ; 004dfae3
    ADD EDI,ESI                         ; 004dfae6
    MOVZX EBP,word ptr [EAX]            ; 004dfae8
    MOV dword ptr [ECX + EDI*0x1 + 0x18],EBP ; 004dfaeb
    ADD EAX,0x2                         ; 004dfaef
    MOV EDI,dword ptr [EBX + 0x60]      ; 004dfaf2
    MOVZX EBP,word ptr [EAX + 0x4]      ; 004dfaf5
    ADD EDI,ESI                         ; 004dfaf9
    SHL EBP,0x8                         ; 004dfafb
    INC EDX                             ; 004dfafe
    MOV dword ptr [ECX + EDI*0x1 + 0x1c],EBP ; 004dfaff
    MOV EBP,dword ptr [EBX + 0x60]      ; 004dfb03
    XOR EDI,EDI                         ; 004dfb06
    ADD EBP,ESI                         ; 004dfb08
    MOV DI,word ptr [EAX + 0xa]         ; 004dfb0a
    ADD ECX,EBP                         ; 004dfb0e
    SHL EDI,0x8                         ; 004dfb10
    MOV dword ptr [ECX + 0x20],EDI      ; 004dfb13
    CMP EDX,0x3                         ; 004dfb16
    JL 0x004dfacc                       ; 004dfb19
        ;   XREF to: 004dfacc (CONDITIONAL_JUMP)  ; LAB_004dfacc
    MOV EAX,dword ptr [EBX + 0x60]      ; 004dfb1b
    MOV EDX,dword ptr [ESP]             ; 004dfb1e
    MOV dword ptr [ESI + EAX*0x1],EDX   ; 004dfb21
    MOV EDX,dword ptr [ESP + 0x10]      ; 004dfb24
    MOV EAX,dword ptr [EBX + 0x60]      ; 004dfb28
    MOV EDX,dword ptr [EDX + 0xc]       ; 004dfb2b
    ADD dword ptr [ESI + EAX*0x1 + 0x18],EDX ; 004dfb2e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004dfb32
    MOV EAX,dword ptr [EBX + 0x60]      ; 004dfb36
    MOV ECX,dword ptr [ESP + 0x14]      ; 004dfb39
    MOV EDX,dword ptr [EDX + 0xc]       ; 004dfb3d
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x24] ; 004dfb40
    ADD ECX,0x3c                        ; 004dfb44
    ADD EBP,EDX                         ; 004dfb47
    MOV dword ptr [ESP + 0x14],ECX      ; 004dfb49
    MOV dword ptr [ESI + EAX*0x1 + 0x24],EBP ; 004dfb4d
    MOV EDI,dword ptr [ESP + 0x8]       ; 004dfb51
    MOV EAX,dword ptr [EBX + 0x60]      ; 004dfb55
    ADD EDI,0x4                         ; 004dfb58
    ADD ESI,EAX                         ; 004dfb5b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004dfb5d
    MOV dword ptr [ESP + 0x8],EDI       ; 004dfb61
    MOV EDX,dword ptr [ESI + 0x30]      ; 004dfb65
    MOV EAX,dword ptr [EAX + 0xc]       ; 004dfb68
    MOV EBP,dword ptr [ESP + 0xc]       ; 004dfb6b
    ADD EDX,EAX                         ; 004dfb6f
    INC EBP                             ; 004dfb71
    MOV dword ptr [ESI + 0x30],EDX      ; 004dfb72
    MOV ESI,dword ptr [ESP + 0x4]       ; 004dfb75
    MOV dword ptr [ESP + 0xc],EBP       ; 004dfb79
    ADD ESI,0x12                        ; 004dfb7d
    MOV EDX,dword ptr [ESP + 0x44]      ; 004dfb80
    MOV dword ptr [ESP + 0x4],ESI       ; 004dfb84
    CMP EBP,EDX                         ; 004dfb88
    JL 0x004dfa99                       ; 004dfb8a
        ;   XREF to: 004dfa99 (CONDITIONAL_JUMP)  ; LAB_004dfa99
    ADD ESP,0x18                        ; 004dfb90
        ;   Label: LAB_004dfb90
    POP EBP                             ; 004dfb93
    POP EDI                             ; 004dfb94
    POP ESI                             ; 004dfb95
    POP EBX                             ; 004dfb96
    RET                                 ; 004dfb97
    MOV ECX,EDX                         ; 004dfb98
        ;   Label: LAB_004dfb98
    JMP 0x004dfae0                      ; 004dfb9a
        ;   XREF to: 004dfae0 (UNCONDITIONAL_JUMP)  ; LAB_004dfae0

