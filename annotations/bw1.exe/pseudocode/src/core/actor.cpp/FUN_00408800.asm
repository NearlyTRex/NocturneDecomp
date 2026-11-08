; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408800(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d239e
;   TerminatedCString s_CDemonActor_getActorType_005d23b0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408800
        ;   Label: FUN_00408800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408801
    PUSH EBX                            ; 00408805
    MOV EDX,0x5d239e                    ; 00408806 | = "..\\core\\actor.cpp"
    MOV ECX,0x22b                       ; 0040880b
    PUSH 0x5d23b0                       ; 00408810 | = "CDemonActor::getActorType called for ..."
    MOV dword ptr [0x01d1d400],EDX      ; 00408815 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0040881b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00408821
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00408826
    XOR EAX,EAX                         ; 00408829
    POP EBX                             ; 0040882b
    RET                                 ; 0040882c

