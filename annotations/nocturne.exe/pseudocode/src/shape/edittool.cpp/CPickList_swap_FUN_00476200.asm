; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_swap_FUN_00476200(CPickList *this_ptr,int index1,int index2)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index1
; int              Stack[0xc]:4   index2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057f012
;   TerminatedCString s_CPickList_swap_can_t_do_0057f028
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   shape_edittool.cpp_CStrList_swap_FUN_00474300
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00476200
        ;   Label: shape_edittool.cpp_CPickList_swap_FUN_00476200
    PUSH EDI                            ; 00476201
    PUSH EBP                            ; 00476202
    MOV EAX,dword ptr [ESP + 0x10]      ; 00476203
    CMP dword ptr [EAX + 0x130],0x0     ; 00476207
    JG 0x0047622b                       ; 0047620e
        ;   XREF to: 0047622b (CONDITIONAL_JUMP)  ; LAB_0047622b
    MOV ESI,dword ptr [ESP + 0x18]      ; 00476210
        ;   Label: LAB_00476210
    PUSH ESI                            ; 00476214
    MOV EDI,dword ptr [ESP + 0x18]      ; 00476215
    PUSH EDI                            ; 00476219
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047621a
    PUSH EBP                            ; 0047621e
    CALL shape_edittool.cpp_CStrList_swap_FUN_00474300 ; 0047621f
        ;   XREF to: 00474300 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_swap_FUN_00474300(CStrList * this_ptr, int index1, int index2)
    ADD ESP,0xc                         ; 00476224
    POP EBP                             ; 00476227
    POP EDI                             ; 00476228
    POP ESI                             ; 00476229
    RET                                 ; 0047622a
    PUSH EBX                            ; 0047622b
        ;   Label: LAB_0047622b
    MOV ECX,0x57f012                    ; 0047622c | = "..\\shape\\edittool.cpp"
    MOV EBX,0xe35                       ; 00476231
    PUSH 0x57f028                       ; 00476236 | = "CPickList::swap - can't do this after..."
    MOV dword ptr [0x01cc4800],ECX      ; 0047623b | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00476241 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00476247
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0047624c
    POP EBX                             ; 0047624f
    JMP 0x00476210                      ; 00476250
        ;   XREF to: 00476210 (UNCONDITIONAL_JUMP)  ; LAB_00476210

