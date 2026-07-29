; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042b750(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_chain.cpp_FUN_0042b720 at 0042b733
;
; Referenced Globals:
;   TerminatedCString s_CHAINLINK_RAW_0057a55d
;   undefined4 s_CHAINLINK_RAW_0057a55d+1
;   undefined4 s_CHAINLINK_RAW_0057a55d+2
;   undefined4 s_CHAINLINK_RAW_0057a55d+3
;   TerminatedCString s_chain_pull_wav_0057a56b
;   undefined4 s_chain_pull_wav_0057a56b+1
;   undefined4 s_chain_pull_wav_0057a56b+2
;   undefined4 s_chain_pull_wav_0057a56b+3
;   TerminatedCString s_chain_move_wav_0057a57a
;   undefined4 s_chain_move_wav_0057a57a+1
;   undefined4 s_chain_move_wav_0057a57a+2
;   undefined4 s_chain_move_wav_0057a57a+3
;   CDemonActor_vtable g_CChainVTable
;   WatcomTypeInfo g_SChainVertexTypeInfo_0059b320
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042b750
        ;   Label: core_chain.cpp_CChain_ctor_FUN_0042b750
    PUSH EDI                            ; 0042b751
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042b752
    PUSH EDX                            ; 0042b756
    CALL core_actor.cpp_FUN_00409d30    ; 0042b757
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042b75c
    PUSH 0x59b320                       ; 0042b75f | g_SChainVertexTypeInfo_0059b320
    PUSH 0x14                           ; 0042b764
    ADD EAX,0x284                       ; 0042b766
    PUSH EAX                            ; 0042b76b
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0042b76c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffd7c]          ; 0042b771
    MOV dword ptr [EDX + 0x14c],0x59b244 ; 0042b777 | g_CChainVTable
    MOV dword ptr [EDX + 0x150],0xa     ; 0042b781
    MOV dword ptr [EDX + 0x154],0x40a00000 ; 0042b78b
    MOV dword ptr [EDX + 0x554],0x3f800000 ; 0042b795
    MOV dword ptr [EDX + 0x558],0x3f000000 ; 0042b79f
    MOV dword ptr [EDX + 0x55c],0x42000000 ; 0042b7a9
    MOV ESI,0x57a55d                    ; 0042b7b3 | = "CHAINLINK.RAW"
    MOV dword ptr [EDX + 0x560],0x3f666666 ; 0042b7b8
    ADD ESP,0xc                         ; 0042b7c2
    MOV dword ptr [EDX + 0x15c],0x0     ; 0042b7c5
    LEA EDI,[EDX + 0x16c]               ; 0042b7cf
    MOV dword ptr [EDX + 0x160],0x0     ; 0042b7d5
    PUSH EDI                            ; 0042b7df
    MOV AL,byte ptr [ESI]               ; 0042b7e0 | = "CHAINLINK.RAW" | s_CHAINLINK_RAW_0057a55d+2
        ;   Label: LAB_0042b7e0
    MOV byte ptr [EDI],AL               ; 0042b7e2
    CMP AL,0x0                          ; 0042b7e4
    JZ 0x0042b7f8                       ; 0042b7e6
        ;   XREF to: 0042b7f8 (CONDITIONAL_JUMP)  ; LAB_0042b7f8
    MOV AL,byte ptr [ESI + 0x1]         ; 0042b7e8 | s_CHAINLINK_RAW_0057a55d+1 | s_CHAINLINK_RAW_0057a55d+3
    ADD ESI,0x2                         ; 0042b7eb
    MOV byte ptr [EDI + 0x1],AL         ; 0042b7ee
    ADD EDI,0x2                         ; 0042b7f1
    CMP AL,0x0                          ; 0042b7f4
    JNZ 0x0042b7e0                      ; 0042b7f6
        ;   XREF to: 0042b7e0 (CONDITIONAL_JUMP)  ; LAB_0042b7e0
    POP EDI                             ; 0042b7f8
        ;   Label: LAB_0042b7f8
    MOV dword ptr [EDX + 0x164],0xd     ; 0042b7f9
    MOV dword ptr [EDX + 0x168],0x0     ; 0042b803
    MOV ESI,0x57a56b                    ; 0042b80d | = "chain-pull.wav"
    MOV dword ptr [EDX + 0xfc],0x1      ; 0042b812
    LEA EDI,[EDX + 0x1ac]               ; 0042b81c
    MOV dword ptr [EDX + 0xf8],0x0      ; 0042b822
    PUSH EDI                            ; 0042b82c
    MOV AL,byte ptr [ESI]               ; 0042b82d | = "chain-pull.wav" | s_chain_pull_wav_0057a56b+2
        ;   Label: LAB_0042b82d
    MOV byte ptr [EDI],AL               ; 0042b82f
    CMP AL,0x0                          ; 0042b831
    JZ 0x0042b845                       ; 0042b833
        ;   XREF to: 0042b845 (CONDITIONAL_JUMP)  ; LAB_0042b845
    MOV AL,byte ptr [ESI + 0x1]         ; 0042b835 | s_chain_pull_wav_0057a56b+1 | s_chain_pull_wav_0057a56b+3
    ADD ESI,0x2                         ; 0042b838
    MOV byte ptr [EDI + 0x1],AL         ; 0042b83b
    ADD EDI,0x2                         ; 0042b83e
    CMP AL,0x0                          ; 0042b841
    JNZ 0x0042b82d                      ; 0042b843
        ;   XREF to: 0042b82d (CONDITIONAL_JUMP)  ; LAB_0042b82d
    POP EDI                             ; 0042b845
        ;   Label: LAB_0042b845
    MOV ESI,0x57a57a                    ; 0042b846 | = "chain-move.wav"
    LEA EDI,[EDX + 0x214]               ; 0042b84b
    PUSH EDI                            ; 0042b851
    MOV AL,byte ptr [ESI]               ; 0042b852 | = "chain-move.wav" | s_chain_move_wav_0057a57a+2
        ;   Label: LAB_0042b852
    MOV byte ptr [EDI],AL               ; 0042b854
    CMP AL,0x0                          ; 0042b856
    JZ 0x0042b86a                       ; 0042b858
        ;   XREF to: 0042b86a (CONDITIONAL_JUMP)  ; LAB_0042b86a
    MOV AL,byte ptr [ESI + 0x1]         ; 0042b85a | s_chain_move_wav_0057a57a+1 | s_chain_move_wav_0057a57a+3
    ADD ESI,0x2                         ; 0042b85d
    MOV byte ptr [EDI + 0x1],AL         ; 0042b860
    ADD EDI,0x2                         ; 0042b863
    CMP AL,0x0                          ; 0042b866
    JNZ 0x0042b852                      ; 0042b868
        ;   XREF to: 0042b852 (CONDITIONAL_JUMP)  ; LAB_0042b852
    POP EDI                             ; 0042b86a
        ;   Label: LAB_0042b86a
    MOV dword ptr [EDX + 0x56c],0x0     ; 0042b86b
    MOV EAX,EDX                         ; 0042b875
    MOV dword ptr [EDX + 0x280],0x1     ; 0042b877
    POP EDI                             ; 0042b881
    POP ESI                             ; 0042b882
    RET                                 ; 0042b883

