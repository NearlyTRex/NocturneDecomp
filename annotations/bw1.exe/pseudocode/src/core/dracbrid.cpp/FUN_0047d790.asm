; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dracbrid_cpp_FUN_0047d790(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01bc0d34
;   undefined4 DAT_01bc0d48
;   undefined4 DAT_01bc0d50
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d790
        ;   Label: core_dracbrid.cpp_FUN_0047d790
    PUSH EBP                            ; 0047d791
    SUB ESP,0x4c                        ; 0047d792
    MOV EBP,dword ptr [ESP + 0x58]      ; 0047d795
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0047d799
    CMP dword ptr [EBP + 0xc2f4],0x0    ; 0047d79d
    JZ 0x0047d7ae                       ; 0047d7a4
        ;   XREF to: 0047d7ae (CONDITIONAL_JUMP)  ; LAB_0047d7ae
    XOR EAX,EAX                         ; 0047d7a6
    ADD ESP,0x4c                        ; 0047d7a8
    POP EBP                             ; 0047d7ab
    POP EBX                             ; 0047d7ac
    RET                                 ; 0047d7ad
    PUSH EDI                            ; 0047d7ae
        ;   Label: LAB_0047d7ae
    PUSH ESI                            ; 0047d7af
    MOV ESI,dword ptr [0x01bc0d34]      ; 0047d7b0 | DAT_01bc0d34
    MOV ECX,0x3                         ; 0047d7b6
    PUSH ESI                            ; 0047d7bb
    LEA EAX,[EBP + 0x158]               ; 0047d7bc
    LEA EDI,[ESP + 0xc]                 ; 0047d7c2
    PUSH EAX                            ; 0047d7c6
    LEA ESI,[ESP + 0x34]                ; 0047d7c7
    MOV dword ptr [ESP + 0x58],ECX      ; 0047d7cb
    CALL core_skeleton.cpp_FUN_00569130 ; 0047d7cf
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x34]                ; 0047d7d4
    ADD ESP,0x8                         ; 0047d7d8
    LEA EAX,[ESP + 0x8]                 ; 0047d7db
    MOVSD ES:EDI,ESI                    ; 0047d7df
    MOVSD ES:EDI,ESI                    ; 0047d7e0
    MOVSD ES:EDI,ESI                    ; 0047d7e1
    CMP EBX,EAX                         ; 0047d7e2
    JZ 0x0047d7fa                       ; 0047d7e4
        ;   XREF to: 0047d7fa (CONDITIONAL_JUMP)  ; LAB_0047d7fa
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047d7e6
    MOV dword ptr [EBX],EAX             ; 0047d7ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047d7ec
    MOV dword ptr [EBX + 0x4],EAX       ; 0047d7f0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047d7f3
    MOV dword ptr [EBX + 0x8],EAX       ; 0047d7f7
    MOV EDI,dword ptr [0x01bc0d48]      ; 0047d7fa | DAT_01bc0d48
        ;   Label: LAB_0047d7fa
    PUSH EDI                            ; 0047d800
    LEA EAX,[EBP + 0x158]               ; 0047d801
    PUSH EAX                            ; 0047d807
    LEA ESI,[ESP + 0x40]                ; 0047d808
    LEA EDI,[ESP + 0x4c]                ; 0047d80c
    CALL core_skeleton.cpp_FUN_00569130 ; 0047d810
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x40]                ; 0047d815
    LEA EAX,[ESP + 0x4c]                ; 0047d819
    ADD ESP,0x8                         ; 0047d81d
    LEA EDX,[EBX + 0xc]                 ; 0047d820
    MOVSD ES:EDI,ESI                    ; 0047d823
    MOVSD ES:EDI,ESI                    ; 0047d824
    MOVSD ES:EDI,ESI                    ; 0047d825
    CMP EDX,EAX                         ; 0047d826
    JZ 0x0047d83e                       ; 0047d828
        ;   XREF to: 0047d83e (CONDITIONAL_JUMP)  ; LAB_0047d83e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0047d82a
    MOV dword ptr [EDX],EAX             ; 0047d82e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047d830
    MOV dword ptr [EDX + 0x4],EAX       ; 0047d834
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047d837
    MOV dword ptr [EDX + 0x8],EAX       ; 0047d83b
    MOV EAX,[0x01bc0d50]                ; 0047d83e | DAT_01bc0d50
        ;   Label: LAB_0047d83e
    PUSH EAX                            ; 0047d843
    ADD EBP,0x158                       ; 0047d844
    LEA ESI,[ESP + 0x24]                ; 0047d84a
    PUSH EBP                            ; 0047d84e
    LEA EDI,[ESP + 0x1c]                ; 0047d84f
    ADD EBX,0x18                        ; 0047d853
    CALL core_skeleton.cpp_FUN_00569130 ; 0047d856
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x28]                ; 0047d85b
    ADD ESP,0x8                         ; 0047d85f
    LEA EAX,[ESP + 0x14]                ; 0047d862
    MOVSD ES:EDI,ESI                    ; 0047d866
    MOVSD ES:EDI,ESI                    ; 0047d867
    MOVSD ES:EDI,ESI                    ; 0047d868
    CMP EBX,EAX                         ; 0047d869
    JZ 0x0047d881                       ; 0047d86b
        ;   XREF to: 0047d881 (CONDITIONAL_JUMP)  ; LAB_0047d881
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047d86d
    MOV dword ptr [EBX],EAX             ; 0047d871
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047d873
    MOV dword ptr [EBX + 0x4],EAX       ; 0047d877
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047d87a
    MOV dword ptr [EBX + 0x8],EAX       ; 0047d87e
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047d881
        ;   Label: LAB_0047d881
    POP ESI                             ; 0047d885
    POP EDI                             ; 0047d886
    ADD ESP,0x4c                        ; 0047d887
    POP EBP                             ; 0047d88a
    POP EBX                             ; 0047d88b
    RET                                 ; 0047d88c

