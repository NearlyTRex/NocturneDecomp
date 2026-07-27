; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ncursfx_cpp_FUN_004ee740(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_004083c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee740
        ;   Label: engine_ncursfx.cpp_FUN_004ee740
    PUSH EDI                            ; 004ee741
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ee742
    MOV EDX,dword ptr [0x01bd1d90]      ; 004ee746 | DAT_01bd1d90
    MOV EAX,[0x01bd1d8c]                ; 004ee74c | DAT_01bd1d8c
    MOV ECX,dword ptr [EBX + 0x25c]     ; 004ee751
    SUB EDX,0xc                         ; 004ee757
    SUB EAX,0xd                         ; 004ee75a
    CMP ECX,0x1                         ; 004ee75d
    JZ 0x004ee7f4                       ; 004ee760
        ;   XREF to: 004ee7f4 (CONDITIONAL_JUMP)  ; LAB_004ee7f4
    CMP ECX,0x2                         ; 004ee766
    JNZ 0x004ee824                      ; 004ee769
        ;   XREF to: 004ee824 (CONDITIONAL_JUMP)  ; LAB_004ee824
    PUSH 0xffff                         ; 004ee76f
    PUSH EDX                            ; 004ee774
    PUSH EAX                            ; 004ee775
    MOV EAX,dword ptr [EBX + 0x258]     ; 004ee776
    MOV EDX,EAX                         ; 004ee77c
    SAR EDX,0x1f                        ; 004ee77e
    SHL EDX,0x10                        ; 004ee781
    SBB EAX,EDX                         ; 004ee784
    SAR EAX,0x10                        ; 004ee786
    MOV EDX,EAX                         ; 004ee789
    SHL EAX,0x2                         ; 004ee78b
    ADD EDX,EAX                         ; 004ee78e
    SHL EDX,0x2                         ; 004ee790
    LEA EAX,[EBX + 0x12c]               ; 004ee793
    ADD EAX,EDX                         ; 004ee799
    PUSH EAX                            ; 004ee79b
        ;   Label: LAB_004ee79b
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004ee79c
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
        ;   Label: LAB_004ee79c
    ADD ESP,0x10                        ; 004ee7a1
    MOV EDI,dword ptr [EBX + 0x25c]     ; 004ee7a4
    TEST EDI,EDI                        ; 004ee7aa
    JZ 0x004ee7f1                       ; 004ee7ac
        ;   XREF to: 004ee7f1 (CONDITIONAL_JUMP)  ; LAB_004ee7f1
    CMP EDI,0x2                         ; 004ee7ae
    JNZ 0x004ee831                      ; 004ee7b1
        ;   XREF to: 004ee831 (CONDITIONAL_JUMP)  ; LAB_004ee831
    MOV EAX,[0x01bd1d80]                ; 004ee7b7 | DAT_01bd1d80
        ;   Label: LAB_004ee7b7
    MOV EDX,dword ptr [EBX + 0x258]     ; 004ee7bc
    SHL EAX,0x5                         ; 004ee7c2
    MOV ECX,dword ptr [EBX + 0x25c]     ; 004ee7c5
    ADD EDX,EAX                         ; 004ee7cb
    MOV EAX,0x7                         ; 004ee7cd
    MOV dword ptr [EBX + 0x258],EDX     ; 004ee7d2
    CMP ECX,0x2                         ; 004ee7d8
    JNZ 0x004ee7e2                      ; 004ee7db
        ;   XREF to: 004ee7e2 (CONDITIONAL_JUMP)  ; LAB_004ee7e2
    MOV EAX,0xf                         ; 004ee7dd
    SHL EAX,0x10                        ; 004ee7e2
        ;   Label: LAB_004ee7e2
    CMP EAX,dword ptr [EBX + 0x258]     ; 004ee7e5
    JLE 0x004ee88f                      ; 004ee7eb
        ;   XREF to: 004ee88f (CONDITIONAL_JUMP)  ; LAB_004ee88f
    POP EDI                             ; 004ee7f1
        ;   Label: LAB_004ee7f1
    POP EBX                             ; 004ee7f2
    RET                                 ; 004ee7f3
    PUSH 0xffff                         ; 004ee7f4
        ;   Label: LAB_004ee7f4
    PUSH EDX                            ; 004ee7f9
    PUSH EAX                            ; 004ee7fa
    MOV EAX,dword ptr [EBX + 0x258]     ; 004ee7fb
    MOV EDX,EAX                         ; 004ee801
    SAR EDX,0x1f                        ; 004ee803
    SHL EDX,0x10                        ; 004ee806
    SBB EAX,EDX                         ; 004ee809
    SAR EAX,0x10                        ; 004ee80b
    LEA EDX,[EAX + ECX*0x1]             ; 004ee80e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ee811
    ADD EAX,EDX                         ; 004ee818
    SHL EAX,0x2                         ; 004ee81a
    ADD EAX,EBX                         ; 004ee81d
    JMP 0x004ee79b                      ; 004ee81f
        ;   XREF to: 004ee79b (UNCONDITIONAL_JUMP)  ; LAB_004ee79b
    PUSH 0xffff                         ; 004ee824
        ;   Label: LAB_004ee824
    PUSH EDX                            ; 004ee829
    PUSH EAX                            ; 004ee82a
    PUSH EBX                            ; 004ee82b
    JMP 0x004ee79c                      ; 004ee82c
        ;   XREF to: 004ee79c (UNCONDITIONAL_JUMP)  ; LAB_004ee79c
    PUSH 0x1                            ; 004ee831
        ;   Label: LAB_004ee831
    CALL engine_3d.c_setBlendMode_FUN_004083c0 ; 004ee833
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setBlendMode_FUN_004083c0()
    ADD ESP,0x4                         ; 004ee838
    MOV EAX,[0x01bd1d90]                ; 004ee83b | DAT_01bd1d90
    PUSH 0x8000                         ; 004ee840
    SUB EAX,0xc                         ; 004ee845
    PUSH EAX                            ; 004ee848
    MOV EAX,[0x01bd1d8c]                ; 004ee849 | DAT_01bd1d8c
    SUB EAX,0xd                         ; 004ee84e
    PUSH EAX                            ; 004ee851
    MOV EAX,dword ptr [EBX + 0x258]     ; 004ee852
    MOV EDX,EAX                         ; 004ee858
    SAR EDX,0x1f                        ; 004ee85a
    SHL EDX,0x10                        ; 004ee85d
    SBB EAX,EDX                         ; 004ee860
    SAR EAX,0x10                        ; 004ee862
    MOV EDX,EAX                         ; 004ee865
    SHL EAX,0x2                         ; 004ee867
    ADD EDX,EAX                         ; 004ee86a
    SHL EDX,0x2                         ; 004ee86c
    LEA EAX,[EBX + 0xa0]                ; 004ee86f
    ADD EAX,EDX                         ; 004ee875
    PUSH EAX                            ; 004ee877
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004ee878
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004ee87d
    PUSH 0x0                            ; 004ee880
    CALL engine_3d.c_setBlendMode_FUN_004083c0 ; 004ee882
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setBlendMode_FUN_004083c0()
    ADD ESP,0x4                         ; 004ee887
    JMP 0x004ee7b7                      ; 004ee88a
        ;   XREF to: 004ee7b7 (UNCONDITIONAL_JUMP)  ; LAB_004ee7b7
    MOV dword ptr [EBX + 0x25c],0x0     ; 004ee88f
        ;   Label: LAB_004ee88f
    MOV dword ptr [EBX + 0x258],0x0     ; 004ee899
    POP EDI                             ; 004ee8a3
    POP EBX                             ; 004ee8a4
    RET                                 ; 004ee8a5

