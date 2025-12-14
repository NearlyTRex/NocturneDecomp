; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CFilterCache_free_FUN_00470000(CFilterCache * this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0 at 0046ffe6
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056aa46
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_0061e49e
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470000
        ;   Label: core_dfilter.cpp_CFilterCache_free_FUN_00470000
    PUSH ESI                            ; 00470001
    PUSH EDI                            ; 00470002
    PUSH EBP                            ; 00470003
    MOV EDI,dword ptr [ESP + 0x14]      ; 00470004
    MOV EDX,dword ptr [EDI]             ; 00470008
    XOR ESI,ESI                         ; 0047000a
    TEST EDX,EDX                        ; 0047000c
    JLE 0x0047003b                      ; 0047000e
        ;   XREF to: 0047003b (CONDITIONAL_JUMP)  ; LAB_0047003b
    MOV EBP,0x61e49e                    ; 00470010 | = "..\\core\\dfilter.cpp"
    MOV EBX,EDI                         ; 00470015
    MOV dword ptr [0x02f0d944],0x4b     ; 00470017 | g_CurrentDebugLine
        ;   Label: LAB_00470017
    MOV EAX,dword ptr [EBX + 0xa04]     ; 00470021
    MOV dword ptr [0x0067d20c],EBP      ; 00470027 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 0047002d
    JNZ 0x00470046                      ; 0047002f
        ;   XREF to: 00470046 (CONDITIONAL_JUMP)  ; LAB_00470046
    INC ESI                             ; 00470031
        ;   Label: LAB_00470031
    MOV ECX,dword ptr [EDI]             ; 00470032
    ADD EBX,0x4                         ; 00470034
    CMP ESI,ECX                         ; 00470037
    JL 0x00470017                       ; 00470039
        ;   XREF to: 00470017 (CONDITIONAL_JUMP)  ; LAB_00470017
    MOV dword ptr [EDI],0x0             ; 0047003b
        ;   Label: LAB_0047003b
    POP EBP                             ; 00470041
    POP EDI                             ; 00470042
    POP ESI                             ; 00470043
    POP EBX                             ; 00470044
    RET                                 ; 00470045
    PUSH 0x0                            ; 00470046
        ;   Label: LAB_00470046
    PUSH EAX                            ; 00470048
    CALL core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240 ; 00470049
        ;   XREF to: 00470240 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter * this_ptr)
    ADD ESP,0x8                         ; 0047004e
    PUSH EAX                            ; 00470051
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00470052
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00470057
    JMP 0x00470031                      ; 0047005a
        ;   XREF to: 00470031 (UNCONDITIONAL_JUMP)  ; LAB_00470031

