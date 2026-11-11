; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_buildParsedLines_FUN_00521ec0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00521cf0 at 00521e1d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005e2f27
;   TerminatedCString s_Out_of_memory_loading_sc_005e2f3a
;   TerminatedCString s_core_script_cpp_005e2f62
;   TerminatedCString s_Out_of_memory_loading_sc_005e2f75
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e648f8
;   undefined4 DAT_01e648f9
;   undefined4 DAT_01e648fa
;   undefined4 DAT_01e648fb
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_script.cpp_CScript_freeParsedLines_FUN_00521680
;   core_script.cpp_trimLine_FUN_00521070
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_realloc_FUN_005b8ce0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   shape_edittool.cpp_FUN_004858f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521ec0
        ;   Label: core_script.cpp_CScript_buildParsedLines_FUN_00521ec0
    PUSH ESI                            ; 00521ec1
    PUSH EDI                            ; 00521ec2
    PUSH EBP                            ; 00521ec3
    SUB ESP,0x4                         ; 00521ec4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00521ec7
    PUSH EBX                            ; 00521ecb
    CALL core_script.cpp_CScript_freeParsedLines_FUN_00521680 ; 00521ecc
        ;   XREF to: 00521680 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_freeParsedLines_FUN_00521680(CScript * this_ptr)
    ADD ESP,0x4                         ; 00521ed1
    LEA EAX,[EBX + 0x34]                ; 00521ed4
    XOR EBP,EBP                         ; 00521ed7
    MOV dword ptr [ESP],EAX             ; 00521ed9
    MOV EDX,dword ptr [ESP]             ; 00521edc
        ;   Label: LAB_00521edc
    PUSH EDX                            ; 00521edf
    CALL shape_edittool.cpp_FUN_004858f0 ; 00521ee0
        ;   XREF to: 004858f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004858f0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00521ee5
    CMP EBP,EAX                         ; 00521ee8
    JL 0x00521ef4                       ; 00521eea
        ;   XREF to: 00521ef4 (CONDITIONAL_JUMP)  ; LAB_00521ef4
    ADD ESP,0x4                         ; 00521eec
    POP EBP                             ; 00521eef
    POP EDI                             ; 00521ef0
    POP ESI                             ; 00521ef1
    POP EBX                             ; 00521ef2
    RET                                 ; 00521ef3
    PUSH 0x1e648f8                      ; 00521ef4 | DAT_01e648f8
        ;   Label: LAB_00521ef4
    PUSH EBP                            ; 00521ef9
    MOV ECX,dword ptr [ESP + 0x8]       ; 00521efa
    PUSH ECX                            ; 00521efe
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00521eff
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00521f04
    PUSH EAX                            ; 00521f07
    CALL core_script.cpp_trimLine_FUN_00521070 ; 00521f08
        ;   XREF to: 00521070 (UNCONDITIONAL_CALL)  ; void core_script.cpp_trimLine_FUN_00521070(char * input_line, char * output_buffer)
    MOV AH,byte ptr [0x01e648f8]        ; 00521f0d | DAT_01e648f8
    ADD ESP,0x8                         ; 00521f13
    TEST AH,AH                          ; 00521f16
    JZ 0x00521fe4                       ; 00521f18
        ;   XREF to: 00521fe4 (CONDITIONAL_JUMP)  ; LAB_00521fe4
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00521f1e
    INC EAX                             ; 00521f21
    SHL EAX,0x3                         ; 00521f22
    PUSH EAX                            ; 00521f25
    MOV ESI,dword ptr [EBX + 0x30]      ; 00521f26
    PUSH ESI                            ; 00521f29
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 00521f2a
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00521f2f
    MOV dword ptr [EBX + 0x30],EAX      ; 00521f32
    TEST EAX,EAX                        ; 00521f35
    JNZ 0x00521f5f                      ; 00521f37
        ;   XREF to: 00521f5f (CONDITIONAL_JUMP)  ; LAB_00521f5f
    MOV dword ptr [0x01d046a0],0x5e2f27 ; 00521f39 | DAT_01d046a0 | = "..\\core\\script.cpp"
    LEA EAX,[EBP + 0x1]                 ; 00521f43
    PUSH EAX                            ; 00521f46
    MOV EDX,0x3a6                       ; 00521f47
    PUSH 0x5e2f3a                       ; 00521f4c | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01d046a4],EDX      ; 00521f51 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00521f57
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00521f5c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00521f5f
        ;   Label: LAB_00521f5f
    MOV ECX,dword ptr [EBX + 0x30]      ; 00521f62
    LEA ESI,[EBP + 0x1]                 ; 00521f65
    MOV EDI,0x1e648f8                   ; 00521f68
    MOV dword ptr [ECX + EAX*0x8],ESI   ; 00521f6d
    SUB ECX,ECX                         ; 00521f70
    DEC ECX                             ; 00521f72
    XOR EAX,EAX                         ; 00521f73
    SCASB.REPNE ES:EDI                  ; 00521f75 | DAT_01e648f8 | DAT_01e648f9
    NOT ECX                             ; 00521f77
    DEC ECX                             ; 00521f79
    INC ECX                             ; 00521f7a
    PUSH ECX                            ; 00521f7b
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00521f7c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00521f81
    MOV EDI,dword ptr [EBX + 0x30]      ; 00521f84
    MOV dword ptr [EDI + ECX*0x8 + 0x4],EAX ; 00521f87
    MOV ECX,dword ptr [EBX + 0x30]      ; 00521f8b
    ADD ESP,0x4                         ; 00521f8e
    TEST ECX,ECX                        ; 00521f91
    JNZ 0x00521fb8                      ; 00521f93
        ;   XREF to: 00521fb8 (CONDITIONAL_JUMP)  ; LAB_00521fb8
    PUSH ESI                            ; 00521f95
    MOV EDI,0x5e2f62                    ; 00521f96 | = "..\\core\\script.cpp"
    MOV EAX,0x3a9                       ; 00521f9b
    PUSH 0x5e2f75                       ; 00521fa0 | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01d046a0],EDI      ; 00521fa5 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00521fab | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00521fb0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00521fb5
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00521fb8
        ;   Label: LAB_00521fb8
    MOV EAX,dword ptr [EBX + 0x30]      ; 00521fbb
    MOV ESI,0x1e648f8                   ; 00521fbe
    MOV EDI,dword ptr [EAX + EDI*0x8 + 0x4] ; 00521fc3
    PUSH EDI                            ; 00521fc7
    MOV AL,byte ptr [ESI]               ; 00521fc8 | DAT_01e648f8 | DAT_01e648fa
        ;   Label: LAB_00521fc8
    MOV byte ptr [EDI],AL               ; 00521fca
    CMP AL,0x0                          ; 00521fcc
    JZ 0x00521fe0                       ; 00521fce
        ;   XREF to: 00521fe0 (CONDITIONAL_JUMP)  ; LAB_00521fe0
    MOV AL,byte ptr [ESI + 0x1]         ; 00521fd0 | DAT_01e648f9 | DAT_01e648fb
    ADD ESI,0x2                         ; 00521fd3
    MOV byte ptr [EDI + 0x1],AL         ; 00521fd6
    ADD EDI,0x2                         ; 00521fd9
    CMP AL,0x0                          ; 00521fdc
    JNZ 0x00521fc8                      ; 00521fde
        ;   XREF to: 00521fc8 (CONDITIONAL_JUMP)  ; LAB_00521fc8
    POP EDI                             ; 00521fe0
        ;   Label: LAB_00521fe0
    INC dword ptr [EBX + 0x2c]          ; 00521fe1
    INC EBP                             ; 00521fe4
        ;   Label: LAB_00521fe4
    JMP 0x00521edc                      ; 00521fe5
        ;   XREF to: 00521edc (UNCONDITIONAL_JUMP)  ; LAB_00521edc

