; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_0040f690(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_factoryFuncBaron_FUN_0040f660 at 0040f673
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_hero.cpp_FUN_004ce240
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f690
        ;   Label: core_baron.cpp_CBaron_ctor_FUN_0040f690
    PUSH ESI                            ; 0040f691
    PUSH EDI                            ; 0040f692
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040f693
    PUSH EDX                            ; 0040f697
    CALL core_hero.cpp_FUN_004ce240     ; 0040f698
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    ADD ESP,0x4                         ; 0040f69d
    PUSH 0x5cb413                       ; 0040f6a0
    MOV EBX,EAX                         ; 0040f6a5
    ADD EAX,0x2b4                       ; 0040f6a7
    PUSH EAX                            ; 0040f6ac
    MOV dword ptr [EAX + -0x4],0x5f2994 ; 0040f6ad
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0040f6b4
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x25708]             ; 0040f6b9
    MOV dword ptr [EBX + 0x25714],0x3f800000 ; 0040f6bf
    MOV dword ptr [EAX + 0x8],0x0       ; 0040f6c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040f6d0
    MOV dword ptr [EAX + 0x4],EDX       ; 0040f6d3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040f6d6
    MOV dword ptr [EAX],EDX             ; 0040f6d9
    MOV dword ptr [EBX + 0x25718],0x0   ; 0040f6db
    MOV ESI,0x5cb41d                    ; 0040f6e5
    MOV dword ptr [EBX + 0x2571c],0x0   ; 0040f6ea
    ADD ESP,0x8                         ; 0040f6f4
    MOV dword ptr [EBX + 0xfc],0x1      ; 0040f6f7
    LEA EDI,[EBX + 0x25640]             ; 0040f701
    MOV dword ptr [EBX + 0x25738],0x0   ; 0040f707
    PUSH EDI                            ; 0040f711
    MOV AL,byte ptr [ESI]               ; 0040f712
        ;   Label: LAB_0040f712
    MOV byte ptr [EDI],AL               ; 0040f714
    CMP AL,0x0                          ; 0040f716
    JZ 0x0040f72a                       ; 0040f718
        ;   XREF to: 0040f72a (CONDITIONAL_JUMP)  ; LAB_0040f72a
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f71a
    ADD ESI,0x2                         ; 0040f71d
    MOV byte ptr [EDI + 0x1],AL         ; 0040f720
    ADD EDI,0x2                         ; 0040f723
    CMP AL,0x0                          ; 0040f726
    JNZ 0x0040f712                      ; 0040f728
        ;   XREF to: 0040f712 (CONDITIONAL_JUMP)  ; LAB_0040f712
    POP EDI                             ; 0040f72a
        ;   Label: LAB_0040f72a
    MOV ESI,0x5cb422                    ; 0040f72b
    LEA EDI,[EBX + 0x256a4]             ; 0040f730
    PUSH EDI                            ; 0040f736
    MOV AL,byte ptr [ESI]               ; 0040f737
        ;   Label: LAB_0040f737
    MOV byte ptr [EDI],AL               ; 0040f739
    CMP AL,0x0                          ; 0040f73b
    JZ 0x0040f74f                       ; 0040f73d
        ;   XREF to: 0040f74f (CONDITIONAL_JUMP)  ; LAB_0040f74f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f73f
    ADD ESI,0x2                         ; 0040f742
    MOV byte ptr [EDI + 0x1],AL         ; 0040f745
    ADD EDI,0x2                         ; 0040f748
    CMP AL,0x0                          ; 0040f74b
    JNZ 0x0040f737                      ; 0040f74d
        ;   XREF to: 0040f737 (CONDITIONAL_JUMP)  ; LAB_0040f737
    POP EDI                             ; 0040f74f
        ;   Label: LAB_0040f74f
    PUSH 0x5cb427                       ; 0040f750
    PUSH 0x7bc51c                       ; 0040f755
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040f75a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040f75f
    MOV EAX,EBX                         ; 0040f762
    MOV dword ptr [EBX + 0x2573c],0x0   ; 0040f764
    POP EDI                             ; 0040f76e
    POP ESI                             ; 0040f76f
    POP EBX                             ; 0040f770
    RET                                 ; 0040f771

