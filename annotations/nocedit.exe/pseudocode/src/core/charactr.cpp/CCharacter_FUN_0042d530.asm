; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 at 0042dfe7
;   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 at 0042f82e
;   core_mimic.cpp_CMimic_setup2_FUN_0051f780 at 0051f8e4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d530
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042d530
    SUB ESP,0x18                        ; 0042d531
    MOV EBX,dword ptr [ESP + 0x20]      ; 0042d534
    LEA EDX,[EBX + 0x158]               ; 0042d538
    LEA EAX,[EBX + 0x23b8]              ; 0042d53e
    CMP byte ptr [EAX],0x0              ; 0042d544
    JNZ 0x0042d54e                      ; 0042d547
        ;   XREF to: 0042d54e (CONDITIONAL_JUMP)  ; LAB_0042d54e
    ADD ESP,0x18                        ; 0042d549
        ;   Label: LAB_0042d549
    POP EBX                             ; 0042d54c
    RET                                 ; 0042d54d
    MOV EAX,ESP                         ; 0042d54e
        ;   Label: LAB_0042d54e
    PUSH EAX                            ; 0042d550
    PUSH EDX                            ; 0042d551
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 0042d552
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    LEA EDX,[EBX + 0x25f8]              ; 0042d557
    ADD ESP,0x8                         ; 0042d55d
    MOV ECX,EDX                         ; 0042d560
    MOV EBX,EAX                         ; 0042d562
    CMP EDX,EAX                         ; 0042d564
    JZ 0x0042d57a                       ; 0042d566
        ;   XREF to: 0042d57a (CONDITIONAL_JUMP)  ; LAB_0042d57a
    PUSH ESI                            ; 0042d568
    MOV ESI,dword ptr [EAX]             ; 0042d569
    MOV dword ptr [EDX],ESI             ; 0042d56b
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042d56d
    MOV dword ptr [EDX + 0x4],ESI       ; 0042d570
    MOV ESI,dword ptr [EAX + 0x8]       ; 0042d573
    MOV dword ptr [EDX + 0x8],ESI       ; 0042d576
    POP ESI                             ; 0042d579
    LEA EDX,[EBX + 0xc]                 ; 0042d57a
        ;   Label: LAB_0042d57a
    LEA EAX,[ECX + 0xc]                 ; 0042d57d
    CMP EAX,EDX                         ; 0042d580
    JZ 0x0042d549                       ; 0042d582
        ;   XREF to: 0042d549 (CONDITIONAL_JUMP)  ; LAB_0042d549
    MOV ECX,dword ptr [EDX]             ; 0042d584
    MOV dword ptr [EAX],ECX             ; 0042d586
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042d588
    MOV dword ptr [EAX + 0x4],ECX       ; 0042d58b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042d58e
    MOV dword ptr [EAX + 0x8],ECX       ; 0042d591
    ADD ESP,0x18                        ; 0042d594
    POP EBX                             ; 0042d597
    RET                                 ; 0042d598

