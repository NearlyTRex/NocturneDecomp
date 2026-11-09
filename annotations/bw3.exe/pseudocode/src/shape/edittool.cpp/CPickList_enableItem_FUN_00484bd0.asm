; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(CPickList *this_ptr,int item_index,int enable_flag)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
; int              Stack[0xc]:4   enable_flag
;
; XREF[4]:
;   core_game.cpp_FUN_004b7f90 at 004b89c6
;   shape_edittool.cpp_FUN_00484e30 at 00484e64
;   shape_edittool.cpp_FUN_00484eb0 at 00484eea
;   shape_edittool.cpp_FUN_00485010 at 00485048
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd78d
;   TerminatedCString s_CPickList_enableItem_inv_005bd7a3
;   TerminatedCString s_shape_edittool_cpp_005bd7c9
;   TerminatedCString s_Out_of_memory_005bd7df
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484bd0
        ;   Label: shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0
    PUSH ESI                            ; 00484bd1
    PUSH EDI                            ; 00484bd2
    PUSH EBP                            ; 00484bd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00484bd4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00484bd8
    TEST ESI,ESI                        ; 00484bdc
    JL 0x00484be4                       ; 00484bde
        ;   XREF to: 00484be4 (CONDITIONAL_JUMP)  ; LAB_00484be4
    CMP ESI,dword ptr [EBX]             ; 00484be0
    JL 0x00484c07                       ; 00484be2
        ;   XREF to: 00484c07 (CONDITIONAL_JUMP)  ; LAB_00484c07
    MOV ECX,0x5bd78d                    ; 00484be4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00484be4
    MOV EDI,0x116f                      ; 00484be9
    PUSH 0x5bd7a3                       ; 00484bee | = "CPickList::enableItem - invalid index"
    MOV dword ptr [0x01d71de0],ECX      ; 00484bf3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00484bf9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00484bff
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00484c04
    CMP ESI,dword ptr [EBX + 0x1ac]     ; 00484c07
        ;   Label: LAB_00484c07
    JL 0x00484c83                       ; 00484c0d
        ;   XREF to: 00484c83 (CONDITIONAL_JUMP)  ; LAB_00484c83
    CMP dword ptr [ESP + 0x1c],0x0      ; 00484c13
    JNZ 0x00484c99                      ; 00484c18
        ;   XREF to: 00484c99 (CONDITIONAL_JUMP)  ; LAB_00484c99
    MOV EAX,dword ptr [EBX]             ; 00484c1e
    SHL EAX,0x2                         ; 00484c20
    PUSH EAX                            ; 00484c23
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00484c24
    PUSH EDX                            ; 00484c2a
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00484c2b
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00484c30
    MOV dword ptr [EBX + 0x1b0],EAX     ; 00484c33
    TEST EAX,EAX                        ; 00484c39
    JZ 0x00484c5e                       ; 00484c3b
        ;   XREF to: 00484c5e (CONDITIONAL_JUMP)  ; LAB_00484c5e
    MOV EDX,dword ptr [EBX]             ; 00484c3d
        ;   Label: LAB_00484c3d
    MOV EAX,dword ptr [EBX + 0x1ac]     ; 00484c3f
    CMP EAX,EDX                         ; 00484c45
    JGE 0x00484c83                      ; 00484c47
        ;   XREF to: 00484c83 (CONDITIONAL_JUMP)  ; LAB_00484c83
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00484c49
    MOV dword ptr [EDX + EAX*0x4],0x1   ; 00484c4f
    INC dword ptr [EBX + 0x1ac]         ; 00484c56
    JMP 0x00484c3d                      ; 00484c5c
        ;   XREF to: 00484c3d (UNCONDITIONAL_JUMP)  ; LAB_00484c3d
    MOV EDI,0x5bd7c9                    ; 00484c5e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00484c5e
    MOV EBP,0x1177                      ; 00484c63
    PUSH 0x5bd7df                       ; 00484c68 | = "Out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 00484c6d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00484c73 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00484c79
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00484c7e
    JMP 0x00484c3d                      ; 00484c81
        ;   XREF to: 00484c3d (UNCONDITIONAL_JUMP)  ; LAB_00484c3d
    CMP dword ptr [ESP + 0x1c],0x0      ; 00484c83
        ;   Label: LAB_00484c83
    SETNZ AL                            ; 00484c88
    MOV EDX,dword ptr [EBX + 0x1b0]     ; 00484c8b
    AND EAX,0xff                        ; 00484c91
    MOV dword ptr [EDX + ESI*0x4],EAX   ; 00484c96
    POP EBP                             ; 00484c99
        ;   Label: LAB_00484c99
    POP EDI                             ; 00484c9a
    POP ESI                             ; 00484c9b
    POP EBX                             ; 00484c9c
    RET                                 ; 00484c9d

