; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0 at 0058bbd5
;
; Referenced Globals:
;   TerminatedCString s_Searching_for_duplicate__0064b125
;   TerminatedCString s_d_duplicate_faces_remove_0064b144
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 0058ede0
        ;   Label: core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058ede5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058edea
    PUSH ESI                            ; 0058edeb
    PUSH EDI                            ; 0058edec
    PUSH EBP                            ; 0058eded
    SUB ESP,0x44                        ; 0058edee
    PUSH 0x64b125                       ; 0058edf1 | = "Searching for duplicate faces."
    MOV EDX,dword ptr [0x00678a60]      ; 0058edf6 | g_CEditorToolsPtr
    PUSH EDX                            ; 0058edfc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058edfd
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0058ee02
    XOR ECX,ECX                         ; 0058ee05
    MOV EAX,dword ptr [ESP + 0x58]      ; 0058ee07
    MOV dword ptr [ESP + 0x10],ECX      ; 0058ee0b
    MOV ESI,dword ptr [EAX]             ; 0058ee0f
    MOV dword ptr [ESP + 0x4],ECX       ; 0058ee11
    TEST ESI,ESI                        ; 0058ee15
    JLE 0x0058ef9b                      ; 0058ee17
        ;   XREF to: 0058ef9b (CONDITIONAL_JUMP)  ; LAB_0058ef9b
    MOV dword ptr [ESP],EAX             ; 0058ee1d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058ee20
        ;   Label: LAB_0058ee20
    MOV EBP,0x8                         ; 0058ee24
    MOV EDX,0x24                        ; 0058ee29
    MOV EDI,0x1                         ; 0058ee2e
    SHL EAX,0x2                         ; 0058ee33
    MOV dword ptr [ESP + 0x14],EBP      ; 0058ee36
    MOV dword ptr [ESP + 0x8],EAX       ; 0058ee3a
    MOV EAX,dword ptr [ESP]             ; 0058ee3e
    MOV dword ptr [ESP + 0x18],EDX      ; 0058ee41
    MOV dword ptr [ESP + 0x20],EAX      ; 0058ee45
    MOV dword ptr [ESP + 0x30],EAX      ; 0058ee49
    MOV EAX,0x12                        ; 0058ee4d
    MOV dword ptr [ESP + 0x24],EDI      ; 0058ee52
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058ee56
    MOV EAX,dword ptr [ESP + 0x58]      ; 0058ee5a
        ;   Label: LAB_0058ee5a
    ADD EAX,dword ptr [ESP + 0x8]       ; 0058ee5e
    MOV EDX,dword ptr [ESP + 0x24]      ; 0058ee62
    CMP EDX,dword ptr [EAX + 0x54]      ; 0058ee66
    JGE 0x0058ef7b                      ; 0058ee69
        ;   XREF to: 0058ef7b (CONDITIONAL_JUMP)  ; LAB_0058ef7b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0058ee6f
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0058ee73
    ADD EDX,EAX                         ; 0058ee76
    MOV dword ptr [ESP + 0x3c],EDX      ; 0058ee78
    XOR EAX,EAX                         ; 0058ee7c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0058ee7e
    MOV dword ptr [ESP + 0xc],EAX       ; 0058ee82
    TEST EDX,EDX                        ; 0058ee86
    JLE 0x0058efe7                      ; 0058ee88
        ;   XREF to: 0058efe7 (CONDITIONAL_JUMP)  ; LAB_0058efe7
    XOR ECX,ECX                         ; 0058ee8e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058ee90
    MOV dword ptr [ESP + 0x38],ECX      ; 0058ee97
    MOV dword ptr [ESP + 0x34],ECX      ; 0058ee9b
    MOV dword ptr [ESP + 0x28],EAX      ; 0058ee9f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058eea3
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058eea7
        ;   Label: LAB_0058eea7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0058eeab
    MOV EAX,dword ptr [EAX + 0x90]      ; 0058eeaf
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0058eeb5
    ADD EDX,EAX                         ; 0058eeb9
    MOV EAX,dword ptr [ECX + EAX*0x1]   ; 0058eebb
    CMP EAX,dword ptr [EDX]             ; 0058eebe
    JNZ 0x0058efc5                      ; 0058eec0
        ;   XREF to: 0058efc5 (CONDITIONAL_JUMP)  ; LAB_0058efc5
    MOV EDI,dword ptr [ESP + 0x30]      ; 0058eec6
    MOV EBP,dword ptr [ESP + 0x34]      ; 0058eeca
    MOV EDI,dword ptr [EDI + 0x7c]      ; 0058eece
    ADD EDI,EBP                         ; 0058eed1
    XOR EBP,EBP                         ; 0058eed3
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0058eed5
        ;   Label: LAB_0058eed5
    MOV ECX,EBP                         ; 0058eed9
    XOR EBX,EBX                         ; 0058eedb
    MOV dword ptr [ESP + 0x40],0x3      ; 0058eedd
        ;   Label: LAB_0058eedd
    MOV EDX,ECX                         ; 0058eee5
    MOV EAX,ECX                         ; 0058eee7
    SAR EDX,0x1f                        ; 0058eee9
    IDIV dword ptr [ESP + 0x40]         ; 0058eeec
    ADD EDX,EDX                         ; 0058eef0
    LEA EAX,[EDI + EDX*0x1]             ; 0058eef2
    MOV DX,word ptr [ESI]               ; 0058eef5
    CMP DX,word ptr [EAX]               ; 0058eef8
    JZ 0x0058f021                       ; 0058eefb
        ;   XREF to: 0058f021 (CONDITIONAL_JUMP)  ; LAB_0058f021
    CMP EBX,0x3                         ; 0058ef01
        ;   Label: LAB_0058ef01
    JNZ 0x0058efbb                      ; 0058ef04
        ;   XREF to: 0058efbb (CONDITIONAL_JUMP)  ; LAB_0058efbb
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ef0a
        ;   Label: LAB_0058ef0a
    MOV EDX,dword ptr [EAX + 0x54]      ; 0058ef0e
    DEC EDX                             ; 0058ef11
    MOV ECX,dword ptr [ESP + 0x24]      ; 0058ef12
    MOV dword ptr [EAX + 0x54],EDX      ; 0058ef16
    MOV EAX,EDX                         ; 0058ef19
    SUB EAX,ECX                         ; 0058ef1b
    IMUL EAX,EAX,0x12                   ; 0058ef1d
    PUSH EAX                            ; 0058ef20
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058ef21
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0058ef25
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0058ef29
    ADD EDX,EAX                         ; 0058ef2c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0058ef2e
    PUSH EDX                            ; 0058ef32
    ADD EAX,EBX                         ; 0058ef33
    PUSH EAX                            ; 0058ef35
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0058ef36
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0058ef3b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058ef3e
    MOV ESI,dword ptr [ESP + 0x24]      ; 0058ef42
    MOV EAX,dword ptr [EAX + 0x54]      ; 0058ef46
    SUB EAX,ESI                         ; 0058ef49
    SHL EAX,0x2                         ; 0058ef4b
    PUSH EAX                            ; 0058ef4e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058ef4f
    MOV ECX,dword ptr [ESP + 0x18]      ; 0058ef53
    MOV EAX,dword ptr [EAX + 0x90]      ; 0058ef57
    ADD ECX,EAX                         ; 0058ef5d
    LEA EDX,[ESI*0x4 + 0x0]             ; 0058ef5f
    PUSH ECX                            ; 0058ef66
    ADD EAX,EDX                         ; 0058ef67
    PUSH EAX                            ; 0058ef69
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0058ef6a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0058ef6f
    INC dword ptr [ESP + 0x10]          ; 0058ef72
    JMP 0x0058ee5a                      ; 0058ef76
        ;   XREF to: 0058ee5a (UNCONDITIONAL_JUMP)  ; LAB_0058ee5a
    MOV EDI,dword ptr [ESP + 0x4]       ; 0058ef7b
        ;   Label: LAB_0058ef7b
    MOV ESI,dword ptr [ESP]             ; 0058ef7f
    MOV EDX,dword ptr [ESP + 0x58]      ; 0058ef82
    INC EDI                             ; 0058ef86
    ADD ESI,0x4                         ; 0058ef87
    MOV EBP,dword ptr [EDX]             ; 0058ef8a
    MOV dword ptr [ESP + 0x4],EDI       ; 0058ef8c
    MOV dword ptr [ESP],ESI             ; 0058ef90
    CMP EDI,EBP                         ; 0058ef93
    JL 0x0058ee20                       ; 0058ef95
        ;   XREF to: 0058ee20 (CONDITIONAL_JUMP)  ; LAB_0058ee20
    MOV EBP,dword ptr [ESP + 0x10]      ; 0058ef9b
        ;   Label: LAB_0058ef9b
    PUSH EBP                            ; 0058ef9f
    PUSH 0x64b144                       ; 0058efa0 | = "%d duplicate faces removed."
    MOV EAX,[0x00678a60]                ; 0058efa5 | g_CEditorToolsPtr
    PUSH EAX                            ; 0058efaa | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058efab
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058efb0
    ADD ESP,0x44                        ; 0058efb3
    POP EBP                             ; 0058efb6
    POP EDI                             ; 0058efb7
    POP ESI                             ; 0058efb8
    POP EBX                             ; 0058efb9
    RET                                 ; 0058efba
    INC EBP                             ; 0058efbb
        ;   Label: LAB_0058efbb
    CMP EBP,0x3                         ; 0058efbc
    JL 0x0058eed5                       ; 0058efbf
        ;   XREF to: 0058eed5 (CONDITIONAL_JUMP)  ; LAB_0058eed5
    MOV EDX,dword ptr [ESP + 0x34]      ; 0058efc5
        ;   Label: LAB_0058efc5
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058efc9
    MOV ECX,dword ptr [ESP + 0x28]      ; 0058efcd
    ADD EDX,0x12                        ; 0058efd1
    ADD EAX,0x4                         ; 0058efd4
    MOV dword ptr [ESP + 0x34],EDX      ; 0058efd7
    MOV dword ptr [ESP + 0x38],EAX      ; 0058efdb
    CMP EAX,ECX                         ; 0058efdf
    JL 0x0058eea7                       ; 0058efe1
        ;   XREF to: 0058eea7 (CONDITIONAL_JUMP)  ; LAB_0058eea7
    CMP dword ptr [ESP + 0xc],0x0       ; 0058efe7
        ;   Label: LAB_0058efe7
    JNZ 0x0058ef0a                      ; 0058efec
        ;   XREF to: 0058ef0a (CONDITIONAL_JUMP)  ; LAB_0058ef0a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0058eff2
    MOV EBP,dword ptr [ESP + 0x18]      ; 0058eff6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058effa
    MOV ESI,dword ptr [ESP + 0x14]      ; 0058effe
    ADD EDI,0x12                        ; 0058f002
    ADD EBP,0x12                        ; 0058f005
    INC EAX                             ; 0058f008
    ADD ESI,0x4                         ; 0058f009
    MOV dword ptr [ESP + 0x1c],EDI      ; 0058f00c
    MOV dword ptr [ESP + 0x18],EBP      ; 0058f010
    MOV dword ptr [ESP + 0x24],EAX      ; 0058f014
    MOV dword ptr [ESP + 0x14],ESI      ; 0058f018
    JMP 0x0058ee5a                      ; 0058f01c
        ;   XREF to: 0058ee5a (UNCONDITIONAL_JUMP)  ; LAB_0058ee5a
    INC ECX                             ; 0058f021
        ;   Label: LAB_0058f021
    INC EBX                             ; 0058f022
    ADD ESI,0x2                         ; 0058f023
    CMP EBX,0x3                         ; 0058f026
    JL 0x0058eedd                       ; 0058f029
        ;   XREF to: 0058eedd (CONDITIONAL_JUMP)  ; LAB_0058eedd
    JMP 0x0058ef01                      ; 0058f02f
        ;   XREF to: 0058ef01 (UNCONDITIONAL_JUMP)  ; LAB_0058ef01

