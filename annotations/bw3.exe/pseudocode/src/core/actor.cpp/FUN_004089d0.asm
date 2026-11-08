; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004089d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b5499
;   TerminatedCString s_CDemonActor_customInters_005b54ab
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b5499                    ; 004089d0 | = "..\\core\\actor.cpp"
        ;   Label: FUN_004089d0
    MOV ECX,0x2e2                       ; 004089d5
    PUSH 0x5b54ab                       ; 004089da | = "CDemonActor::customIntersectCylinderX..."
    MOV dword ptr [0x01d71de0],EDX      ; 004089df | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004089e5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004089eb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004089f0
    RET                                 ; 004089f3

