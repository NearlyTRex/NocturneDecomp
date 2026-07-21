; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5f60(int param_1)
;
;
; XREF[2]:
;   FUN_0043b110 at 0043b172
;   FUN_004d6020 at 004d6025
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_course.cpp_CCourse_load_FUN_0043b690
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5f60
        ;   Label: FUN_004f5f60
    PUSH ESI                            ; 004f5f61
    PUSH EDI                            ; 004f5f62
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f5f63
    PUSH ESI                            ; 004f5f67
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004f5f68
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    MOV AH,byte ptr [ESI + 0x2e8]       ; 004f5f6d
    ADD ESP,0x4                         ; 004f5f73
    TEST AH,AH                          ; 004f5f76
    JNZ 0x004f5faf                      ; 004f5f78
        ;   XREF to: 004f5faf (CONDITIONAL_JUMP)  ; LAB_004f5faf
    PUSH ESI                            ; 004f5f7a
        ;   Label: LAB_004f5f7a
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0 ; 004f5f7b
        ;   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)  ; undefined core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0()
    ADD ESP,0x4                         ; 004f5f80
    LEA EAX,[ESI + 0x150]               ; 004f5f83
    PUSH EAX                            ; 004f5f89
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004f5f8a
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    MOV EBX,ESI                         ; 004f5f8f
    ADD ESP,0x4                         ; 004f5f91
    LEA EDI,[ESI + 0x208]               ; 004f5f94
    MOV EAX,dword ptr [EBX + 0x514]     ; 004f5f9a
        ;   Label: LAB_004f5f9a
    TEST EAX,EAX                        ; 004f5fa0
    JNZ 0x004f5fce                      ; 004f5fa2
        ;   XREF to: 004f5fce (CONDITIONAL_JUMP)  ; LAB_004f5fce
    ADD EBX,0x34                        ; 004f5fa4
    CMP EBX,EDI                         ; 004f5fa7
    JNZ 0x004f5f9a                      ; 004f5fa9
        ;   XREF to: 004f5f9a (CONDITIONAL_JUMP)  ; LAB_004f5f9a
    POP EDI                             ; 004f5fab
    POP ESI                             ; 004f5fac
    POP EBX                             ; 004f5fad
    RET                                 ; 004f5fae
    LEA EAX,[ESI + 0x2e8]               ; 004f5faf
        ;   Label: LAB_004f5faf
    PUSH EAX                            ; 004f5fb5
    LEA EBX,[ESI + 0x308]               ; 004f5fb6
    PUSH EBX                            ; 004f5fbc
    CALL core_course.cpp_CCourse_load_FUN_0043b690 ; 004f5fbd
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_load_FUN_0043b690()
    ADD ESP,0x8                         ; 004f5fc2
    MOV dword ptr [EBX + 0x8],0x0       ; 004f5fc5
    JMP 0x004f5f7a                      ; 004f5fcc
        ;   XREF to: 004f5f7a (UNCONDITIONAL_JUMP)  ; LAB_004f5f7a
    PUSH EAX                            ; 004f5fce
        ;   Label: LAB_004f5fce
    PUSH ESI                            ; 004f5fcf
    MOV dword ptr [EBX + 0x514],0x0     ; 004f5fd0
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0 ; 004f5fda
        ;   XREF to: 004f75c0 (UNCONDITIONAL_CALL)  ; undefined core_platfrm.cpp_CPlatform_attachActor_FUN_004f75c0()
    ADD ESP,0x8                         ; 004f5fdf
    ADD EBX,0x34                        ; 004f5fe2
    CMP EBX,EDI                         ; 004f5fe5
    JNZ 0x004f5f9a                      ; 004f5fe7
        ;   XREF to: 004f5f9a (CONDITIONAL_JUMP)  ; LAB_004f5f9a
    POP EDI                             ; 004f5fe9
    POP ESI                             ; 004f5fea
    POP EBX                             ; 004f5feb
    RET                                 ; 004f5fec

