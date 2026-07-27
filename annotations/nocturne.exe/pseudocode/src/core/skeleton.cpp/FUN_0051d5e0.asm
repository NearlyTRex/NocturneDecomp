; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0051d5e0(int param_1,float *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d5e0
        ;   Label: core_skeleton.cpp_FUN_0051d5e0
    PUSH ESI                            ; 0051d5e1
    PUSH EDI                            ; 0051d5e2
    PUSH EBP                            ; 0051d5e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051d5e4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051d5e8
    PUSH ESI                            ; 0051d5ec
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d5ed
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051d5f2
    MOV ECX,EAX                         ; 0051d5f5
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0051d5f7
    XOR EDX,EDX                         ; 0051d5fd
    TEST EDI,EDI                        ; 0051d5ff
    JLE 0x0051d640                      ; 0051d601
        ;   XREF to: 0051d640 (CONDITIONAL_JUMP)  ; LAB_0051d640
    MOV EAX,ESI                         ; 0051d603
    FLD float ptr [EBX]                 ; 0051d605
        ;   Label: LAB_0051d605
    FADD float ptr [EAX + 0xe8c]        ; 0051d607
    FSTP float ptr [EAX + 0xe8c]        ; 0051d60d
    FLD float ptr [EBX + 0x4]           ; 0051d613
    FADD float ptr [EAX + 0xe9c]        ; 0051d616
    FSTP float ptr [EAX + 0xe9c]        ; 0051d61c
    FLD float ptr [EBX + 0x8]           ; 0051d622
    FADD float ptr [EAX + 0xeac]        ; 0051d625
    INC EDX                             ; 0051d62b
    FSTP float ptr [EAX + 0xeac]        ; 0051d62c
    MOV EBP,dword ptr [ECX + 0x28558]   ; 0051d632
    ADD EAX,0x30                        ; 0051d638
    CMP EDX,EBP                         ; 0051d63b
    JL 0x0051d605                       ; 0051d63d
        ;   XREF to: 0051d605 (CONDITIONAL_JUMP)  ; LAB_0051d605
    NOP                                 ; 0051d63f
    MOV dword ptr [ESI + 0x2230],0xffffffff ; 0051d640
        ;   Label: LAB_0051d640
    POP EBP                             ; 0051d64a
    POP EDI                             ; 0051d64b
    POP ESI                             ; 0051d64c
    POP EBX                             ; 0051d64d
    RET                                 ; 0051d64e

