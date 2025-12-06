; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00565e70()
;
; Local Variables:
; undefined4       Stack[-0x2a38]:4  local_2a38
; undefined1       Stack[-0x910]:1  local_910
; undefined1       Stack[-0x5e8]:1  local_5e8
; undefined1       Stack[-0x3f4]:1  local_3f4
; undefined1       Stack[-0x200]:1  local_200
;
; XREF[1]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 005656af
;
; Referenced Globals:
;   TerminatedCString s_Not_enough_context_to_sh_00643ebb
;   undefined4 s_ot_enough_context_to_show_usage._00643ebc
;   undefined4 s_enough_context_to_show_usage._(T_00643ebe
;   void* PTR_s_label_006441c0_00680e28 = 006441c0
;   undefined1 DAT_0310fdc0
;   undefined1 DAT_0310fdc1
;   undefined1 DAT_0310fdc2
;   undefined1 DAT_0310fdc3
;
; Called Functions:
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_FUN_00561c70
;   core_script.cpp_SCmdParse_bestParse_FUN_00561db0
;   core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565e70
        ;   Label: core_script.cpp_FUN_00565e70
    PUSH ESI                            ; 00565e71
    PUSH EDI                            ; 00565e72
    SUB ESP,0x2a2c                      ; 00565e73
    MOV EBX,dword ptr [ESP + 0x2a3c]    ; 00565e79
    MOV EDI,dword ptr [ESP + 0x2a44]    ; 00565e80
    TEST EDI,EDI                        ; 00565e87
    JGE 0x00565e95                      ; 00565e89 | LAB_00565e95
        ;   XREF to: 00565e95 (CONDITIONAL_JUMP)
    ADD ESP,0x2a2c                      ; 00565e8b
        ;   Label: LAB_00565e8b
    POP EDI                             ; 00565e91
    POP ESI                             ; 00565e92
    POP EBX                             ; 00565e93
    RET                                 ; 00565e94
    LEA ESI,[EBX + 0x38]                ; 00565e95
        ;   Label: LAB_00565e95
    PUSH ESI                            ; 00565e98
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00565e99 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00565e9e
    CMP EDI,EAX                         ; 00565ea1
    JGE 0x00565e8b                      ; 00565ea3 | LAB_00565e8b
        ;   XREF to: 00565e8b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x2a40]    ; 00565ea5
    PUSH EDX                            ; 00565eac
    PUSH EDI                            ; 00565ead
    PUSH EBX                            ; 00565eae
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565eaf | undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00565eb4
    MOV EBX,EAX                         ; 00565eb7
    MOV EAX,ESP                         ; 00565eb9
    PUSH EAX                            ; 00565ebb
    LEA EAX,[ESP + 0x212c]              ; 00565ebc
    PUSH EAX                            ; 00565ec3
    PUSH EBX                            ; 00565ec4
    LEA EAX,[ESP + 0x245c]              ; 00565ec5
    PUSH EAX                            ; 00565ecc
    LEA EAX,[ESP + 0x2654]              ; 00565ecd
    PUSH EAX                            ; 00565ed4
    LEA EAX,[ESP + 0x284c]              ; 00565ed5
    PUSH EAX                            ; 00565edc
    PUSH EDI                            ; 00565edd
    PUSH ESI                            ; 00565ede
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00565edf | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00565ee4
    PUSH EAX                            ; 00565ee7
    CALL core_script.cpp_FUN_00561c70   ; 00565ee8 | undefined core_script.cpp_FUN_00561c70()
        ;   XREF to: 00561c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00565eed
    TEST EAX,EAX                        ; 00565ef0
    JLE 0x00565f0f                      ; 00565ef2 | LAB_00565f0f
        ;   XREF to: 00565f0f (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 00565ef4
        ;   Label: LAB_00565ef4
    PUSH ECX                            ; 00565ef7
    PUSH 0x310fdc0                      ; 00565ef8 | undefined1 DAT_0310fdc0
    CALL core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0 ; 00565efd | undefined core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0()
        ;   XREF to: 005643d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00565f02
    ADD ESP,0x2a2c                      ; 00565f05
    POP EDI                             ; 00565f0b
    POP ESI                             ; 00565f0c
    POP EBX                             ; 00565f0d
    RET                                 ; 00565f0e
    PUSH 0x78                           ; 00565f0f
        ;   Label: LAB_00565f0f
    PUSH 0x680e28                       ; 00565f11 | void * PTR_s_label_006441c0_00680e28
    PUSH EBX                            ; 00565f16
    PUSH EDI                            ; 00565f17
    PUSH ESI                            ; 00565f18
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00565f19 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00565f1e
    PUSH EAX                            ; 00565f21
    LEA EAX,[ESP + 0x10]                ; 00565f22
    PUSH EAX                            ; 00565f26
    CALL core_script.cpp_SCmdParse_bestParse_FUN_00561db0 ; 00565f27 | undefined core_script.cpp_SCmdParse_bestParse_FUN_00561db0()
        ;   XREF to: 00561db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00565f2c
    TEST EAX,EAX                        ; 00565f2f
    JG 0x00565ef4                       ; 00565f31 | LAB_00565ef4
        ;   XREF to: 00565ef4 (CONDITIONAL_JUMP)
    MOV ESI,0x643ebb                    ; 00565f33 | = "Not enough context to show usage.  (T..." | s_Not_enough_context_to_sh_00643ebb = Not enough context to show usage.  (Try putting the cursor over the first parm...)
    MOV EDI,0x310fdc0                   ; 00565f38 | undefined1 DAT_0310fdc0
    PUSH EDI                            ; 00565f3d | undefined1 DAT_0310fdc0
    MOV AL,byte ptr [ESI]               ; 00565f3e | = "Not enough context to show usage.  (T..." | s_Not_enough_context_to_sh_00643ebb = Not enough context to show usage.  (Try putting the cursor over the first parm...)
        ;   Label: LAB_00565f3e
    MOV byte ptr [EDI],AL               ; 00565f40 | undefined1 DAT_0310fdc0 | DAT_0310fdc2
    CMP AL,0x0                          ; 00565f42
    JZ 0x00565f56                       ; 00565f44 | LAB_00565f56
        ;   XREF to: 00565f56 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00565f46 | s_ot_enough_context_to_show_usage._00643ebc
    ADD ESI,0x2                         ; 00565f49
    MOV byte ptr [EDI + 0x1],AL         ; 00565f4c | undefined1 DAT_0310fdc1 | DAT_0310fdc3
    ADD EDI,0x2                         ; 00565f4f
    CMP AL,0x0                          ; 00565f52
    JNZ 0x00565f3e                      ; 00565f54 | LAB_00565f3e
        ;   XREF to: 00565f3e (CONDITIONAL_JUMP)
    POP EDI                             ; 00565f56
        ;   Label: LAB_00565f56
    ADD ESP,0x2a2c                      ; 00565f57
    POP EDI                             ; 00565f5d
    POP ESI                             ; 00565f5e
    POP EBX                             ; 00565f5f
    RET                                 ; 00565f60

