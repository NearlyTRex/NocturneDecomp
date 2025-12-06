; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_barrier.cpp_CBarrier_serialize_FUN_00414340(CBarrier * this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_size_0061516f
;   TerminatedCString s_effectClassNameList_00615174
;   TerminatedCString s_addToPathGrid_00615188
;   int g_CBarrierClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414340
        ;   Label: core_barrier.cpp_CBarrier_serialize_FUN_00414340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414341
    PUSH EBX                            ; 00414345
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00414346 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041434b
    PUSH 0x61516f                       ; 0041434e | = "size" | s_size_0061516f = size
    LEA EAX,[EBX + 0x158]               ; 00414353
    PUSH EAX                            ; 00414359
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0041435a | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e4a0]      ; 0041435f | int g_CBarrierClassVersion
    ADD ESP,0x8                         ; 00414365
    CMP EDX,0x2                         ; 00414368
    JGE 0x0041436f                      ; 0041436b | LAB_0041436f
        ;   XREF to: 0041436f (CONDITIONAL_JUMP)
    POP EBX                             ; 0041436d
    RET                                 ; 0041436e
    PUSH 0x615174                       ; 0041436f | = "effectClassNameList" | s_effectClassNameList_00615174 = effectClassNameList
        ;   Label: LAB_0041436f
    LEA EAX,[EBX + 0x168]               ; 00414374
    PUSH EAX                            ; 0041437a
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0041437b | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00414380
    PUSH 0x615188                       ; 00414383 | = "addToPathGrid" | s_addToPathGrid_00615188 = addToPathGrid
    ADD EBX,0x164                       ; 00414388
    PUSH EBX                            ; 0041438e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0041438f | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00414394
    POP EBX                             ; 00414397
    RET                                 ; 00414398

