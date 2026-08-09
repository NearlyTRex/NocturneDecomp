; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042fb80(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_chain.cpp_factoryFuncChain_FUN_0042fb40 at 0042fb5a
;
; Referenced Globals:
;   TerminatedCString s_CHAINLINK_RAW_006177a3
;   undefined4 s_HAINLINK.RAW_006177a4
;   undefined4 s_AINLINK.RAW_006177a5
;   undefined4 s_INLINK.RAW_006177a6
;   TerminatedCString s_chain_pull_wav_006177b1
;   undefined4 s_hain-pull.wav_006177b2
;   undefined4 s_ain-pull.wav_006177b3
;   undefined4 s_in-pull.wav_006177b4
;   TerminatedCString s_chain_move_wav_006177c0
;   undefined4 s_hain-move.wav_006177c1
;   undefined4 s_ain-move.wav_006177c2
;   undefined4 s_in-move.wav_006177c3
;   CDemonActor_vtable g_CChainVTable
;   WatcomTypeInfo g_SChainVertexTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042fb80
        ;   Label: core_chain.cpp_CChain_ctor_FUN_0042fb80
    PUSH EDI                            ; 0042fb81
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042fb82
    PUSH EDX                            ; 0042fb86
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0042fb87
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042fb8c
    PUSH 0x65baf0                       ; 0042fb8f | g_SChainVertexTypeInfo
    PUSH 0x14                           ; 0042fb94
    ADD EAX,0x28c                       ; 0042fb96
    PUSH EAX                            ; 0042fb9b
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0042fb9c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffd74]          ; 0042fba1
    MOV dword ptr [EDX + 0x154],0x65ba04 ; 0042fba7 | g_CChainVTable
    MOV dword ptr [EDX + 0x158],0xa     ; 0042fbb1
    MOV dword ptr [EDX + 0x15c],0x40a00000 ; 0042fbbb
    MOV dword ptr [EDX + 0x55c],0x3f800000 ; 0042fbc5
    MOV dword ptr [EDX + 0x560],0x3f000000 ; 0042fbcf
    MOV dword ptr [EDX + 0x564],0x42000000 ; 0042fbd9
    MOV ESI,0x6177a3                    ; 0042fbe3 | = "CHAINLINK.RAW"
    MOV dword ptr [EDX + 0x568],0x3f666666 ; 0042fbe8
    ADD ESP,0xc                         ; 0042fbf2
    MOV dword ptr [EDX + 0x164],0x0     ; 0042fbf5
    LEA EDI,[EDX + 0x174]               ; 0042fbff
    MOV dword ptr [EDX + 0x168],0x0     ; 0042fc05
    PUSH EDI                            ; 0042fc0f
    MOV AL,byte ptr [ESI]               ; 0042fc10 | = "CHAINLINK.RAW" | s_AINLINK.RAW_006177a5
        ;   Label: LAB_0042fc10
    MOV byte ptr [EDI],AL               ; 0042fc12
    CMP AL,0x0                          ; 0042fc14
    JZ 0x0042fc28                       ; 0042fc16
        ;   XREF to: 0042fc28 (CONDITIONAL_JUMP)  ; LAB_0042fc28
    MOV AL,byte ptr [ESI + 0x1]         ; 0042fc18 | s_HAINLINK.RAW_006177a4 | s_INLINK.RAW_006177a6
    ADD ESI,0x2                         ; 0042fc1b
    MOV byte ptr [EDI + 0x1],AL         ; 0042fc1e
    ADD EDI,0x2                         ; 0042fc21
    CMP AL,0x0                          ; 0042fc24
    JNZ 0x0042fc10                      ; 0042fc26
        ;   XREF to: 0042fc10 (CONDITIONAL_JUMP)  ; LAB_0042fc10
    POP EDI                             ; 0042fc28
        ;   Label: LAB_0042fc28
    MOV dword ptr [EDX + 0x16c],0xd     ; 0042fc29
    MOV dword ptr [EDX + 0x170],0x0     ; 0042fc33
    MOV ESI,0x6177b1                    ; 0042fc3d | = "chain-pull.wav"
    MOV dword ptr [EDX + 0xfc],0x1      ; 0042fc42
    LEA EDI,[EDX + 0x1b4]               ; 0042fc4c
    MOV dword ptr [EDX + 0xf8],0x0      ; 0042fc52
    PUSH EDI                            ; 0042fc5c
    MOV AL,byte ptr [ESI]               ; 0042fc5d | = "chain-pull.wav" | s_ain-pull.wav_006177b3
        ;   Label: LAB_0042fc5d
    MOV byte ptr [EDI],AL               ; 0042fc5f
    CMP AL,0x0                          ; 0042fc61
    JZ 0x0042fc75                       ; 0042fc63
        ;   XREF to: 0042fc75 (CONDITIONAL_JUMP)  ; LAB_0042fc75
    MOV AL,byte ptr [ESI + 0x1]         ; 0042fc65 | s_hain-pull.wav_006177b2 | s_in-pull.wav_006177b4
    ADD ESI,0x2                         ; 0042fc68
    MOV byte ptr [EDI + 0x1],AL         ; 0042fc6b
    ADD EDI,0x2                         ; 0042fc6e
    CMP AL,0x0                          ; 0042fc71
    JNZ 0x0042fc5d                      ; 0042fc73
        ;   XREF to: 0042fc5d (CONDITIONAL_JUMP)  ; LAB_0042fc5d
    POP EDI                             ; 0042fc75
        ;   Label: LAB_0042fc75
    MOV ESI,0x6177c0                    ; 0042fc76 | = "chain-move.wav"
    LEA EDI,[EDX + 0x21c]               ; 0042fc7b
    PUSH EDI                            ; 0042fc81
    MOV AL,byte ptr [ESI]               ; 0042fc82 | = "chain-move.wav" | s_ain-move.wav_006177c2
        ;   Label: LAB_0042fc82
    MOV byte ptr [EDI],AL               ; 0042fc84
    CMP AL,0x0                          ; 0042fc86
    JZ 0x0042fc9a                       ; 0042fc88
        ;   XREF to: 0042fc9a (CONDITIONAL_JUMP)  ; LAB_0042fc9a
    MOV AL,byte ptr [ESI + 0x1]         ; 0042fc8a | s_hain-move.wav_006177c1 | s_in-move.wav_006177c3
    ADD ESI,0x2                         ; 0042fc8d
    MOV byte ptr [EDI + 0x1],AL         ; 0042fc90
    ADD EDI,0x2                         ; 0042fc93
    CMP AL,0x0                          ; 0042fc96
    JNZ 0x0042fc82                      ; 0042fc98
        ;   XREF to: 0042fc82 (CONDITIONAL_JUMP)  ; LAB_0042fc82
    POP EDI                             ; 0042fc9a
        ;   Label: LAB_0042fc9a
    MOV dword ptr [EDX + 0x574],0x0     ; 0042fc9b
    MOV EAX,EDX                         ; 0042fca5
    MOV dword ptr [EDX + 0x288],0x1     ; 0042fca7
    POP EDI                             ; 0042fcb1
    POP ESI                             ; 0042fcb2
    RET                                 ; 0042fcb3

