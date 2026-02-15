; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60(CDeformableModelInstance *this_ptr,CVector3f *offset_vector)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset_vector
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fd60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60
    PUSH ESI                            ; 0059fd61
    PUSH EDI                            ; 0059fd62
    PUSH EBP                            ; 0059fd63
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059fd64
    MOV EBX,dword ptr [ESP + 0x18]      ; 0059fd68
    PUSH ESI                            ; 0059fd6c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059fd6d
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059fd72
    MOV ECX,EAX                         ; 0059fd75
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0059fd77
    XOR EDX,EDX                         ; 0059fd7d
    TEST EDI,EDI                        ; 0059fd7f
    JLE 0x0059fdc0                      ; 0059fd81
        ;   XREF to: 0059fdc0 (CONDITIONAL_JUMP)  ; LAB_0059fdc0
    MOV EAX,ESI                         ; 0059fd83
    FLD float ptr [EBX]                 ; 0059fd85
        ;   Label: LAB_0059fd85
    FADD float ptr [EAX + 0xe8c]        ; 0059fd87
    FSTP float ptr [EAX + 0xe8c]        ; 0059fd8d
    FLD float ptr [EBX + 0x4]           ; 0059fd93
    FADD float ptr [EAX + 0xe9c]        ; 0059fd96
    FSTP float ptr [EAX + 0xe9c]        ; 0059fd9c
    FLD float ptr [EBX + 0x8]           ; 0059fda2
    FADD float ptr [EAX + 0xeac]        ; 0059fda5
    INC EDX                             ; 0059fdab
    FSTP float ptr [EAX + 0xeac]        ; 0059fdac
    MOV EBP,dword ptr [ECX + 0x28558]   ; 0059fdb2
    ADD EAX,0x30                        ; 0059fdb8
    CMP EDX,EBP                         ; 0059fdbb
    JL 0x0059fd85                       ; 0059fdbd
        ;   XREF to: 0059fd85 (CONDITIONAL_JUMP)  ; LAB_0059fd85
    NOP                                 ; 0059fdbf
    MOV dword ptr [ESI + 0x2230],0xffffffff ; 0059fdc0
        ;   Label: LAB_0059fdc0
    POP EBP                             ; 0059fdca
    POP EDI                             ; 0059fdcb
    POP ESI                             ; 0059fdcc
    POP EBX                             ; 0059fdcd
    RET                                 ; 0059fdce

