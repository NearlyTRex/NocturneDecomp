; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408b90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca4a8
;   TerminatedCString s_CDemonActor_customRayInt_005ca4ba
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b90
        ;   Label: FUN_00408b90
    MOV EDX,0x5ca4a8                    ; 00408b91 | = "..\\core\\actor.cpp"
    MOV ECX,0x2e3                       ; 00408b96
    PUSH 0x5ca4ba                       ; 00408b9b | = "CDemonActor::customRayIntersect shoul..."
    MOV EBX,0x40000000                  ; 00408ba0
    MOV dword ptr [0x01d046a0],EDX      ; 00408ba5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00408bab | DAT_01d046a4
    CALL FUN_004e4500                   ; 00408bb1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00408bb6
    MOV EAX,EBX                         ; 00408bb9
    POP EBX                             ; 00408bbb
    RET                                 ; 00408bbc

