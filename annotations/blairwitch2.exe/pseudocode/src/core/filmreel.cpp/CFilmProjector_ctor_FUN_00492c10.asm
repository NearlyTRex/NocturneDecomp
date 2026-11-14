; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_00492c10(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_factoryFuncFilmProjector_FUN_00492be0 at 00492bf3
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_00447090
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492c10
        ;   Label: core_filmreel.cpp_CFilmProjector_ctor_FUN_00492c10
    PUSH ESI                            ; 00492c11
    PUSH EDI                            ; 00492c12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00492c13
    PUSH EBX                            ; 00492c17
    CALL core_dest.cpp_CActorDestination_ctor_FUN_00447090 ; 00492c18
        ;   XREF to: 00447090 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_00447090(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 00492c1d
    ADD EAX,0x350                       ; 00492c20
    PUSH EAX                            ; 00492c25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00492c26
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00492c2b
    LEA EBX,[EAX + 0xfffffcb0]          ; 00492c2e
    PUSH 0x5d5297                       ; 00492c34
    LEA EAX,[EBX + 0x350]               ; 00492c39
    PUSH EAX                            ; 00492c3f
    MOV ESI,0x5d52a4                    ; 00492c40
    MOV dword ptr [EBX + 0x2b0],0x5f6334 ; 00492c45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00492c4f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00492c54
    LEA EDI,[EBX + 0x2b8]               ; 00492c57
    MOV dword ptr [EBX + 0x534],0x0     ; 00492c5d
    PUSH EDI                            ; 00492c67
    MOV AL,byte ptr [ESI]               ; 00492c68
        ;   Label: LAB_00492c68
    MOV byte ptr [EDI],AL               ; 00492c6a
    CMP AL,0x0                          ; 00492c6c
    JZ 0x00492c80                       ; 00492c6e
        ;   XREF to: 00492c80 (CONDITIONAL_JUMP)  ; LAB_00492c80
    MOV AL,byte ptr [ESI + 0x1]         ; 00492c70
    ADD ESI,0x2                         ; 00492c73
    MOV byte ptr [EDI + 0x1],AL         ; 00492c76
    ADD EDI,0x2                         ; 00492c79
    CMP AL,0x0                          ; 00492c7c
    JNZ 0x00492c68                      ; 00492c7e
        ;   XREF to: 00492c68 (CONDITIONAL_JUMP)  ; LAB_00492c68
    POP EDI                             ; 00492c80
        ;   Label: LAB_00492c80
    MOV ESI,0x5d52ae                    ; 00492c81
    MOV dword ptr [EBX + 0x538],0x0     ; 00492c86
    LEA EDI,[EBX + 0x4d0]               ; 00492c90
    MOV dword ptr [EBX + 0x4cc],0x0     ; 00492c96
    PUSH EDI                            ; 00492ca0
    MOV AL,byte ptr [ESI]               ; 00492ca1
        ;   Label: LAB_00492ca1
    MOV byte ptr [EDI],AL               ; 00492ca3
    CMP AL,0x0                          ; 00492ca5
    JZ 0x00492cb9                       ; 00492ca7
        ;   XREF to: 00492cb9 (CONDITIONAL_JUMP)  ; LAB_00492cb9
    MOV AL,byte ptr [ESI + 0x1]         ; 00492ca9
    ADD ESI,0x2                         ; 00492cac
    MOV byte ptr [EDI + 0x1],AL         ; 00492caf
    ADD EDI,0x2                         ; 00492cb2
    CMP AL,0x0                          ; 00492cb5
    JNZ 0x00492ca1                      ; 00492cb7
        ;   XREF to: 00492ca1 (CONDITIONAL_JUMP)  ; LAB_00492ca1
    POP EDI                             ; 00492cb9
        ;   Label: LAB_00492cb9
    MOV EAX,EBX                         ; 00492cba
    MOV dword ptr [EBX + 0x53c],0x0     ; 00492cbc
    POP EDI                             ; 00492cc6
    POP ESI                             ; 00492cc7
    POP EBX                             ; 00492cc8
    RET                                 ; 00492cc9

