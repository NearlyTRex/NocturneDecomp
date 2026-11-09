; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_00499a50(CStrList *this_ptr,int index,char *new_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   new_string
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00494690 at 004947db
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc4c5
;   TerminatedCString s_CStrList_set_invalid_ind_005dc4db
;   undefined1 DAT_005dc4f9
;   TerminatedCString s_shape_edittool_cpp_005dc4fa
;   undefined4 s_shape_edittool_cpp_005dc4fa+1
;   undefined4 s_shape_edittool_cpp_005dc4fa+2
;   TerminatedCString s_CStrList_set_out_of_memo_005dc510
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499a50
        ;   Label: shape_edittool.cpp_CStrList_setStringAt_FUN_00499a50
    PUSH ESI                            ; 00499a51
    PUSH EDI                            ; 00499a52
    PUSH EBP                            ; 00499a53
    MOV EBP,dword ptr [ESP + 0x14]      ; 00499a54
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00499a58
    MOV EDX,dword ptr [ESP + 0x18]      ; 00499a5c
    TEST EDX,EDX                        ; 00499a60
    JL 0x00499a69                       ; 00499a62
        ;   XREF to: 00499a69 (CONDITIONAL_JUMP)  ; LAB_00499a69
    CMP EDX,dword ptr [EBP]             ; 00499a64
    JL 0x00499a8c                       ; 00499a67
        ;   XREF to: 00499a8c (CONDITIONAL_JUMP)  ; LAB_00499a8c
    MOV EBX,0x5dc4c5                    ; 00499a69 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00499a69
    MOV EDI,0xd0c                       ; 00499a6e
    PUSH 0x5dc4db                       ; 00499a73 | = "CStrList::set - invalid index"
    MOV dword ptr [0x01d1d400],EBX      ; 00499a78 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499a7e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00499a84
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00499a89
    TEST ESI,ESI                        ; 00499a8c
        ;   Label: LAB_00499a8c
    JNZ 0x00499a95                      ; 00499a8e
        ;   XREF to: 00499a95 (CONDITIONAL_JUMP)  ; LAB_00499a95
    MOV ESI,0x5dc4f9                    ; 00499a90 | DAT_005dc4f9
    MOV EDI,ESI                         ; 00499a95
        ;   Label: LAB_00499a95
    MOV EBX,dword ptr [ESP + 0x18]      ; 00499a97
    SUB ECX,ECX                         ; 00499a9b
    DEC ECX                             ; 00499a9d
    XOR EAX,EAX                         ; 00499a9e
    SCASB.REPNE ES:EDI                  ; 00499aa0 | DAT_005dc4f9 | = "..\\shape\\edittool.cpp"
    NOT ECX                             ; 00499aa2
    DEC ECX                             ; 00499aa4
    INC ECX                             ; 00499aa5
    MOV EAX,dword ptr [EBP + 0x8]       ; 00499aa6
    PUSH ECX                            ; 00499aa9
    MOV EDX,dword ptr [EAX + EBX*0x4]   ; 00499aaa
    PUSH EDX                            ; 00499aad
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00499aae
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV ECX,dword ptr [EBP + 0x8]       ; 00499ab3
    MOV dword ptr [ECX + EBX*0x4],EAX   ; 00499ab6
    MOV EAX,dword ptr [EBP + 0x8]       ; 00499ab9
    MOV ECX,dword ptr [EAX + EBX*0x4]   ; 00499abc
    ADD ESP,0x8                         ; 00499abf
    TEST ECX,ECX                        ; 00499ac2
    JZ 0x00499aef                       ; 00499ac4
        ;   XREF to: 00499aef (CONDITIONAL_JUMP)  ; LAB_00499aef
    MOV ECX,dword ptr [ESP + 0x18]      ; 00499ac6
        ;   Label: LAB_00499ac6
    MOV EAX,dword ptr [EBP + 0x8]       ; 00499aca
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00499acd
    PUSH EDI                            ; 00499ad0
    MOV AL,byte ptr [ESI]               ; 00499ad1 | DAT_005dc4f9 | s_shape_edittool_cpp_005dc4fa+1
        ;   Label: LAB_00499ad1
    MOV byte ptr [EDI],AL               ; 00499ad3
    CMP AL,0x0                          ; 00499ad5
    JZ 0x00499ae9                       ; 00499ad7
        ;   XREF to: 00499ae9 (CONDITIONAL_JUMP)  ; LAB_00499ae9
    MOV AL,byte ptr [ESI + 0x1]         ; 00499ad9 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_005dc4fa+2
    ADD ESI,0x2                         ; 00499adc
    MOV byte ptr [EDI + 0x1],AL         ; 00499adf
    ADD EDI,0x2                         ; 00499ae2
    CMP AL,0x0                          ; 00499ae5
    JNZ 0x00499ad1                      ; 00499ae7
        ;   XREF to: 00499ad1 (CONDITIONAL_JUMP)  ; LAB_00499ad1
    POP EDI                             ; 00499ae9
        ;   Label: LAB_00499ae9
    POP EBP                             ; 00499aea
    POP EDI                             ; 00499aeb
    POP ESI                             ; 00499aec
    POP EBX                             ; 00499aed
    RET                                 ; 00499aee
    MOV EBX,0x5dc4fa                    ; 00499aef | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00499aef
    MOV EDI,0xd15                       ; 00499af4
    PUSH 0x5dc510                       ; 00499af9 | = "CStrList::set - out of memory!"
    MOV dword ptr [0x01d1d400],EBX      ; 00499afe | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499b04 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00499b0a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00499b0f
    JMP 0x00499ac6                      ; 00499b12
        ;   XREF to: 00499ac6 (UNCONDITIONAL_JUMP)  ; LAB_00499ac6

