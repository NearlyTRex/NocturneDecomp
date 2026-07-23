; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fee30(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004febd0 at 004fed01
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_0058e2f7
;   TerminatedCString s_Out_of_memory_loading_sc_0058e30a
;   TerminatedCString s_core_script_cpp_0058e332
;   TerminatedCString s_Out_of_memory_loading_sc_0058e345
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01e55c18
;   undefined4 DAT_01e55c19
;   undefined4 DAT_01e55c1a
;   undefined4 DAT_01e55c1b
;
; Called Functions:
;   core_script.cpp_CScript_freeParsedLines_FUN_004fe550
;   core_script.cpp_trimLine_FUN_004fdf60
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_realloc_FUN_00564a70
;   FUN_004c8440
;   shape_edittool.cpp_CStrList_getItemCount_FUN_00477660
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fee30
        ;   Label: FUN_004fee30
    PUSH ESI                            ; 004fee31
    PUSH EDI                            ; 004fee32
    PUSH EBP                            ; 004fee33
    SUB ESP,0x4                         ; 004fee34
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fee37
    PUSH EBX                            ; 004fee3b
    CALL core_script.cpp_CScript_freeParsedLines_FUN_004fe550 ; 004fee3c
        ;   XREF to: 004fe550 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_freeParsedLines_FUN_004fe550()
    ADD ESP,0x4                         ; 004fee41
    LEA EAX,[EBX + 0x30]                ; 004fee44
    XOR EBP,EBP                         ; 004fee47
    MOV dword ptr [ESP],EAX             ; 004fee49
    MOV EDX,dword ptr [ESP]             ; 004fee4c
        ;   Label: LAB_004fee4c
    PUSH EDX                            ; 004fee4f
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_00477660 ; 004fee50
        ;   XREF to: 00477660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getItemCount_FUN_00477660()
    ADD ESP,0x4                         ; 004fee55
    CMP EBP,EAX                         ; 004fee58
    JL 0x004fee64                       ; 004fee5a
        ;   XREF to: 004fee64 (CONDITIONAL_JUMP)  ; LAB_004fee64
    ADD ESP,0x4                         ; 004fee5c
    POP EBP                             ; 004fee5f
    POP EDI                             ; 004fee60
    POP ESI                             ; 004fee61
    POP EBX                             ; 004fee62
    RET                                 ; 004fee63
    PUSH 0x1e55c18                      ; 004fee64 | DAT_01e55c18
        ;   Label: LAB_004fee64
    PUSH EBP                            ; 004fee69
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fee6a
    PUSH ECX                            ; 004fee6e
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004fee6f
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 004fee74
    PUSH EAX                            ; 004fee77
    CALL core_script.cpp_trimLine_FUN_004fdf60 ; 004fee78
        ;   XREF to: 004fdf60 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_trimLine_FUN_004fdf60()
    MOV AH,byte ptr [0x01e55c18]        ; 004fee7d | DAT_01e55c18
    ADD ESP,0x8                         ; 004fee83
    TEST AH,AH                          ; 004fee86
    JZ 0x004fef54                       ; 004fee88
        ;   XREF to: 004fef54 (CONDITIONAL_JUMP)  ; LAB_004fef54
    MOV EAX,dword ptr [EBX + 0x28]      ; 004fee8e
    INC EAX                             ; 004fee91
    SHL EAX,0x3                         ; 004fee92
    PUSH EAX                            ; 004fee95
    MOV ESI,dword ptr [EBX + 0x2c]      ; 004fee96
    PUSH ESI                            ; 004fee99
    CALL crt_memory.c_realloc_FUN_00564a70 ; 004fee9a
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 004fee9f
    MOV dword ptr [EBX + 0x2c],EAX      ; 004feea2
    TEST EAX,EAX                        ; 004feea5
    JNZ 0x004feecf                      ; 004feea7
        ;   XREF to: 004feecf (CONDITIONAL_JUMP)  ; LAB_004feecf
    MOV dword ptr [0x01cc4800],0x58e2f7 ; 004feea9 | DAT_01cc4800 | = "..\\core\\script.cpp"
    LEA EAX,[EBP + 0x1]                 ; 004feeb3
    PUSH EAX                            ; 004feeb6
    MOV EDX,0x398                       ; 004feeb7
    PUSH 0x58e30a                       ; 004feebc | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01cc4804],EDX      ; 004feec1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004feec7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004feecc
    MOV EAX,dword ptr [EBX + 0x28]      ; 004feecf
        ;   Label: LAB_004feecf
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004feed2
    LEA ESI,[EBP + 0x1]                 ; 004feed5
    MOV EDI,0x1e55c18                   ; 004feed8
    MOV dword ptr [ECX + EAX*0x8],ESI   ; 004feedd
    SUB ECX,ECX                         ; 004feee0
    DEC ECX                             ; 004feee2
    XOR EAX,EAX                         ; 004feee3
    SCASB.REPNE ES:EDI                  ; 004feee5 | DAT_01e55c18 | DAT_01e55c19
    NOT ECX                             ; 004feee7
    DEC ECX                             ; 004feee9
    INC ECX                             ; 004feeea
    PUSH ECX                            ; 004feeeb
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004feeec
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    MOV ECX,dword ptr [EBX + 0x28]      ; 004feef1
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004feef4
    MOV dword ptr [EDI + ECX*0x8 + 0x4],EAX ; 004feef7
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004feefb
    ADD ESP,0x4                         ; 004feefe
    TEST ECX,ECX                        ; 004fef01
    JNZ 0x004fef28                      ; 004fef03
        ;   XREF to: 004fef28 (CONDITIONAL_JUMP)  ; LAB_004fef28
    PUSH ESI                            ; 004fef05
    MOV EDI,0x58e332                    ; 004fef06 | = "..\\core\\script.cpp"
    MOV EAX,0x39b                       ; 004fef0b
    PUSH 0x58e345                       ; 004fef10 | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01cc4800],EDI      ; 004fef15 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004fef1b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004fef20
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004fef25
    MOV EDI,dword ptr [EBX + 0x28]      ; 004fef28
        ;   Label: LAB_004fef28
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fef2b
    MOV ESI,0x1e55c18                   ; 004fef2e
    MOV EDI,dword ptr [EAX + EDI*0x8 + 0x4] ; 004fef33
    PUSH EDI                            ; 004fef37
    MOV AL,byte ptr [ESI]               ; 004fef38 | DAT_01e55c18 | DAT_01e55c1a
        ;   Label: LAB_004fef38
    MOV byte ptr [EDI],AL               ; 004fef3a
    CMP AL,0x0                          ; 004fef3c
    JZ 0x004fef50                       ; 004fef3e
        ;   XREF to: 004fef50 (CONDITIONAL_JUMP)  ; LAB_004fef50
    MOV AL,byte ptr [ESI + 0x1]         ; 004fef40 | DAT_01e55c19 | DAT_01e55c1b
    ADD ESI,0x2                         ; 004fef43
    MOV byte ptr [EDI + 0x1],AL         ; 004fef46
    ADD EDI,0x2                         ; 004fef49
    CMP AL,0x0                          ; 004fef4c
    JNZ 0x004fef38                      ; 004fef4e
        ;   XREF to: 004fef38 (CONDITIONAL_JUMP)  ; LAB_004fef38
    POP EDI                             ; 004fef50
        ;   Label: LAB_004fef50
    INC dword ptr [EBX + 0x28]          ; 004fef51
    INC EBP                             ; 004fef54
        ;   Label: LAB_004fef54
    JMP 0x004fee4c                      ; 004fef55
        ;   XREF to: 004fee4c (UNCONDITIONAL_JUMP)  ; LAB_004fee4c

