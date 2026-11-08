; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408a00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b54fb
;   TerminatedCString s_CDemonActor_customGetFlo_005b550d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b54fb                    ; 00408a00 | = "..\\core\\actor.cpp"
        ;   Label: FUN_00408a00
    MOV ECX,0x2e7                       ; 00408a05
    PUSH 0x5b550d                       ; 00408a0a | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01d71de0],EDX      ; 00408a0f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00408a15 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00408a1b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00408a20
    LEA EAX,[EAX]                       ; 00408a23
    LEA EDX,[EDX]                       ; 00408a29
    NOP                                 ; 00408a2f
    XOR EAX,EAX                         ; 00408a30
        ;   Label: LAB_00408a30
    RET                                 ; 00408a32

