; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004e5e70(int param_1,SIntersectXZCylinder *param_2)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_setcolid.cpp_FUN_00536cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5e70
        ;   Label: core_manpuz.cpp_FUN_004e5e70
    PUSH ESI                            ; 004e5e71
    PUSH EBP                            ; 004e5e72
    SUB ESP,0x18                        ; 004e5e73
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e5e76
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004e5e7a
    PUSH EDI                            ; 004e5e7e
    LEA EAX,[EBX + 0x2b4]               ; 004e5e7f
    PUSH EAX                            ; 004e5e85
    LEA EDI,[ESP + 0x8]                 ; 004e5e86
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e5e8a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004e5e8f
    LEA ESI,[EAX + 0x338]               ; 004e5e94
    ADD ESP,0x4                         ; 004e5e9a
    MOVSD.REP ES:EDI,ESI                ; 004e5e9d
    LEA ESI,[EBX + 0x74c]               ; 004e5e9f
    MOV EBX,ESI                         ; 004e5ea5
    ADD ESI,0x4b0                       ; 004e5ea7
    POP EDI                             ; 004e5ead
    CMP dword ptr [EBX],0x0             ; 004e5eae
        ;   Label: LAB_004e5eae
    JNZ 0x004e5ec1                      ; 004e5eb1
        ;   XREF to: 004e5ec1 (CONDITIONAL_JUMP)  ; LAB_004e5ec1
    ADD EBX,0x64                        ; 004e5eb3
    CMP EBX,ESI                         ; 004e5eb6
    JNZ 0x004e5eae                      ; 004e5eb8
        ;   XREF to: 004e5eae (CONDITIONAL_JUMP)  ; LAB_004e5eae
    ADD ESP,0x18                        ; 004e5eba
    POP EBP                             ; 004e5ebd
    POP ESI                             ; 004e5ebe
    POP EBX                             ; 004e5ebf
    RET                                 ; 004e5ec0
    LEA EAX,[EBX + 0x24]                ; 004e5ec1
        ;   Label: LAB_004e5ec1
    PUSH EAX                            ; 004e5ec4
    LEA EAX,[EBX + 0xc]                 ; 004e5ec5
    PUSH EAX                            ; 004e5ec8
    LEA EAX,[ESP + 0x8]                 ; 004e5ec9
    PUSH EAX                            ; 004e5ecd
    PUSH EBP                            ; 004e5ece
    MOV ECX,dword ptr [0x0061b5a8]      ; 004e5ecf | g_CDemonSetPtr
    PUSH ECX                            ; 004e5ed5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00536cb0 ; 004e5ed6
        ;   XREF to: 00536cb0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_FUN_00536cb0(CDemonSet * this_ptr, SIntersectXZCylinder * cylinder, CBoundingBox3D * bounding_box, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004e5edb
    ADD EBX,0x64                        ; 004e5ede
    CMP EBX,ESI                         ; 004e5ee1
    JNZ 0x004e5eae                      ; 004e5ee3
        ;   XREF to: 004e5eae (CONDITIONAL_JUMP)  ; LAB_004e5eae
    ADD ESP,0x18                        ; 004e5ee5
    POP EBP                             ; 004e5ee8
    POP ESI                             ; 004e5ee9
    POP EBX                             ; 004e5eea
    RET                                 ; 004e5eeb

