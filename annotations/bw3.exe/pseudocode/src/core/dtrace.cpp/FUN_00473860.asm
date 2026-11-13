; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00473860(int param_1)
;
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_004734b0 at 004734bf
;   core_dtrace.cpp_FUN_00473670 at 00473690
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473860
        ;   Label: core_dtrace.cpp_FUN_00473860
    PUSH ESI                            ; 00473861
    MOV EBX,dword ptr [ESP + 0xc]       ; 00473862
    MOV EDX,dword ptr [EBX + 0x8]       ; 00473866
    TEST EDX,EDX                        ; 00473869
    JNZ 0x0047388c                      ; 0047386b
        ;   XREF to: 0047388c (CONDITIONAL_JUMP)  ; LAB_0047388c
    MOV ESI,dword ptr [EBX + 0xc]       ; 0047386d
        ;   Label: LAB_0047386d
    TEST ESI,ESI                        ; 00473870
    JNZ 0x00473897                      ; 00473872
        ;   XREF to: 00473897 (CONDITIONAL_JUMP)  ; LAB_00473897
    MOV dword ptr [EBX + 0xc],0x0       ; 00473874
        ;   Label: LAB_00473874
    MOV dword ptr [EBX + 0x4],0x0       ; 0047387b
    MOV dword ptr [EBX + 0x8],0x0       ; 00473882
    POP ESI                             ; 00473889
    POP EBX                             ; 0047388a
    RET                                 ; 0047388b
    PUSH EDX                            ; 0047388c
        ;   Label: LAB_0047388c
    CALL crt_unknown.c_FUN_005a30b6     ; 0047388d
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00473892
    JMP 0x0047386d                      ; 00473895
        ;   XREF to: 0047386d (UNCONDITIONAL_JUMP)  ; LAB_0047386d
    PUSH ESI                            ; 00473897
        ;   Label: LAB_00473897
    CALL crt_unknown.c_FUN_005a30b6     ; 00473898
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0047389d
    JMP 0x00473874                      ; 004738a0
        ;   XREF to: 00473874 (UNCONDITIONAL_JUMP)  ; LAB_00473874

