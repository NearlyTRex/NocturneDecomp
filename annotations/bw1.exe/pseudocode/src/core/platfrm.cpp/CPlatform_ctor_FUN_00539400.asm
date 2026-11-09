; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_00539400(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_conveyor.cpp_CConveyor_ctor_FUN_00447750 at 00447757
;   core_mimic.cpp_factoryFuncMineCar_FUN_00510dc0 at 00510dd3
;   core_minecar.cpp_CMineCar_ctor_FUN_00510e90 at 00510e95
;   core_platfrm.cpp_factoryFuncPlatform_FUN_005393d0 at 005393e3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_course.cpp_CCourse_ctor_FUN_00447d10
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_xform.cpp_FUN_005b7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539400
        ;   Label: core_platfrm.cpp_CPlatform_ctor_FUN_00539400
    SUB ESP,0x10                        ; 00539401
    MOV EBX,dword ptr [ESP + 0x18]      ; 00539404
    PUSH EDI                            ; 00539408
    PUSH ESI                            ; 00539409
    PUSH EBX                            ; 0053940a
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 0053940b
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00539410
    ADD EAX,0x158                       ; 00539413
    PUSH EAX                            ; 00539418
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00539419
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053941e
    ADD EAX,0x1b8                       ; 00539421
    PUSH EAX                            ; 00539426
    CALL core_course.cpp_CCourse_ctor_FUN_00447d10 ; 00539427
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00447d10(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0053942c
    LEA EBX,[EAX + 0xfffffcf0]          ; 0053942f
    PUSH 0x5ed415                       ; 00539435
    LEA EAX,[EBX + 0x158]               ; 0053943a
    PUSH EAX                            ; 00539440
    MOV dword ptr [EBX + 0x154],0x604934 ; 00539441
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0053944b
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV byte ptr [EBX + 0x354],0x0      ; 00539450
    MOV byte ptr [EBX + 0x3b8],0x0      ; 00539457
    MOV byte ptr [EBX + 0x41c],0x0      ; 0053945e
    MOV byte ptr [EBX + 0x480],0x0      ; 00539465
    MOV byte ptr [EBX + 0x494],0x0      ; 0053946c
    MOV byte ptr [EBX + 0x4a8],0x0      ; 00539473
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0053947a
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00539484
    MOV dword ptr [EBX + 0x2ec],0x40000000 ; 0053948e
    MOV dword ptr [EBX + 0x2e8],0x40000000 ; 00539498
    ADD ESP,0x8                         ; 005394a2
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005394a5
    LEA EAX,[EBX + 0x328]               ; 005394af
    MOV byte ptr [EBX + 0x2f0],0x0      ; 005394b5
    LEA EDX,[EBX + 0x20]                ; 005394bc
    MOV ECX,EAX                         ; 005394bf
    CMP EAX,EDX                         ; 005394c1
    JNZ 0x00539599                      ; 005394c3
        ;   XREF to: 00539599 (CONDITIONAL_JUMP)  ; LAB_00539599
    LEA EAX,[EBX + 0x31c]               ; 005394c9
        ;   Label: LAB_005394c9
    CMP EAX,ECX                         ; 005394cf
    JNZ 0x005395ae                      ; 005394d1
        ;   XREF to: 005395ae (CONDITIONAL_JUMP)  ; LAB_005395ae
    LEA EAX,[EBX + 0x30]                ; 005394d7
        ;   Label: LAB_005394d7
    PUSH EAX                            ; 005394da
    LEA ESI,[ESP + 0xc]                 ; 005394db
    CALL core_xform.cpp_FUN_005b7ed0    ; 005394df
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    LEA ESI,[ESP + 0xc]                 ; 005394e4
    LEA EDI,[EBX + 0x344]               ; 005394e8
    ADD ESP,0x4                         ; 005394ee
    MOVSD ES:EDI,ESI                    ; 005394f1
    MOVSD ES:EDI,ESI                    ; 005394f2
    MOVSD ES:EDI,ESI                    ; 005394f3
    MOVSD ES:EDI,ESI                    ; 005394f4
    LEA EDI,[EBX + 0x334]               ; 005394f5
    LEA ESI,[EBX + 0x344]               ; 005394fb
    MOVSD ES:EDI,ESI                    ; 00539501
    MOVSD ES:EDI,ESI                    ; 00539502
    MOVSD ES:EDI,ESI                    ; 00539503
    MOVSD ES:EDI,ESI                    ; 00539504
    MOV dword ptr [EBX + 0x4c0],0x0     ; 00539505
    MOV dword ptr [EBX + 0x4c4],0x0     ; 0053950f
    MOV dword ptr [EBX + 0x4c8],0x0     ; 00539519
    MOV byte ptr [EBX + 0x4cc],0x0      ; 00539523
    MOV dword ptr [EBX + 0x724],0x0     ; 0053952a
    MOV dword ptr [EBX + 0x64],0x32     ; 00539534
    MOV dword ptr [EBX + 0x50c],0x0     ; 0053953b
    MOV EAX,EBX                         ; 00539545
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00539547
    LEA EDX,[EBX + 0x208]               ; 00539551
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00539557
    POP ESI                             ; 00539561
    POP EDI                             ; 00539562
    ADD EAX,0x34                        ; 00539563
        ;   Label: LAB_00539563
    MOV dword ptr [EAX + 0x4e8],0x0     ; 00539566
    CMP EAX,EDX                         ; 00539570
    JNZ 0x00539563                      ; 00539572
        ;   XREF to: 00539563 (CONDITIONAL_JUMP)  ; LAB_00539563
    MOV dword ptr [EBX + 0x514],0x0     ; 00539574
    MOV dword ptr [EBX + 0x518],0x1     ; 0053957e
    MOV EAX,EBX                         ; 00539588
    MOV dword ptr [EBX + 0x510],0x0     ; 0053958a
    ADD ESP,0x10                        ; 00539594
    POP EBX                             ; 00539597
    RET                                 ; 00539598
    MOV ESI,dword ptr [EDX]             ; 00539599
        ;   Label: LAB_00539599
    MOV dword ptr [EAX],ESI             ; 0053959b
    MOV ESI,dword ptr [EDX + 0x4]       ; 0053959d
    MOV dword ptr [EAX + 0x4],ESI       ; 005395a0
    MOV ESI,dword ptr [EDX + 0x8]       ; 005395a3
    MOV dword ptr [EAX + 0x8],ESI       ; 005395a6
    JMP 0x005394c9                      ; 005395a9
        ;   XREF to: 005394c9 (UNCONDITIONAL_JUMP)  ; LAB_005394c9
    MOV EDX,dword ptr [ECX]             ; 005395ae
        ;   Label: LAB_005395ae
    MOV dword ptr [EAX],EDX             ; 005395b0
    MOV EDX,dword ptr [ECX + 0x4]       ; 005395b2
    MOV dword ptr [EAX + 0x4],EDX       ; 005395b5
    MOV EDX,dword ptr [ECX + 0x8]       ; 005395b8
    MOV dword ptr [EAX + 0x8],EDX       ; 005395bb
    JMP 0x005394d7                      ; 005395be
        ;   XREF to: 005394d7 (UNCONDITIONAL_JUMP)  ; LAB_005394d7

