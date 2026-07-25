; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_00511d80 at 00511e00
;   FUN_005125a0 at 00512d7f
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514980
        ;   Label: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
    SUB ESP,0x18                        ; 00514981
    MOV EBX,dword ptr [ESP + 0x20]      ; 00514984
    MOV EDX,dword ptr [ESP + 0x24]      ; 00514988
    LEA EAX,[EBX + 0x100]               ; 0051498c
    FLD float ptr [EDX]                 ; 00514992
    FSUB float ptr [EAX]                ; 00514994
    FSTP float ptr [ESP]                ; 00514996
    FLD float ptr [EDX + 0x4]           ; 00514999
    FSUB float ptr [EAX + 0x4]          ; 0051499c
    FSTP float ptr [ESP + 0x4]          ; 0051499f
    FLD float ptr [EDX + 0x8]           ; 005149a3
    FSUB float ptr [EAX + 0x8]          ; 005149a6
    MOV EAX,ESP                         ; 005149a9
    PUSH EAX                            ; 005149ab
    LEA EAX,[ESP + 0x10]                ; 005149ac
    PUSH EAX                            ; 005149b0
    LEA EAX,[EBX + 0x118]               ; 005149b1
    PUSH EAX                            ; 005149b7
    FSTP float ptr [ESP + 0x14]         ; 005149b8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 005149bc
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 005149c1
    FLD float ptr [ESP + 0xc]           ; 005149c4
    FADD float ptr [ESP + 0x28]         ; 005149c8
    FCOMP float ptr [EBX + 0x178]       ; 005149cc
    FNSTSW AX                           ; 005149d2
    SAHF                                ; 005149d4
    JC 0x00514a36                       ; 005149d5
        ;   XREF to: 00514a36 (CONDITIONAL_JUMP)  ; LAB_00514a36
    FLD float ptr [ESP + 0x10]          ; 005149d7
    FADD float ptr [ESP + 0x28]         ; 005149db
    FCOMP float ptr [EBX + 0x17c]       ; 005149df
    FNSTSW AX                           ; 005149e5
    SAHF                                ; 005149e7
    JC 0x00514a36                       ; 005149e8
        ;   XREF to: 00514a36 (CONDITIONAL_JUMP)  ; LAB_00514a36
    FLD float ptr [ESP + 0x14]          ; 005149ea
    FADD float ptr [ESP + 0x28]         ; 005149ee
    FCOMP float ptr [EBX + 0x180]       ; 005149f2
    FNSTSW AX                           ; 005149f8
    SAHF                                ; 005149fa
    JC 0x00514a36                       ; 005149fb
        ;   XREF to: 00514a36 (CONDITIONAL_JUMP)  ; LAB_00514a36
    FLD float ptr [ESP + 0xc]           ; 005149fd
    FSUB float ptr [ESP + 0x28]         ; 00514a01
    FCOMP float ptr [EBX + 0x184]       ; 00514a05
    FNSTSW AX                           ; 00514a0b
    SAHF                                ; 00514a0d
    JA 0x00514a36                       ; 00514a0e
        ;   XREF to: 00514a36 (CONDITIONAL_JUMP)  ; LAB_00514a36
    FLD float ptr [ESP + 0x10]          ; 00514a10
    FSUB float ptr [ESP + 0x28]         ; 00514a14
    FCOMP float ptr [EBX + 0x188]       ; 00514a18
    FNSTSW AX                           ; 00514a1e
    SAHF                                ; 00514a20
    JA 0x00514a36                       ; 00514a21
        ;   XREF to: 00514a36 (CONDITIONAL_JUMP)  ; LAB_00514a36
    FLD float ptr [ESP + 0x14]          ; 00514a23
    FSUB float ptr [ESP + 0x28]         ; 00514a27
    FCOMP float ptr [EBX + 0x18c]       ; 00514a2b
    FNSTSW AX                           ; 00514a31
    SAHF                                ; 00514a33
    JBE 0x00514a3d                      ; 00514a34
        ;   XREF to: 00514a3d (CONDITIONAL_JUMP)  ; LAB_00514a3d
    XOR EAX,EAX                         ; 00514a36
        ;   Label: LAB_00514a36
    ADD ESP,0x18                        ; 00514a38
    POP EBX                             ; 00514a3b
    RET                                 ; 00514a3c
    MOV EAX,0x1                         ; 00514a3d
        ;   Label: LAB_00514a3d
    ADD ESP,0x18                        ; 00514a42
    POP EBX                             ; 00514a45
    RET                                 ; 00514a46

