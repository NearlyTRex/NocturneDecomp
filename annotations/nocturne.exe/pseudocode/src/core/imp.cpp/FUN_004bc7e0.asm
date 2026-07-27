; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_FUN_004bc7e0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc7e0
        ;   Label: core_imp.cpp_FUN_004bc7e0
    PUSH EDI                            ; 004bc7e1
    PUSH EBP                            ; 004bc7e2
    SUB ESP,0xb4                        ; 004bc7e3
    MOV ECX,dword ptr [ESP + 0xc8]      ; 004bc7e9
    MOV EBX,ESI                         ; 004bc7f0
    MOV EAX,ECX                         ; 004bc7f2
    SHL EAX,0x4                         ; 004bc7f4
    ADD EAX,ECX                         ; 004bc7f7
    MOV EDX,dword ptr [ESP + 0xc4]      ; 004bc7f9
    SHL EAX,0x2                         ; 004bc800
    ADD EAX,EDX                         ; 004bc803
    MOV ESI,dword ptr [EAX + 0x24a4]    ; 004bc805
    CMP ECX,0x1                         ; 004bc80b
    JNZ 0x004bc915                      ; 004bc80e
        ;   XREF to: 004bc915 (CONDITIONAL_JUMP)  ; LAB_004bc915
    MOV EAX,0xbf0147ae                  ; 004bc814
    MOV EDX,0x3ec72b02                  ; 004bc819
    MOV EBP,0x3e52f1aa                  ; 004bc81e
    MOV dword ptr [ESP + 0x64],EAX      ; 004bc823
    MOV dword ptr [ESP + 0x68],EDX      ; 004bc827
    LEA EDX,[ESP + 0x60]                ; 004bc82b
    LEA EAX,[ESP + 0xa8]                ; 004bc82f
    MOV dword ptr [ESP + 0x60],EBP      ; 004bc836
    CMP EAX,EDX                         ; 004bc83a
    JZ 0x004bc85d                       ; 004bc83c
        ;   XREF to: 004bc85d (CONDITIONAL_JUMP)  ; LAB_004bc85d
    MOV EDI,0xbf0147ae                  ; 004bc83e
    MOV dword ptr [ESP + 0xa8],EBP      ; 004bc843
    MOV EBP,0x3ec72b02                  ; 004bc84a
    MOV dword ptr [ESP + 0xac],EDI      ; 004bc84f
    MOV dword ptr [ESP + 0xb0],EBP      ; 004bc856
    MOV EAX,0xbf2ed917                  ; 004bc85d
        ;   Label: LAB_004bc85d
    MOV EDX,0x3f7e353f                  ; 004bc862
    MOV ECX,0x3ee0c49c                  ; 004bc867
    MOV dword ptr [ESP + 0x90],EAX      ; 004bc86c
    MOV dword ptr [ESP + 0x98],EDX      ; 004bc873
    LEA EAX,[ESP + 0x90]                ; 004bc87a
    LEA EDX,[ESP + 0x84]                ; 004bc881
    MOV dword ptr [ESP + 0x94],ECX      ; 004bc888
    CMP EDX,EAX                         ; 004bc88f
    JZ 0x004bc8b2                       ; 004bc891
        ;   XREF to: 004bc8b2 (CONDITIONAL_JUMP)  ; LAB_004bc8b2
    MOV EAX,0x3f7e353f                  ; 004bc893
    MOV EDI,0xbf2ed917                  ; 004bc898
    MOV dword ptr [ESP + 0x88],ECX      ; 004bc89d
    MOV dword ptr [ESP + 0x8c],EAX      ; 004bc8a4
    MOV dword ptr [ESP + 0x84],EDI      ; 004bc8ab
    LEA EAX,[ESP + 0x84]                ; 004bc8b2
        ;   Label: LAB_004bc8b2
    PUSH EAX                            ; 004bc8b9
    LEA EAX,[ESP + 0xac]                ; 004bc8ba
    PUSH EAX                            ; 004bc8c1
    LEA EAX,[ESP + 0x38]                ; 004bc8c2
    PUSH EAX                            ; 004bc8c6
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004bc8c7
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    LEA EAX,[ESI*0x4 + 0x0]             ; 004bc8cc
    ADD ESP,0xc                         ; 004bc8d3
    SUB EAX,ESI                         ; 004bc8d6
    MOV EDX,dword ptr [ESP + 0xc4]      ; 004bc8d8
    SHL EAX,0x4                         ; 004bc8df
    ADD EDX,0xfd0                       ; 004bc8e2
    ADD EAX,EDX                         ; 004bc8e8
    PUSH EAX                            ; 004bc8ea
    LEA EAX,[ESP + 0x34]                ; 004bc8eb
    PUSH EAX                            ; 004bc8ef
    LEA ESI,[ESP + 0x8]                 ; 004bc8f0
    MOV EDI,EBX                         ; 004bc8f4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004bc8f6
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004bc8fb
    LEA ESI,[ESP + 0x8]                 ; 004bc900
    ADD ESP,0x8                         ; 004bc904
    MOVSD.REP ES:EDI,ESI                ; 004bc907
    MOV EAX,EBX                         ; 004bc909
    ADD ESP,0xb4                        ; 004bc90b
    POP EBP                             ; 004bc911
    POP EDI                             ; 004bc912
    POP EBX                             ; 004bc913
    RET                                 ; 004bc914
    MOV EDI,0xbf07ae14                  ; 004bc915
        ;   Label: LAB_004bc915
    MOV EBP,0x3ed1eb85                  ; 004bc91a
    MOV ECX,0xbed58106                  ; 004bc91f
    LEA EAX,[ESP + 0x9c]                ; 004bc924
    LEA EDX,[ESP + 0xa8]                ; 004bc92b
    MOV dword ptr [ESP + 0xa0],EDI      ; 004bc932
    MOV dword ptr [ESP + 0xa4],EBP      ; 004bc939
    MOV dword ptr [ESP + 0x9c],ECX      ; 004bc940
    CMP EDX,EAX                         ; 004bc947
    JZ 0x004bc960                       ; 004bc949
        ;   XREF to: 004bc960 (CONDITIONAL_JUMP)  ; LAB_004bc960
    MOV dword ptr [ESP + 0xac],EDI      ; 004bc94b
    MOV dword ptr [ESP + 0xb0],EBP      ; 004bc952
    MOV dword ptr [ESP + 0xa8],ECX      ; 004bc959
    MOV EBP,0x3f7e353f                  ; 004bc960
        ;   Label: LAB_004bc960
    MOV EAX,0x3ee0c49c                  ; 004bc965
    MOV EDI,0xbf2ed917                  ; 004bc96a
    LEA EDX,[ESP + 0x84]                ; 004bc96f
    MOV dword ptr [ESP + 0x80],EBP      ; 004bc976
    MOV dword ptr [ESP + 0x7c],EAX      ; 004bc97d
    LEA EAX,[ESP + 0x78]                ; 004bc981
    MOV dword ptr [ESP + 0x78],EDI      ; 004bc985
    CMP EDX,EAX                         ; 004bc989
    JZ 0x004bc8b2                       ; 004bc98b
        ;   XREF to: 004bc8b2 (CONDITIONAL_JUMP)  ; LAB_004bc8b2
    MOV ECX,0x3ee0c49c                  ; 004bc991
    MOV dword ptr [ESP + 0x8c],EBP      ; 004bc996
    MOV dword ptr [ESP + 0x84],EDI      ; 004bc99d
    MOV dword ptr [ESP + 0x88],ECX      ; 004bc9a4
    JMP 0x004bc8b2                      ; 004bc9ab
        ;   XREF to: 004bc8b2 (UNCONDITIONAL_JUMP)  ; LAB_004bc8b2

