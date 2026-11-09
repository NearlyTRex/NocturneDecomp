; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004820b0(CStrList *this_ptr,int insert_index,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   insert_index
; char *           Stack[0xc]:4   string_data
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00484e30 at 00484e42
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd3f5
;   TerminatedCString s_CStrList_insert_invalid_005bd40b
;   TerminatedCString s_shape_edittool_cpp_005bd42c
;   TerminatedCString s_CStrList_insert_out_of_m_005bd442
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_FUN_005a3650
;   shape_edittool.cpp_CStrList_allocate_FUN_004821a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004820b0
        ;   Label: shape_edittool.cpp_CStrList_insert_FUN_004820b0
    PUSH ESI                            ; 004820b1
    PUSH EDI                            ; 004820b2
    PUSH EBP                            ; 004820b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004820b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004820b8
    TEST EBP,EBP                        ; 004820bc
    JL 0x004820c4                       ; 004820be
        ;   XREF to: 004820c4 (CONDITIONAL_JUMP)  ; LAB_004820c4
    CMP EBP,dword ptr [EBX]             ; 004820c0
    JLE 0x004820e7                      ; 004820c2
        ;   XREF to: 004820e7 (CONDITIONAL_JUMP)  ; LAB_004820e7
    MOV ECX,0x5bd3f5                    ; 004820c4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004820c4
    MOV ESI,0xc2e                       ; 004820c9
    PUSH 0x5bd40b                       ; 004820ce | = "CStrList::insert - invalid index"
    MOV dword ptr [0x01d71de0],ECX      ; 004820d3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004820d9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004820df
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004820e4
    MOV EDI,dword ptr [EBX]             ; 004820e7
        ;   Label: LAB_004820e7
    INC EDI                             ; 004820e9
    MOV EDX,dword ptr [EBX + 0x4]       ; 004820ea
    MOV dword ptr [EBX],EDI             ; 004820ed
    CMP EDI,EDX                         ; 004820ef
    JLE 0x00482100                      ; 004820f1
        ;   XREF to: 00482100 (CONDITIONAL_JUMP)  ; LAB_00482100
    LEA EAX,[EDI + 0x14]                ; 004820f3
    PUSH EAX                            ; 004820f6
    PUSH EBX                            ; 004820f7
    CALL shape_edittool.cpp_CStrList_allocate_FUN_004821a0 ; 004820f8
        ;   XREF to: 004821a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_004821a0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 004820fd
    MOV EAX,dword ptr [EBX]             ; 00482100
        ;   Label: LAB_00482100
    SUB EAX,EBP                         ; 00482102
    SHL EAX,0x2                         ; 00482104
    SUB EAX,0x4                         ; 00482107
    LEA ESI,[EBP*0x4 + 0x0]             ; 0048210a
    PUSH EAX                            ; 00482111
    MOV EAX,dword ptr [EBX + 0x8]       ; 00482112
    LEA ECX,[EAX + ESI*0x1]             ; 00482115
    PUSH ECX                            ; 00482118
    LEA ECX,[ESI + 0x4]                 ; 00482119
    ADD EAX,ECX                         ; 0048211c
    PUSH EAX                            ; 0048211e
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048211f
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00482124
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00482127
    SUB ECX,ECX                         ; 0048212b
    DEC ECX                             ; 0048212d
    XOR EAX,EAX                         ; 0048212e
    SCASB.REPNE ES:EDI                  ; 00482130
    NOT ECX                             ; 00482132
    DEC ECX                             ; 00482134
    INC ECX                             ; 00482135
    PUSH ECX                            ; 00482136
    CALL crt_unknown.c_FUN_005a3650     ; 00482137
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    MOV ECX,dword ptr [EBX + 0x8]       ; 0048213c
    MOV dword ptr [ECX + ESI*0x1],EAX   ; 0048213f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00482142
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 00482145
    ADD ESP,0x4                         ; 00482148
    TEST ECX,ECX                        ; 0048214b
    JZ 0x00482178                       ; 0048214d
        ;   XREF to: 00482178 (CONDITIONAL_JUMP)  ; LAB_00482178
    MOV EDI,dword ptr [EBX + 0x8]       ; 0048214f
        ;   Label: LAB_0048214f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482152
    MOV EDI,dword ptr [EDI + EBP*0x4]   ; 00482156
    PUSH EDI                            ; 00482159
    MOV AL,byte ptr [ESI]               ; 0048215a
        ;   Label: LAB_0048215a
    MOV byte ptr [EDI],AL               ; 0048215c
    CMP AL,0x0                          ; 0048215e
    JZ 0x00482172                       ; 00482160
        ;   XREF to: 00482172 (CONDITIONAL_JUMP)  ; LAB_00482172
    MOV AL,byte ptr [ESI + 0x1]         ; 00482162
    ADD ESI,0x2                         ; 00482165
    MOV byte ptr [EDI + 0x1],AL         ; 00482168
    ADD EDI,0x2                         ; 0048216b
    CMP AL,0x0                          ; 0048216e
    JNZ 0x0048215a                      ; 00482170
        ;   XREF to: 0048215a (CONDITIONAL_JUMP)  ; LAB_0048215a
    POP EDI                             ; 00482172
        ;   Label: LAB_00482172
    POP EBP                             ; 00482173
    POP EDI                             ; 00482174
    POP ESI                             ; 00482175
    POP EBX                             ; 00482176
    RET                                 ; 00482177
    MOV ESI,0x5bd42c                    ; 00482178 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00482178
    MOV EDI,0xc3c                       ; 0048217d
    PUSH 0x5bd442                       ; 00482182 | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01d71de0],ESI      ; 00482187 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0048218d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00482193
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00482198
    JMP 0x0048214f                      ; 0048219b
        ;   XREF to: 0048214f (UNCONDITIONAL_JUMP)  ; LAB_0048214f

