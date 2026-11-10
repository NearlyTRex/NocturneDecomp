; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
;
; Parameters:
; int              Stack[0x4]:4   indent_delta
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_save_FUN_0040adb0 at 0040ae3e
;   core_actor.cpp_archiveBox_FUN_0040bbf0 at 0040bc93
;   core_actor.cpp_archiveClothList_FUN_0040bce0 at 0040bdf2
;   core_actor.cpp_archiveMotionState_FUN_0040b870 at 0040b913
;   core_actor.cpp_archivePartStatus_FUN_0040b960 at 0040bae3
;   core_actor.cpp_archiveRules_FUN_0040be80 at 0040bfa1
;   core_inv.cpp_CInventory_save_FUN_004f95b0 at 004f95d9
;
; Referenced Globals:
;   undefined4 DAT_006106be
;   undefined1 DAT_006106bf
;   undefined1 DAT_006106c0
;   undefined1 DAT_006106c1
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0040ad60
        ;   Label: core_actor.cpp_adjustIndentationLevel_FUN_0040ad60
    MOV EDI,0x6106c0                    ; 0040ad61 | DAT_006106c0
    SUB ECX,ECX                         ; 0040ad66
    DEC ECX                             ; 0040ad68
    XOR EAX,EAX                         ; 0040ad69
    SCASB.REPNE ES:EDI                  ; 0040ad6b | DAT_006106c0 | DAT_006106c1
    NOT ECX                             ; 0040ad6d
    DEC ECX                             ; 0040ad6f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ad70
    ADD EAX,ECX                         ; 0040ad74
    TEST EAX,EAX                        ; 0040ad76
    JL 0x0040ada2                       ; 0040ad78
        ;   XREF to: 0040ada2 (CONDITIONAL_JUMP)  ; LAB_0040ada2
    XOR DL,DL                           ; 0040ad7a
        ;   Label: LAB_0040ad7a
    MOV byte ptr [EAX + 0x6106c0],DL    ; 0040ad7c | DAT_006106c0 | DAT_006106c1
    TEST EAX,EAX                        ; 0040ad82
    JLE 0x0040ada0                      ; 0040ad84
        ;   XREF to: 0040ada0 (CONDITIONAL_JUMP)  ; LAB_0040ada0
    MOV DH,0x9                          ; 0040ad86
    DEC EAX                             ; 0040ad88
        ;   Label: LAB_0040ad88
    MOV byte ptr [EAX + 0x6106c0],DH    ; 0040ad89 | DAT_006106be | DAT_006106bf | DAT_006106c0
    TEST EAX,EAX                        ; 0040ad8f
    JG 0x0040ad88                       ; 0040ad91
        ;   XREF to: 0040ad88 (CONDITIONAL_JUMP)  ; LAB_0040ad88
    LEA EAX,[EAX]                       ; 0040ad93
    LEA EDX,[EDX]                       ; 0040ad99
    NOP                                 ; 0040ad9f
    POP EDI                             ; 0040ada0
        ;   Label: LAB_0040ada0
    RET                                 ; 0040ada1
    XOR EAX,EAX                         ; 0040ada2
        ;   Label: LAB_0040ada2
    JMP 0x0040ad7a                      ; 0040ada4
        ;   XREF to: 0040ad7a (UNCONDITIONAL_JUMP)  ; LAB_0040ad7a

