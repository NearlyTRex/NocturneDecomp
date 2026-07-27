; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_larva_cpp_FUN_004c54f0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c54f0
        ;   Label: core_larva.cpp_FUN_004c54f0
    SUB ESP,0xc                         ; 004c54f1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c54f4
    PUSH 0x0                            ; 004c54f8
    LEA EAX,[ESP + 0x4]                 ; 004c54fa
    PUSH EAX                            ; 004c54fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c54ff
    ADD EAX,0x150                       ; 004c5503
    PUSH EAX                            ; 004c5508
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004c5509
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004c550e
    CMP EBX,EAX                         ; 004c5511
    JNZ 0x004c551f                      ; 004c5513
        ;   XREF to: 004c551f (CONDITIONAL_JUMP)  ; LAB_004c551f
    MOV EAX,0x1                         ; 004c5515
    ADD ESP,0xc                         ; 004c551a
    POP EBX                             ; 004c551d
    RET                                 ; 004c551e
    MOV EDX,dword ptr [EAX]             ; 004c551f
        ;   Label: LAB_004c551f
    MOV dword ptr [EBX],EDX             ; 004c5521
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c5523
    MOV dword ptr [EBX + 0x4],EDX       ; 004c5526
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c5529
    MOV dword ptr [EBX + 0x8],EDX       ; 004c552c
    MOV EAX,0x1                         ; 004c552f
    ADD ESP,0xc                         ; 004c5534
    POP EBX                             ; 004c5537
    RET                                 ; 004c5538

