; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insert_FUN_00473cf0(CStrList *this_ptr,int insert_index,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   insert_index
; char *           Stack[0xc]:4   string_data
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_insert_FUN_004760a0 at 004760bf
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057eb5a
;   TerminatedCString s_CStrList_insert_invalid_0057eb70
;   TerminatedCString s_shape_edittool_cpp_0057eb91
;   TerminatedCString s_CStrList_insert_out_of_m_0057eba7
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_string.c_memmove_FUN_00566170
;   shape_edittool.cpp_CStrList_allocate_FUN_00473de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473cf0
        ;   Label: shape_edittool.cpp_CStrList_insert_FUN_00473cf0
    PUSH ESI                            ; 00473cf1
    PUSH EDI                            ; 00473cf2
    PUSH EBP                            ; 00473cf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00473cf4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00473cf8
    TEST EBP,EBP                        ; 00473cfc
    JL 0x00473d04                       ; 00473cfe
        ;   XREF to: 00473d04 (CONDITIONAL_JUMP)  ; LAB_00473d04
    CMP EBP,dword ptr [EBX]             ; 00473d00
    JLE 0x00473d27                      ; 00473d02
        ;   XREF to: 00473d27 (CONDITIONAL_JUMP)  ; LAB_00473d27
    MOV ECX,0x57eb5a                    ; 00473d04 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00473d04
    MOV ESI,0x9ba                       ; 00473d09
    PUSH 0x57eb70                       ; 00473d0e | = "CStrList::insert - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 00473d13 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00473d19 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473d1f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00473d24
    MOV EDI,dword ptr [EBX]             ; 00473d27
        ;   Label: LAB_00473d27
    INC EDI                             ; 00473d29
    MOV EDX,dword ptr [EBX + 0x4]       ; 00473d2a
    MOV dword ptr [EBX],EDI             ; 00473d2d
    CMP EDI,EDX                         ; 00473d2f
    JLE 0x00473d40                      ; 00473d31
        ;   XREF to: 00473d40 (CONDITIONAL_JUMP)  ; LAB_00473d40
    LEA EAX,[EDI + 0x14]                ; 00473d33
    PUSH EAX                            ; 00473d36
    PUSH EBX                            ; 00473d37
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00473de0 ; 00473d38
        ;   XREF to: 00473de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_00473de0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 00473d3d
    MOV EAX,dword ptr [EBX]             ; 00473d40
        ;   Label: LAB_00473d40
    SUB EAX,EBP                         ; 00473d42
    SHL EAX,0x2                         ; 00473d44
    SUB EAX,0x4                         ; 00473d47
    LEA ESI,[EBP*0x4 + 0x0]             ; 00473d4a
    PUSH EAX                            ; 00473d51
    MOV EAX,dword ptr [EBX + 0x8]       ; 00473d52
    LEA ECX,[EAX + ESI*0x1]             ; 00473d55
    PUSH ECX                            ; 00473d58
    LEA ECX,[ESI + 0x4]                 ; 00473d59
    ADD EAX,ECX                         ; 00473d5c
    PUSH EAX                            ; 00473d5e
    CALL crt_string.c_memmove_FUN_00566170 ; 00473d5f
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00473d64
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00473d67
    SUB ECX,ECX                         ; 00473d6b
    DEC ECX                             ; 00473d6d
    XOR EAX,EAX                         ; 00473d6e
    SCASB.REPNE ES:EDI                  ; 00473d70
    NOT ECX                             ; 00473d72
    DEC ECX                             ; 00473d74
    INC ECX                             ; 00473d75
    PUSH ECX                            ; 00473d76
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00473d77
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV ECX,dword ptr [EBX + 0x8]       ; 00473d7c
    MOV dword ptr [ECX + ESI*0x1],EAX   ; 00473d7f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00473d82
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 00473d85
    ADD ESP,0x4                         ; 00473d88
    TEST ECX,ECX                        ; 00473d8b
    JZ 0x00473db8                       ; 00473d8d
        ;   XREF to: 00473db8 (CONDITIONAL_JUMP)  ; LAB_00473db8
    MOV EDI,dword ptr [EBX + 0x8]       ; 00473d8f
        ;   Label: LAB_00473d8f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00473d92
    MOV EDI,dword ptr [EDI + EBP*0x4]   ; 00473d96
    PUSH EDI                            ; 00473d99
    MOV AL,byte ptr [ESI]               ; 00473d9a
        ;   Label: LAB_00473d9a
    MOV byte ptr [EDI],AL               ; 00473d9c
    CMP AL,0x0                          ; 00473d9e
    JZ 0x00473db2                       ; 00473da0
        ;   XREF to: 00473db2 (CONDITIONAL_JUMP)  ; LAB_00473db2
    MOV AL,byte ptr [ESI + 0x1]         ; 00473da2
    ADD ESI,0x2                         ; 00473da5
    MOV byte ptr [EDI + 0x1],AL         ; 00473da8
    ADD EDI,0x2                         ; 00473dab
    CMP AL,0x0                          ; 00473dae
    JNZ 0x00473d9a                      ; 00473db0
        ;   XREF to: 00473d9a (CONDITIONAL_JUMP)  ; LAB_00473d9a
    POP EDI                             ; 00473db2
        ;   Label: LAB_00473db2
    POP EBP                             ; 00473db3
    POP EDI                             ; 00473db4
    POP ESI                             ; 00473db5
    POP EBX                             ; 00473db6
    RET                                 ; 00473db7
    MOV ESI,0x57eb91                    ; 00473db8 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00473db8
    MOV EDI,0x9c8                       ; 00473dbd
    PUSH 0x57eba7                       ; 00473dc2 | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01cc4800],ESI      ; 00473dc7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00473dcd | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473dd3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00473dd8
    JMP 0x00473d8f                      ; 00473ddb
        ;   XREF to: 00473d8f (UNCONDITIONAL_JUMP)  ; LAB_00473d8f

