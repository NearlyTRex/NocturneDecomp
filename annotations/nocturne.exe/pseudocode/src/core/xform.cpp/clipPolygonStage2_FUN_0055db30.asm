; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_clipPolygonStage2_FUN_0055db30(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0055db24 = 0055dbfc
;   undefined1* PTR_caseD_3_0055db2c = 0055dbdc
;   undefined4 DAT_02de3134
;   undefined4 DAT_02de3138
;   undefined4 DAT_02de3140
;   undefined4 DAT_02de3148
;   undefined4 DAT_02de3d44
;
; Called Functions:
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055db30
        ;   Label: core_xform.cpp_clipPolygonStage2_FUN_0055db30
    PUSH ESI                            ; 0055db31
    PUSH EDI                            ; 0055db32
    PUSH EBP                            ; 0055db33
    SUB ESP,0x4                         ; 0055db34
    XOR EDX,EDX                         ; 0055db37
    MOV ECX,dword ptr [0x02de3134]      ; 0055db39 | DAT_02de3134
    MOV dword ptr [ESP],EDX             ; 0055db3f
    TEST ECX,ECX                        ; 0055db42
    JLE 0x0055dbf4                      ; 0055db44
        ;   XREF to: 0055dbf4 (CONDITIONAL_JUMP)  ; LAB_0055dbf4
    MOV EBX,0x2de3140                   ; 0055db4a
    MOV EAX,dword ptr [ESP]             ; 0055db4f
        ;   Label: LAB_0055db4f
    MOV EBP,dword ptr [0x02de3134]      ; 0055db52 | DAT_02de3134
    INC EAX                             ; 0055db58
    CMP EAX,EBP                         ; 0055db59
    JNZ 0x0055db5f                      ; 0055db5b
        ;   XREF to: 0055db5f (CONDITIONAL_JUMP)  ; LAB_0055db5f
    XOR EAX,EBP                         ; 0055db5d
    IMUL EAX,EAX,0x30                   ; 0055db5f
        ;   Label: LAB_0055db5f
    MOV EBP,0x2de3140                   ; 0055db62
    MOV EDX,EBX                         ; 0055db67
    MOV EDI,dword ptr [EBX + 0x8]       ; 0055db69
    MOV ECX,dword ptr [EBX]             ; 0055db6c
    NEG EDI                             ; 0055db6e
    ADD EBP,EAX                         ; 0055db70
    XOR EAX,EAX                         ; 0055db72
    CMP EDI,ECX                         ; 0055db74
    JL 0x0055db7d                       ; 0055db76
        ;   XREF to: 0055db7d (CONDITIONAL_JUMP)  ; LAB_0055db7d
    MOV EAX,0x1                         ; 0055db78
    MOV EDI,dword ptr [EBP + 0x8]       ; 0055db7d | DAT_02de3148
        ;   Label: LAB_0055db7d
    MOV ESI,dword ptr [EBP]             ; 0055db80 | DAT_02de3140
    NEG EDI                             ; 0055db83
    CMP EDI,ESI                         ; 0055db85
    JL 0x0055db8b                       ; 0055db87
        ;   XREF to: 0055db8b (CONDITIONAL_JUMP)  ; LAB_0055db8b
    OR AL,0x2                           ; 0055db89
    CMP EAX,0x3                         ; 0055db8b
        ;   Label: LAB_0055db8b
    JA 0x0055dbdc                       ; 0055db8e
        ;   XREF to: 0055dbdc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55db20]  ; 0055db90 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02de3138],0x30 ; 0055db97 | DAT_02de3138
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055db9e
    MOV ESI,EDX                         ; 0055dba3
    ADD EDI,0x2de3d40                   ; 0055dba5
    TEST EDI,0x7                        ; 0055dbab
    JZ 0x0055dbb9                       ; 0055dbb1
        ;   XREF to: 0055dbb9 (CONDITIONAL_JUMP)  ; LAB_0055dbb9
    MOVSD ES:EDI,ESI                    ; 0055dbb3
    SUB ECX,0x4                         ; 0055dbb4
    JLE 0x0055dbd6                      ; 0055dbb7
        ;   XREF to: 0055dbd6 (CONDITIONAL_JUMP)  ; LAB_0055dbd6
    SUB ECX,0x8                         ; 0055dbb9
        ;   Label: LAB_0055dbb9
    JL 0x0055dbca                       ; 0055dbbc
        ;   XREF to: 0055dbca (CONDITIONAL_JUMP)  ; LAB_0055dbca
    FILD qword ptr [ESI]                ; 0055dbbe
    ADD ESI,0x8                         ; 0055dbc0
    FISTP qword ptr [EDI]               ; 0055dbc3 | DAT_02de3d44
    ADD EDI,0x8                         ; 0055dbc5
    JMP 0x0055dbb9                      ; 0055dbc8
        ;   XREF to: 0055dbb9 (UNCONDITIONAL_JUMP)  ; LAB_0055dbb9
    ADD ECX,0x8                         ; 0055dbca
        ;   Label: LAB_0055dbca
    JLE 0x0055dbd6                      ; 0055dbcd
        ;   XREF to: 0055dbd6 (CONDITIONAL_JUMP)  ; LAB_0055dbd6
    MOVSD ES:EDI,ESI                    ; 0055dbcf
    SUB ECX,0x4                         ; 0055dbd0
    JLE 0x0055dbd6                      ; 0055dbd3
        ;   XREF to: 0055dbd6 (CONDITIONAL_JUMP)  ; LAB_0055dbd6
    MOVSD ES:EDI,ESI                    ; 0055dbd5
    INC dword ptr [0x02de3138]          ; 0055dbd6 | DAT_02de3138
        ;   Label: LAB_0055dbd6
    MOV ESI,dword ptr [ESP]             ; 0055dbdc
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02de3134]      ; 0055dbdf | DAT_02de3134
    INC ESI                             ; 0055dbe5
    ADD EBX,0x30                        ; 0055dbe6
    MOV dword ptr [ESP],ESI             ; 0055dbe9
    CMP ESI,EDI                         ; 0055dbec
    JL 0x0055db4f                       ; 0055dbee
        ;   XREF to: 0055db4f (CONDITIONAL_JUMP)  ; LAB_0055db4f
    ADD ESP,0x4                         ; 0055dbf4
        ;   Label: LAB_0055dbf4
    POP EBP                             ; 0055dbf7
    POP EDI                             ; 0055dbf8
    POP ESI                             ; 0055dbf9
    POP EBX                             ; 0055dbfa
    RET                                 ; 0055dbfb
    IMUL EAX,dword ptr [0x02de3138],0x30 ; 0055dbfc | DAT_02de3138
        ;   Label: caseD_1
    ADD EAX,0x2de3d40                   ; 0055dc03
    PUSH EAX                            ; 0055dc08
    PUSH EDX                            ; 0055dc09
    PUSH EBP                            ; 0055dc0a
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770 ; 0055dc0b
        ;   XREF to: 0055d770 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02de3138]      ; 0055dc10 | DAT_02de3138
    INC ESI                             ; 0055dc16
    ADD ESP,0xc                         ; 0055dc17
    MOV dword ptr [0x02de3138],ESI      ; 0055dc1a | DAT_02de3138
    JMP 0x0055dbdc                      ; 0055dc20
        ;   XREF to: 0055dbdc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02de3138],0x30 ; 0055dc22 | DAT_02de3138
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055dc29
    MOV ESI,EDX                         ; 0055dc2e
    ADD EDI,0x2de3d40                   ; 0055dc30
    TEST EDI,0x7                        ; 0055dc36
    JZ 0x0055dc44                       ; 0055dc3c
        ;   XREF to: 0055dc44 (CONDITIONAL_JUMP)  ; LAB_0055dc44
    MOVSD ES:EDI,ESI                    ; 0055dc3e
    SUB ECX,0x4                         ; 0055dc3f
    JLE 0x0055dc61                      ; 0055dc42
        ;   XREF to: 0055dc61 (CONDITIONAL_JUMP)  ; LAB_0055dc61
    SUB ECX,0x8                         ; 0055dc44
        ;   Label: LAB_0055dc44
    JL 0x0055dc55                       ; 0055dc47
        ;   XREF to: 0055dc55 (CONDITIONAL_JUMP)  ; LAB_0055dc55
    FILD qword ptr [ESI]                ; 0055dc49
    ADD ESI,0x8                         ; 0055dc4b
    FISTP qword ptr [EDI]               ; 0055dc4e | DAT_02de3d44
    ADD EDI,0x8                         ; 0055dc50
    JMP 0x0055dc44                      ; 0055dc53
        ;   XREF to: 0055dc44 (UNCONDITIONAL_JUMP)  ; LAB_0055dc44
    ADD ECX,0x8                         ; 0055dc55
        ;   Label: LAB_0055dc55
    JLE 0x0055dc61                      ; 0055dc58
        ;   XREF to: 0055dc61 (CONDITIONAL_JUMP)  ; LAB_0055dc61
    MOVSD ES:EDI,ESI                    ; 0055dc5a
    SUB ECX,0x4                         ; 0055dc5b
    JLE 0x0055dc61                      ; 0055dc5e
        ;   XREF to: 0055dc61 (CONDITIONAL_JUMP)  ; LAB_0055dc61
    MOVSD ES:EDI,ESI                    ; 0055dc60
    MOV ECX,dword ptr [0x02de3138]      ; 0055dc61 | DAT_02de3138
        ;   Label: LAB_0055dc61
    INC ECX                             ; 0055dc67
    MOV dword ptr [0x02de3138],ECX      ; 0055dc68 | DAT_02de3138
    IMUL EAX,ECX,0x30                   ; 0055dc6e
    ADD EAX,0x2de3d40                   ; 0055dc71
    PUSH EAX                            ; 0055dc76
    PUSH EBP                            ; 0055dc77
    PUSH EDX                            ; 0055dc78
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770 ; 0055dc79
        ;   XREF to: 0055d770 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02de3138]      ; 0055dc7e | DAT_02de3138
    INC EDI                             ; 0055dc84
    ADD ESP,0xc                         ; 0055dc85
    MOV dword ptr [0x02de3138],EDI      ; 0055dc88 | DAT_02de3138
    JMP 0x0055dbdc                      ; 0055dc8e
        ;   XREF to: 0055dbdc (UNCONDITIONAL_JUMP)  ; caseD_3

