; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047a0a0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0047a094 = 0047a154
;   undefined1* PTR_caseD_3_0047a09c = 0047a139
;   undefined4 DAT_01c59cec
;   undefined4 DAT_01c59db0
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00479970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a0a0
        ;   Label: FUN_0047a0a0
    PUSH ESI                            ; 0047a0a1
    PUSH EDI                            ; 0047a0a2
    PUSH EBP                            ; 0047a0a3
    MOV EBP,ESP                         ; 0047a0a4
    SUB ESP,0x8                         ; 0047a0a6
    AND ESP,0xfffffff8                  ; 0047a0a9
    MOV EBX,dword ptr [0x01c59db0]      ; 0047a0ac | DAT_01c59db0
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047a0b2
    MOV dword ptr [ESP],EDX             ; 0047a0b5
    MOV EDX,dword ptr [0x01c59cec]      ; 0047a0b8 | DAT_01c59cec
    XOR EDI,EDI                         ; 0047a0be
    TEST EDX,EDX                        ; 0047a0c0
    JLE 0x0047a147                      ; 0047a0c2
        ;   XREF to: 0047a147 (CONDITIONAL_JUMP)  ; LAB_0047a147
    MOV ESI,0x1c59cf0                   ; 0047a0c8
    MOV EAX,[0x01c59cec]                ; 0047a0cd | DAT_01c59cec
        ;   Label: LAB_0047a0cd
    LEA ECX,[EDI + 0x1]                 ; 0047a0d2
    CMP ECX,EAX                         ; 0047a0d5
    JNZ 0x0047a0db                      ; 0047a0d7
        ;   XREF to: 0047a0db (CONDITIONAL_JUMP)  ; LAB_0047a0db
    XOR ECX,EAX                         ; 0047a0d9
    IMUL ECX,ECX,0xc                    ; 0047a0db
        ;   Label: LAB_0047a0db
    MOV EAX,0x1c59cf0                   ; 0047a0de
    FLD float ptr [ESI + 0x8]           ; 0047a0e3
    ADD EAX,ECX                         ; 0047a0e6
    MOV EDX,ESI                         ; 0047a0e8
    MOV dword ptr [ESP + 0x4],EAX       ; 0047a0ea
    XOR ECX,ECX                         ; 0047a0ee
    FCOMP float ptr [ESP]               ; 0047a0f0
    FNSTSW AX                           ; 0047a0f3
    SAHF                                ; 0047a0f5
    JNC 0x0047a0fd                      ; 0047a0f6
        ;   XREF to: 0047a0fd (CONDITIONAL_JUMP)  ; LAB_0047a0fd
    MOV ECX,0x1                         ; 0047a0f8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a0fd
        ;   Label: LAB_0047a0fd
    FLD float ptr [EAX + 0x8]           ; 0047a101
    FCOMP float ptr [ESP]               ; 0047a104
    FNSTSW AX                           ; 0047a107
    SAHF                                ; 0047a109
    JNC 0x0047a10f                      ; 0047a10a
        ;   XREF to: 0047a10f (CONDITIONAL_JUMP)  ; LAB_0047a10f
    OR CL,0x2                           ; 0047a10c
    CMP ECX,0x3                         ; 0047a10f
        ;   Label: LAB_0047a10f
    JA 0x0047a139                       ; 0047a112
        ;   XREF to: 0047a139 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a090]  ; 0047a114 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0047a11b
        ;   Label: caseD_0
    ADD ECX,0x1c59db4                   ; 0047a11e
    CMP ECX,EDX                         ; 0047a124
    JZ 0x0047a138                       ; 0047a126
        ;   XREF to: 0047a138 (CONDITIONAL_JUMP)  ; LAB_0047a138
    MOV EAX,dword ptr [EDX]             ; 0047a128
    MOV dword ptr [ECX],EAX             ; 0047a12a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047a12c
    MOV dword ptr [ECX + 0x4],EAX       ; 0047a12f
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047a132
    MOV dword ptr [ECX + 0x8],EAX       ; 0047a135
    INC EBX                             ; 0047a138
        ;   Label: LAB_0047a138
    MOV ECX,dword ptr [0x01c59cec]      ; 0047a139 | DAT_01c59cec
        ;   Label: caseD_3
    INC EDI                             ; 0047a13f
    ADD ESI,0xc                         ; 0047a140
    CMP EDI,ECX                         ; 0047a143
    JL 0x0047a0cd                       ; 0047a145
        ;   XREF to: 0047a0cd (CONDITIONAL_JUMP)  ; LAB_0047a0cd
    MOV dword ptr [0x01c59db0],EBX      ; 0047a147 | DAT_01c59db0
        ;   Label: LAB_0047a147
    MOV ESP,EBP                         ; 0047a14d
    POP EBP                             ; 0047a14f
    POP EDI                             ; 0047a150
    POP ESI                             ; 0047a151
    POP EBX                             ; 0047a152
    RET                                 ; 0047a153
    IMUL ECX,EBX,0xc                    ; 0047a154
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0047a157
    SUB ESP,0x8                         ; 0047a15a
    FSTP double ptr [ESP]               ; 0047a15d
    PUSH 0xbff00000                     ; 0047a160
    PUSH 0x0                            ; 0047a165
    PUSH 0x0                            ; 0047a167
    PUSH 0x0                            ; 0047a169
    PUSH 0x0                            ; 0047a16b
    PUSH 0x0                            ; 0047a16d
    ADD ECX,0x1c59db4                   ; 0047a16f
    PUSH ECX                            ; 0047a175
    PUSH EDX                            ; 0047a176
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047a177
    PUSH EAX                            ; 0047a17b
    MOV dword ptr [0x01c59db0],EBX      ; 0047a17c | DAT_01c59db0
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047a182
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c59db0]      ; 0047a187 | DAT_01c59db0
    ADD ESP,0x2c                        ; 0047a18d
    JMP 0x0047a138                      ; 0047a190
        ;   XREF to: 0047a138 (UNCONDITIONAL_JUMP)  ; LAB_0047a138
    IMUL ECX,EBX,0xc                    ; 0047a192
        ;   Label: caseD_2
    ADD ECX,0x1c59db4                   ; 0047a195
    CMP ECX,EDX                         ; 0047a19b
    JZ 0x0047a1af                       ; 0047a19d
        ;   XREF to: 0047a1af (CONDITIONAL_JUMP)  ; LAB_0047a1af
    MOV EAX,dword ptr [EDX]             ; 0047a19f
    MOV dword ptr [ECX],EAX             ; 0047a1a1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047a1a3
    MOV dword ptr [ECX + 0x4],EAX       ; 0047a1a6
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047a1a9
    MOV dword ptr [ECX + 0x8],EAX       ; 0047a1ac
    INC EBX                             ; 0047a1af
        ;   Label: LAB_0047a1af
    IMUL ECX,EBX,0xc                    ; 0047a1b0
    FLD float ptr [ESP]                 ; 0047a1b3
    SUB ESP,0x8                         ; 0047a1b6
    FSTP double ptr [ESP]               ; 0047a1b9
    PUSH 0xbff00000                     ; 0047a1bc
    PUSH 0x0                            ; 0047a1c1
    PUSH 0x0                            ; 0047a1c3
    PUSH 0x0                            ; 0047a1c5
    PUSH 0x0                            ; 0047a1c7
    PUSH 0x0                            ; 0047a1c9
    ADD ECX,0x1c59db4                   ; 0047a1cb
    PUSH ECX                            ; 0047a1d1
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047a1d2
    PUSH ECX                            ; 0047a1d6
    PUSH EDX                            ; 0047a1d7
    MOV dword ptr [0x01c59db0],EBX      ; 0047a1d8 | DAT_01c59db0
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047a1de
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c59db0]      ; 0047a1e3 | DAT_01c59db0
    ADD ESP,0x2c                        ; 0047a1e9
    JMP 0x0047a138                      ; 0047a1ec
        ;   XREF to: 0047a138 (UNCONDITIONAL_JUMP)  ; LAB_0047a138

