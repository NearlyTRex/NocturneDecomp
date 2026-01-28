; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042ded0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x20]:1  local_20
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_FUN_00429820 at 0042985d
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc849
;   core_tentacle.cpp_FUN_005db9d0 at 005dbb13
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ded0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042ded0
    PUSH ESI                            ; 0042ded1
    SUB ESP,0x30                        ; 0042ded2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0042ded5
    MOV ESI,dword ptr [ESP + 0x40]      ; 0042ded9
    LEA EAX,[EBX + 0x23ac]              ; 0042dedd
    PUSH EAX                            ; 0042dee3
    LEA EAX,[ESP + 0x1c]                ; 0042dee4
    PUSH EAX                            ; 0042dee8
    PUSH EBX                            ; 0042dee9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0042deea
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0042deef
    LEA EAX,[EBX + 0x241c]              ; 0042def2
    PUSH EAX                            ; 0042def8
    LEA EAX,[ESP + 0x28]                ; 0042def9
    PUSH EAX                            ; 0042defd
    PUSH EBX                            ; 0042defe
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0042deff
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EAX,[EBX + 0x30]                ; 0042df04
    ADD ESP,0xc                         ; 0042df07
    CMP EAX,ESI                         ; 0042df0a
    JZ 0x0042df1e                       ; 0042df0c
        ;   XREF to: 0042df1e (CONDITIONAL_JUMP)  ; LAB_0042df1e
    MOV EDX,dword ptr [ESI]             ; 0042df0e
    MOV dword ptr [EAX],EDX             ; 0042df10
    MOV EDX,dword ptr [ESI + 0x4]       ; 0042df12
    MOV dword ptr [EAX + 0x4],EDX       ; 0042df15
    MOV EDX,dword ptr [ESI + 0x8]       ; 0042df18
    MOV dword ptr [EAX + 0x8],EDX       ; 0042df1b
    PUSH EBX                            ; 0042df1e
        ;   Label: LAB_0042df1e
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0042df1f
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042df24
    LEA EAX,[ESP + 0x18]                ; 0042df27
    PUSH EAX                            ; 0042df2b
    LEA EAX,[ESP + 0x4]                 ; 0042df2c
    PUSH EAX                            ; 0042df30
    PUSH EBX                            ; 0042df31
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0042df32
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    LEA EDX,[EBX + 0x23ac]              ; 0042df37
    ADD ESP,0xc                         ; 0042df3d
    CMP EDX,EAX                         ; 0042df40
    JZ 0x0042df54                       ; 0042df42
        ;   XREF to: 0042df54 (CONDITIONAL_JUMP)  ; LAB_0042df54
    MOV ECX,dword ptr [EAX]             ; 0042df44
    MOV dword ptr [EDX],ECX             ; 0042df46
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042df48
    MOV dword ptr [EDX + 0x4],ECX       ; 0042df4b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042df4e
    MOV dword ptr [EDX + 0x8],ECX       ; 0042df51
    LEA EAX,[ESP + 0x24]                ; 0042df54
        ;   Label: LAB_0042df54
    PUSH EAX                            ; 0042df58
    LEA EAX,[ESP + 0x10]                ; 0042df59
    PUSH EAX                            ; 0042df5d
    PUSH EBX                            ; 0042df5e
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0042df5f
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD EBX,0x241c                      ; 0042df64
    ADD ESP,0xc                         ; 0042df6a
    CMP EBX,EAX                         ; 0042df6d
    JNZ 0x0042df77                      ; 0042df6f
        ;   XREF to: 0042df77 (CONDITIONAL_JUMP)  ; LAB_0042df77
    ADD ESP,0x30                        ; 0042df71
    POP ESI                             ; 0042df74
    POP EBX                             ; 0042df75
    RET                                 ; 0042df76
    MOV EDX,dword ptr [EAX]             ; 0042df77
        ;   Label: LAB_0042df77
    MOV dword ptr [EBX],EDX             ; 0042df79
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042df7b
    MOV dword ptr [EBX + 0x4],EDX       ; 0042df7e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042df81
    MOV dword ptr [EBX + 0x8],EDX       ; 0042df84
    ADD ESP,0x30                        ; 0042df87
    POP ESI                             ; 0042df8a
    POP EBX                             ; 0042df8b
    RET                                 ; 0042df8c

