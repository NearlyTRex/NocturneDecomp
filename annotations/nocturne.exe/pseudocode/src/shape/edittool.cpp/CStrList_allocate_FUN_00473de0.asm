; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00473de0(CStrList *this_ptr,int new_capacity)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   new_capacity
;
; XREF[3]:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00 at 00473c25
;   shape_edittool.cpp_CStrList_insertRange_FUN_00473e90 at 00473ea4
;   shape_edittool.cpp_CStrList_insert_FUN_00473cf0 at 00473d38
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ebc8
;   TerminatedCString s_CStrList_allocate_Can_t_0057ebde
;   TerminatedCString s_shape_edittool_cpp_0057ec06
;   TerminatedCString s_CStrList_allocate_invali_0057ec1c
;   TerminatedCString s_shape_edittool_cpp_0057ec43
;   TerminatedCString s_CStrList_insert_out_of_m_0057ec59
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_realloc_FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473de0
        ;   Label: shape_edittool.cpp_CStrList_allocate_FUN_00473de0
    PUSH ESI                            ; 00473de1
    PUSH EDI                            ; 00473de2
    PUSH EBP                            ; 00473de3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00473de4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00473de8
    CMP ESI,dword ptr [EBX]             ; 00473dec
    JL 0x00473e22                       ; 00473dee
        ;   XREF to: 00473e22 (CONDITIONAL_JUMP)  ; LAB_00473e22
    CMP ESI,0x1                         ; 00473df0
        ;   Label: LAB_00473df0
    JGE 0x00473e18                      ; 00473df3
        ;   XREF to: 00473e18 (CONDITIONAL_JUMP)  ; LAB_00473e18
    PUSH ESI                            ; 00473df5
    MOV EBP,0x57ec06                    ; 00473df6 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x9d5                       ; 00473dfb
    PUSH 0x57ec1c                       ; 00473e00 | = "CStrList::allocate - invalid count: %d"
    MOV dword ptr [0x01cc4800],EBP      ; 00473e05 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00473e0b | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473e10
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00473e15
    CMP ESI,dword ptr [EBX + 0x4]       ; 00473e18
        ;   Label: LAB_00473e18
    JG 0x00473e47                       ; 00473e1b
        ;   XREF to: 00473e47 (CONDITIONAL_JUMP)  ; LAB_00473e47
    POP EBP                             ; 00473e1d
        ;   Label: LAB_00473e1d
    POP EDI                             ; 00473e1e
    POP ESI                             ; 00473e1f
    POP EBX                             ; 00473e20
    RET                                 ; 00473e21
    MOV ECX,0x57ebc8                    ; 00473e22 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00473e22
    MOV EDI,0x9d4                       ; 00473e27
    PUSH 0x57ebde                       ; 00473e2c | = "CStrList::allocate - Can't shrink list!"
    MOV dword ptr [0x01cc4800],ECX      ; 00473e31 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00473e37 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473e3d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00473e42
    JMP 0x00473df0                      ; 00473e45
        ;   XREF to: 00473df0 (UNCONDITIONAL_JUMP)  ; LAB_00473df0
    MOV dword ptr [EBX + 0x4],ESI       ; 00473e47
        ;   Label: LAB_00473e47
    LEA EAX,[ESI*0x4 + 0x0]             ; 00473e4a
    PUSH EAX                            ; 00473e51
    MOV ECX,dword ptr [EBX + 0x8]       ; 00473e52
    PUSH ECX                            ; 00473e55
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00473e56
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00473e5b
    MOV dword ptr [EBX + 0x8],EAX       ; 00473e5e
    TEST EAX,EAX                        ; 00473e61
    JNZ 0x00473e1d                      ; 00473e63
        ;   XREF to: 00473e1d (CONDITIONAL_JUMP)  ; LAB_00473e1d
    MOV EDI,0x57ec43                    ; 00473e65 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x9d9                       ; 00473e6a
    PUSH 0x57ec59                       ; 00473e6f | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01cc4800],EDI      ; 00473e74 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00473e7a | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473e80
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00473e85
    POP EBP                             ; 00473e88
    POP EDI                             ; 00473e89
    POP ESI                             ; 00473e8a
    POP EBX                             ; 00473e8b
    RET                                 ; 00473e8c

