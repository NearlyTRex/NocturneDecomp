; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CBodyPart *      Stack[0x8]:4   body_part
; int              Stack[0xc]:4   part_index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 at 0043126c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_00565b10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a7d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0
    PUSH EDI                            ; 0056a7d1
    PUSH EBP                            ; 0056a7d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056a7d3
    MOV EDI,dword ptr [ESP + 0x18]      ; 0056a7d7
    CMP dword ptr [ESP + 0x14],0x0      ; 0056a7db
    JNZ 0x0056a7f1                      ; 0056a7e0
        ;   XREF to: 0056a7f1 (CONDITIONAL_JUMP)  ; LAB_0056a7f1
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 0056a7e2
    POP EBP                             ; 0056a7ed
    POP EDI                             ; 0056a7ee
    POP EBX                             ; 0056a7ef
    RET                                 ; 0056a7f0
    PUSH ESI                            ; 0056a7f1
        ;   Label: LAB_0056a7f1
    PUSH EBX                            ; 0056a7f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056a7f3
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 0056a7f8
    ADD ESP,0x4                         ; 0056a7fa
    MOV ESI,EAX                         ; 0056a7fd
    MOV ECX,dword ptr [EDX]             ; 0056a7ff
    MOV EAX,0x1                         ; 0056a801
    CMP ECX,0x2                         ; 0056a806
    JL 0x0056a825                       ; 0056a809
        ;   XREF to: 0056a825 (CONDITIONAL_JUMP)  ; LAB_0056a825
    LEA EDX,[EAX*0x8 + 0x0]             ; 0056a80b
        ;   Label: LAB_0056a80b
    ADD EDX,ESI                         ; 0056a812
    XOR ECX,ECX                         ; 0056a814
    TEST EAX,EAX                        ; 0056a816
        ;   Label: LAB_0056a816
    JLE 0x0056a829                      ; 0056a818
        ;   XREF to: 0056a829 (CONDITIONAL_JUMP)  ; LAB_0056a829
    CMP ECX,dword ptr [EDX + 0x8]       ; 0056a81a
    JZ 0x0056a829                       ; 0056a81d
        ;   XREF to: 0056a829 (CONDITIONAL_JUMP)  ; LAB_0056a829
    DEC EAX                             ; 0056a81f
    SUB EDX,0x8                         ; 0056a820
    JMP 0x0056a816                      ; 0056a823
        ;   XREF to: 0056a816 (UNCONDITIONAL_JUMP)  ; LAB_0056a816
    XOR EAX,EAX                         ; 0056a825
        ;   Label: LAB_0056a825
    JMP 0x0056a80b                      ; 0056a827
        ;   XREF to: 0056a80b (UNCONDITIONAL_JUMP)  ; LAB_0056a80b
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0056a829
        ;   Label: LAB_0056a829
    JZ 0x0056a83b                       ; 0056a82f
        ;   XREF to: 0056a83b (CONDITIONAL_JUMP)  ; LAB_0056a83b
    PUSH EAX                            ; 0056a831
    PUSH EBX                            ; 0056a832
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890 ; 0056a833
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0056a838
    MOV ECX,dword ptr [EBX + EDI*0x4 + 0x2230] ; 0056a83b
        ;   Label: LAB_0056a83b
    PUSH ECX                            ; 0056a842
    MOV EBP,dword ptr [EBX + 0x2324]    ; 0056a843
    PUSH EBP                            ; 0056a849
    PUSH EDI                            ; 0056a84a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a84b
    PUSH EAX                            ; 0056a84f
    MOV EDX,dword ptr [EBX + 0x2320]    ; 0056a850
    PUSH EDX                            ; 0056a856
    PUSH ESI                            ; 0056a857
    CALL core_skeleton.cpp_CDeformableModel_dismember_FUN_00565b10 ; 0056a858
        ;   XREF to: 00565b10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_dismember_FUN_00565b10(CDeformableModel * this_ptr, int lod_index, CBodyPart * body_part_ptr, int part_index, ...)
    ADD ESP,0x18                        ; 0056a85d
    POP ESI                             ; 0056a860
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 0056a861
    POP EBP                             ; 0056a86c
    POP EDI                             ; 0056a86d
    POP EBX                             ; 0056a86e
    RET                                 ; 0056a86f

