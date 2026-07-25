; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0051e7d0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e7d0
        ;   Label: FUN_0051e7d0
    PUSH EDI                            ; 0051e7d1
    SUB ESP,0x8                         ; 0051e7d2
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051e7d5
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051e7d9
    PUSH EDX                            ; 0051e7dd
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0051e7de
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 0051e7e3
    IMUL EDX,dword ptr [ESP + 0x1c],0x54c ; 0051e7e6
    ADD EAX,0x968                       ; 0051e7ee
    FLD float ptr [ESP + 0x20]          ; 0051e7f3
    FLDZ                                ; 0051e7f7
    ADD EDX,EAX                         ; 0051e7f9
    FCOMPP                              ; 0051e7fb
    FNSTSW AX                           ; 0051e7fd
    SAHF                                ; 0051e7ff
    JA 0x0051e851                       ; 0051e800
        ;   XREF to: 0051e851 (CONDITIONAL_JUMP)  ; LAB_0051e851
    FLD float ptr [ESP + 0x24]          ; 0051e802
        ;   Label: LAB_0051e802
    FILD dword ptr [EDX + 0x64]         ; 0051e806
    FSTP float ptr [ESP + 0x4]          ; 0051e809
    FCOMP float ptr [ESP + 0x4]         ; 0051e80d
    FNSTSW AX                           ; 0051e811
    SAHF                                ; 0051e813
    JBE 0x0051e81e                      ; 0051e814
        ;   XREF to: 0051e81e (CONDITIONAL_JUMP)  ; LAB_0051e81e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051e816
    MOV dword ptr [ESP + 0x24],EAX      ; 0051e81a
    FILD dword ptr [EDX + 0x60]         ; 0051e81e
        ;   Label: LAB_0051e81e
    FLD float ptr [ESP + 0x24]          ; 0051e821
    FADD ST0,ST1                        ; 0051e825
    SUB ESP,0x4                         ; 0051e827
    FLD float ptr [ESP + 0x24]          ; 0051e82a
    FXCH                                ; 0051e82e
    FSTP float ptr [ESP]                ; 0051e830
    FADDP                               ; 0051e833
    SUB ESP,0x4                         ; 0051e835
    FSTP float ptr [ESP]                ; 0051e838
    PUSH EBX                            ; 0051e83b
    MOV EDI,dword ptr [ESP + 0x20]      ; 0051e83c
    PUSH EDI                            ; 0051e840
    CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590 ; 0051e841
        ;   XREF to: 0051e590 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590()
    ADD ESP,0x10                        ; 0051e846
    MOV EAX,EBX                         ; 0051e849
    ADD ESP,0x8                         ; 0051e84b
    POP EDI                             ; 0051e84e
    POP EBX                             ; 0051e84f
    RET                                 ; 0051e850
    PUSH ESI                            ; 0051e851
        ;   Label: LAB_0051e851
    XOR ESI,ESI                         ; 0051e852
    MOV dword ptr [ESP + 0x24],ESI      ; 0051e854
    POP ESI                             ; 0051e858
    JMP 0x0051e802                      ; 0051e859
        ;   XREF to: 0051e802 (UNCONDITIONAL_JUMP)  ; LAB_0051e802

