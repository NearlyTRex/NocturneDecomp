; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_005112b0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_course.cpp_CCourse_load_FUN_00444970
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005112b0
        ;   Label: core_platfrm.cpp_CPlatform_setup_FUN_005112b0
    PUSH ESI                            ; 005112b1
    PUSH EDI                            ; 005112b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005112b3
    PUSH ESI                            ; 005112b7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 005112b8
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    MOV AH,byte ptr [ESI + 0x2f0]       ; 005112bd
    ADD ESP,0x4                         ; 005112c3
    TEST AH,AH                          ; 005112c6
    JNZ 0x005112ff                      ; 005112c8
        ;   XREF to: 005112ff (CONDITIONAL_JUMP)  ; LAB_005112ff
    PUSH ESI                            ; 005112ca
        ;   Label: LAB_005112ca
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340 ; 005112cb
        ;   XREF to: 00511340 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 005112d0
    LEA EAX,[ESI + 0x158]               ; 005112d3
    PUSH EAX                            ; 005112d9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 005112da
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    MOV EBX,ESI                         ; 005112df
    ADD ESP,0x4                         ; 005112e1
    LEA EDI,[ESI + 0x208]               ; 005112e4
    MOV EAX,dword ptr [EBX + 0x51c]     ; 005112ea
        ;   Label: LAB_005112ea
    TEST EAX,EAX                        ; 005112f0
    JNZ 0x0051131e                      ; 005112f2
        ;   XREF to: 0051131e (CONDITIONAL_JUMP)  ; LAB_0051131e
    ADD EBX,0x34                        ; 005112f4
    CMP EBX,EDI                         ; 005112f7
    JNZ 0x005112ea                      ; 005112f9
        ;   XREF to: 005112ea (CONDITIONAL_JUMP)  ; LAB_005112ea
    POP EDI                             ; 005112fb
    POP ESI                             ; 005112fc
    POP EBX                             ; 005112fd
    RET                                 ; 005112fe
    LEA EAX,[ESI + 0x2f0]               ; 005112ff
        ;   Label: LAB_005112ff
    PUSH EAX                            ; 00511305
    LEA EBX,[ESI + 0x310]               ; 00511306
    PUSH EBX                            ; 0051130c
    CALL core_course.cpp_CCourse_load_FUN_00444970 ; 0051130d
        ;   XREF to: 00444970 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00444970(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00511312
    MOV dword ptr [EBX + 0x8],0x0       ; 00511315
    JMP 0x005112ca                      ; 0051131c
        ;   XREF to: 005112ca (UNCONDITIONAL_JUMP)  ; LAB_005112ca
    PUSH EAX                            ; 0051131e
        ;   Label: LAB_0051131e
    PUSH ESI                            ; 0051131f
    MOV dword ptr [EBX + 0x51c],0x0     ; 00511320
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0 ; 0051132a
        ;   XREF to: 00512aa0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0051132f
    ADD EBX,0x34                        ; 00511332
    CMP EBX,EDI                         ; 00511335
    JNZ 0x005112ea                      ; 00511337
        ;   XREF to: 005112ea (CONDITIONAL_JUMP)  ; LAB_005112ea
    POP EDI                             ; 00511339
    POP ESI                             ; 0051133a
    POP EBX                             ; 0051133b
    RET                                 ; 0051133c

