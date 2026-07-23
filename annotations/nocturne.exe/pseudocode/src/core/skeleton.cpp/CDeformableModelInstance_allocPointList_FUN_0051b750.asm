; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(int param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 at 0051de03
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591b08
;   TerminatedCString s_CDeformableModelInstance_00591b1d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   FUN_004c8440
;   FUN_0051b7d0
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b750
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750
    PUSH ESI                            ; 0051b751
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b752
    PUSH EBX                            ; 0051b756
    CALL FUN_0051b7d0                   ; 0051b757
        ;   XREF to: 0051b7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b7d0()
    ADD ESP,0x4                         ; 0051b75c
    PUSH EBX                            ; 0051b75f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051b760
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0051b765
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051b768
    SUB EAX,ESI                         ; 0051b76f
    ADD ESP,0x4                         ; 0051b771
    SHL EAX,0x2                         ; 0051b774
    PUSH EAX                            ; 0051b777
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0051b778
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 0051b77d
    MOV dword ptr [EBX + 0x2234],EAX    ; 0051b780
    TEST EAX,EAX                        ; 0051b786
    JZ 0x0051b797                       ; 0051b788
        ;   XREF to: 0051b797 (CONDITIONAL_JUMP)  ; LAB_0051b797
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 0051b78a
    POP ESI                             ; 0051b794
    POP EBX                             ; 0051b795
    RET                                 ; 0051b796
    PUSH EDI                            ; 0051b797
        ;   Label: LAB_0051b797
    PUSH ESI                            ; 0051b798
    MOV ECX,0x591b08                    ; 0051b799 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x8fa                       ; 0051b79e
    PUSH 0x591b1d                       ; 0051b7a3 | = "CDeformableModelInstance::allocPointL..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051b7a8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0051b7ae | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051b7b4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0051b7b9
    POP EDI                             ; 0051b7bc
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 0051b7bd
    POP ESI                             ; 0051b7c7
    POP EBX                             ; 0051b7c8
    RET                                 ; 0051b7c9

