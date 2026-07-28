; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 0042430c
;   core_charactr.cpp_FUN_0042a150 at 0042a177
;   core_mimic.cpp_FUN_004d49f0 at 004d4a7b
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004296c0
        ;   Label: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0
    SUB ESP,0x18                        ; 004296c1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004296c4
    LEA EDX,[EBX + 0x150]               ; 004296c8
    LEA EAX,[EBX + 0x23b0]              ; 004296ce
    CMP byte ptr [EAX],0x0              ; 004296d4
    JNZ 0x004296de                      ; 004296d7
        ;   XREF to: 004296de (CONDITIONAL_JUMP)  ; LAB_004296de
    ADD ESP,0x18                        ; 004296d9
        ;   Label: LAB_004296d9
    POP EBX                             ; 004296dc
    RET                                 ; 004296dd
    MOV EAX,ESP                         ; 004296de
        ;   Label: LAB_004296de
    PUSH EAX                            ; 004296e0
    PUSH EDX                            ; 004296e1
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 004296e2
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    LEA EDX,[EBX + 0x25f0]              ; 004296e7
    ADD ESP,0x8                         ; 004296ed
    MOV ECX,EDX                         ; 004296f0
    MOV EBX,EAX                         ; 004296f2
    CMP EDX,EAX                         ; 004296f4
    JZ 0x0042970a                       ; 004296f6
        ;   XREF to: 0042970a (CONDITIONAL_JUMP)  ; LAB_0042970a
    PUSH ESI                            ; 004296f8
    MOV ESI,dword ptr [EAX]             ; 004296f9
    MOV dword ptr [EDX],ESI             ; 004296fb
    MOV ESI,dword ptr [EAX + 0x4]       ; 004296fd
    MOV dword ptr [EDX + 0x4],ESI       ; 00429700
    MOV ESI,dword ptr [EAX + 0x8]       ; 00429703
    MOV dword ptr [EDX + 0x8],ESI       ; 00429706
    POP ESI                             ; 00429709
    LEA EDX,[EBX + 0xc]                 ; 0042970a
        ;   Label: LAB_0042970a
    LEA EAX,[ECX + 0xc]                 ; 0042970d
    CMP EAX,EDX                         ; 00429710
    JZ 0x004296d9                       ; 00429712
        ;   XREF to: 004296d9 (CONDITIONAL_JUMP)  ; LAB_004296d9
    MOV ECX,dword ptr [EDX]             ; 00429714
    MOV dword ptr [EAX],ECX             ; 00429716
    MOV ECX,dword ptr [EDX + 0x4]       ; 00429718
    MOV dword ptr [EAX + 0x4],ECX       ; 0042971b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042971e
    MOV dword ptr [EAX + 0x8],ECX       ; 00429721
    ADD ESP,0x18                        ; 00429724
    POP EBX                             ; 00429727
    RET                                 ; 00429728

