; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   new_capacity
;
; XREF[3]:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00499420 at 00499445
;   shape_edittool.cpp_CStrList_insertRange_FUN_004996b0 at 004996c4
;   shape_edittool.cpp_CStrList_insert_FUN_00499510 at 00499558
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc3a6
;   TerminatedCString s_CStrList_allocate_Can_t_005dc3bc
;   TerminatedCString s_shape_edittool_cpp_005dc3e4
;   TerminatedCString s_CStrList_allocate_invali_005dc3fa
;   TerminatedCString s_shape_edittool_cpp_005dc421
;   TerminatedCString s_CStrList_insert_out_of_m_005dc437
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499600
        ;   Label: shape_edittool.cpp_CStrList_allocate_FUN_00499600
    PUSH ESI                            ; 00499601
    PUSH EDI                            ; 00499602
    PUSH EBP                            ; 00499603
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499604
    MOV ESI,dword ptr [ESP + 0x18]      ; 00499608
    CMP ESI,dword ptr [EBX]             ; 0049960c
    JL 0x00499642                       ; 0049960e
        ;   XREF to: 00499642 (CONDITIONAL_JUMP)  ; LAB_00499642
    CMP ESI,0x1                         ; 00499610
        ;   Label: LAB_00499610
    JGE 0x00499638                      ; 00499613
        ;   XREF to: 00499638 (CONDITIONAL_JUMP)  ; LAB_00499638
    PUSH ESI                            ; 00499615
    MOV EBP,0x5dc3e4                    ; 00499616 | = "..\\shape\\edittool.cpp"
    MOV EAX,0xc46                       ; 0049961b
    PUSH 0x5dc3fa                       ; 00499620 | = "CStrList::allocate - invalid count: %d"
    MOV dword ptr [0x01d1d400],EBP      ; 00499625 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0049962b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00499630
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00499635
    CMP ESI,dword ptr [EBX + 0x4]       ; 00499638
        ;   Label: LAB_00499638
    JG 0x00499667                       ; 0049963b
        ;   XREF to: 00499667 (CONDITIONAL_JUMP)  ; LAB_00499667
    POP EBP                             ; 0049963d
        ;   Label: LAB_0049963d
    POP EDI                             ; 0049963e
    POP ESI                             ; 0049963f
    POP EBX                             ; 00499640
    RET                                 ; 00499641
    MOV ECX,0x5dc3a6                    ; 00499642 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00499642
    MOV EDI,0xc45                       ; 00499647
    PUSH 0x5dc3bc                       ; 0049964c | = "CStrList::allocate - Can't shrink list!"
    MOV dword ptr [0x01d1d400],ECX      ; 00499651 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499657 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049965d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00499662
    JMP 0x00499610                      ; 00499665
        ;   XREF to: 00499610 (UNCONDITIONAL_JUMP)  ; LAB_00499610
    MOV dword ptr [EBX + 0x4],ESI       ; 00499667
        ;   Label: LAB_00499667
    LEA EAX,[ESI*0x4 + 0x0]             ; 0049966a
    PUSH EAX                            ; 00499671
    MOV ECX,dword ptr [EBX + 0x8]       ; 00499672
    PUSH ECX                            ; 00499675
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00499676
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0049967b
    MOV dword ptr [EBX + 0x8],EAX       ; 0049967e
    TEST EAX,EAX                        ; 00499681
    JNZ 0x0049963d                      ; 00499683
        ;   XREF to: 0049963d (CONDITIONAL_JUMP)  ; LAB_0049963d
    MOV EDI,0x5dc421                    ; 00499685 | = "..\\shape\\edittool.cpp"
    MOV EBP,0xc4a                       ; 0049968a
    PUSH 0x5dc437                       ; 0049968f | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 00499694 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0049969a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004996a0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004996a5
    POP EBP                             ; 004996a8
    POP EDI                             ; 004996a9
    POP ESI                             ; 004996aa
    POP EBX                             ; 004996ab
    RET                                 ; 004996ac

