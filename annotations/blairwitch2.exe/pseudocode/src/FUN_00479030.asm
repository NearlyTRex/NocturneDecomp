; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479030(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00479024 = 004790e4
;   undefined1* PTR_caseD_3_0047902c = 004790c9
;   undefined4 DAT_01c22194
;   undefined4 DAT_01c22258
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479030
        ;   Label: FUN_00479030
    PUSH ESI                            ; 00479031
    PUSH EDI                            ; 00479032
    PUSH EBP                            ; 00479033
    MOV EBP,ESP                         ; 00479034
    SUB ESP,0x8                         ; 00479036
    AND ESP,0xfffffff8                  ; 00479039
    MOV EBX,dword ptr [0x01c22258]      ; 0047903c | DAT_01c22258
    MOV EDX,dword ptr [EBP + 0x14]      ; 00479042
    MOV dword ptr [ESP],EDX             ; 00479045
    MOV EDX,dword ptr [0x01c22194]      ; 00479048 | DAT_01c22194
    XOR EDI,EDI                         ; 0047904e
    TEST EDX,EDX                        ; 00479050
    JLE 0x004790d7                      ; 00479052
        ;   XREF to: 004790d7 (CONDITIONAL_JUMP)  ; LAB_004790d7
    MOV ESI,0x1c22198                   ; 00479058
    MOV EAX,[0x01c22194]                ; 0047905d | DAT_01c22194
        ;   Label: LAB_0047905d
    LEA ECX,[EDI + 0x1]                 ; 00479062
    CMP ECX,EAX                         ; 00479065
    JNZ 0x0047906b                      ; 00479067
        ;   XREF to: 0047906b (CONDITIONAL_JUMP)  ; LAB_0047906b
    XOR ECX,EAX                         ; 00479069
    IMUL ECX,ECX,0xc                    ; 0047906b
        ;   Label: LAB_0047906b
    MOV EAX,0x1c22198                   ; 0047906e
    FLD float ptr [ESI + 0x8]           ; 00479073
    ADD EAX,ECX                         ; 00479076
    MOV EDX,ESI                         ; 00479078
    MOV dword ptr [ESP + 0x4],EAX       ; 0047907a
    XOR ECX,ECX                         ; 0047907e
    FCOMP float ptr [ESP]               ; 00479080
    FNSTSW AX                           ; 00479083
    SAHF                                ; 00479085
    JNC 0x0047908d                      ; 00479086
        ;   XREF to: 0047908d (CONDITIONAL_JUMP)  ; LAB_0047908d
    MOV ECX,0x1                         ; 00479088
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047908d
        ;   Label: LAB_0047908d
    FLD float ptr [EAX + 0x8]           ; 00479091
    FCOMP float ptr [ESP]               ; 00479094
    FNSTSW AX                           ; 00479097
    SAHF                                ; 00479099
    JNC 0x0047909f                      ; 0047909a
        ;   XREF to: 0047909f (CONDITIONAL_JUMP)  ; LAB_0047909f
    OR CL,0x2                           ; 0047909c
    CMP ECX,0x3                         ; 0047909f
        ;   Label: LAB_0047909f
    JA 0x004790c9                       ; 004790a2
        ;   XREF to: 004790c9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479020]  ; 004790a4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004790ab
        ;   Label: caseD_0
    ADD ECX,0x1c2225c                   ; 004790ae
    CMP ECX,EDX                         ; 004790b4
    JZ 0x004790c8                       ; 004790b6
        ;   XREF to: 004790c8 (CONDITIONAL_JUMP)  ; LAB_004790c8
    MOV EAX,dword ptr [EDX]             ; 004790b8
    MOV dword ptr [ECX],EAX             ; 004790ba
    MOV EAX,dword ptr [EDX + 0x4]       ; 004790bc
    MOV dword ptr [ECX + 0x4],EAX       ; 004790bf
    MOV EAX,dword ptr [EDX + 0x8]       ; 004790c2
    MOV dword ptr [ECX + 0x8],EAX       ; 004790c5
    INC EBX                             ; 004790c8
        ;   Label: LAB_004790c8
    MOV ECX,dword ptr [0x01c22194]      ; 004790c9 | DAT_01c22194
        ;   Label: caseD_3
    INC EDI                             ; 004790cf
    ADD ESI,0xc                         ; 004790d0
    CMP EDI,ECX                         ; 004790d3
    JL 0x0047905d                       ; 004790d5
        ;   XREF to: 0047905d (CONDITIONAL_JUMP)  ; LAB_0047905d
    MOV dword ptr [0x01c22258],EBX      ; 004790d7 | DAT_01c22258
        ;   Label: LAB_004790d7
    MOV ESP,EBP                         ; 004790dd
    POP EBP                             ; 004790df
    POP EDI                             ; 004790e0
    POP ESI                             ; 004790e1
    POP EBX                             ; 004790e2
    RET                                 ; 004790e3
    IMUL ECX,EBX,0xc                    ; 004790e4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 004790e7
    SUB ESP,0x8                         ; 004790ea
    FSTP double ptr [ESP]               ; 004790ed
    PUSH 0xbff00000                     ; 004790f0
    PUSH 0x0                            ; 004790f5
    PUSH 0x0                            ; 004790f7
    PUSH 0x0                            ; 004790f9
    PUSH 0x0                            ; 004790fb
    PUSH 0x0                            ; 004790fd
    ADD ECX,0x1c2225c                   ; 004790ff
    PUSH ECX                            ; 00479105
    PUSH EDX                            ; 00479106
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00479107
    PUSH EAX                            ; 0047910b
    MOV dword ptr [0x01c22258],EBX      ; 0047910c | DAT_01c22258
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479112
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00478900(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c22258]      ; 00479117 | DAT_01c22258
    ADD ESP,0x2c                        ; 0047911d
    JMP 0x004790c8                      ; 00479120
        ;   XREF to: 004790c8 (UNCONDITIONAL_JUMP)  ; LAB_004790c8
    IMUL ECX,EBX,0xc                    ; 00479122
        ;   Label: caseD_2
    ADD ECX,0x1c2225c                   ; 00479125
    CMP ECX,EDX                         ; 0047912b
    JZ 0x0047913f                       ; 0047912d
        ;   XREF to: 0047913f (CONDITIONAL_JUMP)  ; LAB_0047913f
    MOV EAX,dword ptr [EDX]             ; 0047912f
    MOV dword ptr [ECX],EAX             ; 00479131
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479133
    MOV dword ptr [ECX + 0x4],EAX       ; 00479136
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479139
    MOV dword ptr [ECX + 0x8],EAX       ; 0047913c
    INC EBX                             ; 0047913f
        ;   Label: LAB_0047913f
    IMUL ECX,EBX,0xc                    ; 00479140
    FLD float ptr [ESP]                 ; 00479143
    SUB ESP,0x8                         ; 00479146
    FSTP double ptr [ESP]               ; 00479149
    PUSH 0xbff00000                     ; 0047914c
    PUSH 0x0                            ; 00479151
    PUSH 0x0                            ; 00479153
    PUSH 0x0                            ; 00479155
    PUSH 0x0                            ; 00479157
    PUSH 0x0                            ; 00479159
    ADD ECX,0x1c2225c                   ; 0047915b
    PUSH ECX                            ; 00479161
    MOV ECX,dword ptr [ESP + 0x28]      ; 00479162
    PUSH ECX                            ; 00479166
    PUSH EDX                            ; 00479167
    MOV dword ptr [0x01c22258],EBX      ; 00479168 | DAT_01c22258
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 0047916e
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00478900(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c22258]      ; 00479173 | DAT_01c22258
    ADD ESP,0x2c                        ; 00479179
    JMP 0x004790c8                      ; 0047917c
        ;   XREF to: 004790c8 (UNCONDITIONAL_JUMP)  ; LAB_004790c8

