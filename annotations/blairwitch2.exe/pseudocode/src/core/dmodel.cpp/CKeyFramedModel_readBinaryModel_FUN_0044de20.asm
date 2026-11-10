; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_0044de20(CKeyFramedModel *this_ptr,_FILE *file)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0 at 0044de0d
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cf605
;   TerminatedCString s_Error_reading_keyframed_005cf618
;   TerminatedCString s_core_dmodel_cpp_005cf63b
;   TerminatedCString s_KFM_file_is_invalid_vers_005cf64e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760
;   core_dmodel.cpp_FUN_0044ea80
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdio.c_fread_FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044de20
        ;   Label: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_0044de20
    PUSH ESI                            ; 0044de21
    PUSH EDI                            ; 0044de22
    PUSH EBP                            ; 0044de23
    SUB ESP,0x1c                        ; 0044de24
    MOV EBX,dword ptr [ESP + 0x30]      ; 0044de27
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044de2b
    PUSH ESI                            ; 0044de2f
    PUSH 0x1                            ; 0044de30
    PUSH 0x18                           ; 0044de32
    LEA EAX,[ESP + 0xc]                 ; 0044de34
    PUSH EAX                            ; 0044de38
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044de39
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044de3e
    CMP EAX,0x1                         ; 0044de41
    JNZ 0x0044de99                      ; 0044de44
        ;   XREF to: 0044de99 (CONDITIONAL_JUMP)  ; LAB_0044de99
    MOV EDI,dword ptr [ESP]             ; 0044de46
        ;   Label: LAB_0044de46
    CMP EDI,0x3                         ; 0044de49
    JGE 0x0044debe                      ; 0044de4c
        ;   XREF to: 0044debe (CONDITIONAL_JUMP)  ; LAB_0044debe
    MOV ECX,dword ptr [ESP]             ; 0044de4e
        ;   Label: LAB_0044de4e
    PUSH ECX                            ; 0044de51
    MOV EAX,0x5cf63b                    ; 0044de52 | = "..\\core\\dmodel.cpp"
    MOV EDX,0xed                        ; 0044de57
    PUSH 0x5cf64e                       ; 0044de5c | = "KFM file is invalid version %d"
    MOV [0x01d046a0],EAX                ; 0044de61 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0044de66 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044de6c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0044de71
    XOR EDI,EDI                         ; 0044de74
        ;   Label: LAB_0044de74
    MOV EBP,dword ptr [ESP]             ; 0044de76
    MOV dword ptr [ESP + 0x18],EDI      ; 0044de79
    CMP EBP,0x4                         ; 0044de7d
    JL 0x0044dec5                       ; 0044de80
        ;   XREF to: 0044dec5 (CONDITIONAL_JUMP)  ; LAB_0044dec5
    PUSH ESI                            ; 0044de82
    PUSH 0x1                            ; 0044de83
    PUSH 0x4                            ; 0044de85
    LEA EAX,[ESP + 0x24]                ; 0044de87
    PUSH EAX                            ; 0044de8b
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044de8c
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044de91
    CMP EAX,0x1                         ; 0044de94
    JZ 0x0044dec5                       ; 0044de97
        ;   XREF to: 0044dec5 (CONDITIONAL_JUMP)  ; LAB_0044dec5
    MOV EDX,0x5cf605                    ; 0044de99 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0044de99
    MOV ECX,0xe7                        ; 0044de9e
    PUSH 0x5cf618                       ; 0044dea3 | = "Error reading keyframed model file"
    MOV dword ptr [0x01d046a0],EDX      ; 0044dea8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0044deae | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044deb4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044deb9
    JMP 0x0044de46                      ; 0044debc
        ;   XREF to: 0044de46 (UNCONDITIONAL_JUMP)  ; LAB_0044de46
    CMP EDI,0x4                         ; 0044debe
        ;   Label: LAB_0044debe
    JG 0x0044de4e                       ; 0044dec1
        ;   XREF to: 0044de4e (CONDITIONAL_JUMP)  ; LAB_0044de4e
    JMP 0x0044de74                      ; 0044dec3
        ;   XREF to: 0044de74 (UNCONDITIONAL_JUMP)  ; LAB_0044de74
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044dec5
        ;   Label: LAB_0044dec5
    PUSH EAX                            ; 0044dec9
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044deca
    PUSH EDX                            ; 0044dece
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044decf
    PUSH ECX                            ; 0044ded3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044ded4
    PUSH EDI                            ; 0044ded8
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044ded9
    PUSH EBP                            ; 0044dedd
    PUSH EBX                            ; 0044dede
    CALL core_dmodel.cpp_FUN_0044ea80   ; 0044dedf
        ;   XREF to: 0044ea80 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044ea80()
    MOV EDI,dword ptr [EBX + 0x104]     ; 0044dee4
    IMUL EDI,dword ptr [EBX + 0x100]    ; 0044deea
    ADD ESP,0x18                        ; 0044def1
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044def4
    PUSH ESI                            ; 0044defb
    SUB EAX,EDI                         ; 0044defc
    PUSH 0x1                            ; 0044defe
    SHL EAX,0x2                         ; 0044df00
    PUSH EAX                            ; 0044df03
    MOV ECX,dword ptr [EBX + 0x10c]     ; 0044df04
    PUSH ECX                            ; 0044df0a
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044df0b
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044df10
    CMP EAX,0x1                         ; 0044df13
    JNZ 0x0044de99                      ; 0044df16
        ;   XREF to: 0044de99 (CONDITIONAL_JUMP)  ; LAB_0044de99
    MOV EDI,dword ptr [EBX + 0x110]     ; 0044df18
    TEST EDI,EDI                        ; 0044df1e
    JLE 0x0044df6d                      ; 0044df20
        ;   XREF to: 0044df6d (CONDITIONAL_JUMP)  ; LAB_0044df6d
    PUSH ESI                            ; 0044df22
    PUSH EAX                            ; 0044df23
    LEA EAX,[EDI*0x8 + 0x0]             ; 0044df24
    ADD EAX,EDI                         ; 0044df2b
    SHL EAX,0x3                         ; 0044df2d
    PUSH EAX                            ; 0044df30
    MOV EBP,dword ptr [EBX + 0x114]     ; 0044df31
    PUSH EBP                            ; 0044df37
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044df38
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044df3d
    CMP EAX,0x1                         ; 0044df40
    JNZ 0x0044de99                      ; 0044df43
        ;   XREF to: 0044de99 (CONDITIONAL_JUMP)  ; LAB_0044de99
    PUSH ESI                            ; 0044df49
    PUSH EAX                            ; 0044df4a
    MOV EAX,dword ptr [EBX + 0x110]     ; 0044df4b
    SHL EAX,0x2                         ; 0044df51
    PUSH EAX                            ; 0044df54
    MOV EAX,dword ptr [EBX + 0x118]     ; 0044df55
    PUSH EAX                            ; 0044df5b
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044df5c
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044df61
    CMP EAX,0x1                         ; 0044df64
    JNZ 0x0044de99                      ; 0044df67
        ;   XREF to: 0044de99 (CONDITIONAL_JUMP)  ; LAB_0044de99
    CMP dword ptr [EBX + 0x120],0x0     ; 0044df6d
        ;   Label: LAB_0044df6d
    JLE 0x0044dfc5                      ; 0044df74
        ;   XREF to: 0044dfc5 (CONDITIONAL_JUMP)  ; LAB_0044dfc5
    PUSH 0x120                          ; 0044df76
    PUSH 0x0                            ; 0044df7b
    LEA EAX,[EBX + 0x124]               ; 0044df7d
    PUSH EAX                            ; 0044df83
    XOR EDI,EDI                         ; 0044df84
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0044df86
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044df8b
    CMP EDI,dword ptr [EBX + 0x120]     ; 0044df8e
        ;   Label: LAB_0044df8e
    JGE 0x0044dfc5                      ; 0044df94
        ;   XREF to: 0044dfc5 (CONDITIONAL_JUMP)  ; LAB_0044dfc5
    PUSH ESI                            ; 0044df96
    LEA EAX,[EDI*0x8 + 0x0]             ; 0044df97
    LEA EDX,[EBX + 0x124]               ; 0044df9e
    ADD EAX,EDI                         ; 0044dfa4
    PUSH 0x1                            ; 0044dfa6
    SHL EAX,0x3                         ; 0044dfa8
    PUSH 0x18                           ; 0044dfab
    ADD EAX,EDX                         ; 0044dfad
    PUSH EAX                            ; 0044dfaf
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044dfb0
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044dfb5
    CMP EAX,0x1                         ; 0044dfb8
    JNZ 0x0044de99                      ; 0044dfbb
        ;   XREF to: 0044de99 (CONDITIONAL_JUMP)  ; LAB_0044de99
    ADD EDI,EAX                         ; 0044dfc1
    JMP 0x0044df8e                      ; 0044dfc3
        ;   XREF to: 0044df8e (UNCONDITIONAL_JUMP)  ; LAB_0044df8e
    PUSH ESI                            ; 0044dfc5
        ;   Label: LAB_0044dfc5
    MOV EAX,dword ptr [EBX + 0x244]     ; 0044dfc6
    PUSH 0x1                            ; 0044dfcc
    SHL EAX,0x3                         ; 0044dfce
    PUSH EAX                            ; 0044dfd1
    LEA EAX,[EBX + 0x248]               ; 0044dfd2
    PUSH EAX                            ; 0044dfd8
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0044dfd9
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0044dfde
    CMP EAX,0x1                         ; 0044dfe1
    JNZ 0x0044de99                      ; 0044dfe4
        ;   XREF to: 0044de99 (CONDITIONAL_JUMP)  ; LAB_0044de99
    CMP dword ptr [ESP + 0x18],0x0      ; 0044dfea
    JNZ 0x0044dff9                      ; 0044dfef
        ;   XREF to: 0044dff9 (CONDITIONAL_JUMP)  ; LAB_0044dff9
    ADD ESP,0x1c                        ; 0044dff1
    POP EBP                             ; 0044dff4
    POP EDI                             ; 0044dff5
    POP ESI                             ; 0044dff6
    POP EBX                             ; 0044dff7
    RET                                 ; 0044dff8
    PUSH EBX                            ; 0044dff9
        ;   Label: LAB_0044dff9
    CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760 ; 0044dffa
        ;   XREF to: 0044f760 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0044dfff
    ADD ESP,0x1c                        ; 0044e002
    POP EBP                             ; 0044e005
    POP EDI                             ; 0044e006
    POP ESI                             ; 0044e007
    POP EBX                             ; 0044e008
    RET                                 ; 0044e009

