; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_0049c160(CPickList *this_ptr,int item_index,int hotkey_code)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
; int              Stack[0xc]:4   hotkey_code
;
; XREF[3]:
;   shape_edittool.cpp_FUN_0049c290 at 0049c2d9
;   shape_edittool.cpp_FUN_0049c310 at 0049c360
;   shape_edittool.cpp_FUN_0049c470 at 0049c4dd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc76f
;   TerminatedCString s_CPickList_setItemHotKey_005dc785
;   TerminatedCString s_shape_edittool_cpp_005dc7ae
;   TerminatedCString s_Out_of_memory_005dc7c4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c160
        ;   Label: shape_edittool.cpp_CPickList_setItemHotKey_FUN_0049c160
    PUSH ESI                            ; 0049c161
    PUSH EDI                            ; 0049c162
    PUSH EBP                            ; 0049c163
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049c164
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049c168
    TEST ESI,ESI                        ; 0049c16c
    JL 0x0049c174                       ; 0049c16e
        ;   XREF to: 0049c174 (CONDITIONAL_JUMP)  ; LAB_0049c174
    CMP ESI,dword ptr [EBX]             ; 0049c170
    JL 0x0049c197                       ; 0049c172
        ;   XREF to: 0049c197 (CONDITIONAL_JUMP)  ; LAB_0049c197
    MOV ECX,0x5dc76f                    ; 0049c174 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049c174
    MOV EDI,0x1196                      ; 0049c179
    PUSH 0x5dc785                       ; 0049c17e | = "CPickList::setItemHotKey - invalid index"
    MOV dword ptr [0x01d1d400],ECX      ; 0049c183 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0049c189 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049c18f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049c194
    CMP ESI,dword ptr [EBX + 0x1b4]     ; 0049c197
        ;   Label: LAB_0049c197
    JL 0x0049c215                       ; 0049c19d
        ;   XREF to: 0049c215 (CONDITIONAL_JUMP)  ; LAB_0049c215
    CMP dword ptr [ESP + 0x1c],-0x1     ; 0049c1a3
    JZ 0x0049c222                       ; 0049c1a8
        ;   XREF to: 0049c222 (CONDITIONAL_JUMP)  ; LAB_0049c222
    MOV EAX,dword ptr [EBX]             ; 0049c1ae
    SHL EAX,0x2                         ; 0049c1b0
    PUSH EAX                            ; 0049c1b3
    MOV EDX,dword ptr [EBX + 0x1b8]     ; 0049c1b4
    PUSH EDX                            ; 0049c1ba
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 0049c1bb
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0049c1c0
    MOV dword ptr [EBX + 0x1b8],EAX     ; 0049c1c3
    TEST EAX,EAX                        ; 0049c1c9
    JZ 0x0049c1f0                       ; 0049c1cb
        ;   XREF to: 0049c1f0 (CONDITIONAL_JUMP)  ; LAB_0049c1f0
    MOV EDX,dword ptr [EBX]             ; 0049c1cd
        ;   Label: LAB_0049c1cd
    MOV EAX,dword ptr [EBX + 0x1b4]     ; 0049c1cf
    CMP EAX,EDX                         ; 0049c1d5
    JGE 0x0049c215                      ; 0049c1d7
        ;   XREF to: 0049c215 (CONDITIONAL_JUMP)  ; LAB_0049c215
    MOV EDX,EAX                         ; 0049c1d9
    MOV EAX,dword ptr [EBX + 0x1b8]     ; 0049c1db
    MOV dword ptr [EAX + EDX*0x4],0xffffffff ; 0049c1e1
    INC dword ptr [EBX + 0x1b4]         ; 0049c1e8
    JMP 0x0049c1cd                      ; 0049c1ee
        ;   XREF to: 0049c1cd (UNCONDITIONAL_JUMP)  ; LAB_0049c1cd
    MOV EDI,0x5dc7ae                    ; 0049c1f0 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049c1f0
    MOV EBP,0x119e                      ; 0049c1f5
    PUSH 0x5dc7c4                       ; 0049c1fa | = "Out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 0049c1ff | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0049c205 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049c20b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049c210
    JMP 0x0049c1cd                      ; 0049c213
        ;   XREF to: 0049c1cd (UNCONDITIONAL_JUMP)  ; LAB_0049c1cd
    MOV EAX,dword ptr [EBX + 0x1b8]     ; 0049c215
        ;   Label: LAB_0049c215
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049c21b
    MOV dword ptr [EAX + ESI*0x4],EDX   ; 0049c21f
    POP EBP                             ; 0049c222
        ;   Label: LAB_0049c222
    POP EDI                             ; 0049c223
    POP ESI                             ; 0049c224
    POP EBX                             ; 0049c225
    RET                                 ; 0049c226

