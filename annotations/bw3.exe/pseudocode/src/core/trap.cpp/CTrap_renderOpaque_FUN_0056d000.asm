; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_0056d000(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d000
        ;   Label: core_trap.cpp_CTrap_renderOpaque_FUN_0056d000
    PUSH ESI                            ; 0056d001
    PUSH EDI                            ; 0056d002
    PUSH EBP                            ; 0056d003
    SUB ESP,0x30                        ; 0056d004
    MOV EBX,dword ptr [ESP + 0x44]      ; 0056d007
    LEA EAX,[EBX + 0x20]                ; 0056d00b
    PUSH EAX                            ; 0056d00e
    MOV EDX,dword ptr [0x005f2afc]      ; 0056d00f | DAT_005f2afc
    PUSH EDX                            ; 0056d015
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0056d016
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0056d01b
    PUSH 0x0                            ; 0056d01e
    LEA EAX,[EBX + 0x30]                ; 0056d020
    PUSH EAX                            ; 0056d023
    MOV ECX,dword ptr [0x005f2afc]      ; 0056d024 | DAT_005f2afc
    PUSH ECX                            ; 0056d02a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0056d02b
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0056d030
    PUSH 0x0                            ; 0056d033
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056d035
    PUSH EBX                            ; 0056d03b
    LEA ESI,[ESP + 0x20]                ; 0056d03c
    LEA EDI,[ESP + 0x8]                 ; 0056d040
    CALL dword ptr [EAX + 0x1c]         ; 0056d044
    MOV ECX,0x6                         ; 0056d047
    ADD ESP,0x4                         ; 0056d04c
    LEA EAX,[ESP + 0x4]                 ; 0056d04f
    LEA ESI,[ESP + 0x1c]                ; 0056d053
    PUSH EAX                            ; 0056d057
    MOVSD.REP ES:EDI,ESI                ; 0056d058
    CALL core_box.cpp_FUN_0041daf0      ; 0056d05a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0056d05f
    MOV ESI,EAX                         ; 0056d062
    TEST EAX,EAX                        ; 0056d064
    JZ 0x0056d088                       ; 0056d066
        ;   XREF to: 0056d088 (CONDITIONAL_JUMP)  ; LAB_0056d088
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 0056d068
    LEA EAX,[EBX + 0x158]               ; 0056d06e
    TEST EDI,EDI                        ; 0056d074
    JZ 0x0056d0a1                       ; 0056d076
        ;   XREF to: 0056d0a1 (CONDITIONAL_JUMP)  ; LAB_0056d0a1
    PUSH -0x1                           ; 0056d078
    PUSH 0x40400000                     ; 0056d07a
    PUSH EAX                            ; 0056d07f
        ;   Label: LAB_0056d07f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0056d080
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0056d085
    MOV EBP,dword ptr [0x005f2afc]      ; 0056d088 | DAT_005f2afc
        ;   Label: LAB_0056d088
    PUSH EBP                            ; 0056d08e
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0056d08f
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0056d094
    MOV EAX,ESI                         ; 0056d097
    ADD ESP,0x30                        ; 0056d099
    POP EBP                             ; 0056d09c
    POP EDI                             ; 0056d09d
    POP ESI                             ; 0056d09e
    POP EBX                             ; 0056d09f
    RET                                 ; 0056d0a0
    PUSH -0x1                           ; 0056d0a1
        ;   Label: LAB_0056d0a1
    PUSH 0x0                            ; 0056d0a3
    JMP 0x0056d07f                      ; 0056d0a5
        ;   XREF to: 0056d07f (UNCONDITIONAL_JUMP)  ; LAB_0056d07f

