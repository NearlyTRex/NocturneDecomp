; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter *this_ptr,UOrientationVector *orientation)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; UOrientationVector * Stack[0x8]:4   orientation
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 at 004259dd
;   core_stranger.cpp_CStranger_processFrame_FUN_00535900 at 005367e7
;   core_tentacle.cpp_CTentacle_attractActorToward_FUN_005445c0 at 00544703
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a060
        ;   Label: core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
    PUSH ESI                            ; 0042a061
    SUB ESP,0x30                        ; 0042a062
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0042a065
    MOV ESI,dword ptr [ESP + 0x40]      ; 0042a069
    LEA EAX,[EBX + 0x23a4]              ; 0042a06d
    PUSH EAX                            ; 0042a073
    LEA EAX,[ESP + 0x1c]                ; 0042a074
    PUSH EAX                            ; 0042a078
    PUSH EBX                            ; 0042a079
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0042a07a
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0042a07f
    LEA EAX,[EBX + 0x2414]              ; 0042a082
    PUSH EAX                            ; 0042a088
    LEA EAX,[ESP + 0x28]                ; 0042a089
    PUSH EAX                            ; 0042a08d
    PUSH EBX                            ; 0042a08e
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0042a08f
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EAX,[EBX + 0x30]                ; 0042a094
    ADD ESP,0xc                         ; 0042a097
    CMP EAX,ESI                         ; 0042a09a
    JZ 0x0042a0ae                       ; 0042a09c
        ;   XREF to: 0042a0ae (CONDITIONAL_JUMP)  ; LAB_0042a0ae
    MOV EDX,dword ptr [ESI]             ; 0042a09e
    MOV dword ptr [EAX],EDX             ; 0042a0a0
    MOV EDX,dword ptr [ESI + 0x4]       ; 0042a0a2
    MOV dword ptr [EAX + 0x4],EDX       ; 0042a0a5
    MOV EDX,dword ptr [ESI + 0x8]       ; 0042a0a8
    MOV dword ptr [EAX + 0x8],EDX       ; 0042a0ab
    PUSH EBX                            ; 0042a0ae
        ;   Label: LAB_0042a0ae
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0042a0af
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042a0b4
    LEA EAX,[ESP + 0x18]                ; 0042a0b7
    PUSH EAX                            ; 0042a0bb
    LEA EAX,[ESP + 0x4]                 ; 0042a0bc
    PUSH EAX                            ; 0042a0c0
    PUSH EBX                            ; 0042a0c1
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0042a0c2
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    LEA EDX,[EBX + 0x23a4]              ; 0042a0c7
    ADD ESP,0xc                         ; 0042a0cd
    CMP EDX,EAX                         ; 0042a0d0
    JZ 0x0042a0e4                       ; 0042a0d2
        ;   XREF to: 0042a0e4 (CONDITIONAL_JUMP)  ; LAB_0042a0e4
    MOV ECX,dword ptr [EAX]             ; 0042a0d4
    MOV dword ptr [EDX],ECX             ; 0042a0d6
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042a0d8
    MOV dword ptr [EDX + 0x4],ECX       ; 0042a0db
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042a0de
    MOV dword ptr [EDX + 0x8],ECX       ; 0042a0e1
    LEA EAX,[ESP + 0x24]                ; 0042a0e4
        ;   Label: LAB_0042a0e4
    PUSH EAX                            ; 0042a0e8
    LEA EAX,[ESP + 0x10]                ; 0042a0e9
    PUSH EAX                            ; 0042a0ed
    PUSH EBX                            ; 0042a0ee
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0042a0ef
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD EBX,0x2414                      ; 0042a0f4
    ADD ESP,0xc                         ; 0042a0fa
    CMP EBX,EAX                         ; 0042a0fd
    JNZ 0x0042a107                      ; 0042a0ff
        ;   XREF to: 0042a107 (CONDITIONAL_JUMP)  ; LAB_0042a107
    ADD ESP,0x30                        ; 0042a101
    POP ESI                             ; 0042a104
    POP EBX                             ; 0042a105
    RET                                 ; 0042a106
    MOV EDX,dword ptr [EAX]             ; 0042a107
        ;   Label: LAB_0042a107
    MOV dword ptr [EBX],EDX             ; 0042a109
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042a10b
    MOV dword ptr [EBX + 0x4],EDX       ; 0042a10e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042a111
    MOV dword ptr [EBX + 0x8],EDX       ; 0042a114
    ADD ESP,0x30                        ; 0042a117
    POP ESI                             ; 0042a11a
    POP EBX                             ; 0042a11b
    RET                                 ; 0042a11c

