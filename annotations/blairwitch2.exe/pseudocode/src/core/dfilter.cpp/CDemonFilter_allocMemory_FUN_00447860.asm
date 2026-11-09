; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0 at 00447bb8
;   core_dfilter.cpp_CDemonFilter_load_FUN_004478d0 at 004479c2
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005ceb2b
;   TerminatedCString s_CDemonFilter_allocMemory_005ceb3f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447860
        ;   Label: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447861
    PUSH EBX                            ; 00447865
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0 ; 00447866
        ;   XREF to: 004478b0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0044786b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0044786d
    ADD ESP,0x4                         ; 00447871
    PUSH EAX                            ; 00447874
    CALL crt_unknown.c_FUN_005b8580     ; 00447875
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0044787a
    MOV dword ptr [EBX + 0x48],EAX      ; 0044787d
    TEST EAX,EAX                        ; 00447880
    JZ 0x00447886                       ; 00447882
        ;   XREF to: 00447886 (CONDITIONAL_JUMP)  ; LAB_00447886
    POP EBX                             ; 00447884
    RET                                 ; 00447885
    PUSH ESI                            ; 00447886
        ;   Label: LAB_00447886
    MOV EBX,0x5ceb2b                    ; 00447887 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 0044788c
    PUSH 0x5ceb3f                       ; 00447891 | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x01d046a0],EBX      ; 00447896 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044789c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004478a2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004478a7
    POP ESI                             ; 004478aa
    POP EBX                             ; 004478ab
    RET                                 ; 004478ac

