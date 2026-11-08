; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00409cd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b559e
;   TerminatedCString s_CDemonActor_processActio_005b55b0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b559e                    ; 00409cd0 | = "..\\core\\actor.cpp"
        ;   Label: FUN_00409cd0
    MOV ECX,0x5ac                       ; 00409cd5
    PUSH 0x5b55b0                       ; 00409cda | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x01d71de0],EDX      ; 00409cdf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00409ce5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00409ceb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    MOV EAX,0x1                         ; 00409cf0
    ADD ESP,0x4                         ; 00409cf5
    RET                                 ; 00409cf8

