; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004822b0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dpart.cpp_CDemonPart_alloc_FUN_00482180 at 00482191
;   core_dpart.cpp_CDemonPart_dtor_FUN_00482160 at 00482166
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 at 00482e79
;
; Referenced Globals:
;   TerminatedCString s_core_dpart_cpp_00621741
;   TerminatedCString s_core_dpart_cpp_00621753
;   TerminatedCString s_core_dpart_cpp_00621765
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004822b0
        ;   Label: core_dpart.cpp_CDemonPart_free_FUN_004822b0
    PUSH ESI                            ; 004822b1
    PUSH EBP                            ; 004822b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004822b3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004822b7
    TEST EDX,EDX                        ; 004822ba
    JNZ 0x004822ea                      ; 004822bc
        ;   XREF to: 004822ea (CONDITIONAL_JUMP)  ; LAB_004822ea
    MOV ESI,dword ptr [EBX + 0x34]      ; 004822be
        ;   Label: LAB_004822be
    TEST ESI,ESI                        ; 004822c1
    JZ 0x004822df                       ; 004822c3
        ;   XREF to: 004822df (CONDITIONAL_JUMP)  ; LAB_004822df
    PUSH 0xae                           ; 004822c5
    PUSH 0x621753                       ; 004822ca | = "..\\core\\dpart.cpp"
    PUSH ESI                            ; 004822cf
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004822d0
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004822d5
    MOV dword ptr [EBX + 0x34],0x0      ; 004822d8
    MOV EBP,dword ptr [EBX + 0x30]      ; 004822df
        ;   Label: LAB_004822df
    TEST EBP,EBP                        ; 004822e2
    JNZ 0x00482306                      ; 004822e4
        ;   XREF to: 00482306 (CONDITIONAL_JUMP)  ; LAB_00482306
    POP EBP                             ; 004822e6
    POP ESI                             ; 004822e7
    POP EBX                             ; 004822e8
    RET                                 ; 004822e9
    PUSH 0xa9                           ; 004822ea
        ;   Label: LAB_004822ea
    PUSH 0x621741                       ; 004822ef | = "..\\core\\dpart.cpp"
    PUSH EDX                            ; 004822f4
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004822f5
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004822fa
    MOV dword ptr [EBX + 0x2c],0x0      ; 004822fd
    JMP 0x004822be                      ; 00482304
        ;   XREF to: 004822be (UNCONDITIONAL_JUMP)  ; LAB_004822be
    PUSH 0xb3                           ; 00482306
        ;   Label: LAB_00482306
    PUSH 0x621765                       ; 0048230b | = "..\\core\\dpart.cpp"
    PUSH EBP                            ; 00482310
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00482311
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00482316
    MOV dword ptr [EBX + 0x30],0x0      ; 00482319
    POP EBP                             ; 00482320
    POP ESI                             ; 00482321
    POP EBX                             ; 00482322
    RET                                 ; 00482323

