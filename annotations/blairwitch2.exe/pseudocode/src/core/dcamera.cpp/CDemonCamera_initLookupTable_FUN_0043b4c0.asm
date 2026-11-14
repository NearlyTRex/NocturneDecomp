; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043b4c0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980 at 0052d9da
;
; Referenced Globals:
;   undefined4 DAT_006141bc
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00441f40
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00443180
;   core_dcamera.cpp_CDemonCamera_init_FUN_0043b570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b4c0
        ;   Label: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043b4c0
    PUSH ESI                            ; 0043b4c1
    PUSH EDI                            ; 0043b4c2
    PUSH EBP                            ; 0043b4c3
    SUB ESP,0x8                         ; 0043b4c4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043b4c7
    PUSH 0x10000                        ; 0043b4cb
    PUSH EBX                            ; 0043b4d0
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00443180 ; 0043b4d1
        ;   XREF to: 00443180 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00443180(CDemonCamera * this_ptr, int gamma_value)
    MOV EAX,[0x006141bc]                ; 0043b4d6 | DAT_006141bc
    ADD ESP,0x8                         ; 0043b4db
    CMP EAX,0x1e0                       ; 0043b4de
    JLE 0x0043b4ea                      ; 0043b4e3
        ;   XREF to: 0043b4ea (CONDITIONAL_JUMP)  ; LAB_0043b4ea
    MOV EAX,0x1e0                       ; 0043b4e5
    PUSH EAX                            ; 0043b4ea
        ;   Label: LAB_0043b4ea
    PUSH EBX                            ; 0043b4eb
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0043b570 ; 0043b4ec
        ;   XREF to: 0043b570 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0043b570(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0043b4f1
    PUSH EBX                            ; 0043b4f4
    CALL core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00441f40 ; 0043b4f5
        ;   XREF to: 00441f40 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_00441f40(CDemonCamera * this_ptr)
    MOV EDX,0x40                        ; 0043b4fa
    ADD ESP,0x4                         ; 0043b4ff
    XOR EBP,EBP                         ; 0043b502
    MOV dword ptr [ESP],EDX             ; 0043b504
    MOV dword ptr [ESP + 0x4],EBP       ; 0043b507
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043b50b
        ;   Label: LAB_0043b50b
    MOV EBX,EBP                         ; 0043b50f
    MOV EDI,dword ptr [ESP]             ; 0043b511
    SHL EBX,0x6                         ; 0043b514
    IMUL ECX,EBP,0x0                    ; 0043b517
    MOV EDX,ECX                         ; 0043b51a
        ;   Label: LAB_0043b51a
    MOV EAX,ECX                         ; 0043b51c
    SAR EDX,0x1f                        ; 0043b51e
    SHL EDX,0x4                         ; 0043b521
    SBB EAX,EDX                         ; 0043b524
    SAR EAX,0x4                         ; 0043b526
    MOV EDX,EAX                         ; 0043b529
    SAR EDX,0x1f                        ; 0043b52b
    SHL EDX,0x2                         ; 0043b52e
    SBB EAX,EDX                         ; 0043b531
    SAR EAX,0x2                         ; 0043b533
    INC EBX                             ; 0043b536
    ADD ECX,ESI                         ; 0043b537
    MOV byte ptr [EBX + 0x1325cff],AL   ; 0043b539
    CMP EBX,EDI                         ; 0043b53f
    JNZ 0x0043b51a                      ; 0043b541
        ;   XREF to: 0043b51a (CONDITIONAL_JUMP)  ; LAB_0043b51a
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043b543
    MOV EBX,dword ptr [ESP]             ; 0043b547
    INC EBP                             ; 0043b54a
    INC ESI                             ; 0043b54b
    ADD EBX,0x40                        ; 0043b54c
    MOV dword ptr [ESP + 0x4],ESI       ; 0043b54f
    MOV dword ptr [ESP],EBX             ; 0043b553
    CMP EBP,0x40                        ; 0043b556
    JL 0x0043b50b                       ; 0043b559
        ;   XREF to: 0043b50b (CONDITIONAL_JUMP)  ; LAB_0043b50b
    ADD ESP,0x8                         ; 0043b55b
    POP EBP                             ; 0043b55e
    POP EDI                             ; 0043b55f
    POP ESI                             ; 0043b560
    POP EBX                             ; 0043b561
    RET                                 ; 0043b562

