; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004910f0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004910e4 = 004911a4
;   undefined1* PTR_caseD_3_004910ec = 00491189
;   undefined4 DAT_01c3d504
;   undefined4 DAT_01c3d5c8
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00490df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004910f0
        ;   Label: FUN_004910f0
    PUSH ESI                            ; 004910f1
    PUSH EDI                            ; 004910f2
    PUSH EBP                            ; 004910f3
    MOV EBP,ESP                         ; 004910f4
    SUB ESP,0x8                         ; 004910f6
    AND ESP,0xfffffff8                  ; 004910f9
    MOV EBX,dword ptr [0x01c3d5c8]      ; 004910fc | DAT_01c3d5c8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00491102
    MOV dword ptr [ESP],EDX             ; 00491105
    MOV EDX,dword ptr [0x01c3d504]      ; 00491108 | DAT_01c3d504
    XOR EDI,EDI                         ; 0049110e
    TEST EDX,EDX                        ; 00491110
    JLE 0x00491197                      ; 00491112
        ;   XREF to: 00491197 (CONDITIONAL_JUMP)  ; LAB_00491197
    MOV ESI,0x1c3d508                   ; 00491118
    MOV EAX,[0x01c3d504]                ; 0049111d | DAT_01c3d504
        ;   Label: LAB_0049111d
    LEA ECX,[EDI + 0x1]                 ; 00491122
    CMP ECX,EAX                         ; 00491125
    JNZ 0x0049112b                      ; 00491127
        ;   XREF to: 0049112b (CONDITIONAL_JUMP)  ; LAB_0049112b
    XOR ECX,EAX                         ; 00491129
    IMUL ECX,ECX,0xc                    ; 0049112b
        ;   Label: LAB_0049112b
    MOV EAX,0x1c3d508                   ; 0049112e
    FLD float ptr [ESI + 0x4]           ; 00491133
    ADD EAX,ECX                         ; 00491136
    MOV EDX,ESI                         ; 00491138
    MOV dword ptr [ESP + 0x4],EAX       ; 0049113a
    XOR ECX,ECX                         ; 0049113e
    FCOMP float ptr [ESP]               ; 00491140
    FNSTSW AX                           ; 00491143
    SAHF                                ; 00491145
    JNC 0x0049114d                      ; 00491146
        ;   XREF to: 0049114d (CONDITIONAL_JUMP)  ; LAB_0049114d
    MOV ECX,0x1                         ; 00491148
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049114d
        ;   Label: LAB_0049114d
    FLD float ptr [EAX + 0x4]           ; 00491151
    FCOMP float ptr [ESP]               ; 00491154
    FNSTSW AX                           ; 00491157
    SAHF                                ; 00491159
    JNC 0x0049115f                      ; 0049115a
        ;   XREF to: 0049115f (CONDITIONAL_JUMP)  ; LAB_0049115f
    OR CL,0x2                           ; 0049115c
    CMP ECX,0x3                         ; 0049115f
        ;   Label: LAB_0049115f
    JA 0x00491189                       ; 00491162
        ;   XREF to: 00491189 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4910e0]  ; 00491164 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049116b
        ;   Label: caseD_0
    ADD ECX,0x1c3d5cc                   ; 0049116e
    CMP ECX,EDX                         ; 00491174
    JZ 0x00491188                       ; 00491176
        ;   XREF to: 00491188 (CONDITIONAL_JUMP)  ; LAB_00491188
    MOV EAX,dword ptr [EDX]             ; 00491178
    MOV dword ptr [ECX],EAX             ; 0049117a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049117c
    MOV dword ptr [ECX + 0x4],EAX       ; 0049117f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491182
    MOV dword ptr [ECX + 0x8],EAX       ; 00491185
    INC EBX                             ; 00491188
        ;   Label: LAB_00491188
    MOV ECX,dword ptr [0x01c3d504]      ; 00491189 | DAT_01c3d504
        ;   Label: caseD_3
    INC EDI                             ; 0049118f
    ADD ESI,0xc                         ; 00491190
    CMP EDI,ECX                         ; 00491193
    JL 0x0049111d                       ; 00491195
        ;   XREF to: 0049111d (CONDITIONAL_JUMP)  ; LAB_0049111d
    MOV dword ptr [0x01c3d5c8],EBX      ; 00491197 | DAT_01c3d5c8
        ;   Label: LAB_00491197
    MOV ESP,EBP                         ; 0049119d
    POP EBP                             ; 0049119f
    POP EDI                             ; 004911a0
    POP ESI                             ; 004911a1
    POP EBX                             ; 004911a2
    RET                                 ; 004911a3
    IMUL ECX,EBX,0xc                    ; 004911a4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 004911a7
    SUB ESP,0x8                         ; 004911aa
    FSTP double ptr [ESP]               ; 004911ad
    PUSH 0x0                            ; 004911b0
    PUSH 0x0                            ; 004911b2
    PUSH 0xbff00000                     ; 004911b4
    PUSH 0x0                            ; 004911b9
    PUSH 0x0                            ; 004911bb
    PUSH 0x0                            ; 004911bd
    ADD ECX,0x1c3d5cc                   ; 004911bf
    PUSH ECX                            ; 004911c5
    PUSH EDX                            ; 004911c6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004911c7
    PUSH EAX                            ; 004911cb
    MOV dword ptr [0x01c3d5c8],EBX      ; 004911cc | DAT_01c3d5c8
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 004911d2
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d5c8]      ; 004911d7 | DAT_01c3d5c8
    ADD ESP,0x2c                        ; 004911dd
    JMP 0x00491188                      ; 004911e0
        ;   XREF to: 00491188 (UNCONDITIONAL_JUMP)  ; LAB_00491188
    IMUL ECX,EBX,0xc                    ; 004911e2
        ;   Label: caseD_2
    ADD ECX,0x1c3d5cc                   ; 004911e5
    CMP ECX,EDX                         ; 004911eb
    JZ 0x004911ff                       ; 004911ed
        ;   XREF to: 004911ff (CONDITIONAL_JUMP)  ; LAB_004911ff
    MOV EAX,dword ptr [EDX]             ; 004911ef
    MOV dword ptr [ECX],EAX             ; 004911f1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004911f3
    MOV dword ptr [ECX + 0x4],EAX       ; 004911f6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004911f9
    MOV dword ptr [ECX + 0x8],EAX       ; 004911fc
    INC EBX                             ; 004911ff
        ;   Label: LAB_004911ff
    IMUL ECX,EBX,0xc                    ; 00491200
    FLD float ptr [ESP]                 ; 00491203
    SUB ESP,0x8                         ; 00491206
    FSTP double ptr [ESP]               ; 00491209
    PUSH 0x0                            ; 0049120c
    PUSH 0x0                            ; 0049120e
    PUSH 0xbff00000                     ; 00491210
    PUSH 0x0                            ; 00491215
    PUSH 0x0                            ; 00491217
    PUSH 0x0                            ; 00491219
    ADD ECX,0x1c3d5cc                   ; 0049121b
    PUSH ECX                            ; 00491221
    MOV ECX,dword ptr [ESP + 0x28]      ; 00491222
    PUSH ECX                            ; 00491226
    PUSH EDX                            ; 00491227
    MOV dword ptr [0x01c3d5c8],EBX      ; 00491228 | DAT_01c3d5c8
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 0049122e
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d5c8]      ; 00491233 | DAT_01c3d5c8
    ADD ESP,0x2c                        ; 00491239
    JMP 0x00491188                      ; 0049123c
        ;   XREF to: 00491188 (UNCONDITIONAL_JUMP)  ; LAB_00491188

