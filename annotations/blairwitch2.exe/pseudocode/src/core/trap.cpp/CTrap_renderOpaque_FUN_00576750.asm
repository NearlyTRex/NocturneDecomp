; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_00576750(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576750
        ;   Label: core_trap.cpp_CTrap_renderOpaque_FUN_00576750
    PUSH ESI                            ; 00576751
    PUSH EDI                            ; 00576752
    PUSH EBP                            ; 00576753
    SUB ESP,0x30                        ; 00576754
    MOV EBX,dword ptr [ESP + 0x44]      ; 00576757
    LEA EAX,[EBX + 0x20]                ; 0057675b
    PUSH EAX                            ; 0057675e
    MOV EDX,dword ptr [0x0060b280]      ; 0057675f | DAT_0060b280
    PUSH EDX                            ; 00576765
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00576766
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0057676b
    PUSH 0x0                            ; 0057676e
    LEA EAX,[EBX + 0x30]                ; 00576770
    PUSH EAX                            ; 00576773
    MOV ECX,dword ptr [0x0060b280]      ; 00576774 | DAT_0060b280
    PUSH ECX                            ; 0057677a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0057677b
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00576780
    PUSH 0x0                            ; 00576783
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00576785
    PUSH EBX                            ; 0057678b
    LEA ESI,[ESP + 0x20]                ; 0057678c
    LEA EDI,[ESP + 0x8]                 ; 00576790
    CALL dword ptr [EAX + 0x24]         ; 00576794
    MOV ECX,0x6                         ; 00576797
    ADD ESP,0x4                         ; 0057679c
    LEA EAX,[ESP + 0x4]                 ; 0057679f
    LEA ESI,[ESP + 0x1c]                ; 005767a3
    PUSH EAX                            ; 005767a7
    MOVSD.REP ES:EDI,ESI                ; 005767a8
    CALL core_box.cpp_FUN_0041a840      ; 005767aa
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 005767af
    MOV ESI,EAX                         ; 005767b2
    TEST EAX,EAX                        ; 005767b4
    JZ 0x005767d8                       ; 005767b6
        ;   XREF to: 005767d8 (CONDITIONAL_JUMP)  ; LAB_005767d8
    MOV EDI,dword ptr [EBX + 0x434]     ; 005767b8
    LEA EAX,[EBX + 0x2b4]               ; 005767be
    TEST EDI,EDI                        ; 005767c4
    JZ 0x005767f1                       ; 005767c6
        ;   XREF to: 005767f1 (CONDITIONAL_JUMP)  ; LAB_005767f1
    PUSH -0x1                           ; 005767c8
    PUSH 0x40400000                     ; 005767ca
    PUSH EAX                            ; 005767cf
        ;   Label: LAB_005767cf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 005767d0
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005767d5
    MOV EBP,dword ptr [0x0060b280]      ; 005767d8 | DAT_0060b280
        ;   Label: LAB_005767d8
    PUSH EBP                            ; 005767de
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 005767df
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 005767e4
    MOV EAX,ESI                         ; 005767e7
    ADD ESP,0x30                        ; 005767e9
    POP EBP                             ; 005767ec
    POP EDI                             ; 005767ed
    POP ESI                             ; 005767ee
    POP EBX                             ; 005767ef
    RET                                 ; 005767f0
    PUSH -0x1                           ; 005767f1
        ;   Label: LAB_005767f1
    PUSH 0x0                            ; 005767f3
    JMP 0x005767cf                      ; 005767f5
        ;   XREF to: 005767cf (UNCONDITIONAL_JUMP)  ; LAB_005767cf

