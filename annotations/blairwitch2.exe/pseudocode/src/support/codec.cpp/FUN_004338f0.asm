; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_004338f0(byte *param_1,int param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   support_codec.cpp_FUN_00434570 at 004345d4
;   support_codec.cpp_FUN_00434c90 at 00434cca
;
; Called Functions:
;   support_codec.cpp_FUN_00433a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004338f0
        ;   Label: support_codec.cpp_FUN_004338f0
    PUSH ESI                            ; 004338f1
    PUSH EDI                            ; 004338f2
    PUSH EBP                            ; 004338f3
    SUB ESP,0x4                         ; 004338f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004338f7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004338fb
    MOV ESI,dword ptr [ESP + 0x24]      ; 004338ff
    PUSH ESI                            ; 00433903
    PUSH EDI                            ; 00433904
    CALL support_codec.cpp_FUN_00433a90 ; 00433905
        ;   XREF to: 00433a90 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00433a90()
    ADD ESP,0x8                         ; 0043390a
    TEST EAX,EAX                        ; 0043390d
    JL 0x00433949                       ; 0043390f
        ;   XREF to: 00433949 (CONDITIONAL_JUMP)  ; LAB_00433949
    MOV EDX,dword ptr [EDI]             ; 00433911
    TEST EDX,EDX                        ; 00433913
    JLE 0x004339f6                      ; 00433915
        ;   XREF to: 004339f6 (CONDITIONAL_JUMP)  ; LAB_004339f6
    MOV EAX,0x8                         ; 0043391b
    SUB EAX,EDX                         ; 00433920
    MOV dword ptr [ESP],EAX             ; 00433922
    CMP EBX,EAX                         ; 00433925
    JGE 0x00433982                      ; 00433927
        ;   XREF to: 00433982 (CONDITIONAL_JUMP)  ; LAB_00433982
    MOV EAX,dword ptr [ESP + 0x20]      ; 00433929
    MOV CL,byte ptr [EDI]               ; 0043392d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0043392f
    SHL EAX,CL                          ; 00433932
    MOV ECX,dword ptr [EDI]             ; 00433934
    OR EDX,EAX                          ; 00433936
    ADD ECX,EBX                         ; 00433938
    MOV dword ptr [EDI + 0x4],EDX       ; 0043393a
    XOR EAX,EAX                         ; 0043393d
    MOV dword ptr [EDI],ECX             ; 0043393f
    ADD ESP,0x4                         ; 00433941
        ;   Label: LAB_00433941
    POP EBP                             ; 00433944
    POP EDI                             ; 00433945
    POP ESI                             ; 00433946
    POP EBX                             ; 00433947
    RET                                 ; 00433948
    CMP EAX,-0x1                        ; 00433949
        ;   Label: LAB_00433949
    JNZ 0x0043397b                      ; 0043394c
        ;   XREF to: 0043397b (CONDITIONAL_JUMP)  ; LAB_0043397b
    MOV EAX,dword ptr [EDI]             ; 0043394e
    ADD EAX,EBX                         ; 00433950
    CMP EAX,0x20                        ; 00433952
    JL 0x0043395e                       ; 00433955
        ;   XREF to: 0043395e (CONDITIONAL_JUMP)  ; LAB_0043395e
    MOV EAX,0xffffffff                  ; 00433957
        ;   Label: LAB_00433957
    JMP 0x00433941                      ; 0043395c
        ;   XREF to: 00433941 (UNCONDITIONAL_JUMP)  ; LAB_00433941
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043395e
        ;   Label: LAB_0043395e
    MOV CL,byte ptr [EDI]               ; 00433962
    MOV ESI,dword ptr [EDI + 0x4]       ; 00433964
    MOV EBP,dword ptr [EDI]             ; 00433967
    SHL EAX,CL                          ; 00433969
    ADD EBP,EBX                         ; 0043396b
    OR ESI,EAX                          ; 0043396d
    MOV dword ptr [EDI],EBP             ; 0043396f
    MOV EAX,0xfffffffe                  ; 00433971
    MOV dword ptr [EDI + 0x4],ESI       ; 00433976
    JMP 0x00433941                      ; 00433979
        ;   XREF to: 00433941 (UNCONDITIONAL_JUMP)  ; LAB_00433941
    MOV EAX,0xfffffffd                  ; 0043397b
        ;   Label: LAB_0043397b
    JMP 0x00433941                      ; 00433980
        ;   XREF to: 00433941 (UNCONDITIONAL_JUMP)  ; LAB_00433941
    MOV AL,byte ptr [ESP + 0x20]        ; 00433982
        ;   Label: LAB_00433982
    MOV CL,byte ptr [EDI]               ; 00433986
    SHL AL,CL                           ; 00433988
    MOV AH,byte ptr [EDI + 0x4]         ; 0043398a
    MOV EDX,dword ptr [ESI]             ; 0043398d
    OR AL,AH                            ; 0043398f
    AND EAX,0xff                        ; 00433991
    PUSH EAX                            ; 00433996
    PUSH ESI                            ; 00433997
    CALL dword ptr [EDX + 0x4]          ; 00433998
    ADD ESP,0x8                         ; 0043399b
    CMP EAX,-0x1                        ; 0043399e
    JNZ 0x004339cf                      ; 004339a1
        ;   XREF to: 004339cf (CONDITIONAL_JUMP)  ; LAB_004339cf
    MOV EAX,dword ptr [EDI]             ; 004339a3
    ADD EAX,EBX                         ; 004339a5
    CMP EAX,0x20                        ; 004339a7
    JGE 0x00433957                      ; 004339aa
        ;   XREF to: 00433957 (CONDITIONAL_JUMP)  ; LAB_00433957
    MOV EAX,dword ptr [ESP + 0x20]      ; 004339ac
    MOV CL,byte ptr [EDI]               ; 004339b0
    MOV ESI,dword ptr [EDI + 0x4]       ; 004339b2
    MOV EBP,dword ptr [EDI]             ; 004339b5
    SHL EAX,CL                          ; 004339b7
    ADD EBP,EBX                         ; 004339b9
    OR ESI,EAX                          ; 004339bb
    MOV dword ptr [EDI],EBP             ; 004339bd
    MOV EAX,0xfffffffe                  ; 004339bf
    MOV dword ptr [EDI + 0x4],ESI       ; 004339c4
    ADD ESP,0x4                         ; 004339c7
    POP EBP                             ; 004339ca
    POP EDI                             ; 004339cb
    POP ESI                             ; 004339cc
    POP EBX                             ; 004339cd
    RET                                 ; 004339ce
    TEST EAX,EAX                        ; 004339cf
        ;   Label: LAB_004339cf
    JL 0x0043397b                       ; 004339d1
        ;   XREF to: 0043397b (CONDITIONAL_JUMP)  ; LAB_0043397b
    MOV EAX,dword ptr [ESP]             ; 004339d3
    CMP EBX,EAX                         ; 004339d6
    JZ 0x00433a2c                       ; 004339d8
        ;   XREF to: 00433a2c (CONDITIONAL_JUMP)  ; LAB_00433a2c
    MOV CL,byte ptr [ESP]               ; 004339da
    MOV dword ptr [EDI],0x0             ; 004339dd
    MOV EDX,dword ptr [ESP + 0x20]      ; 004339e3
    MOV dword ptr [EDI + 0x4],0x0       ; 004339e7
    SHR EDX,CL                          ; 004339ee
    SUB EBX,EAX                         ; 004339f0
    MOV dword ptr [ESP + 0x20],EDX      ; 004339f2
    XOR ECX,ECX                         ; 004339f6
        ;   Label: LAB_004339f6
    CMP EBX,0x8                         ; 004339f8
    JL 0x00433a19                       ; 004339fb
        ;   XREF to: 00433a19 (CONDITIONAL_JUMP)  ; LAB_00433a19
    XOR EAX,EAX                         ; 004339fd
        ;   Label: LAB_004339fd
    MOV AL,byte ptr [ESP + 0x20]        ; 004339ff
    PUSH EAX                            ; 00433a03
    MOV EDX,dword ptr [ESI]             ; 00433a04
    PUSH ESI                            ; 00433a06
    CALL dword ptr [EDX + 0x4]          ; 00433a07
    ADD ESP,0x8                         ; 00433a0a
    MOV ECX,EAX                         ; 00433a0d
    CMP EAX,-0x1                        ; 00433a0f
    JNZ 0x00433a43                      ; 00433a12
        ;   XREF to: 00433a43 (CONDITIONAL_JUMP)  ; LAB_00433a43
    MOV ECX,0xfffffffe                  ; 00433a14
    MOV EAX,dword ptr [ESP + 0x20]      ; 00433a19
        ;   Label: LAB_00433a19
    MOV dword ptr [EDI],EBX             ; 00433a1d
    MOV dword ptr [EDI + 0x4],EAX       ; 00433a1f
    MOV EAX,ECX                         ; 00433a22
    ADD ESP,0x4                         ; 00433a24
    POP EBP                             ; 00433a27
    POP EDI                             ; 00433a28
    POP ESI                             ; 00433a29
    POP EBX                             ; 00433a2a
    RET                                 ; 00433a2b
    MOV dword ptr [EDI + 0x4],0x0       ; 00433a2c
        ;   Label: LAB_00433a2c
    MOV dword ptr [EDI],0x0             ; 00433a33
    XOR EAX,EAX                         ; 00433a39
    ADD ESP,0x4                         ; 00433a3b
    POP EBP                             ; 00433a3e
    POP EDI                             ; 00433a3f
    POP ESI                             ; 00433a40
    POP EBX                             ; 00433a41
    RET                                 ; 00433a42
    TEST EAX,EAX                        ; 00433a43
        ;   Label: LAB_00433a43
    JL 0x00433a6d                       ; 00433a45
        ;   XREF to: 00433a6d (CONDITIONAL_JUMP)  ; LAB_00433a6d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00433a47
    SHR EAX,0x8                         ; 00433a4b
    SUB EBX,0x8                         ; 00433a4e
    MOV dword ptr [ESP + 0x20],EAX      ; 00433a51
    CMP EBX,0x8                         ; 00433a55
    JGE 0x004339fd                      ; 00433a58
        ;   XREF to: 004339fd (CONDITIONAL_JUMP)  ; LAB_004339fd
    MOV EAX,dword ptr [ESP + 0x20]      ; 00433a5a
    MOV dword ptr [EDI],EBX             ; 00433a5e
    MOV dword ptr [EDI + 0x4],EAX       ; 00433a60
    MOV EAX,ECX                         ; 00433a63
    ADD ESP,0x4                         ; 00433a65
    POP EBP                             ; 00433a68
    POP EDI                             ; 00433a69
    POP ESI                             ; 00433a6a
    POP EBX                             ; 00433a6b
    RET                                 ; 00433a6c
    MOV ECX,0xfffffffd                  ; 00433a6d
        ;   Label: LAB_00433a6d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00433a72
    MOV dword ptr [EDI],EBX             ; 00433a76
    MOV dword ptr [EDI + 0x4],EAX       ; 00433a78
    MOV EAX,ECX                         ; 00433a7b
    ADD ESP,0x4                         ; 00433a7d
    POP EBP                             ; 00433a80
    POP EDI                             ; 00433a81
    POP ESI                             ; 00433a82
    POP EBX                             ; 00433a83
    RET                                 ; 00433a84

