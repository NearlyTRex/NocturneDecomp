; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_FUN_00518280(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_conveyor.cpp_FUN_00438550 at 004385b2
;   core_minecar.cpp_FUN_004f2070 at 004f2075
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_course.cpp_CCourse_load_FUN_00438af0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_platfrm.cpp_CPlatform_attachActor_FUN_00519a60
;   core_platfrm.cpp_FUN_00518310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518280
        ;   Label: core_platfrm.cpp_FUN_00518280
    PUSH ESI                            ; 00518281
    PUSH EDI                            ; 00518282
    MOV ESI,dword ptr [ESP + 0x10]      ; 00518283
    PUSH ESI                            ; 00518287
    CALL core_actor.cpp_FUN_00408a80    ; 00518288
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    MOV AH,byte ptr [ESI + 0x44c]       ; 0051828d
    ADD ESP,0x4                         ; 00518293
    TEST AH,AH                          ; 00518296
    JNZ 0x005182cf                      ; 00518298
        ;   XREF to: 005182cf (CONDITIONAL_JUMP)  ; LAB_005182cf
    PUSH ESI                            ; 0051829a
        ;   Label: LAB_0051829a
    CALL core_platfrm.cpp_FUN_00518310  ; 0051829b
        ;   XREF to: 00518310 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518310(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 005182a0
    LEA EAX,[ESI + 0x2b4]               ; 005182a3
    PUSH EAX                            ; 005182a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 005182aa
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    MOV EBX,ESI                         ; 005182af
    ADD ESP,0x4                         ; 005182b1
    LEA EDI,[ESI + 0x208]               ; 005182b4
    MOV EAX,dword ptr [EBX + 0x678]     ; 005182ba
        ;   Label: LAB_005182ba
    TEST EAX,EAX                        ; 005182c0
    JNZ 0x005182ee                      ; 005182c2
        ;   XREF to: 005182ee (CONDITIONAL_JUMP)  ; LAB_005182ee
    ADD EBX,0x34                        ; 005182c4
    CMP EBX,EDI                         ; 005182c7
    JNZ 0x005182ba                      ; 005182c9
        ;   XREF to: 005182ba (CONDITIONAL_JUMP)  ; LAB_005182ba
    POP EDI                             ; 005182cb
    POP ESI                             ; 005182cc
    POP EBX                             ; 005182cd
    RET                                 ; 005182ce
    LEA EAX,[ESI + 0x44c]               ; 005182cf
        ;   Label: LAB_005182cf
    PUSH EAX                            ; 005182d5
    LEA EBX,[ESI + 0x46c]               ; 005182d6
    PUSH EBX                            ; 005182dc
    CALL core_course.cpp_CCourse_load_FUN_00438af0 ; 005182dd
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00438af0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005182e2
    MOV dword ptr [EBX + 0x8],0x0       ; 005182e5
    JMP 0x0051829a                      ; 005182ec
        ;   XREF to: 0051829a (UNCONDITIONAL_JUMP)  ; LAB_0051829a
    PUSH EAX                            ; 005182ee
        ;   Label: LAB_005182ee
    PUSH ESI                            ; 005182ef
    MOV dword ptr [EBX + 0x678],0x0     ; 005182f0
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_00519a60 ; 005182fa
        ;   XREF to: 00519a60 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_00519a60(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005182ff
    ADD EBX,0x34                        ; 00518302
    CMP EBX,EDI                         ; 00518305
    JNZ 0x005182ba                      ; 00518307
        ;   XREF to: 005182ba (CONDITIONAL_JUMP)  ; LAB_005182ba
    POP EDI                             ; 00518309
    POP ESI                             ; 0051830a
    POP EBX                             ; 0051830b
    RET                                 ; 0051830c

