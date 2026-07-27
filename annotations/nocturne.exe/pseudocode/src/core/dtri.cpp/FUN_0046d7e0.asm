; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046d7e0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0046d7d4 = 0046d894
;   undefined1* PTR_caseD_3_0046d7dc = 0046d879
;   undefined4 DAT_01bc9a30
;   undefined4 DAT_01bc9af4
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d7e0
        ;   Label: core_dtri.cpp_FUN_0046d7e0
    PUSH ESI                            ; 0046d7e1
    PUSH EDI                            ; 0046d7e2
    PUSH EBP                            ; 0046d7e3
    MOV EBP,ESP                         ; 0046d7e4
    SUB ESP,0x8                         ; 0046d7e6
    AND ESP,0xfffffff8                  ; 0046d7e9
    MOV EBX,dword ptr [0x01bc9af4]      ; 0046d7ec | DAT_01bc9af4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046d7f2
    MOV dword ptr [ESP],EDX             ; 0046d7f5
    MOV EDX,dword ptr [0x01bc9a30]      ; 0046d7f8 | DAT_01bc9a30
    XOR EDI,EDI                         ; 0046d7fe
    TEST EDX,EDX                        ; 0046d800
    JLE 0x0046d887                      ; 0046d802
        ;   XREF to: 0046d887 (CONDITIONAL_JUMP)  ; LAB_0046d887
    MOV ESI,0x1bc9a34                   ; 0046d808
    MOV EAX,[0x01bc9a30]                ; 0046d80d | DAT_01bc9a30
        ;   Label: LAB_0046d80d
    LEA ECX,[EDI + 0x1]                 ; 0046d812
    CMP ECX,EAX                         ; 0046d815
    JNZ 0x0046d81b                      ; 0046d817
        ;   XREF to: 0046d81b (CONDITIONAL_JUMP)  ; LAB_0046d81b
    XOR ECX,EAX                         ; 0046d819
    IMUL ECX,ECX,0xc                    ; 0046d81b
        ;   Label: LAB_0046d81b
    MOV EAX,0x1bc9a34                   ; 0046d81e
    FLD float ptr [ESI + 0x4]           ; 0046d823
    ADD EAX,ECX                         ; 0046d826
    MOV EDX,ESI                         ; 0046d828
    MOV dword ptr [ESP + 0x4],EAX       ; 0046d82a
    XOR ECX,ECX                         ; 0046d82e
    FCOMP float ptr [ESP]               ; 0046d830
    FNSTSW AX                           ; 0046d833
    SAHF                                ; 0046d835
    JNC 0x0046d83d                      ; 0046d836
        ;   XREF to: 0046d83d (CONDITIONAL_JUMP)  ; LAB_0046d83d
    MOV ECX,0x1                         ; 0046d838
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d83d
        ;   Label: LAB_0046d83d
    FLD float ptr [EAX + 0x4]           ; 0046d841
    FCOMP float ptr [ESP]               ; 0046d844
    FNSTSW AX                           ; 0046d847
    SAHF                                ; 0046d849
    JNC 0x0046d84f                      ; 0046d84a
        ;   XREF to: 0046d84f (CONDITIONAL_JUMP)  ; LAB_0046d84f
    OR CL,0x2                           ; 0046d84c
    CMP ECX,0x3                         ; 0046d84f
        ;   Label: LAB_0046d84f
    JA 0x0046d879                       ; 0046d852
        ;   XREF to: 0046d879 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46d7d0]  ; 0046d854 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0046d85b
        ;   Label: caseD_0
    ADD ECX,0x1bc9af8                   ; 0046d85e
    CMP ECX,EDX                         ; 0046d864
    JZ 0x0046d878                       ; 0046d866
        ;   XREF to: 0046d878 (CONDITIONAL_JUMP)  ; LAB_0046d878
    MOV EAX,dword ptr [EDX]             ; 0046d868
    MOV dword ptr [ECX],EAX             ; 0046d86a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046d86c
    MOV dword ptr [ECX + 0x4],EAX       ; 0046d86f
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046d872
    MOV dword ptr [ECX + 0x8],EAX       ; 0046d875
    INC EBX                             ; 0046d878
        ;   Label: LAB_0046d878
    MOV ECX,dword ptr [0x01bc9a30]      ; 0046d879 | DAT_01bc9a30
        ;   Label: caseD_3
    INC EDI                             ; 0046d87f
    ADD ESI,0xc                         ; 0046d880
    CMP EDI,ECX                         ; 0046d883
    JL 0x0046d80d                       ; 0046d885
        ;   XREF to: 0046d80d (CONDITIONAL_JUMP)  ; LAB_0046d80d
    MOV dword ptr [0x01bc9af4],EBX      ; 0046d887 | DAT_01bc9af4
        ;   Label: LAB_0046d887
    MOV ESP,EBP                         ; 0046d88d
    POP EBP                             ; 0046d88f
    POP EDI                             ; 0046d890
    POP ESI                             ; 0046d891
    POP EBX                             ; 0046d892
    RET                                 ; 0046d893
    IMUL ECX,EBX,0xc                    ; 0046d894
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0046d897
    SUB ESP,0x8                         ; 0046d89a
    FSTP double ptr [ESP]               ; 0046d89d
    PUSH 0x0                            ; 0046d8a0
    PUSH 0x0                            ; 0046d8a2
    PUSH 0xbff00000                     ; 0046d8a4
    PUSH 0x0                            ; 0046d8a9
    PUSH 0x0                            ; 0046d8ab
    PUSH 0x0                            ; 0046d8ad
    ADD ECX,0x1bc9af8                   ; 0046d8af
    PUSH ECX                            ; 0046d8b5
    PUSH EDX                            ; 0046d8b6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0046d8b7
    PUSH EAX                            ; 0046d8bb
    MOV dword ptr [0x01bc9af4],EBX      ; 0046d8bc | DAT_01bc9af4
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046d8c2
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_0046d4e0()
    MOV EBX,dword ptr [0x01bc9af4]      ; 0046d8c7 | DAT_01bc9af4
    ADD ESP,0x2c                        ; 0046d8cd
    JMP 0x0046d878                      ; 0046d8d0
        ;   XREF to: 0046d878 (UNCONDITIONAL_JUMP)  ; LAB_0046d878
    IMUL ECX,EBX,0xc                    ; 0046d8d2
        ;   Label: caseD_2
    ADD ECX,0x1bc9af8                   ; 0046d8d5
    CMP ECX,EDX                         ; 0046d8db
    JZ 0x0046d8ef                       ; 0046d8dd
        ;   XREF to: 0046d8ef (CONDITIONAL_JUMP)  ; LAB_0046d8ef
    MOV EAX,dword ptr [EDX]             ; 0046d8df
    MOV dword ptr [ECX],EAX             ; 0046d8e1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046d8e3
    MOV dword ptr [ECX + 0x4],EAX       ; 0046d8e6
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046d8e9
    MOV dword ptr [ECX + 0x8],EAX       ; 0046d8ec
    INC EBX                             ; 0046d8ef
        ;   Label: LAB_0046d8ef
    IMUL ECX,EBX,0xc                    ; 0046d8f0
    FLD float ptr [ESP]                 ; 0046d8f3
    SUB ESP,0x8                         ; 0046d8f6
    FSTP double ptr [ESP]               ; 0046d8f9
    PUSH 0x0                            ; 0046d8fc
    PUSH 0x0                            ; 0046d8fe
    PUSH 0xbff00000                     ; 0046d900
    PUSH 0x0                            ; 0046d905
    PUSH 0x0                            ; 0046d907
    PUSH 0x0                            ; 0046d909
    ADD ECX,0x1bc9af8                   ; 0046d90b
    PUSH ECX                            ; 0046d911
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046d912
    PUSH ECX                            ; 0046d916
    PUSH EDX                            ; 0046d917
    MOV dword ptr [0x01bc9af4],EBX      ; 0046d918 | DAT_01bc9af4
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046d91e
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_0046d4e0()
    MOV EBX,dword ptr [0x01bc9af4]      ; 0046d923 | DAT_01bc9af4
    ADD ESP,0x2c                        ; 0046d929
    JMP 0x0046d878                      ; 0046d92c
        ;   XREF to: 0046d878 (UNCONDITIONAL_JUMP)  ; LAB_0046d878

