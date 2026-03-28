; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500(CColorQuantizer *this_ptr,int num_entries)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_entries
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 at 0055619c
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640c73
;   TerminatedCString s_shape_quantize_cpp_00640c89
;   TerminatedCString s_shape_quantize_cpp_00640c9f
;   TerminatedCString s_shape_quantize_cpp_00640cb5
;   TerminatedCString s_shape_quantize_cpp_00640ccb
;   TerminatedCString s_shape_quantize_cpp_00640ce1
;   TerminatedCString s_shape_quantize_cpp_00640cf7
;   TerminatedCString s_shape_quantize_cpp_00640d0d
;   TerminatedCString s_shape_quantize_cpp_00640d23
;   TerminatedCString s_shape_quantize_cpp_00640d39
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555500
        ;   Label: shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
    PUSH ESI                            ; 00555501
    PUSH EDI                            ; 00555502
    PUSH EBP                            ; 00555503
    MOV EBX,dword ptr [ESP + 0x14]      ; 00555504
    MOV EDI,dword ptr [ESP + 0x18]      ; 00555508
    MOV dword ptr [EBX + 0x24],0x0      ; 0055550c
    MOV dword ptr [EBX + 0x28],0x0      ; 00555513
    MOV dword ptr [EBX + 0x2c],0x0      ; 0055551a
    MOV EDX,dword ptr [EBX + 0x10]      ; 00555521
    MOV dword ptr [EBX + 0x20],0x0      ; 00555524
    TEST EDX,EDX                        ; 0055552b
    JNZ 0x005555ef                      ; 0055552d
        ;   XREF to: 005555ef (CONDITIONAL_JUMP)  ; LAB_005555ef
    MOV EAX,dword ptr [EBX + 0x14]      ; 00555533
        ;   Label: LAB_00555533
    TEST EAX,EAX                        ; 00555536
    JZ 0x00555559                       ; 00555538
        ;   XREF to: 00555559 (CONDITIONAL_JUMP)  ; LAB_00555559
    MOV EDX,0x640c89                    ; 0055553a | = "..\\shape\\quantize.cpp"
    MOV ECX,0x288                       ; 0055553f
    PUSH EAX                            ; 00555544
    MOV dword ptr [0x0067d20c],EDX      ; 00555545 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0055554b | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00555551
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00555556
    MOV EBP,dword ptr [EBX + 0x18]      ; 00555559
        ;   Label: LAB_00555559
    TEST EBP,EBP                        ; 0055555c
    JZ 0x0055557e                       ; 0055555e
        ;   XREF to: 0055557e (CONDITIONAL_JUMP)  ; LAB_0055557e
    MOV EAX,0x640c9f                    ; 00555560 | = "..\\shape\\quantize.cpp"
    MOV EDX,0x289                       ; 00555565
    PUSH EBP                            ; 0055556a
    MOV [0x0067d20c],EAX                ; 0055556b | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 00555570 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00555576
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0055557b
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0055557e
        ;   Label: LAB_0055557e
    TEST ESI,ESI                        ; 00555581
    JZ 0x005555a3                       ; 00555583
        ;   XREF to: 005555a3 (CONDITIONAL_JUMP)  ; LAB_005555a3
    MOV EBP,0x640cb5                    ; 00555585 | = "..\\shape\\quantize.cpp"
    MOV EAX,0x28a                       ; 0055558a
    PUSH ESI                            ; 0055558f
    MOV dword ptr [0x0067d20c],EBP      ; 00555590 | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 00555596 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0055559b
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005555a0
    MOV ECX,dword ptr [EBX + 0x8]       ; 005555a3
        ;   Label: LAB_005555a3
    TEST ECX,ECX                        ; 005555a6
    JZ 0x005555c9                       ; 005555a8
        ;   XREF to: 005555c9 (CONDITIONAL_JUMP)  ; LAB_005555c9
    MOV ESI,0x640ccb                    ; 005555aa | = "..\\shape\\quantize.cpp"
    MOV EBP,0x28b                       ; 005555af
    PUSH ECX                            ; 005555b4
    MOV dword ptr [0x0067d20c],ESI      ; 005555b5 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 005555bb | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005555c1
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005555c6
    PUSH 0x28d                          ; 005555c9
        ;   Label: LAB_005555c9
    PUSH 0x640ce1                       ; 005555ce | = "..\\shape\\quantize.cpp"
    LEA ESI,[EDI*0x8 + 0x0]             ; 005555d3
    PUSH ESI                            ; 005555da
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0 ; 005555db
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005555e0
    MOV dword ptr [EBX + 0x10],EAX      ; 005555e3
    TEST EAX,EAX                        ; 005555e6
    JNZ 0x00555613                      ; 005555e8
        ;   XREF to: 00555613 (CONDITIONAL_JUMP)  ; LAB_00555613
    POP EBP                             ; 005555ea
        ;   Label: LAB_005555ea
    POP EDI                             ; 005555eb
    POP ESI                             ; 005555ec
    POP EBX                             ; 005555ed
    RET                                 ; 005555ee
    MOV ECX,0x640c73                    ; 005555ef | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_005555ef
    MOV ESI,0x287                       ; 005555f4
    PUSH EDX                            ; 005555f9
    MOV dword ptr [0x0067d20c],ECX      ; 005555fa | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 00555600 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00555606
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0055560b
    JMP 0x00555533                      ; 0055560e
        ;   XREF to: 00555533 (UNCONDITIONAL_JUMP)  ; LAB_00555533
    PUSH 0x290                          ; 00555613
        ;   Label: LAB_00555613
    PUSH 0x640cf7                       ; 00555618 | = "..\\shape\\quantize.cpp"
    PUSH ESI                            ; 0055561d
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0 ; 0055561e
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00555623
    MOV dword ptr [EBX + 0x14],EAX      ; 00555626
    TEST EAX,EAX                        ; 00555629
    JZ 0x005555ea                       ; 0055562b
        ;   XREF to: 005555ea (CONDITIONAL_JUMP)  ; LAB_005555ea
    PUSH 0x293                          ; 0055562d
    PUSH 0x640d0d                       ; 00555632 | = "..\\shape\\quantize.cpp"
    PUSH ESI                            ; 00555637
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0 ; 00555638
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0055563d
    MOV dword ptr [EBX + 0x18],EAX      ; 00555640
    TEST EAX,EAX                        ; 00555643
    JZ 0x005555ea                       ; 00555645
        ;   XREF to: 005555ea (CONDITIONAL_JUMP)  ; LAB_005555ea
    PUSH 0x296                          ; 00555647
    PUSH 0x640d23                       ; 0055564c | = "..\\shape\\quantize.cpp"
    PUSH ESI                            ; 00555651
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0 ; 00555652
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00555657
    MOV dword ptr [EBX + 0x1c],EAX      ; 0055565a
    TEST EAX,EAX                        ; 0055565d
    JZ 0x005555ea                       ; 0055565f
        ;   XREF to: 005555ea (CONDITIONAL_JUMP)  ; LAB_005555ea
    PUSH 0x299                          ; 00555661
    PUSH 0x640d39                       ; 00555666 | = "..\\shape\\quantize.cpp"
    PUSH EDI                            ; 0055566b
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0 ; 0055566c
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00555671
    MOV dword ptr [EBX + 0x8],EAX       ; 00555674
    TEST EAX,EAX                        ; 00555677
    JZ 0x005555ea                       ; 00555679
        ;   XREF to: 005555ea (CONDITIONAL_JUMP)  ; LAB_005555ea
    PUSH ESI                            ; 0055567f
    PUSH 0x0                            ; 00555680
    MOV ECX,dword ptr [EBX + 0x10]      ; 00555682
    PUSH ECX                            ; 00555685
    CALL crt_memory.c_memset_FUN_005fde40 ; 00555686
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055568b
    PUSH ESI                            ; 0055568e
    PUSH 0x0                            ; 0055568f
    MOV EBP,dword ptr [EBX + 0x14]      ; 00555691
    PUSH EBP                            ; 00555694
    CALL crt_memory.c_memset_FUN_005fde40 ; 00555695
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055569a
    PUSH ESI                            ; 0055569d
    PUSH 0x0                            ; 0055569e
    MOV EAX,dword ptr [EBX + 0x18]      ; 005556a0
    PUSH EAX                            ; 005556a3
    CALL crt_memory.c_memset_FUN_005fde40 ; 005556a4
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005556a9
    PUSH ESI                            ; 005556ac
    PUSH 0x0                            ; 005556ad
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005556af
    PUSH EDX                            ; 005556b2
    CALL crt_memory.c_memset_FUN_005fde40 ; 005556b3
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005556b8
    PUSH EDI                            ; 005556bb
    PUSH 0x0                            ; 005556bc
    MOV ECX,dword ptr [EBX + 0x8]       ; 005556be
    PUSH ECX                            ; 005556c1
    CALL crt_memory.c_memset_FUN_005fde40 ; 005556c2
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,0x1                         ; 005556c7
    MOV dword ptr [EBX + 0x4b30],0x0    ; 005556cc
    ADD ESP,0xc                         ; 005556d6
    MOV dword ptr [EBX + 0x4b34],0xffffffff ; 005556d9
    POP EBP                             ; 005556e3
    POP EDI                             ; 005556e4
    POP ESI                             ; 005556e5
    POP EBX                             ; 005556e6
    RET                                 ; 005556e7

