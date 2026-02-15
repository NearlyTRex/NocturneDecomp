; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_init_FUN_004705a0 at 00470688
;   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 at 004703ec
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_0061e549
;   TerminatedCString s_core_dfilter_cpp_0061e55d
;   TerminatedCString s_CDemonFilter_allocMemory_0061e571
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470260
        ;   Label: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
    MOV EBX,dword ptr [ESP + 0x8]       ; 00470261
    PUSH EBX                            ; 00470265
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0 ; 00470266
        ;   XREF to: 004702c0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0047026b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0047026d
    ADD ESP,0x4                         ; 00470271
    PUSH 0x8c                           ; 00470274
    PUSH 0x61e549                       ; 00470279 | = "..\\core\\dfilter.cpp"
    PUSH EAX                            ; 0047027e
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0047027f
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470284
    MOV dword ptr [EBX + 0x48],EAX      ; 00470287
    TEST EAX,EAX                        ; 0047028a
    JZ 0x00470290                       ; 0047028c
        ;   XREF to: 00470290 (CONDITIONAL_JUMP)  ; LAB_00470290
    POP EBX                             ; 0047028e
    RET                                 ; 0047028f
    PUSH ESI                            ; 00470290
        ;   Label: LAB_00470290
    MOV EBX,0x61e55d                    ; 00470291 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 00470296
    PUSH 0x61e571                       ; 0047029b | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x02f0ca48],EBX      ; 004702a0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004702a6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004702ac
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004702b1
    POP ESI                             ; 004702b4
    POP EBX                             ; 004702b5
    RET                                 ; 004702b6

