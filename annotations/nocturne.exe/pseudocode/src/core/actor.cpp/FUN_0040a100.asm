; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_0040a100(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005776a4
;   TerminatedCString s_CDemonActor_customGetFlo_005776b6
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x5776a4                    ; 0040a100 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_FUN_0040a100
    MOV ECX,0x2a0                       ; 0040a105
    PUSH 0x5776b6                       ; 0040a10a | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040a10f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040a115 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040a11b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0040a120
    LEA EAX,[EAX]                       ; 0040a123
    LEA EDX,[EDX]                       ; 0040a129
    NOP                                 ; 0040a12f

