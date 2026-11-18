; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_00621846
;   WatcomTypeInfo g_SFreakyTypeInfo
;   WatcomStaticDestructorNode WatcomStaticDestructorNode_006703a0
;   int g_CDraculaBrideClassVersion = 0x9
;   CVector3f g_DraculaBrideOffsetUp
;   undefined4 g_DraculaBrideOffsetUp.y
;   undefined4 g_DraculaBrideOffsetUp.z
;   CVector3f g_DraculaBrideOffsetMinusX
;   undefined4 g_DraculaBrideOffsetMinusX.y
;   undefined4 g_DraculaBrideOffsetMinusX.z
;   CVector3f g_DraculaBrideOffsetPlusX
;   undefined4 g_DraculaBrideOffsetPlusX.y
;   undefined4 g_DraculaBrideOffsetPlusX.z
;   CDemonActorType g_CDraculaBrideClassInfo
;   SFreaky[6] g_FreakySounds
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00483ef0
        ;   Label: core_dracbrid.cpp_staticInit_FUN_00483ef0
    MOV ECX,0x3f000000                  ; 00483ef1
    PUSH 0x2cf2bb8                      ; 00483ef6 | g_CEnemyClassInfo
    MOV ESI,0xbf19999a                  ; 00483efb
    XOR EDX,EDX                         ; 00483f00
    PUSH 0x9                            ; 00483f02
    MOV EAX,0x3f19999a                  ; 00483f04
    MOV dword ptr [0x02c6d040],EDX      ; 00483f09 | g_DraculaBrideOffsetUp
    PUSH 0x6703b0                       ; 00483f0f | g_CDraculaBrideClassVersion
    MOV dword ptr [0x02c6d044],ECX      ; 00483f14 | g_DraculaBrideOffsetUp.y
    MOV dword ptr [0x02c6d048],EDX      ; 00483f1a | g_DraculaBrideOffsetUp.z
    PUSH 0x483f80                       ; 00483f20
    MOV dword ptr [0x02c6d04c],ESI      ; 00483f25 | g_DraculaBrideOffsetMinusX
    MOV dword ptr [0x02c6d050],EDX      ; 00483f2b | g_DraculaBrideOffsetMinusX.y
    PUSH 0x621846                       ; 00483f31 | = "CDraculaBride"
    MOV dword ptr [0x02c6d054],EDX      ; 00483f36 | g_DraculaBrideOffsetMinusX.z
    MOV [0x02c6d058],EAX                ; 00483f3c | g_DraculaBrideOffsetPlusX
    PUSH 0x2c6d064                      ; 00483f41 | g_CDraculaBrideClassInfo
    MOV dword ptr [0x02c6d05c],EDX      ; 00483f46 | g_DraculaBrideOffsetPlusX.y
    MOV dword ptr [0x02c6d060],EDX      ; 00483f4c | g_DraculaBrideOffsetPlusX.z
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 00483f52
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00483f57
    PUSH 0x65cf00                       ; 00483f5a | g_SFreakyTypeInfo
    PUSH 0x6                            ; 00483f5f
    PUSH 0x2c6d0c0                      ; 00483f61 | g_FreakySounds
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 00483f66
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00483f6b
    PUSH 0x6703a0                       ; 00483f6e | WatcomStaticDestructorNode_006703a0
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00483f73
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00483f78
    POP ESI                             ; 00483f7b
    RET                                 ; 00483f7c

