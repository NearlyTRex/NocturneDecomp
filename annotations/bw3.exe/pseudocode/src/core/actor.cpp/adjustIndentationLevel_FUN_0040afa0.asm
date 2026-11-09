; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(int indent_delta)
;
; Parameters:
; int              Stack[0x4]:4   indent_delta
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_save_FUN_0040aff0 at 0040b07e
;   core_actor.cpp_FUN_0040bab0 at 0040bb53
;   core_actor.cpp_FUN_0040bba0 at 0040bd23
;   core_actor.cpp_FUN_0040be30 at 0040bed3
;   core_actor.cpp_archiveClothList_FUN_0040bf20 at 0040c032
;   core_actor.cpp_archiveRules_FUN_0040c0c0 at 0040c1e1
;   core_inv.cpp_FUN_004dc560 at 004dc589
;
; Referenced Globals:
;   undefined4 DAT_005f098e
;   undefined1 DAT_005f098f
;   undefined1 DAT_005f0990
;   undefined1 DAT_005f0991
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0040afa0
        ;   Label: core_actor.cpp_adjustIndentationLevel_FUN_0040afa0
    MOV EDI,0x5f0990                    ; 0040afa1 | DAT_005f0990
    SUB ECX,ECX                         ; 0040afa6
    DEC ECX                             ; 0040afa8
    XOR EAX,EAX                         ; 0040afa9
    SCASB.REPNE ES:EDI                  ; 0040afab | DAT_005f0990 | DAT_005f0991
    NOT ECX                             ; 0040afad
    DEC ECX                             ; 0040afaf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040afb0
    ADD EAX,ECX                         ; 0040afb4
    TEST EAX,EAX                        ; 0040afb6
    JL 0x0040afe2                       ; 0040afb8
        ;   XREF to: 0040afe2 (CONDITIONAL_JUMP)  ; LAB_0040afe2
    XOR DL,DL                           ; 0040afba
        ;   Label: LAB_0040afba
    MOV byte ptr [EAX + 0x5f0990],DL    ; 0040afbc | DAT_005f0990 | DAT_005f0991
    TEST EAX,EAX                        ; 0040afc2
    JLE 0x0040afe0                      ; 0040afc4
        ;   XREF to: 0040afe0 (CONDITIONAL_JUMP)  ; LAB_0040afe0
    MOV DH,0x9                          ; 0040afc6
    DEC EAX                             ; 0040afc8
        ;   Label: LAB_0040afc8
    MOV byte ptr [EAX + 0x5f0990],DH    ; 0040afc9 | DAT_005f098e | DAT_005f098f | DAT_005f0990
    TEST EAX,EAX                        ; 0040afcf
    JG 0x0040afc8                       ; 0040afd1
        ;   XREF to: 0040afc8 (CONDITIONAL_JUMP)  ; LAB_0040afc8
    LEA EAX,[EAX]                       ; 0040afd3
    LEA EDX,[EDX]                       ; 0040afd9
    NOP                                 ; 0040afdf
    POP EDI                             ; 0040afe0
        ;   Label: LAB_0040afe0
    RET                                 ; 0040afe1
    XOR EAX,EAX                         ; 0040afe2
        ;   Label: LAB_0040afe2
    JMP 0x0040afba                      ; 0040afe4
        ;   XREF to: 0040afba (UNCONDITIONAL_JUMP)  ; LAB_0040afba

