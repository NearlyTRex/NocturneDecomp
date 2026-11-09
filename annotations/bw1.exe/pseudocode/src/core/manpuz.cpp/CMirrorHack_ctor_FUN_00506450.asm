; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_00506450(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_FUN_00506420 at 00506433
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506450
        ;   Label: core_manpuz.cpp_CMirrorHack_ctor_FUN_00506450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506451
    PUSH EBX                            ; 00506455
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00506456
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050645b
    ADD EAX,0x158                       ; 0050645e
    PUSH EAX                            ; 00506463
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00506464
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00506469
    LEA EBX,[EAX + 0xfffffea8]          ; 0050646c
    PUSH 0x5e766d                       ; 00506472
    LEA EAX,[EBX + 0x158]               ; 00506477
    PUSH EAX                            ; 0050647d
    MOV dword ptr [EBX + 0x154],0x603534 ; 0050647e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00506488
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0050648d
    MOV EAX,EBX                         ; 00506490
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00506492
    POP EBX                             ; 0050649c
    RET                                 ; 0050649d

