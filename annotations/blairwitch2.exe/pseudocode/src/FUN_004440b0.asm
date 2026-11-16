; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004440b0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004440a4 = 00444164
;   undefined1* PTR_caseD_3_004440ac = 00444149
;   undefined4 DAT_01510910
;   undefined4 DAT_015109d4
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004440b0
        ;   Label: FUN_004440b0
    PUSH ESI                            ; 004440b1
    PUSH EDI                            ; 004440b2
    PUSH EBP                            ; 004440b3
    MOV EBP,ESP                         ; 004440b4
    SUB ESP,0x8                         ; 004440b6
    AND ESP,0xfffffff8                  ; 004440b9
    MOV EBX,dword ptr [0x015109d4]      ; 004440bc | DAT_015109d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004440c2
    MOV dword ptr [ESP],EDX             ; 004440c5
    MOV EDX,dword ptr [0x01510910]      ; 004440c8 | DAT_01510910
    XOR EDI,EDI                         ; 004440ce
    TEST EDX,EDX                        ; 004440d0
    JLE 0x00444157                      ; 004440d2
        ;   XREF to: 00444157 (CONDITIONAL_JUMP)  ; LAB_00444157
    MOV ESI,0x1510914                   ; 004440d8
    MOV EAX,[0x01510910]                ; 004440dd | DAT_01510910
        ;   Label: LAB_004440dd
    LEA ECX,[EDI + 0x1]                 ; 004440e2
    CMP ECX,EAX                         ; 004440e5
    JNZ 0x004440eb                      ; 004440e7
        ;   XREF to: 004440eb (CONDITIONAL_JUMP)  ; LAB_004440eb
    XOR ECX,EAX                         ; 004440e9
    IMUL ECX,ECX,0xc                    ; 004440eb
        ;   Label: LAB_004440eb
    MOV EAX,0x1510914                   ; 004440ee
    FLD float ptr [ESI + 0x4]           ; 004440f3
    ADD EAX,ECX                         ; 004440f6
    MOV EDX,ESI                         ; 004440f8
    MOV dword ptr [ESP + 0x4],EAX       ; 004440fa
    XOR ECX,ECX                         ; 004440fe
    FCOMP float ptr [ESP]               ; 00444100
    FNSTSW AX                           ; 00444103
    SAHF                                ; 00444105
    JNC 0x0044410d                      ; 00444106
        ;   XREF to: 0044410d (CONDITIONAL_JUMP)  ; LAB_0044410d
    MOV ECX,0x1                         ; 00444108
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044410d
        ;   Label: LAB_0044410d
    FLD float ptr [EAX + 0x4]           ; 00444111
    FCOMP float ptr [ESP]               ; 00444114
    FNSTSW AX                           ; 00444117
    SAHF                                ; 00444119
    JNC 0x0044411f                      ; 0044411a
        ;   XREF to: 0044411f (CONDITIONAL_JUMP)  ; LAB_0044411f
    OR CL,0x2                           ; 0044411c
    CMP ECX,0x3                         ; 0044411f
        ;   Label: LAB_0044411f
    JA 0x00444149                       ; 00444122
        ;   XREF to: 00444149 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4440a0]  ; 00444124 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0044412b
        ;   Label: caseD_0
    ADD ECX,0x15109d8                   ; 0044412e
    CMP ECX,EDX                         ; 00444134
    JZ 0x00444148                       ; 00444136
        ;   XREF to: 00444148 (CONDITIONAL_JUMP)  ; LAB_00444148
    MOV EAX,dword ptr [EDX]             ; 00444138
    MOV dword ptr [ECX],EAX             ; 0044413a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044413c
    MOV dword ptr [ECX + 0x4],EAX       ; 0044413f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00444142
    MOV dword ptr [ECX + 0x8],EAX       ; 00444145
    INC EBX                             ; 00444148
        ;   Label: LAB_00444148
    MOV ECX,dword ptr [0x01510910]      ; 00444149 | DAT_01510910
        ;   Label: caseD_3
    INC EDI                             ; 0044414f
    ADD ESI,0xc                         ; 00444150
    CMP EDI,ECX                         ; 00444153
    JL 0x004440dd                       ; 00444155
        ;   XREF to: 004440dd (CONDITIONAL_JUMP)  ; LAB_004440dd
    MOV dword ptr [0x015109d4],EBX      ; 00444157 | DAT_015109d4
        ;   Label: LAB_00444157
    MOV ESP,EBP                         ; 0044415d
    POP EBP                             ; 0044415f
    POP EDI                             ; 00444160
    POP ESI                             ; 00444161
    POP EBX                             ; 00444162
    RET                                 ; 00444163
    IMUL ECX,EBX,0xc                    ; 00444164
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00444167
    SUB ESP,0x8                         ; 0044416a
    FSTP double ptr [ESP]               ; 0044416d
    PUSH 0x0                            ; 00444170
    PUSH 0x0                            ; 00444172
    PUSH 0xbff00000                     ; 00444174
    PUSH 0x0                            ; 00444179
    PUSH 0x0                            ; 0044417b
    PUSH 0x0                            ; 0044417d
    ADD ECX,0x15109d8                   ; 0044417f
    PUSH ECX                            ; 00444185
    PUSH EDX                            ; 00444186
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00444187
    PUSH EAX                            ; 0044418b
    MOV dword ptr [0x015109d4],EBX      ; 0044418c | DAT_015109d4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00444192
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00443db0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015109d4]      ; 00444197 | DAT_015109d4
    ADD ESP,0x2c                        ; 0044419d
    JMP 0x00444148                      ; 004441a0
        ;   XREF to: 00444148 (UNCONDITIONAL_JUMP)  ; LAB_00444148
    IMUL ECX,EBX,0xc                    ; 004441a2
        ;   Label: caseD_2
    ADD ECX,0x15109d8                   ; 004441a5
    CMP ECX,EDX                         ; 004441ab
    JZ 0x004441bf                       ; 004441ad
        ;   XREF to: 004441bf (CONDITIONAL_JUMP)  ; LAB_004441bf
    MOV EAX,dword ptr [EDX]             ; 004441af
    MOV dword ptr [ECX],EAX             ; 004441b1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004441b3
    MOV dword ptr [ECX + 0x4],EAX       ; 004441b6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004441b9
    MOV dword ptr [ECX + 0x8],EAX       ; 004441bc
    INC EBX                             ; 004441bf
        ;   Label: LAB_004441bf
    IMUL ECX,EBX,0xc                    ; 004441c0
    FLD float ptr [ESP]                 ; 004441c3
    SUB ESP,0x8                         ; 004441c6
    FSTP double ptr [ESP]               ; 004441c9
    PUSH 0x0                            ; 004441cc
    PUSH 0x0                            ; 004441ce
    PUSH 0xbff00000                     ; 004441d0
    PUSH 0x0                            ; 004441d5
    PUSH 0x0                            ; 004441d7
    PUSH 0x0                            ; 004441d9
    ADD ECX,0x15109d8                   ; 004441db
    PUSH ECX                            ; 004441e1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004441e2
    PUSH ECX                            ; 004441e6
    PUSH EDX                            ; 004441e7
    MOV dword ptr [0x015109d4],EBX      ; 004441e8 | DAT_015109d4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004441ee
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00443db0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015109d4]      ; 004441f3 | DAT_015109d4
    ADD ESP,0x2c                        ; 004441f9
    JMP 0x00444148                      ; 004441fc
        ;   XREF to: 00444148 (UNCONDITIONAL_JUMP)  ; LAB_00444148

