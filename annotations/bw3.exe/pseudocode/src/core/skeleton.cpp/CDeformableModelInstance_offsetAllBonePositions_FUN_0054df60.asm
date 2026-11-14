; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0054df60(CDeformableModelInstance *this_ptr,CVector3f *offset_vector)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset_vector
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054df60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0054df60
    PUSH ESI                            ; 0054df61
    PUSH EDI                            ; 0054df62
    PUSH EBP                            ; 0054df63
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054df64
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054df68
    PUSH ESI                            ; 0054df6c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054df6d
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054df72
    MOV ECX,EAX                         ; 0054df75
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 0054df77
    XOR EDX,EDX                         ; 0054df7d
    TEST EDI,EDI                        ; 0054df7f
    JLE 0x0054dfc0                      ; 0054df81
        ;   XREF to: 0054dfc0 (CONDITIONAL_JUMP)  ; LAB_0054dfc0
    MOV EAX,ESI                         ; 0054df83
    FLD float ptr [EBX]                 ; 0054df85
        ;   Label: LAB_0054df85
    FADD float ptr [EAX + 0xe8c]        ; 0054df87
    FSTP float ptr [EAX + 0xe8c]        ; 0054df8d
    FLD float ptr [EBX + 0x4]           ; 0054df93
    FADD float ptr [EAX + 0xe9c]        ; 0054df96
    FSTP float ptr [EAX + 0xe9c]        ; 0054df9c
    FLD float ptr [EBX + 0x8]           ; 0054dfa2
    FADD float ptr [EAX + 0xeac]        ; 0054dfa5
    INC EDX                             ; 0054dfab
    FSTP float ptr [EAX + 0xeac]        ; 0054dfac
    MOV EBP,dword ptr [ECX + 0x1de78]   ; 0054dfb2
    ADD EAX,0x30                        ; 0054dfb8
    CMP EDX,EBP                         ; 0054dfbb
    JL 0x0054df85                       ; 0054dfbd
        ;   XREF to: 0054df85 (CONDITIONAL_JUMP)  ; LAB_0054df85
    NOP                                 ; 0054dfbf
    MOV dword ptr [ESI + 0x2320],0xffffffff ; 0054dfc0
        ;   Label: LAB_0054dfc0
    POP EBP                             ; 0054dfca
    POP EDI                             ; 0054dfcb
    POP ESI                             ; 0054dfcc
    POP EBX                             ; 0054dfcd
    RET                                 ; 0054dfce

