; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005480d0(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   position
; UOrientationVector * Stack[0x10]:4   orientation
; CVector3f *      Stack[0x14]:4   initial_velocity
; CDemonActor *    Stack[0x18]:4   scale_source
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_createBodyPart_FUN_004154f0
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005480d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005480d0
    PUSH ESI                            ; 005480d1
    PUSH EDI                            ; 005480d2
    PUSH EBP                            ; 005480d3
    PUSH 0x0                            ; 005480d4
    PUSH 0x0                            ; 005480d6
    PUSH 0x0                            ; 005480d8
    MOV EDX,dword ptr [ESP + 0x34]      ; 005480da
    PUSH EDX                            ; 005480de
    MOV ECX,dword ptr [ESP + 0x34]      ; 005480df
    PUSH ECX                            ; 005480e3
    MOV EBX,dword ptr [ESP + 0x34]      ; 005480e4
    PUSH EBX                            ; 005480e8
    MOV ESI,dword ptr [ESP + 0x34]      ; 005480e9
    PUSH ESI                            ; 005480ed
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 005480ee
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 005480f3
    MOV EDI,dword ptr [ESP + 0x18]      ; 005480f6
    PUSH EDI                            ; 005480fa
    PUSH EAX                            ; 005480fb
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005480fc
    PUSH EBP                            ; 00548100
    MOV EBX,EAX                         ; 00548101
    MOV ESI,EAX                         ; 00548103
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130 ; 00548105
        ;   XREF to: 00548130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_00548130(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
    ADD ESP,0xc                         ; 0054810a
    TEST EBX,EBX                        ; 0054810d
    JNZ 0x00548118                      ; 0054810f
        ;   XREF to: 00548118 (CONDITIONAL_JUMP)  ; LAB_00548118
    MOV EAX,ESI                         ; 00548111
    POP EBP                             ; 00548113
    POP EDI                             ; 00548114
    POP ESI                             ; 00548115
    POP EBX                             ; 00548116
    RET                                 ; 00548117
    PUSH EBX                            ; 00548118
        ;   Label: LAB_00548118
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 00548119
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0054811e
    MOV EAX,ESI                         ; 00548121
    POP EBP                             ; 00548123
    POP EDI                             ; 00548124
    POP ESI                             ; 00548125
    POP EBX                             ; 00548126
    RET                                 ; 00548127

