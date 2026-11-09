; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860 at 00447866
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_00447840 at 00447846
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004478b0
        ;   Label: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004478b1
    MOV EDX,dword ptr [EBX + 0x48]      ; 004478b5
    TEST EDX,EDX                        ; 004478b8
    JNZ 0x004478be                      ; 004478ba
        ;   XREF to: 004478be (CONDITIONAL_JUMP)  ; LAB_004478be
    POP EBX                             ; 004478bc
    RET                                 ; 004478bd
    PUSH EDX                            ; 004478be
        ;   Label: LAB_004478be
    CALL crt_unknown.c_FUN_005b86a0     ; 004478bf
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004478c4
    MOV dword ptr [EBX + 0x48],0x0      ; 004478c7
    POP EBX                             ; 004478ce
    RET                                 ; 004478cf

