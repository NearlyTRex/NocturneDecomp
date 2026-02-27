; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
;
; Parameters:
; int              Stack[0x4]:4   indent_delta
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_save_FUN_0040af30 at 0040afd8
;   core_actor.cpp_archiveBox_FUN_0040bd70 at 0040be13
;   core_actor.cpp_archiveClothList_FUN_0040be60 at 0040bf72
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0 at 0040ba93
;   core_actor.cpp_archivePartStatus_FUN_0040bae0 at 0040bc63
;   core_actor.cpp_archiveRules_FUN_0040c000 at 0040c121
;   core_inv.cpp_CInventory_save_FUN_004ff210 at 004ff372
;
; Referenced Globals:
;   undefined4 DAT_0066e176
;   undefined4 DAT_0066e177
;   char[104] g_PropertyNamePrefix
;   undefined4 s__0066e179
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0040aee0
        ;   Label: core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
    MOV EDI,0x66e178                    ; 0040aee1 | g_PropertyNamePrefix
    SUB ECX,ECX                         ; 0040aee6
    DEC ECX                             ; 0040aee8
    XOR EAX,EAX                         ; 0040aee9
    SCASB.REPNE ES:EDI                  ; 0040aeeb | g_PropertyNamePrefix | s__0066e179
    NOT ECX                             ; 0040aeed
    DEC ECX                             ; 0040aeef
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040aef0
    ADD EAX,ECX                         ; 0040aef4
    TEST EAX,EAX                        ; 0040aef6
    JL 0x0040af22                       ; 0040aef8
        ;   XREF to: 0040af22 (CONDITIONAL_JUMP)  ; LAB_0040af22
    XOR DL,DL                           ; 0040aefa
        ;   Label: LAB_0040aefa
    MOV byte ptr [EAX + 0x66e178],DL    ; 0040aefc | g_PropertyNamePrefix | s__0066e179
    TEST EAX,EAX                        ; 0040af02
    JLE 0x0040af20                      ; 0040af04
        ;   XREF to: 0040af20 (CONDITIONAL_JUMP)  ; LAB_0040af20
    MOV DH,0x9                          ; 0040af06
    DEC EAX                             ; 0040af08
        ;   Label: LAB_0040af08
    MOV byte ptr [EAX + 0x66e178],DH    ; 0040af09 | g_PropertyNamePrefix | DAT_0066e176 | DAT_0066e177
    TEST EAX,EAX                        ; 0040af0f
    JG 0x0040af08                       ; 0040af11
        ;   XREF to: 0040af08 (CONDITIONAL_JUMP)  ; LAB_0040af08
    LEA EAX,[EAX]                       ; 0040af13
    LEA EDX,[EDX]                       ; 0040af19
    NOP                                 ; 0040af1f
    POP EDI                             ; 0040af20
        ;   Label: LAB_0040af20
    RET                                 ; 0040af21
    XOR EAX,EAX                         ; 0040af22
        ;   Label: LAB_0040af22
    JMP 0x0040aefa                      ; 0040af24
        ;   XREF to: 0040aefa (UNCONDITIONAL_JUMP)  ; LAB_0040aefa

