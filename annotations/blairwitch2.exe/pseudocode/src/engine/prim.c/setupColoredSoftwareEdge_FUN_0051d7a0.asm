; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0051d7a0(SRenderVertex *vertex0,SRenderVertex *vertex1)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex0
; SRenderVertex *  Stack[0x8]:4   vertex1
;
; Referenced Globals:
;   undefined4 DAT_01c38b50
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01e61b5c
;   undefined4 DAT_01e62060
;   undefined4 DAT_01e62064
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d7a0
        ;   Label: engine_prim.c_setupColoredSoftwareEdge_FUN_0051d7a0
    PUSH ESI                            ; 0051d7a1
    PUSH EDI                            ; 0051d7a2
    PUSH EBP                            ; 0051d7a3
    SUB ESP,0x8                         ; 0051d7a4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051d7a7
    MOV EBP,dword ptr [ESP + 0x20]      ; 0051d7ab
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051d7af
    MOV EBX,dword ptr [ESI + 0x14]      ; 0051d7b2
    SAR EDI,0x10                        ; 0051d7b5
    SAR EBX,0x10                        ; 0051d7b8
    CMP EBX,EDI                         ; 0051d7bb
    JZ 0x0051d9c3                       ; 0051d7bd
        ;   XREF to: 0051d9c3 (CONDITIONAL_JUMP)  ; LAB_0051d9c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051d7c3
    CMP EDX,dword ptr [ESI + 0x14]      ; 0051d7c6
    JGE 0x0051d7d7                      ; 0051d7c9
        ;   XREF to: 0051d7d7 (CONDITIONAL_JUMP)  ; LAB_0051d7d7
    MOV EAX,ESI                         ; 0051d7cb
    MOV ESI,EBP                         ; 0051d7cd
    MOV EBP,EAX                         ; 0051d7cf
    MOV EAX,EBX                         ; 0051d7d1
    MOV EBX,EDI                         ; 0051d7d3
    MOV EDI,EAX                         ; 0051d7d5
    MOV EAX,[0x01e61b5c]                ; 0051d7d7 | DAT_01e61b5c
        ;   Label: LAB_0051d7d7
    LEA ECX,[EAX*0x4 + 0x0]             ; 0051d7dc
    ADD ECX,EAX                         ; 0051d7e3
    SHL ECX,0x4                         ; 0051d7e5
    ADD ECX,0x1e61b60                   ; 0051d7e8
    MOV dword ptr [ECX],EBX             ; 0051d7ee
    MOV EAX,[0x01e62060]                ; 0051d7f0 | DAT_01e62060
    MOV dword ptr [ECX + 0x4],EDI       ; 0051d7f5
    CMP EBX,EAX                         ; 0051d7f8
    JGE 0x0051d802                      ; 0051d7fa
        ;   XREF to: 0051d802 (CONDITIONAL_JUMP)  ; LAB_0051d802
    MOV dword ptr [0x01e62060],EBX      ; 0051d7fc | DAT_01e62060
    CMP EDI,dword ptr [0x01e62064]      ; 0051d802 | DAT_01e62064
        ;   Label: LAB_0051d802
    JLE 0x0051d810                      ; 0051d808
        ;   XREF to: 0051d810 (CONDITIONAL_JUMP)  ; LAB_0051d810
    MOV dword ptr [0x01e62064],EDI      ; 0051d80a | DAT_01e62064
    MOV EDI,dword ptr [ESI + 0x14]      ; 0051d810
        ;   Label: LAB_0051d810
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051d813
    SUB EBX,EDI                         ; 0051d816
    CMP EBX,0x10000                     ; 0051d818
    JNC 0x0051d9cb                      ; 0051d81e
        ;   XREF to: 0051d9cb (CONDITIONAL_JUMP)  ; LAB_0051d9cb
    XOR EBX,EBX                         ; 0051d824
    MOV EAX,dword ptr [EBP + 0x10]      ; 0051d826
        ;   Label: LAB_0051d826
    MOV EDX,dword ptr [ESI + 0x10]      ; 0051d829
    MOV EDI,dword ptr [ESI + 0x14]      ; 0051d82c
    SUB EAX,EDX                         ; 0051d82f
    AND EDI,0xffff                      ; 0051d831
    MOV EDX,EAX                         ; 0051d837
    MOV EAX,EBX                         ; 0051d839
    XOR DI,0xffff                       ; 0051d83b
    IMUL EDX                            ; 0051d83f
    SHRD EAX,EDX,0x10                   ; 0051d841
    MOV EDX,EAX                         ; 0051d845
    MOV dword ptr [ECX + 0xc],EAX       ; 0051d847
    MOV EAX,EDI                         ; 0051d84a
    IMUL EDX                            ; 0051d84c
    SHRD EAX,EDX,0x10                   ; 0051d84e
    MOV dword ptr [ESP],EAX             ; 0051d852
    MOV EDX,dword ptr [ESP]             ; 0051d855
    MOV EAX,dword ptr [ESI + 0x10]      ; 0051d858
    ADD EAX,EDX                         ; 0051d85b
    MOV dword ptr [ECX + 0x8],EAX       ; 0051d85d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051d860
    MOV EDX,dword ptr [ESI + 0x18]      ; 0051d863
    SUB EAX,EDX                         ; 0051d866
    MOV EDX,EAX                         ; 0051d868
    MOV EAX,EBX                         ; 0051d86a
    IMUL EDX                            ; 0051d86c
    SHRD EAX,EDX,0x10                   ; 0051d86e
    MOV EDX,EAX                         ; 0051d872
    MOV dword ptr [ECX + 0x1c],EAX      ; 0051d874
    MOV EAX,EDI                         ; 0051d877
    IMUL EDX                            ; 0051d879
    SHRD EAX,EDX,0x10                   ; 0051d87b
    MOV dword ptr [ESP],EAX             ; 0051d87f
    MOV EDX,dword ptr [ESP]             ; 0051d882
    MOV EAX,dword ptr [ESI + 0x18]      ; 0051d885
    ADD EAX,EDX                         ; 0051d888
    MOV dword ptr [ECX + 0x18],EAX      ; 0051d88a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0051d88d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0051d890
    SUB EAX,EDX                         ; 0051d893
    MOV EDX,EAX                         ; 0051d895
    MOV EAX,EBX                         ; 0051d897
    IMUL EDX                            ; 0051d899
    SHRD EAX,EDX,0x10                   ; 0051d89b
    MOV EDX,EAX                         ; 0051d89f
    MOV dword ptr [ECX + 0x24],EAX      ; 0051d8a1
    MOV EAX,EDI                         ; 0051d8a4
    IMUL EDX                            ; 0051d8a6
    SHRD EAX,EDX,0x10                   ; 0051d8a8
    MOV dword ptr [ESP],EAX             ; 0051d8ac
    MOV EDX,dword ptr [ESP]             ; 0051d8af
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0051d8b2
    ADD EAX,EDX                         ; 0051d8b5
    MOV dword ptr [ECX + 0x20],EAX      ; 0051d8b7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051d8ba
    MOV EDX,dword ptr [ESI + 0x20]      ; 0051d8bd
    SUB EAX,EDX                         ; 0051d8c0
    MOV EDX,EAX                         ; 0051d8c2
    MOV EAX,EBX                         ; 0051d8c4
    IMUL EDX                            ; 0051d8c6
    SHRD EAX,EDX,0x10                   ; 0051d8c8
    MOV EDX,EAX                         ; 0051d8cc
    MOV dword ptr [ECX + 0x14],EAX      ; 0051d8ce
    MOV EAX,EDI                         ; 0051d8d1
    IMUL EDX                            ; 0051d8d3
    SHRD EAX,EDX,0x10                   ; 0051d8d5
    MOV dword ptr [ESP],EAX             ; 0051d8d9
    MOV EDX,dword ptr [ESP]             ; 0051d8dc
    MOV EAX,dword ptr [ESI + 0x20]      ; 0051d8df
    ADD EAX,EDX                         ; 0051d8e2
    MOV dword ptr [ECX + 0x10],EAX      ; 0051d8e4
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051d8e7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0051d8ea
    SUB EAX,EDX                         ; 0051d8ed
    MOV EDX,EAX                         ; 0051d8ef
    MOV EAX,EBX                         ; 0051d8f1
    IMUL EDX                            ; 0051d8f3
    SHRD EAX,EDX,0x10                   ; 0051d8f5
    MOV EDX,EAX                         ; 0051d8f9
    MOV dword ptr [ECX + 0x34],EAX      ; 0051d8fb
    MOV EAX,EDI                         ; 0051d8fe
    IMUL EDX                            ; 0051d900
    SHRD EAX,EDX,0x10                   ; 0051d902
    MOV dword ptr [ESP],EAX             ; 0051d906
    MOV EDX,dword ptr [ESP]             ; 0051d909
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0051d90c
    ADD EAX,EDX                         ; 0051d90f
    MOV dword ptr [ECX + 0x30],EAX      ; 0051d911
    CMP dword ptr [0x01c38b58],0x1      ; 0051d914 | DAT_01c38b58
    JNZ 0x0051d9ea                      ; 0051d91b
        ;   XREF to: 0051d9ea (CONDITIONAL_JUMP)  ; LAB_0051d9ea
    CMP dword ptr [0x01c38b50],0x0      ; 0051d921 | DAT_01c38b50
    JZ 0x0051d9db                       ; 0051d928
        ;   XREF to: 0051d9db (CONDITIONAL_JUMP)  ; LAB_0051d9db
    MOV EAX,0x7fffffff                  ; 0051d92e
    SUB EAX,dword ptr [ESI + 0x8]       ; 0051d933
    MOV EDX,0x7fffffff                  ; 0051d936
    MOV dword ptr [ESP + 0x4],EAX       ; 0051d93b
    SUB EDX,dword ptr [EBP + 0x8]       ; 0051d93f
    SUB EDX,dword ptr [ESP + 0x4]       ; 0051d942
        ;   Label: LAB_0051d942
    MOV EAX,EBX                         ; 0051d946
    IMUL EDX                            ; 0051d948
    SHRD EAX,EDX,0x10                   ; 0051d94a
    MOV EDX,EAX                         ; 0051d94e
    MOV dword ptr [ECX + 0x2c],EAX      ; 0051d950
    MOV EAX,EDI                         ; 0051d953
    IMUL EDX                            ; 0051d955
    SHRD EAX,EDX,0x10                   ; 0051d957
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051d95b
    ADD EDX,EAX                         ; 0051d95f
    MOV dword ptr [ECX + 0x28],EDX      ; 0051d961
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051d964
        ;   Label: LAB_0051d964
    MOV EDX,dword ptr [ESI + 0x24]      ; 0051d967
    SUB EAX,EDX                         ; 0051d96a
    MOV EDX,EAX                         ; 0051d96c
    MOV EAX,EBX                         ; 0051d96e
    IMUL EDX                            ; 0051d970
    SHRD EAX,EDX,0x10                   ; 0051d972
    MOV EDX,EAX                         ; 0051d976
    MOV dword ptr [ECX + 0x3c],EAX      ; 0051d978
    MOV EAX,EDI                         ; 0051d97b
    IMUL EDX                            ; 0051d97d
    SHRD EAX,EDX,0x10                   ; 0051d97f
    MOV dword ptr [ESP],EAX             ; 0051d983
    MOV EDX,dword ptr [ESP]             ; 0051d986
    MOV EAX,dword ptr [ESI + 0x24]      ; 0051d989
    ADD EAX,EDX                         ; 0051d98c
    MOV dword ptr [ECX + 0x38],EAX      ; 0051d98e
    MOV EDX,dword ptr [EBP + 0x28]      ; 0051d991
    SUB EDX,dword ptr [ESI + 0x28]      ; 0051d994
    MOV EAX,EBX                         ; 0051d997
    IMUL EDX                            ; 0051d999
    SHRD EAX,EDX,0x10                   ; 0051d99b
    MOV EDX,EAX                         ; 0051d99f
    MOV dword ptr [ECX + 0x44],EAX      ; 0051d9a1
    MOV EAX,EDI                         ; 0051d9a4
    IMUL EDX                            ; 0051d9a6
    SHRD EAX,EDX,0x10                   ; 0051d9a8
    MOV EDX,EAX                         ; 0051d9ac
    MOV EAX,dword ptr [ESI + 0x28]      ; 0051d9ae
    ADD EAX,EDX                         ; 0051d9b1
    MOV EDX,dword ptr [0x01e61b5c]      ; 0051d9b3 | DAT_01e61b5c
    INC EDX                             ; 0051d9b9
    MOV dword ptr [ECX + 0x40],EAX      ; 0051d9ba
    MOV dword ptr [0x01e61b5c],EDX      ; 0051d9bd | DAT_01e61b5c
    ADD ESP,0x8                         ; 0051d9c3
        ;   Label: LAB_0051d9c3
    POP EBP                             ; 0051d9c6
    POP EDI                             ; 0051d9c7
    POP ESI                             ; 0051d9c8
    POP EBX                             ; 0051d9c9
    RET                                 ; 0051d9ca
    MOV EAX,0xffffffff                  ; 0051d9cb
        ;   Label: LAB_0051d9cb
    XOR EDX,EDX                         ; 0051d9d0
    DIV EBX                             ; 0051d9d2
    MOV EBX,EAX                         ; 0051d9d4
    JMP 0x0051d826                      ; 0051d9d6
        ;   XREF to: 0051d826 (UNCONDITIONAL_JUMP)  ; LAB_0051d826
    MOV EAX,dword ptr [ESI + 0xc]       ; 0051d9db
        ;   Label: LAB_0051d9db
    MOV EDX,dword ptr [EBP + 0xc]       ; 0051d9de
    MOV dword ptr [ESP + 0x4],EAX       ; 0051d9e1
    JMP 0x0051d942                      ; 0051d9e5
        ;   XREF to: 0051d942 (UNCONDITIONAL_JUMP)  ; LAB_0051d942
    MOV EAX,dword ptr [EBP + 0x8]       ; 0051d9ea
        ;   Label: LAB_0051d9ea
    MOV EDX,dword ptr [ESI + 0x8]       ; 0051d9ed
    SUB EAX,EDX                         ; 0051d9f0
    MOV EDX,EAX                         ; 0051d9f2
    MOV EAX,EBX                         ; 0051d9f4
    IMUL EDX                            ; 0051d9f6
    SHRD EAX,EDX,0x10                   ; 0051d9f8
    MOV EDX,EAX                         ; 0051d9fc
    MOV dword ptr [ECX + 0x2c],EAX      ; 0051d9fe
    MOV EAX,EDI                         ; 0051da01
    IMUL EDX                            ; 0051da03
    SHRD EAX,EDX,0x10                   ; 0051da05
    MOV dword ptr [ESP],EAX             ; 0051da09
    MOV EDX,dword ptr [ESP]             ; 0051da0c
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051da0f
    ADD EAX,EDX                         ; 0051da12
    MOV dword ptr [ECX + 0x28],EAX      ; 0051da14
    JMP 0x0051d964                      ; 0051da17
        ;   XREF to: 0051d964 (UNCONDITIONAL_JUMP)  ; LAB_0051d964

