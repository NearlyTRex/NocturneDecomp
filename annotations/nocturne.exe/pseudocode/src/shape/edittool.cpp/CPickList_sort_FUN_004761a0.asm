; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004761a0(CPickList *this_ptr,int sort_type,int sort_order)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sort_type
; int              Stack[0xc]:4   sort_order
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00470730 at 0047099c
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057efb6
;   TerminatedCString s_CPickList_sort_can_t_do_0057efcc
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   shape_edittool.cpp_CStrList_sort_FUN_00474010
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004761a0
        ;   Label: shape_edittool.cpp_CPickList_sort_FUN_004761a0
    PUSH EDI                            ; 004761a1
    PUSH EBP                            ; 004761a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004761a3
    CMP dword ptr [EAX + 0x130],0x0     ; 004761a7
    JG 0x004761cb                       ; 004761ae
        ;   XREF to: 004761cb (CONDITIONAL_JUMP)  ; LAB_004761cb
    MOV ESI,dword ptr [ESP + 0x18]      ; 004761b0
        ;   Label: LAB_004761b0
    PUSH ESI                            ; 004761b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004761b5
    PUSH EDI                            ; 004761b9
    MOV EBP,dword ptr [ESP + 0x18]      ; 004761ba
    PUSH EBP                            ; 004761be
    CALL shape_edittool.cpp_CStrList_sort_FUN_00474010 ; 004761bf
        ;   XREF to: 00474010 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_00474010(CStrList * this_ptr, int sort_type, int sort_order)
    ADD ESP,0xc                         ; 004761c4
    POP EBP                             ; 004761c7
    POP EDI                             ; 004761c8
    POP ESI                             ; 004761c9
    RET                                 ; 004761ca
    PUSH EBX                            ; 004761cb
        ;   Label: LAB_004761cb
    MOV ECX,0x57efb6                    ; 004761cc | = "..\\shape\\edittool.cpp"
    MOV EBX,0xe30                       ; 004761d1
    PUSH 0x57efcc                       ; 004761d6 | = "CPickList::sort - can't do this after..."
    MOV dword ptr [0x01cc4800],ECX      ; 004761db | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004761e1 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004761e7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004761ec
    POP EBX                             ; 004761ef
    JMP 0x004761b0                      ; 004761f0
        ;   XREF to: 004761b0 (UNCONDITIONAL_JUMP)  ; LAB_004761b0

