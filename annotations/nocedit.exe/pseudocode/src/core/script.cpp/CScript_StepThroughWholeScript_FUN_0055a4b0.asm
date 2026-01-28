; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined1 * core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 at 0055a146
;   core_script.cpp_FUN_00566080 at 00566097
;
; Referenced Globals:
;   undefined4 DAT_0310ec9c
;   undefined1 DAT_0310eca0
;   CPickList DAT_0310f4b0
;
; Called Functions:
;   core_script.cpp_CScript_step_FUN_0055a810
;   core_script.cpp_FUN_0055a540
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a4b0
        ;   Label: core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
    PUSH ESI                            ; 0055a4b1
    PUSH EBP                            ; 0055a4b2
    SUB ESP,0x4                         ; 0055a4b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055a4b6
    MOV EDX,0x1                         ; 0055a4ba
    PUSH EBX                            ; 0055a4bf
    MOV dword ptr [0x0310ec9c],EDX      ; 0055a4c0 | DAT_0310ec9c
    CALL core_script.cpp_FUN_0055a540   ; 0055a4c6
        ;   XREF to: 0055a540 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_0055a540()
    ADD ESP,0x4                         ; 0055a4cb
    PUSH 0x310f4b0                      ; 0055a4ce | DAT_0310f4b0
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 0055a4d3
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x48]      ; 0055a4d8
    MOV ECX,dword ptr [EBX + 0x30]      ; 0055a4db
    ADD ESP,0x4                         ; 0055a4de
    CMP EAX,ECX                         ; 0055a4e1
    JGE 0x0055a50c                      ; 0055a4e3
        ;   XREF to: 0055a50c (CONDITIONAL_JUMP)  ; LAB_0055a50c
    MOV EBP,0x3e800000                  ; 0055a4e5
    MOV EAX,ESP                         ; 0055a4ea
        ;   Label: LAB_0055a4ea
    PUSH EAX                            ; 0055a4ec
    PUSH EBX                            ; 0055a4ed
    MOV ESI,dword ptr [EBX + 0x48]      ; 0055a4ee
    MOV dword ptr [ESP + 0x8],EBP       ; 0055a4f1
    CALL core_script.cpp_CScript_step_FUN_0055a810 ; 0055a4f5
        ;   XREF to: 0055a810 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_step_FUN_0055a810()
    ADD ESP,0x8                         ; 0055a4fa
    TEST EAX,EAX                        ; 0055a4fd
    JL 0x0055a51f                       ; 0055a4ff
        ;   XREF to: 0055a51f (CONDITIONAL_JUMP)  ; LAB_0055a51f
    INC ESI                             ; 0055a501
    MOV dword ptr [EBX + 0x48],ESI      ; 0055a502
    MOV EAX,ESI                         ; 0055a505
    CMP EAX,dword ptr [EBX + 0x30]      ; 0055a507
    JL 0x0055a4ea                       ; 0055a50a
        ;   XREF to: 0055a4ea (CONDITIONAL_JUMP)  ; LAB_0055a4ea
    PUSH EDI                            ; 0055a50c
        ;   Label: LAB_0055a50c
    XOR EDI,EDI                         ; 0055a50d
    XOR EAX,EAX                         ; 0055a50f
    MOV dword ptr [0x0310ec9c],EDI      ; 0055a511 | DAT_0310ec9c
    POP EDI                             ; 0055a517
    ADD ESP,0x4                         ; 0055a518
    POP EBP                             ; 0055a51b
    POP ESI                             ; 0055a51c
    POP EBX                             ; 0055a51d
    RET                                 ; 0055a51e
    MOV EAX,dword ptr [EBX + 0x34]      ; 0055a51f
        ;   Label: LAB_0055a51f
    MOV EAX,dword ptr [EAX + ESI*0x8]   ; 0055a522
    MOV EBX,dword ptr [ESP + 0x18]      ; 0055a525
    DEC EAX                             ; 0055a529
    MOV dword ptr [EBX],EAX             ; 0055a52a
    MOV EAX,0x310eca0                   ; 0055a52c | DAT_0310eca0
    ADD ESP,0x4                         ; 0055a531
    POP EBP                             ; 0055a534
    POP ESI                             ; 0055a535
    POP EBX                             ; 0055a536
    RET                                 ; 0055a537

