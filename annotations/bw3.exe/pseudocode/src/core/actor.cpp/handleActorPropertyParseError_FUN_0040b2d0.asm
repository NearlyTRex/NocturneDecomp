; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(char *property_description,char *property_type)
;
; Parameters:
; char *           Stack[0x4]:4   property_description
; char *           Stack[0x8]:4   property_type
;
; XREF[13]:
;   core_actor.cpp_archiveBox_FUN_0040be30 at 0040be95
;   core_actor.cpp_archiveClothList_FUN_0040bf20 at 0040bf77
;   core_actor.cpp_archiveDescription_FUN_0040b350 at 0040b390
;   core_actor.cpp_archiveFloat_FUN_0040b830 at 0040b879
;   core_actor.cpp_archiveInteger_FUN_0040b8b0 at 0040b8fa
;   core_actor.cpp_archiveLocation_FUN_0040b540 at 0040b596
;   core_actor.cpp_archiveMotionState_FUN_0040bab0 at 0040bb15
;   core_actor.cpp_archiveOrientation_FUN_0040b4a0 at 0040b4f1
;   core_actor.cpp_archivePartStatus_FUN_0040bba0 at 0040bc2d
;   core_actor.cpp_archiveQuaternion_FUN_0040b5e0 at 0040b635
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_unknown_005b59cb
;   TerminatedCString s_unknown_005b59d5
;   TerminatedCString s_unknown_005b59df
;   undefined4 DAT_005b59e9
;   undefined4 DAT_005b59ee
;   TerminatedCString s_core_actor_cpp_005b59f3
;   TerminatedCString s_Error_sing_actor_propert_005b5a05
;   undefined4 DAT_007df9b8
;   undefined4 DAT_007df9bc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b2d0
        ;   Label: core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0
    PUSH ESI                            ; 0040b2d1
    PUSH EDI                            ; 0040b2d2
    PUSH EBP                            ; 0040b2d3
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b2d4
    MOV EAX,0x5b59d5                    ; 0040b2d8 | = "(unknown)"
    MOV EDX,dword ptr [0x007df9bc]      ; 0040b2dd | DAT_007df9bc
    MOV EBX,0x5b59cb                    ; 0040b2e3 | = "(unknown)"
    TEST EDX,EDX                        ; 0040b2e8
    JNZ 0x0040b33b                      ; 0040b2ea
        ;   XREF to: 0040b33b (CONDITIONAL_JUMP)  ; LAB_0040b33b
    TEST ESI,ESI                        ; 0040b2ec
        ;   Label: LAB_0040b2ec
    JNZ 0x0040b2f5                      ; 0040b2ee
        ;   XREF to: 0040b2f5 (CONDITIONAL_JUMP)  ; LAB_0040b2f5
    MOV ESI,0x5b59df                    ; 0040b2f0 | = "(unknown)"
    MOV ECX,dword ptr [0x007df9b8]      ; 0040b2f5 | DAT_007df9b8
        ;   Label: LAB_0040b2f5
    MOV EDX,0x5b59e9                    ; 0040b2fb | DAT_005b59e9
    CMP ECX,0x2                         ; 0040b300
    JNZ 0x0040b30a                      ; 0040b303
        ;   XREF to: 0040b30a (CONDITIONAL_JUMP)  ; LAB_0040b30a
    MOV EDX,0x5b59ee                    ; 0040b305 | DAT_005b59ee
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040b30a
        ;   Label: LAB_0040b30a
    PUSH ECX                            ; 0040b30e
    PUSH ESI                            ; 0040b30f | = "(unknown)"
    PUSH EAX                            ; 0040b310 | = "(unknown)"
    PUSH EBX                            ; 0040b311 | = "(unknown)"
    PUSH EDX                            ; 0040b312 | DAT_005b59ee | DAT_005b59e9
    MOV EDI,0x5b59f3                    ; 0040b313 | = "..\\core\\actor.cpp"
    MOV EBP,0x85d                       ; 0040b318
    PUSH 0x5b5a05                       ; 0040b31d | = "Error %sing actor property.\nActor na..."
    MOV dword ptr [0x01d71de0],EDI      ; 0040b322 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0040b328 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040b32e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x18                        ; 0040b333
    POP EBP                             ; 0040b336
    POP EDI                             ; 0040b337
    POP ESI                             ; 0040b338
    POP EBX                             ; 0040b339
    RET                                 ; 0040b33a
    PUSH EDX                            ; 0040b33b
        ;   Label: LAB_0040b33b
    MOV EBX,EDX                         ; 0040b33c
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 0040b33e
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040b343
    JMP 0x0040b2ec                      ; 0040b346
        ;   XREF to: 0040b2ec (UNCONDITIONAL_JUMP)  ; LAB_0040b2ec

