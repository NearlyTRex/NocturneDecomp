; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage3_FUN_00587940(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00587924 = 005879a2
;   undefined1* PTR_caseD_3_00587930 = 005879e7
;   undefined4 DAT_02d23000
;   undefined4 DAT_02d23004
;   undefined4 DAT_02d23c0c
;   undefined4 DAT_02d23c10
;   undefined4 DAT_02d24208
;   undefined4 DAT_02d2420c
;   undefined4 DAT_02d24214
;   undefined4 DAT_02d24218
;
; Called Functions:
;   core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587940
        ;   Label: core_xform.cpp_clipPolygonStage3_FUN_00587940
    PUSH ESI                            ; 00587941
    PUSH EDI                            ; 00587942
    PUSH EBP                            ; 00587943
    SUB ESP,0x4                         ; 00587944
    XOR EDX,EDX                         ; 00587947
    MOV ECX,dword ptr [0x02d23000]      ; 00587949 | DAT_02d23000
    MOV dword ptr [ESP],EDX             ; 0058794f
    TEST ECX,ECX                        ; 00587952
    JLE 0x005879ff                      ; 00587954
        ;   XREF to: 005879ff (CONDITIONAL_JUMP)  ; LAB_005879ff
    MOV EBX,0x2d23c08                   ; 0058795a
    MOV EAX,dword ptr [ESP]             ; 0058795f
        ;   Label: LAB_0058795f
    MOV EBP,dword ptr [0x02d23000]      ; 00587962 | DAT_02d23000
    INC EAX                             ; 00587968
    CMP EAX,EBP                         ; 00587969
    JNZ 0x0058796f                      ; 0058796b
        ;   XREF to: 0058796f (CONDITIONAL_JUMP)  ; LAB_0058796f
    XOR EAX,EBP                         ; 0058796d
    IMUL EAX,EAX,0x30                   ; 0058796f
        ;   Label: LAB_0058796f
    MOV EBP,0x2d23c08                   ; 00587972
    MOV EDX,EBX                         ; 00587977
    MOV EDI,dword ptr [EBX + 0x4]       ; 00587979
    MOV ECX,dword ptr [EBX + 0x8]       ; 0058797c
    ADD EBP,EAX                         ; 0058797f
    XOR EAX,EAX                         ; 00587981
    CMP EDI,ECX                         ; 00587983
    JL 0x0058798c                       ; 00587985
        ;   XREF to: 0058798c (CONDITIONAL_JUMP)  ; LAB_0058798c
    MOV EAX,0x1                         ; 00587987
    MOV ESI,dword ptr [EBP + 0x8]       ; 0058798c | DAT_02d23c10
        ;   Label: LAB_0058798c
    CMP ESI,dword ptr [EBP + 0x4]       ; 0058798f | DAT_02d23c0c
    JG 0x00587996                       ; 00587992
        ;   XREF to: 00587996 (CONDITIONAL_JUMP)  ; LAB_00587996
    OR AL,0x2                           ; 00587994
    CMP EAX,0x3                         ; 00587996
        ;   Label: LAB_00587996
    JA 0x005879e7                       ; 00587999
        ;   XREF to: 005879e7 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x587924]  ; 0058799b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02d23004],0x30 ; 005879a2 | DAT_02d23004
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005879a9
    MOV ESI,EDX                         ; 005879ae
    ADD EDI,0x2d24208                   ; 005879b0
    TEST EDI,0x7                        ; 005879b6
    JZ 0x005879c4                       ; 005879bc
        ;   XREF to: 005879c4 (CONDITIONAL_JUMP)  ; LAB_005879c4
    MOVSD ES:EDI,ESI                    ; 005879be | DAT_02d24208
    SUB ECX,0x4                         ; 005879bf
    JLE 0x005879e1                      ; 005879c2
        ;   XREF to: 005879e1 (CONDITIONAL_JUMP)  ; LAB_005879e1
    SUB ECX,0x8                         ; 005879c4
        ;   Label: LAB_005879c4
    JL 0x005879d5                       ; 005879c7
        ;   XREF to: 005879d5 (CONDITIONAL_JUMP)  ; LAB_005879d5
    FILD qword ptr [ESI]                ; 005879c9
    ADD ESI,0x8                         ; 005879cb
    FISTP qword ptr [EDI]               ; 005879ce | DAT_02d2420c | DAT_02d24214 | DAT_02d24208
    ADD EDI,0x8                         ; 005879d0
    JMP 0x005879c4                      ; 005879d3
        ;   XREF to: 005879c4 (UNCONDITIONAL_JUMP)  ; LAB_005879c4
    ADD ECX,0x8                         ; 005879d5
        ;   Label: LAB_005879d5
    JLE 0x005879e1                      ; 005879d8
        ;   XREF to: 005879e1 (CONDITIONAL_JUMP)  ; LAB_005879e1
    MOVSD ES:EDI,ESI                    ; 005879da | DAT_02d24214
    SUB ECX,0x4                         ; 005879db
    JLE 0x005879e1                      ; 005879de
        ;   XREF to: 005879e1 (CONDITIONAL_JUMP)  ; LAB_005879e1
    MOVSD ES:EDI,ESI                    ; 005879e0 | DAT_02d24218
    INC dword ptr [0x02d23004]          ; 005879e1 | DAT_02d23004
        ;   Label: LAB_005879e1
    MOV ESI,dword ptr [ESP]             ; 005879e7
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02d23000]      ; 005879ea | DAT_02d23000
    INC ESI                             ; 005879f0
    ADD EBX,0x30                        ; 005879f1
    MOV dword ptr [ESP],ESI             ; 005879f4
    CMP ESI,EDI                         ; 005879f7
    JL 0x0058795f                       ; 005879f9
        ;   XREF to: 0058795f (CONDITIONAL_JUMP)  ; LAB_0058795f
    ADD ESP,0x4                         ; 005879ff
        ;   Label: LAB_005879ff
    POP EBP                             ; 00587a02
    POP EDI                             ; 00587a03
    POP ESI                             ; 00587a04
    POP EBX                             ; 00587a05
    RET                                 ; 00587a06
    IMUL EAX,dword ptr [0x02d23004],0x30 ; 00587a07 | DAT_02d23004
        ;   Label: caseD_1
    ADD EAX,0x2d24208                   ; 00587a0e
    PUSH EAX                            ; 00587a13
    PUSH EDX                            ; 00587a14
    PUSH EBP                            ; 00587a15
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0 ; 00587a16
        ;   XREF to: 005874c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0()
    MOV ESI,dword ptr [0x02d23004]      ; 00587a1b | DAT_02d23004
    INC ESI                             ; 00587a21
    ADD ESP,0xc                         ; 00587a22
    MOV dword ptr [0x02d23004],ESI      ; 00587a25 | DAT_02d23004
    JMP 0x005879e7                      ; 00587a2b
        ;   XREF to: 005879e7 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02d23004],0x30 ; 00587a2d | DAT_02d23004
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00587a34
    MOV ESI,EDX                         ; 00587a39
    ADD EDI,0x2d24208                   ; 00587a3b
    TEST EDI,0x7                        ; 00587a41
    JZ 0x00587a4f                       ; 00587a47
        ;   XREF to: 00587a4f (CONDITIONAL_JUMP)  ; LAB_00587a4f
    MOVSD ES:EDI,ESI                    ; 00587a49 | DAT_02d24208
    SUB ECX,0x4                         ; 00587a4a
    JLE 0x00587a6c                      ; 00587a4d
        ;   XREF to: 00587a6c (CONDITIONAL_JUMP)  ; LAB_00587a6c
    SUB ECX,0x8                         ; 00587a4f
        ;   Label: LAB_00587a4f
    JL 0x00587a60                       ; 00587a52
        ;   XREF to: 00587a60 (CONDITIONAL_JUMP)  ; LAB_00587a60
    FILD qword ptr [ESI]                ; 00587a54
    ADD ESI,0x8                         ; 00587a56
    FISTP qword ptr [EDI]               ; 00587a59 | DAT_02d2420c | DAT_02d24214 | DAT_02d24208
    ADD EDI,0x8                         ; 00587a5b
    JMP 0x00587a4f                      ; 00587a5e
        ;   XREF to: 00587a4f (UNCONDITIONAL_JUMP)  ; LAB_00587a4f
    ADD ECX,0x8                         ; 00587a60
        ;   Label: LAB_00587a60
    JLE 0x00587a6c                      ; 00587a63
        ;   XREF to: 00587a6c (CONDITIONAL_JUMP)  ; LAB_00587a6c
    MOVSD ES:EDI,ESI                    ; 00587a65 | DAT_02d24214
    SUB ECX,0x4                         ; 00587a66
    JLE 0x00587a6c                      ; 00587a69
        ;   XREF to: 00587a6c (CONDITIONAL_JUMP)  ; LAB_00587a6c
    MOVSD ES:EDI,ESI                    ; 00587a6b | DAT_02d24218
    MOV ECX,dword ptr [0x02d23004]      ; 00587a6c | DAT_02d23004
        ;   Label: LAB_00587a6c
    INC ECX                             ; 00587a72
    MOV dword ptr [0x02d23004],ECX      ; 00587a73 | DAT_02d23004
    IMUL EAX,ECX,0x30                   ; 00587a79
    ADD EAX,0x2d24208                   ; 00587a7c
    PUSH EAX                            ; 00587a81
    PUSH EBP                            ; 00587a82
    PUSH EDX                            ; 00587a83
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0 ; 00587a84
        ;   XREF to: 005874c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0()
    MOV EDI,dword ptr [0x02d23004]      ; 00587a89 | DAT_02d23004
    INC EDI                             ; 00587a8f
    ADD ESP,0xc                         ; 00587a90
    MOV dword ptr [0x02d23004],EDI      ; 00587a93 | DAT_02d23004
    JMP 0x005879e7                      ; 00587a99
        ;   XREF to: 005879e7 (UNCONDITIONAL_JUMP)  ; caseD_3

