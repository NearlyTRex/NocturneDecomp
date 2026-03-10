; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970(C3DSCamera *this_ptr,CVector3f *world_position,float radius)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 005759d9
;   core_setdir.cpp_testCameraVisibility_FUN_005750a0 at 0057511d
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585970
        ;   Label: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
    SUB ESP,0x18                        ; 00585971
    MOV EBX,dword ptr [ESP + 0x20]      ; 00585974
    MOV EDX,dword ptr [ESP + 0x24]      ; 00585978
    LEA EAX,[EBX + 0x100]               ; 0058597c
    FLD float ptr [EDX]                 ; 00585982
    FSUB float ptr [EAX]                ; 00585984
    FSTP float ptr [ESP]                ; 00585986
    FLD float ptr [EDX + 0x4]           ; 00585989
    FSUB float ptr [EAX + 0x4]          ; 0058598c
    FSTP float ptr [ESP + 0x4]          ; 0058598f
    FLD float ptr [EDX + 0x8]           ; 00585993
    FSUB float ptr [EAX + 0x8]          ; 00585996
    MOV EAX,ESP                         ; 00585999
    PUSH EAX                            ; 0058599b
    LEA EAX,[ESP + 0x10]                ; 0058599c
    PUSH EAX                            ; 005859a0
    LEA EAX,[EBX + 0x118]               ; 005859a1
    PUSH EAX                            ; 005859a7
    FSTP float ptr [ESP + 0x14]         ; 005859a8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 005859ac
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005859b1
    FLD float ptr [ESP + 0xc]           ; 005859b4
    FADD float ptr [ESP + 0x28]         ; 005859b8
    FCOMP float ptr [EBX + 0x17c]       ; 005859bc
    FNSTSW AX                           ; 005859c2
    SAHF                                ; 005859c4
    JC 0x00585a26                       ; 005859c5
        ;   XREF to: 00585a26 (CONDITIONAL_JUMP)  ; LAB_00585a26
    FLD float ptr [ESP + 0x10]          ; 005859c7
    FADD float ptr [ESP + 0x28]         ; 005859cb
    FCOMP float ptr [EBX + 0x180]       ; 005859cf
    FNSTSW AX                           ; 005859d5
    SAHF                                ; 005859d7
    JC 0x00585a26                       ; 005859d8
        ;   XREF to: 00585a26 (CONDITIONAL_JUMP)  ; LAB_00585a26
    FLD float ptr [ESP + 0x14]          ; 005859da
    FADD float ptr [ESP + 0x28]         ; 005859de
    FCOMP float ptr [EBX + 0x184]       ; 005859e2
    FNSTSW AX                           ; 005859e8
    SAHF                                ; 005859ea
    JC 0x00585a26                       ; 005859eb
        ;   XREF to: 00585a26 (CONDITIONAL_JUMP)  ; LAB_00585a26
    FLD float ptr [ESP + 0xc]           ; 005859ed
    FSUB float ptr [ESP + 0x28]         ; 005859f1
    FCOMP float ptr [EBX + 0x188]       ; 005859f5
    FNSTSW AX                           ; 005859fb
    SAHF                                ; 005859fd
    JA 0x00585a26                       ; 005859fe
        ;   XREF to: 00585a26 (CONDITIONAL_JUMP)  ; LAB_00585a26
    FLD float ptr [ESP + 0x10]          ; 00585a00
    FSUB float ptr [ESP + 0x28]         ; 00585a04
    FCOMP float ptr [EBX + 0x18c]       ; 00585a08
    FNSTSW AX                           ; 00585a0e
    SAHF                                ; 00585a10
    JA 0x00585a26                       ; 00585a11
        ;   XREF to: 00585a26 (CONDITIONAL_JUMP)  ; LAB_00585a26
    FLD float ptr [ESP + 0x14]          ; 00585a13
    FSUB float ptr [ESP + 0x28]         ; 00585a17
    FCOMP float ptr [EBX + 0x190]       ; 00585a1b
    FNSTSW AX                           ; 00585a21
    SAHF                                ; 00585a23
    JBE 0x00585a2d                      ; 00585a24
        ;   XREF to: 00585a2d (CONDITIONAL_JUMP)  ; LAB_00585a2d
    XOR EAX,EAX                         ; 00585a26
        ;   Label: LAB_00585a26
    ADD ESP,0x18                        ; 00585a28
    POP EBX                             ; 00585a2b
    RET                                 ; 00585a2c
    MOV EAX,0x1                         ; 00585a2d
        ;   Label: LAB_00585a2d
    ADD ESP,0x18                        ; 00585a32
    POP EBX                             ; 00585a35
    RET                                 ; 00585a36

