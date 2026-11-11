; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00567450(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 at 00569c60
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f246c
;   TerminatedCString s_CDeformableModelInstance_005f2481
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_005674d0
;   crt_memory.c_operator_new_array_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567450
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00567450
    PUSH ESI                            ; 00567451
    MOV EBX,dword ptr [ESP + 0xc]       ; 00567452
    PUSH EBX                            ; 00567456
    CALL core_skeleton.cpp_FUN_005674d0 ; 00567457
        ;   XREF to: 005674d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005674d0()
    ADD ESP,0x4                         ; 0056745c
    PUSH EBX                            ; 0056745f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00567460
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00567465
    LEA EAX,[ESI*0x4 + 0x0]             ; 00567468
    SUB EAX,ESI                         ; 0056746f
    ADD ESP,0x4                         ; 00567471
    SHL EAX,0x2                         ; 00567474
    PUSH EAX                            ; 00567477
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 00567478
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 0056747d
    MOV dword ptr [EBX + 0x2324],EAX    ; 00567480
    TEST EAX,EAX                        ; 00567486
    JZ 0x00567497                       ; 00567488
        ;   XREF to: 00567497 (CONDITIONAL_JUMP)  ; LAB_00567497
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 0056748a
    POP ESI                             ; 00567494
    POP EBX                             ; 00567495
    RET                                 ; 00567496
    PUSH EDI                            ; 00567497
        ;   Label: LAB_00567497
    PUSH ESI                            ; 00567498
    MOV ECX,0x5f246c                    ; 00567499 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x919                       ; 0056749e
    PUSH 0x5f2481                       ; 005674a3 | = "CDeformableModelInstance::allocPointL..."
    MOV dword ptr [0x01d1d400],ECX      ; 005674a8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005674ae | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005674b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005674b9
    POP EDI                             ; 005674bc
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 005674bd
    POP ESI                             ; 005674c7
    POP EBX                             ; 005674c8
    RET                                 ; 005674c9

