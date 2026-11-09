; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_00408840(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b53d6
;   TerminatedCString s_CDemonActor_getActorType_005b53e8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408840
        ;   Label: core_actor.cpp_FUN_00408840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408841
    PUSH EBX                            ; 00408845
    MOV EDX,0x5b53d6                    ; 00408846 | = "..\\core\\actor.cpp"
    MOV ECX,0x22b                       ; 0040884b
    PUSH 0x5b53e8                       ; 00408850 | = "CDemonActor::getActorType called for ..."
    MOV dword ptr [0x01d71de0],EDX      ; 00408855 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040885b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00408861
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00408866
    XOR EAX,EAX                         ; 00408869
    POP EBX                             ; 0040886b
    RET                                 ; 0040886c

