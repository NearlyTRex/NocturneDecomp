; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_skipCinematic_FUN_0054ae40(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d0114
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_005efe1c
;   TerminatedCString s_core_script_cpp_005efe6b
;   TerminatedCString s_Infinite_loop_detected_t_005efe7e
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field532_0x244
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_script.cpp_CScript_resetDialogState_FUN_0054ae10
;   core_script.cpp_CScript_step_FUN_00544460
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ae40
        ;   Label: core_script.cpp_CScript_skipCinematic_FUN_0054ae40
    PUSH EBP                            ; 0054ae41
    SUB ESP,0x4                         ; 0054ae42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054ae45
    CMP dword ptr [EBX + 0x454],0x0     ; 0054ae49
    JGE 0x0054ae5a                      ; 0054ae50
        ;   XREF to: 0054ae5a (CONDITIONAL_JUMP)  ; LAB_0054ae5a
    XOR EAX,EAX                         ; 0054ae52
    ADD ESP,0x4                         ; 0054ae54
    POP EBP                             ; 0054ae57
    POP EBX                             ; 0054ae58
    RET                                 ; 0054ae59
    PUSH EDI                            ; 0054ae5a
        ;   Label: LAB_0054ae5a
    PUSH ESI                            ; 0054ae5b
    PUSH EBX                            ; 0054ae5c
    CALL core_script.cpp_CScript_resetDialogState_FUN_0054ae10 ; 0054ae5d
        ;   XREF to: 0054ae10 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_resetDialogState_FUN_0054ae10(CScript * this_ptr)
    XOR ESI,ESI                         ; 0054ae62
    MOV EAX,dword ptr [EBX + 0x454]     ; 0054ae64
    ADD ESP,0x4                         ; 0054ae6a
    MOV dword ptr [EBX + 0x44],EAX      ; 0054ae6d
    MOV EAX,[0x0061d95c]                ; 0054ae70 | g_CGamePtr
        ;   Label: LAB_0054ae70
    CMP dword ptr [EAX + 0x244],0x0     ; 0054ae75 | g_CGameInstance.field532_0x244
    JZ 0x0054af07                       ; 0054ae7c
        ;   XREF to: 0054af07 (CONDITIONAL_JUMP)  ; LAB_0054af07
    CMP dword ptr [EBX],0x0             ; 0054ae82
    JNZ 0x0054af07                      ; 0054ae85
        ;   XREF to: 0054af07 (CONDITIONAL_JUMP)  ; LAB_0054af07
    LEA EAX,[ESP + 0x8]                 ; 0054ae8b
    MOV EBP,0x3e800000                  ; 0054ae8f
    PUSH EAX                            ; 0054ae94
    MOV dword ptr [ESP + 0xc],EBP       ; 0054ae95
    PUSH EBX                            ; 0054ae99
    MOV EDI,dword ptr [EBX + 0x44]      ; 0054ae9a
    CALL core_script.cpp_CScript_step_FUN_00544460 ; 0054ae9d
        ;   XREF to: 00544460 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00544460(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 0054aea2
    TEST EAX,EAX                        ; 0054aea5
    JL 0x0054aee0                       ; 0054aea7
        ;   XREF to: 0054aee0 (CONDITIONAL_JUMP)  ; LAB_0054aee0
    INC ESI                             ; 0054aea9
        ;   Label: LAB_0054aea9
    CMP ESI,0x12c                       ; 0054aeaa
    JLE 0x0054ae70                      ; 0054aeb0
        ;   XREF to: 0054ae70 (CONDITIONAL_JUMP)  ; LAB_0054ae70
    MOV EBP,0x5efe6b                    ; 0054aeb2 | = "..\\core\\script.cpp"
    MOV EAX,0x102a                      ; 0054aeb7
    MOV EDI,dword ptr [EBX + 0x44]      ; 0054aebc
    MOV [0x01d1d404],EAX                ; 0054aebf | DAT_01d1d404
    MOV EAX,dword ptr [EBX + 0x30]      ; 0054aec4
    MOV dword ptr [0x01d1d400],EBP      ; 0054aec7 | DAT_01d1d400
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 0054aecd
    PUSH EDX                            ; 0054aed0
    PUSH 0x5efe7e                       ; 0054aed1 | = "Infinite loop detected trying to skip..."
    CALL core_main.c_FUN_005030e0       ; 0054aed6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0054aedb
    JMP 0x0054ae70                      ; 0054aede
        ;   XREF to: 0054ae70 (UNCONDITIONAL_JUMP)  ; LAB_0054ae70
    MOV EAX,dword ptr [EBX + 0x30]      ; 0054aee0
        ;   Label: LAB_0054aee0
    PUSH 0x1e810b0                      ; 0054aee3
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 0054aee8
    PUSH EDX                            ; 0054aeec
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 0054aeed
    PUSH ECX                            ; 0054aef0
    PUSH 0x5efe1c                       ; 0054aef1 | = "Error processing script to skip cinem..."
    MOV EDI,dword ptr [0x0061abc0]      ; 0054aef6 | g_CEditorToolsPtr
    PUSH EDI                            ; 0054aefc
    CALL shape_edittool.cpp_FUN_004943a0 ; 0054aefd
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x14                        ; 0054af02
    JMP 0x0054aea9                      ; 0054af05
        ;   XREF to: 0054aea9 (UNCONDITIONAL_JUMP)  ; LAB_0054aea9
    MOV EAX,0x1                         ; 0054af07
        ;   Label: LAB_0054af07
    POP ESI                             ; 0054af0c
    POP EDI                             ; 0054af0d
    ADD ESP,0x4                         ; 0054af0e
    POP EBP                             ; 0054af11
    POP EBX                             ; 0054af12
    RET                                 ; 0054af13

