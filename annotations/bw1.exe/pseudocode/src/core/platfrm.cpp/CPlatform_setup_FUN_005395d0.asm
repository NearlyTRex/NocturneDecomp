; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_005395d0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_conveyor.cpp_CConveyor_setup_FUN_00447810 at 00447872
;   core_minecar.cpp_CMineCar_setup_FUN_00510e00 at 00510e05
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_course.cpp_CCourse_load_FUN_00447db0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005395d0
        ;   Label: core_platfrm.cpp_CPlatform_setup_FUN_005395d0
    PUSH ESI                            ; 005395d1
    PUSH EDI                            ; 005395d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005395d3
    PUSH ESI                            ; 005395d7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 005395d8
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    MOV AH,byte ptr [ESI + 0x2f0]       ; 005395dd
    ADD ESP,0x4                         ; 005395e3
    TEST AH,AH                          ; 005395e6
    JNZ 0x0053961f                      ; 005395e8
        ;   XREF to: 0053961f (CONDITIONAL_JUMP)  ; LAB_0053961f
    PUSH ESI                            ; 005395ea
        ;   Label: LAB_005395ea
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660 ; 005395eb
        ;   XREF to: 00539660 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 005395f0
    LEA EAX,[ESI + 0x158]               ; 005395f3
    PUSH EAX                            ; 005395f9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005395fa
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV EBX,ESI                         ; 005395ff
    ADD ESP,0x4                         ; 00539601
    LEA EDI,[ESI + 0x208]               ; 00539604
    MOV EAX,dword ptr [EBX + 0x51c]     ; 0053960a
        ;   Label: LAB_0053960a
    TEST EAX,EAX                        ; 00539610
    JNZ 0x0053963e                      ; 00539612
        ;   XREF to: 0053963e (CONDITIONAL_JUMP)  ; LAB_0053963e
    ADD EBX,0x34                        ; 00539614
    CMP EBX,EDI                         ; 00539617
    JNZ 0x0053960a                      ; 00539619
        ;   XREF to: 0053960a (CONDITIONAL_JUMP)  ; LAB_0053960a
    POP EDI                             ; 0053961b
    POP ESI                             ; 0053961c
    POP EBX                             ; 0053961d
    RET                                 ; 0053961e
    LEA EAX,[ESI + 0x2f0]               ; 0053961f
        ;   Label: LAB_0053961f
    PUSH EAX                            ; 00539625
    LEA EBX,[ESI + 0x310]               ; 00539626
    PUSH EBX                            ; 0053962c
    CALL core_course.cpp_CCourse_load_FUN_00447db0 ; 0053962d
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00447db0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00539632
    MOV dword ptr [EBX + 0x8],0x0       ; 00539635
    JMP 0x005395ea                      ; 0053963c
        ;   XREF to: 005395ea (UNCONDITIONAL_JUMP)  ; LAB_005395ea
    PUSH EAX                            ; 0053963e
        ;   Label: LAB_0053963e
    PUSH ESI                            ; 0053963f
    MOV dword ptr [EBX + 0x51c],0x0     ; 00539640
    CALL core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0 ; 0053964a
        ;   XREF to: 0053adb0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_attachActor_FUN_0053adb0(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053964f
    ADD EBX,0x34                        ; 00539652
    CMP EBX,EDI                         ; 00539655
    JNZ 0x0053960a                      ; 00539657
        ;   XREF to: 0053960a (CONDITIONAL_JUMP)  ; LAB_0053960a
    POP EDI                             ; 00539659
    POP ESI                             ; 0053965a
    POP EBX                             ; 0053965b
    RET                                 ; 0053965c

