; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(char *property_description,char *property_type)
;
; Parameters:
; char *           Stack[0x4]:4   property_description
; char *           Stack[0x8]:4   property_type
;
; XREF[13]:
;   core_actor.cpp_archiveBox_FUN_0040ce80 at 0040cee5
;   core_actor.cpp_archiveClothList_FUN_0040cf70 at 0040cfc7
;   core_actor.cpp_archiveDescription_FUN_0040c3a0 at 0040c3e0
;   core_actor.cpp_archiveFloat_FUN_0040c880 at 0040c8c9
;   core_actor.cpp_archiveInteger_FUN_0040c900 at 0040c94a
;   core_actor.cpp_archiveLocation_FUN_0040c590 at 0040c5e6
;   core_actor.cpp_archiveMotionState_FUN_0040cb00 at 0040cb65
;   core_actor.cpp_archiveOrientation_FUN_0040c4f0 at 0040c541
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0 at 0040cc7d
;   core_actor.cpp_archiveQuaternion_FUN_0040c630 at 0040c685
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_unknown_00577b57
;   TerminatedCString s_unknown_00577b61
;   TerminatedCString s_unknown_00577b6b
;   TerminatedCString s_load_00577b75
;   TerminatedCString s_save_00577b7a
;   TerminatedCString s_core_actor_cpp_00577b7f
;   TerminatedCString s_Error_sing_actor_propert_00577b91
;   undefined4 DAT_00763e88
;   undefined4 DAT_00763e8c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c320
        ;   Label: core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
    PUSH ESI                            ; 0040c321
    PUSH EDI                            ; 0040c322
    PUSH EBP                            ; 0040c323
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c324
    MOV EAX,0x577b61                    ; 0040c328 | = "(unknown)"
    MOV EDX,dword ptr [0x00763e8c]      ; 0040c32d | DAT_00763e8c
    MOV EBX,0x577b57                    ; 0040c333 | = "(unknown)"
    TEST EDX,EDX                        ; 0040c338
    JNZ 0x0040c38b                      ; 0040c33a
        ;   XREF to: 0040c38b (CONDITIONAL_JUMP)  ; LAB_0040c38b
    TEST ESI,ESI                        ; 0040c33c
        ;   Label: LAB_0040c33c
    JNZ 0x0040c345                      ; 0040c33e
        ;   XREF to: 0040c345 (CONDITIONAL_JUMP)  ; LAB_0040c345
    MOV ESI,0x577b6b                    ; 0040c340 | = "(unknown)"
    MOV ECX,dword ptr [0x00763e88]      ; 0040c345 | DAT_00763e88
        ;   Label: LAB_0040c345
    MOV EDX,0x577b75                    ; 0040c34b | = "load"
    CMP ECX,0x2                         ; 0040c350
    JNZ 0x0040c35a                      ; 0040c353
        ;   XREF to: 0040c35a (CONDITIONAL_JUMP)  ; LAB_0040c35a
    MOV EDX,0x577b7a                    ; 0040c355 | = "save"
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040c35a
        ;   Label: LAB_0040c35a
    PUSH ECX                            ; 0040c35e
    PUSH ESI                            ; 0040c35f | = "(unknown)"
    PUSH EAX                            ; 0040c360 | = "(unknown)"
    PUSH EBX                            ; 0040c361 | = "(unknown)"
    PUSH EDX                            ; 0040c362 | = "save" | s_load_00577b75
    MOV EDI,0x577b7f                    ; 0040c363 | = "..\\core\\actor.cpp"
    MOV EBP,0x7fb                       ; 0040c368
    PUSH 0x577b91                       ; 0040c36d | = "Error %sing actor property.\nActor na..."
    MOV dword ptr [0x01cc4800],EDI      ; 0040c372 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 0040c378 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040c37e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x18                        ; 0040c383
    POP EBP                             ; 0040c386
    POP EDI                             ; 0040c387
    POP ESI                             ; 0040c388
    POP EBX                             ; 0040c389
    RET                                 ; 0040c38a
    PUSH EDX                            ; 0040c38b
        ;   Label: LAB_0040c38b
    MOV EBX,EDX                         ; 0040c38c
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 0040c38e
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040c393
    JMP 0x0040c33c                      ; 0040c396
        ;   XREF to: 0040c33c (UNCONDITIONAL_JUMP)  ; LAB_0040c33c

