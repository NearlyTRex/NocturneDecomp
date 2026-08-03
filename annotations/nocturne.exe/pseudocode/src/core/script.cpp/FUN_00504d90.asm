; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_FUN_00504d90(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e3c8
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_0058faf7
;   TerminatedCString s_core_script_cpp_0058fb46
;   TerminatedCString s_Infinite_loop_detected_t_0058fb59
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.letterbox_mode
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_script.cpp_CScript_step_FUN_004ff2c0
;   core_script.cpp_FUN_00504d60
;   shape_edittool.cpp_FUN_0046fcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504d90
        ;   Label: core_script.cpp_FUN_00504d90
    PUSH EBP                            ; 00504d91
    SUB ESP,0x4                         ; 00504d92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00504d95
    CMP dword ptr [EBX + 0x450],0x0     ; 00504d99
    JGE 0x00504daa                      ; 00504da0
        ;   XREF to: 00504daa (CONDITIONAL_JUMP)  ; LAB_00504daa
    XOR EAX,EAX                         ; 00504da2
    ADD ESP,0x4                         ; 00504da4
    POP EBP                             ; 00504da7
    POP EBX                             ; 00504da8
    RET                                 ; 00504da9
    PUSH EDI                            ; 00504daa
        ;   Label: LAB_00504daa
    PUSH ESI                            ; 00504dab
    PUSH EBX                            ; 00504dac
    CALL core_script.cpp_FUN_00504d60   ; 00504dad
        ;   XREF to: 00504d60 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00504d60()
    XOR ESI,ESI                         ; 00504db2
    MOV EAX,dword ptr [EBX + 0x450]     ; 00504db4
    ADD ESP,0x4                         ; 00504dba
    MOV dword ptr [EBX + 0x40],EAX      ; 00504dbd
    MOV EAX,[0x005b9354]                ; 00504dc0 | g_CGame_PTR_005b9354
        ;   Label: LAB_00504dc0
    CMP dword ptr [EAX + 0x228],0x0     ; 00504dc5 | g_CGame_01c775ec.letterbox_mode
    JZ 0x00504e57                       ; 00504dcc
        ;   XREF to: 00504e57 (CONDITIONAL_JUMP)  ; LAB_00504e57
    CMP dword ptr [EBX],0x0             ; 00504dd2
    JNZ 0x00504e57                      ; 00504dd5
        ;   XREF to: 00504e57 (CONDITIONAL_JUMP)  ; LAB_00504e57
    LEA EAX,[ESP + 0x8]                 ; 00504ddb
    MOV EBP,0x3e800000                  ; 00504ddf
    PUSH EAX                            ; 00504de4
    MOV dword ptr [ESP + 0xc],EBP       ; 00504de5
    PUSH EBX                            ; 00504de9
    MOV EDI,dword ptr [EBX + 0x40]      ; 00504dea
    CALL core_script.cpp_CScript_step_FUN_004ff2c0 ; 00504ded
        ;   XREF to: 004ff2c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_004ff2c0(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 00504df2
    TEST EAX,EAX                        ; 00504df5
    JL 0x00504e30                       ; 00504df7
        ;   XREF to: 00504e30 (CONDITIONAL_JUMP)  ; LAB_00504e30
    INC ESI                             ; 00504df9
        ;   Label: LAB_00504df9
    CMP ESI,0x12c                       ; 00504dfa
    JLE 0x00504dc0                      ; 00504e00
        ;   XREF to: 00504dc0 (CONDITIONAL_JUMP)  ; LAB_00504dc0
    MOV EBP,0x58fb46                    ; 00504e02 | = "..\\core\\script.cpp"
    MOV EAX,0xea5                       ; 00504e07
    MOV EDI,dword ptr [EBX + 0x40]      ; 00504e0c
    MOV [0x01cc4804],EAX                ; 00504e0f | g_INT_01cc4804
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00504e14
    MOV dword ptr [0x01cc4800],EBP      ; 00504e17 | g_CHAR_PTR_01cc4800
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 00504e1d
    PUSH EDX                            ; 00504e20
    PUSH 0x58fb59                       ; 00504e21 | = "Infinite loop detected trying to skip..."
    CALL core_main.c_FUN_004c8440       ; 00504e26
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00504e2b
    JMP 0x00504dc0                      ; 00504e2e
        ;   XREF to: 00504dc0 (UNCONDITIONAL_JUMP)  ; LAB_00504dc0
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00504e30
        ;   Label: LAB_00504e30
    PUSH 0x1e56420                      ; 00504e33
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00504e38
    PUSH EDX                            ; 00504e3c
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00504e3d
    PUSH ECX                            ; 00504e40
    PUSH 0x58faf7                       ; 00504e41 | = "Error processing script to skip cinem..."
    MOV EDI,dword ptr [0x005b6d50]      ; 00504e46 | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 00504e4c
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 00504e4d
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x14                        ; 00504e52
    JMP 0x00504df9                      ; 00504e55
        ;   XREF to: 00504df9 (UNCONDITIONAL_JUMP)  ; LAB_00504df9
    MOV EAX,0x1                         ; 00504e57
        ;   Label: LAB_00504e57
    POP ESI                             ; 00504e5c
    POP EDI                             ; 00504e5d
    ADD ESP,0x4                         ; 00504e5e
    POP EBP                             ; 00504e61
    POP EBX                             ; 00504e62
    RET                                 ; 00504e63

