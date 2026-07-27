; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(int *param_1)
;
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_init_FUN_0044c190 at 0044c278
;   core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90 at 0044c082
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_0057bee0
;   TerminatedCString s_CDemonFilter_allocMemory_0057bef4
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bf20
        ;   Label: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bf21
    PUSH EBX                            ; 0044bf25
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70 ; 0044bf26
        ;   XREF to: 0044bf70 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70()
    MOV EAX,dword ptr [EBX]             ; 0044bf2b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0044bf2d
    ADD ESP,0x4                         ; 0044bf31
    PUSH EAX                            ; 0044bf34
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044bf35
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 0044bf3a
    MOV dword ptr [EBX + 0x48],EAX      ; 0044bf3d
    TEST EAX,EAX                        ; 0044bf40
    JZ 0x0044bf46                       ; 0044bf42
        ;   XREF to: 0044bf46 (CONDITIONAL_JUMP)  ; LAB_0044bf46
    POP EBX                             ; 0044bf44
    RET                                 ; 0044bf45
    PUSH ESI                            ; 0044bf46
        ;   Label: LAB_0044bf46
    MOV EBX,0x57bee0                    ; 0044bf47 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 0044bf4c
    PUSH 0x57bef4                       ; 0044bf51 | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x01cc4800],EBX      ; 0044bf56 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044bf5c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044bf62
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0044bf67
    POP ESI                             ; 0044bf6a
    POP EBX                             ; 0044bf6b
    RET                                 ; 0044bf6c

