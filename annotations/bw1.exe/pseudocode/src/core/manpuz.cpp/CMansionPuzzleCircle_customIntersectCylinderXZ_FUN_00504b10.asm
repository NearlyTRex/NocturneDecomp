; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00504b10(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_setcolid.cpp_FUN_005580d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504b10
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00504b10
    PUSH ESI                            ; 00504b11
    PUSH EBP                            ; 00504b12
    SUB ESP,0x18                        ; 00504b13
    MOV EBX,dword ptr [ESP + 0x28]      ; 00504b16
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00504b1a
    PUSH EDI                            ; 00504b1e
    LEA EAX,[EBX + 0x158]               ; 00504b1f
    PUSH EAX                            ; 00504b25
    LEA EDI,[ESP + 0x8]                 ; 00504b26
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00504b2a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00504b2f
    LEA ESI,[EAX + 0x338]               ; 00504b34
    ADD ESP,0x4                         ; 00504b3a
    MOVSD.REP ES:EDI,ESI                ; 00504b3d
    LEA ESI,[EBX + 0x5f0]               ; 00504b3f
    MOV EBX,ESI                         ; 00504b45
    ADD ESI,0x4b0                       ; 00504b47
    POP EDI                             ; 00504b4d
    CMP dword ptr [EBX],0x0             ; 00504b4e
        ;   Label: LAB_00504b4e
    JNZ 0x00504b61                      ; 00504b51
        ;   XREF to: 00504b61 (CONDITIONAL_JUMP)  ; LAB_00504b61
    ADD EBX,0x64                        ; 00504b53
    CMP EBX,ESI                         ; 00504b56
    JNZ 0x00504b4e                      ; 00504b58
        ;   XREF to: 00504b4e (CONDITIONAL_JUMP)  ; LAB_00504b4e
    ADD ESP,0x18                        ; 00504b5a
    POP EBP                             ; 00504b5d
    POP ESI                             ; 00504b5e
    POP EBX                             ; 00504b5f
    RET                                 ; 00504b60
    LEA EAX,[EBX + 0x24]                ; 00504b61
        ;   Label: LAB_00504b61
    PUSH EAX                            ; 00504b64
    LEA EAX,[EBX + 0xc]                 ; 00504b65
    PUSH EAX                            ; 00504b68
    LEA EAX,[ESP + 0x8]                 ; 00504b69
    PUSH EAX                            ; 00504b6d
    PUSH EBP                            ; 00504b6e
    MOV ECX,dword ptr [0x00622c18]      ; 00504b6f | g_CDemonSetPtr
    PUSH ECX                            ; 00504b75 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005580d0 ; 00504b76
        ;   XREF to: 005580d0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_FUN_005580d0(CDemonSet * this_ptr, SIntersectXZCylinder * cylinder, CBoundingBox3D * bounding_box, CVector3f * position, ...)
    ADD ESP,0x14                        ; 00504b7b
    ADD EBX,0x64                        ; 00504b7e
    CMP EBX,ESI                         ; 00504b81
    JNZ 0x00504b4e                      ; 00504b83
        ;   XREF to: 00504b4e (CONDITIONAL_JUMP)  ; LAB_00504b4e
    ADD ESP,0x18                        ; 00504b85
    POP EBP                             ; 00504b88
    POP ESI                             ; 00504b89
    POP EBX                             ; 00504b8a
    RET                                 ; 00504b8b

