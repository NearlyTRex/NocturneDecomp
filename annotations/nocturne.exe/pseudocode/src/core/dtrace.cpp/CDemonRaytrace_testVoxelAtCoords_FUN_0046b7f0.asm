; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0(int param_1,uint *param_2)
;
;
; XREF[1]:
;   core_particle.cpp_CParticle_process_FUN_004ef120 at 004ef1fb
;
; Referenced Globals:
;   undefined1 DAT_005b6d08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b7f0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_0046b7f0
    PUSH ESI                            ; 0046b7f1
    PUSH EDI                            ; 0046b7f2
    PUSH EBP                            ; 0046b7f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046b7f4
    MOV ECX,dword ptr [ESP + 0x18]      ; 0046b7f8
    MOV EDX,dword ptr [ECX]             ; 0046b7fc
    TEST EDX,EDX                        ; 0046b7fe
    JL 0x0046b899                       ; 0046b800
        ;   XREF to: 0046b899 (CONDITIONAL_JUMP)  ; LAB_0046b899
    CMP dword ptr [ECX + 0x4],0x0       ; 0046b806
    JL 0x0046b899                       ; 0046b80a
        ;   XREF to: 0046b899 (CONDITIONAL_JUMP)  ; LAB_0046b899
    CMP dword ptr [ECX + 0x8],0x0       ; 0046b810
    JL 0x0046b899                       ; 0046b814
        ;   XREF to: 0046b899 (CONDITIONAL_JUMP)  ; LAB_0046b899
    MOV EAX,EDX                         ; 0046b81a
    SAR EDX,0x1f                        ; 0046b81c
    SHL EDX,0x3                         ; 0046b81f
    SBB EAX,EDX                         ; 0046b822
    SAR EAX,0x3                         ; 0046b824
    MOV EBP,dword ptr [EBX + 0x40]      ; 0046b827
    MOV ESI,EAX                         ; 0046b82a
    CMP EAX,EBP                         ; 0046b82c
    JGE 0x0046b899                      ; 0046b82e
        ;   XREF to: 0046b899 (CONDITIONAL_JUMP)  ; LAB_0046b899
    MOV EAX,dword ptr [ECX + 0x4]       ; 0046b830
    MOV EDX,EAX                         ; 0046b833
    SAR EDX,0x1f                        ; 0046b835
    SHL EDX,0x3                         ; 0046b838
    SBB EAX,EDX                         ; 0046b83b
    SAR EAX,0x3                         ; 0046b83d
    MOV EDI,EAX                         ; 0046b840
    CMP EDI,dword ptr [EBX + 0x44]      ; 0046b842
    JGE 0x0046b899                      ; 0046b845
        ;   XREF to: 0046b899 (CONDITIONAL_JUMP)  ; LAB_0046b899
    MOV EAX,dword ptr [ECX + 0x8]       ; 0046b847
    MOV EDX,EAX                         ; 0046b84a
    SAR EDX,0x1f                        ; 0046b84c
    SHL EDX,0x3                         ; 0046b84f
    SBB EAX,EDX                         ; 0046b852
    SAR EAX,0x3                         ; 0046b854
    MOV EDX,dword ptr [EBX + 0x48]      ; 0046b857
    CMP EAX,EDX                         ; 0046b85a
    JGE 0x0046b899                      ; 0046b85c
        ;   XREF to: 0046b899 (CONDITIONAL_JUMP)  ; LAB_0046b899
    IMUL EDI,EDX                        ; 0046b85e
    IMUL ESI,dword ptr [EBX + 0x44]     ; 0046b861
    IMUL ESI,EDX                        ; 0046b865
    ADD EAX,EDI                         ; 0046b868
    ADD ESI,EAX                         ; 0046b86a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0046b86c
    SUB EAX,ESI                         ; 0046b873
    SHL EAX,0x2                         ; 0046b875
    ADD EAX,ESI                         ; 0046b878
    MOV EBX,dword ptr [EBX + 0x50]      ; 0046b87a
    SHL EAX,0x2                         ; 0046b87d
    MOV ESI,dword ptr [ECX]             ; 0046b880
    ADD EAX,EBX                         ; 0046b882
    AND ESI,0x7                         ; 0046b884
    MOV EBX,dword ptr [ECX + 0x4]       ; 0046b887
    MOV EDX,dword ptr [EAX]             ; 0046b88a
    MOV ECX,dword ptr [ECX + 0x8]       ; 0046b88c
    AND EBX,0x7                         ; 0046b88f
    AND ECX,0x7                         ; 0046b892
    TEST EDX,EDX                        ; 0046b895
    JNZ 0x0046b8a0                      ; 0046b897
        ;   XREF to: 0046b8a0 (CONDITIONAL_JUMP)  ; LAB_0046b8a0
    XOR EAX,EAX                         ; 0046b899
        ;   Label: LAB_0046b899
    POP EBP                             ; 0046b89b
    POP EDI                             ; 0046b89c
    POP ESI                             ; 0046b89d
    POP EBX                             ; 0046b89e
    RET                                 ; 0046b89f
    SHL ECX,0x3                         ; 0046b8a0
        ;   Label: LAB_0046b8a0
    MOV EAX,EDX                         ; 0046b8a3
    ADD ECX,EBX                         ; 0046b8a5
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0046b8a7
    XOR EAX,EDX                         ; 0046b8aa
    AND ECX,0xff                        ; 0046b8ac
    MOV AL,byte ptr [ESI + 0x5b6d08]    ; 0046b8b2 | DAT_005b6d08
    TEST ECX,EAX                        ; 0046b8b8
    SETNZ AL                            ; 0046b8ba
    AND EAX,0xff                        ; 0046b8bd
    POP EBP                             ; 0046b8c2
    POP EDI                             ; 0046b8c3
    POP ESI                             ; 0046b8c4
    POP EBX                             ; 0046b8c5
    RET                                 ; 0046b8c6

