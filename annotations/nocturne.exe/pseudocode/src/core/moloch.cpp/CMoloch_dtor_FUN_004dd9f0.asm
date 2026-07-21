; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_core_moloch.cpp_CMoloch_setup_FUN_004dda70_005a0ac4 = 004dda70
;   undefined4 DAT_005a0c10
;
; Called Functions:
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_004b4800
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd9f0
        ;   Label: core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dd9f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dd9f5
    JNZ 0x004dda47                      ; 004dd9fa
        ;   XREF to: 004dda47 (CONDITIONAL_JUMP)  ; LAB_004dda47
    PUSH 0x0                            ; 004dd9fc
    ADD EBX,0x21dc4                     ; 004dd9fe
    PUSH EBX                            ; 004dda04
    MOV dword ptr [EBX + 0xfffde388],0x5a0ac4 ; 004dda05 | PTR_core_moloch.cpp_CMoloch_setup_FUN_004dda70_005a0ac4
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 004dda0f
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_dtor_FUN_004e0070()
    ADD ESP,0x8                         ; 004dda14
    PUSH 0x0                            ; 004dda17
    SUB EAX,0x2388                      ; 004dda19
    PUSH EAX                            ; 004dda1e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004dda1f
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 004dda24
    PUSH 0x1                            ; 004dda27
    LEA EBX,[EAX + 0xfffe05c4]          ; 004dda29
    PUSH EBX                            ; 004dda2f
    CALL FUN_004b4800                   ; 004dda30
        ;   XREF to: 004b4800 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4800()
    ADD ESP,0x8                         ; 004dda35
    MOV DL,byte ptr [ESP + 0xc]         ; 004dda38
    MOV EBX,EAX                         ; 004dda3c
    TEST DL,0x2                         ; 004dda3e
    JNZ 0x004dda62                      ; 004dda41
        ;   XREF to: 004dda62 (CONDITIONAL_JUMP)  ; LAB_004dda62
    MOV EAX,EBX                         ; 004dda43
    POP EBX                             ; 004dda45
    RET                                 ; 004dda46
    PUSH 0x5a0c10                       ; 004dda47 | DAT_005a0c10
        ;   Label: LAB_004dda47
    PUSH EBX                            ; 004dda4c
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004dda4d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004dda52
    PUSH EAX                            ; 004dda55
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004dda56
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004dda5b
    MOV EAX,EBX                         ; 004dda5e
    POP EBX                             ; 004dda60
    RET                                 ; 004dda61
    PUSH EAX                            ; 004dda62
        ;   Label: LAB_004dda62
    CALL FUN_00564494                   ; 004dda63
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004dda68
    MOV EAX,EBX                         ; 004dda6b
    POP EBX                             ; 004dda6d
    RET                                 ; 004dda6e

