; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004821a0(CStrList *this_ptr,int new_capacity)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   new_capacity
;
; XREF[2]:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0 at 00481fe5
;   shape_edittool.cpp_CStrList_insert_FUN_004820b0 at 004820f8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd463
;   TerminatedCString s_CStrList_allocate_Can_t_005bd479
;   TerminatedCString s_shape_edittool_cpp_005bd4a1
;   TerminatedCString s_CStrList_allocate_invali_005bd4b7
;   TerminatedCString s_shape_edittool_cpp_005bd4de
;   TerminatedCString s_CStrList_insert_out_of_m_005bd4f4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004821a0
        ;   Label: shape_edittool.cpp_CStrList_allocate_FUN_004821a0
    PUSH ESI                            ; 004821a1
    PUSH EDI                            ; 004821a2
    PUSH EBP                            ; 004821a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004821a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004821a8
    CMP ESI,dword ptr [EBX]             ; 004821ac
    JL 0x004821e2                       ; 004821ae
        ;   XREF to: 004821e2 (CONDITIONAL_JUMP)  ; LAB_004821e2
    CMP ESI,0x1                         ; 004821b0
        ;   Label: LAB_004821b0
    JGE 0x004821d8                      ; 004821b3
        ;   XREF to: 004821d8 (CONDITIONAL_JUMP)  ; LAB_004821d8
    PUSH ESI                            ; 004821b5
    MOV EBP,0x5bd4a1                    ; 004821b6 | = "..\\shape\\edittool.cpp"
    MOV EAX,0xc49                       ; 004821bb
    PUSH 0x5bd4b7                       ; 004821c0 | = "CStrList::allocate - invalid count: %d"
    MOV dword ptr [0x01d71de0],EBP      ; 004821c5 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004821cb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004821d0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004821d5
    CMP ESI,dword ptr [EBX + 0x4]       ; 004821d8
        ;   Label: LAB_004821d8
    JG 0x00482207                       ; 004821db
        ;   XREF to: 00482207 (CONDITIONAL_JUMP)  ; LAB_00482207
    POP EBP                             ; 004821dd
        ;   Label: LAB_004821dd
    POP EDI                             ; 004821de
    POP ESI                             ; 004821df
    POP EBX                             ; 004821e0
    RET                                 ; 004821e1
    MOV ECX,0x5bd463                    ; 004821e2 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004821e2
    MOV EDI,0xc48                       ; 004821e7
    PUSH 0x5bd479                       ; 004821ec | = "CStrList::allocate - Can't shrink list!"
    MOV dword ptr [0x01d71de0],ECX      ; 004821f1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004821f7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004821fd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00482202
    JMP 0x004821b0                      ; 00482205
        ;   XREF to: 004821b0 (UNCONDITIONAL_JUMP)  ; LAB_004821b0
    MOV dword ptr [EBX + 0x4],ESI       ; 00482207
        ;   Label: LAB_00482207
    LEA EAX,[ESI*0x4 + 0x0]             ; 0048220a
    PUSH EAX                            ; 00482211
    MOV ECX,dword ptr [EBX + 0x8]       ; 00482212
    PUSH ECX                            ; 00482215
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00482216
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0048221b
    MOV dword ptr [EBX + 0x8],EAX       ; 0048221e
    TEST EAX,EAX                        ; 00482221
    JNZ 0x004821dd                      ; 00482223
        ;   XREF to: 004821dd (CONDITIONAL_JUMP)  ; LAB_004821dd
    MOV EDI,0x5bd4de                    ; 00482225 | = "..\\shape\\edittool.cpp"
    MOV EBP,0xc4d                       ; 0048222a
    PUSH 0x5bd4f4                       ; 0048222f | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01d71de0],EDI      ; 00482234 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0048223a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00482240
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00482245
    POP EBP                             ; 00482248
    POP EDI                             ; 00482249
    POP ESI                             ; 0048224a
    POP EBX                             ; 0048224b
    RET                                 ; 0048224c

