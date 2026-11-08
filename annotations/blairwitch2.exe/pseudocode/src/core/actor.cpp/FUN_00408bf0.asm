; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408bf0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca565
;   TerminatedCString s_CDemonActor_customGetFlo_005ca577
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca565                    ; 00408bf0 | = "..\\core\\actor.cpp"
        ;   Label: FUN_00408bf0
    MOV ECX,0x2ee                       ; 00408bf5
    PUSH 0x5ca577                       ; 00408bfa | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01d046a0],EDX      ; 00408bff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00408c05 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00408c0b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00408c10
    LEA EAX,[EAX]                       ; 00408c13
    LEA EDX,[EDX]                       ; 00408c19
    NOP                                 ; 00408c1f
    XOR EAX,EAX                         ; 00408c20
        ;   Label: LAB_00408c20
    RET                                 ; 00408c22

