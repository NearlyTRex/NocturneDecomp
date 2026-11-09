; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054f360(CDeformableModelInstance *param_1,CBodyPart *param_2,int param_3)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_00430590 at 004305ec
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_0054e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f360
        ;   Label: core_skeleton.cpp_FUN_0054f360
    PUSH EDI                            ; 0054f361
    PUSH EBP                            ; 0054f362
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054f363
    MOV EDI,dword ptr [ESP + 0x18]      ; 0054f367
    CMP dword ptr [ESP + 0x14],0x0      ; 0054f36b
    JNZ 0x0054f381                      ; 0054f370
        ;   XREF to: 0054f381 (CONDITIONAL_JUMP)  ; LAB_0054f381
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 0054f372
    POP EBP                             ; 0054f37d
    POP EDI                             ; 0054f37e
    POP EBX                             ; 0054f37f
    RET                                 ; 0054f380
    PUSH ESI                            ; 0054f381
        ;   Label: LAB_0054f381
    PUSH EBX                            ; 0054f382
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054f383
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 0054f388
    ADD ESP,0x4                         ; 0054f38a
    MOV ESI,EAX                         ; 0054f38d
    MOV ECX,dword ptr [EDX]             ; 0054f38f
    MOV EAX,0x1                         ; 0054f391
    CMP ECX,0x2                         ; 0054f396
    JL 0x0054f3b5                       ; 0054f399
        ;   XREF to: 0054f3b5 (CONDITIONAL_JUMP)  ; LAB_0054f3b5
    LEA EDX,[EAX*0x8 + 0x0]             ; 0054f39b
        ;   Label: LAB_0054f39b
    ADD EDX,ESI                         ; 0054f3a2
    XOR ECX,ECX                         ; 0054f3a4
    TEST EAX,EAX                        ; 0054f3a6
        ;   Label: LAB_0054f3a6
    JLE 0x0054f3b9                      ; 0054f3a8
        ;   XREF to: 0054f3b9 (CONDITIONAL_JUMP)  ; LAB_0054f3b9
    CMP ECX,dword ptr [EDX + 0x8]       ; 0054f3aa
    JZ 0x0054f3b9                       ; 0054f3ad
        ;   XREF to: 0054f3b9 (CONDITIONAL_JUMP)  ; LAB_0054f3b9
    DEC EAX                             ; 0054f3af
    SUB EDX,0x8                         ; 0054f3b0
    JMP 0x0054f3a6                      ; 0054f3b3
        ;   XREF to: 0054f3a6 (UNCONDITIONAL_JUMP)  ; LAB_0054f3a6
    XOR EAX,EAX                         ; 0054f3b5
        ;   Label: LAB_0054f3b5
    JMP 0x0054f39b                      ; 0054f3b7
        ;   XREF to: 0054f39b (UNCONDITIONAL_JUMP)  ; LAB_0054f39b
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0054f3b9
        ;   Label: LAB_0054f3b9
    JZ 0x0054f3cb                       ; 0054f3bf
        ;   XREF to: 0054f3cb (CONDITIONAL_JUMP)  ; LAB_0054f3cb
    PUSH EAX                            ; 0054f3c1
    PUSH EBX                            ; 0054f3c2
    CALL core_skeleton.cpp_FUN_0054e420 ; 0054f3c3
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054f3c8
    MOV ECX,dword ptr [EBX + EDI*0x4 + 0x2230] ; 0054f3cb
        ;   Label: LAB_0054f3cb
    PUSH ECX                            ; 0054f3d2
    MOV EBP,dword ptr [EBX + 0x2324]    ; 0054f3d3
    PUSH EBP                            ; 0054f3d9
    PUSH EDI                            ; 0054f3da
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054f3db
    PUSH EAX                            ; 0054f3df
    MOV EDX,dword ptr [EBX + 0x2320]    ; 0054f3e0
    PUSH EDX                            ; 0054f3e6
    PUSH ESI                            ; 0054f3e7
    CALL core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0 ; 0054f3e8
        ;   XREF to: 0054a6a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0(CDeformableModel * this_ptr, int lod_index, CBodyPart * body_part_ptr, int part_index, ...)
    ADD ESP,0x18                        ; 0054f3ed
    POP ESI                             ; 0054f3f0
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 0054f3f1
    POP EBP                             ; 0054f3fc
    POP EDI                             ; 0054f3fd
    POP EBX                             ; 0054f3fe
    RET                                 ; 0054f3ff

