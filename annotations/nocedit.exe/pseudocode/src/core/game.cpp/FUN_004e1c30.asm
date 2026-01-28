; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_game_cpp_FUN_004e1c30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_rt_0062cc71
;   TerminatedCString s_world_0062cc74
;   TerminatedCString s_core_game_cpp_0062cc7a
;   undefined4 PTR_s_hq_act1_msn_0067b750
;   void* PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
;
; Called Functions:
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1c30
        ;   Label: core_game.cpp_FUN_004e1c30
    PUSH ESI                            ; 004e1c31
    PUSH EDI                            ; 004e1c32
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e1c33
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e1c37
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e1c3b
    SUB EAX,ESI                         ; 004e1c42
    SHL EAX,0x2                         ; 004e1c44
    ADD ESI,EAX                         ; 004e1c47
    XOR EBX,EBX                         ; 004e1c49
    SHL ESI,0x2                         ; 004e1c4b
    MOV EAX,dword ptr [EDI]             ; 004e1c4e
    CMP EBX,EAX                         ; 004e1c50
    JL 0x004e1c58                       ; 004e1c52
        ;   XREF to: 004e1c58 (CONDITIONAL_JUMP)  ; LAB_004e1c58
    POP EDI                             ; 004e1c54
    POP ESI                             ; 004e1c55
    POP EBX                             ; 004e1c56
    RET                                 ; 004e1c57
    PUSH 0x62cc71                       ; 004e1c58 | = "rt"
        ;   Label: LAB_004e1c58
    MOV EDX,dword ptr [ESI + 0x67b750]  ; 004e1c5d | PTR_s_hq_act1_msn_0067b750 | PTR_s_gtown_msn_0062d684_0067b754
    PUSH EDX                            ; 004e1c63
    PUSH 0x62cc74                       ; 004e1c64 | = "world"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e1c69
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e1c6e
    TEST EAX,EAX                        ; 004e1c71
    JNZ 0x004e1c82                      ; 004e1c73
        ;   XREF to: 004e1c82 (CONDITIONAL_JUMP)  ; LAB_004e1c82
    PUSH EAX                            ; 004e1c75
    PUSH EBX                            ; 004e1c76
    PUSH EDI                            ; 004e1c77
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e1c78
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004e1c7d
    JMP 0x004e1c95                      ; 004e1c80
        ;   XREF to: 004e1c95 (UNCONDITIONAL_JUMP)  ; LAB_004e1c95
    PUSH 0xec1                          ; 004e1c82
        ;   Label: LAB_004e1c82
    PUSH 0x62cc7a                       ; 004e1c87 | = "..\\core\\game.cpp"
    PUSH EAX                            ; 004e1c8c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1c8d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e1c92
    INC EBX                             ; 004e1c95
        ;   Label: LAB_004e1c95
    ADD ESI,0x4                         ; 004e1c96
    MOV EAX,dword ptr [EDI]             ; 004e1c99
    CMP EBX,EAX                         ; 004e1c9b
    JL 0x004e1c58                       ; 004e1c9d
        ;   XREF to: 004e1c58 (CONDITIONAL_JUMP)  ; LAB_004e1c58
    POP EDI                             ; 004e1c9f
    POP ESI                             ; 004e1ca0
    POP EBX                             ; 004e1ca1
    RET                                 ; 004e1ca2

