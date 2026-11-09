; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005693d0(CDeformableModelInstance *param_1,float *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005693d0
        ;   Label: core_skeleton.cpp_FUN_005693d0
    PUSH ESI                            ; 005693d1
    PUSH EDI                            ; 005693d2
    PUSH EBP                            ; 005693d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005693d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005693d8
    PUSH ESI                            ; 005693dc
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005693dd
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005693e2
    MOV ECX,EAX                         ; 005693e5
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 005693e7
    XOR EDX,EDX                         ; 005693ed
    TEST EDI,EDI                        ; 005693ef
    JLE 0x00569430                      ; 005693f1
        ;   XREF to: 00569430 (CONDITIONAL_JUMP)  ; LAB_00569430
    MOV EAX,ESI                         ; 005693f3
    FLD float ptr [EBX]                 ; 005693f5
        ;   Label: LAB_005693f5
    FADD float ptr [EAX + 0xe8c]        ; 005693f7
    FSTP float ptr [EAX + 0xe8c]        ; 005693fd
    FLD float ptr [EBX + 0x4]           ; 00569403
    FADD float ptr [EAX + 0xe9c]        ; 00569406
    FSTP float ptr [EAX + 0xe9c]        ; 0056940c
    FLD float ptr [EBX + 0x8]           ; 00569412
    FADD float ptr [EAX + 0xeac]        ; 00569415
    INC EDX                             ; 0056941b
    FSTP float ptr [EAX + 0xeac]        ; 0056941c
    MOV EBP,dword ptr [ECX + 0x1de78]   ; 00569422
    ADD EAX,0x30                        ; 00569428
    CMP EDX,EBP                         ; 0056942b
    JL 0x005693f5                       ; 0056942d
        ;   XREF to: 005693f5 (CONDITIONAL_JUMP)  ; LAB_005693f5
    NOP                                 ; 0056942f
    MOV dword ptr [ESI + 0x2320],0xffffffff ; 00569430
        ;   Label: LAB_00569430
    POP EBP                             ; 0056943a
    POP EDI                             ; 0056943b
    POP ESI                             ; 0056943c
    POP EBX                             ; 0056943d
    RET                                 ; 0056943e

