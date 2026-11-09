; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; SIntersectXZCylinder * Stack[0xc]:4   cylinder
; CVector3f *      Stack[0x10]:4   transform_vector
;
; XREF[1]:
;   core_setcolid.cpp_FUN_0053de10 at 0053e239
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bb964
;   TerminatedCString s_Tried_to_call_CKeyFramed_005bb977
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dmodel.cpp_FUN_004620c0
;   core_dtri.cpp_cylinderTriangleTest_FUN_00479050
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461e00
        ;   Label: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00
    PUSH ESI                            ; 00461e01
    PUSH EDI                            ; 00461e02
    PUSH EBP                            ; 00461e03
    MOV EDI,dword ptr [ESP + 0x14]      ; 00461e04
    MOV EBX,dword ptr [ESP + 0x18]      ; 00461e08
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00461e0c
    MOV EDX,dword ptr [ESP + 0x20]      ; 00461e10
    MOV ECX,dword ptr [EDI + 0x100]     ; 00461e14
    CMP EBX,ECX                         ; 00461e1a
    JL 0x00461e21                       ; 00461e1c
        ;   XREF to: 00461e21 (CONDITIONAL_JUMP)  ; LAB_00461e21
    LEA EBX,[ECX + -0x1]                ; 00461e1e
    TEST EBX,EBX                        ; 00461e21
        ;   Label: LAB_00461e21
    JL 0x00461ec5                       ; 00461e23
        ;   XREF to: 00461ec5 (CONDITIONAL_JUMP)  ; LAB_00461ec5
    LEA ESI,[EDI + 0x364]               ; 00461e29
        ;   Label: LAB_00461e29
    FLD float ptr [ESI]                 ; 00461e2f
    FCOMP float ptr [EDX]               ; 00461e31
    FNSTSW AX                           ; 00461e33
    SAHF                                ; 00461e35
    JZ 0x00461ecc                       ; 00461e36
        ;   XREF to: 00461ecc (CONDITIONAL_JUMP)  ; LAB_00461ecc
    PUSH EDX                            ; 00461e3c
        ;   Label: LAB_00461e3c
    PUSH EDI                            ; 00461e3d
    CALL core_dmodel.cpp_FUN_004620c0   ; 00461e3e
        ;   XREF to: 004620c0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_004620c0()
    ADD ESP,0x8                         ; 00461e43
    CMP dword ptr [EDI + 0x358],0x0     ; 00461e46
        ;   Label: LAB_00461e46
    JNZ 0x00461e72                      ; 00461e4d
        ;   XREF to: 00461e72 (CONDITIONAL_JUMP)  ; LAB_00461e72
    PUSH EDI                            ; 00461e4f
    MOV EAX,0x5bb964                    ; 00461e50 | = "..\\core\\dmodel.cpp"
    MOV EDX,0x40e                       ; 00461e55
    PUSH 0x5bb977                       ; 00461e5a | = "Tried to call CKeyFramedModel::inters..."
    MOV [0x01d71de0],EAX                ; 00461e5f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00461e64 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00461e6a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00461e6f
    MOV ESI,dword ptr [EDI + 0x354]     ; 00461e72
        ;   Label: LAB_00461e72
    IMUL EBX,ESI                        ; 00461e78
    SHL EBX,0x3                         ; 00461e7b
    MOV ESI,EBX                         ; 00461e7e
    SHL EBX,0x3                         ; 00461e80
    SUB EBX,ESI                         ; 00461e83
    MOV ESI,dword ptr [EDI + 0x358]     ; 00461e85
    MOV ECX,dword ptr [EDI + 0x354]     ; 00461e8b
    ADD ESI,EBX                         ; 00461e91
    XOR EBX,EBX                         ; 00461e93
    TEST ECX,ECX                        ; 00461e95
    JLE 0x00461ec0                      ; 00461e97
        ;   XREF to: 00461ec0 (CONDITIONAL_JUMP)  ; LAB_00461ec0
    PUSH EBP                            ; 00461e99
        ;   Label: LAB_00461e99
    PUSH ESI                            ; 00461e9a
    INC EBX                             ; 00461e9b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 00461e9c
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00479050()
    ADD ESP,0x8                         ; 00461ea1
    MOV EAX,dword ptr [EDI + 0x354]     ; 00461ea4
    ADD ESI,0x38                        ; 00461eaa
    CMP EBX,EAX                         ; 00461ead
    JL 0x00461e99                       ; 00461eaf
        ;   XREF to: 00461e99 (CONDITIONAL_JUMP)  ; LAB_00461e99
    LEA EAX,[EAX]                       ; 00461eb1
    LEA EDX,[EDX]                       ; 00461eb7
    LEA EAX,[EAX]                       ; 00461ebd
    POP EBP                             ; 00461ec0
        ;   Label: LAB_00461ec0
    POP EDI                             ; 00461ec1
    POP ESI                             ; 00461ec2
    POP EBX                             ; 00461ec3
    RET                                 ; 00461ec4
    XOR EBX,EBX                         ; 00461ec5
        ;   Label: LAB_00461ec5
    JMP 0x00461e29                      ; 00461ec7
        ;   XREF to: 00461e29 (UNCONDITIONAL_JUMP)  ; LAB_00461e29
    FLD float ptr [ESI + 0x4]           ; 00461ecc
        ;   Label: LAB_00461ecc
    FCOMP float ptr [EDX + 0x4]         ; 00461ecf
    FNSTSW AX                           ; 00461ed2
    SAHF                                ; 00461ed4
    JNZ 0x00461e3c                      ; 00461ed5
        ;   XREF to: 00461e3c (CONDITIONAL_JUMP)  ; LAB_00461e3c
    FLD float ptr [ESI + 0x8]           ; 00461edb
    FCOMP float ptr [EDX + 0x8]         ; 00461ede
    FNSTSW AX                           ; 00461ee1
    SAHF                                ; 00461ee3
    JZ 0x00461e46                       ; 00461ee4
        ;   XREF to: 00461e46 (CONDITIONAL_JUMP)  ; LAB_00461e46
    JMP 0x00461e3c                      ; 00461eea
        ;   XREF to: 00461e3c (UNCONDITIONAL_JUMP)  ; LAB_00461e3c

