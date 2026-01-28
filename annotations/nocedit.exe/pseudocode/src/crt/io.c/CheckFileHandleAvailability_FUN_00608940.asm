; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_io_c_CheckFileHandleAvailability_FUN_00608940(void)
;
;
; XREF[1]:
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 006090ab
;
; Referenced Globals:
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   int g_CurrentHandleCount = 0x0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608940
        ;   Label: crt_io.c_CheckFileHandleAvailability_FUN_00608940
    MOV ECX,dword ptr [0x0068526c]      ; 00608941 | g_IOControlBlock
    MOV EAX,[0x00685270]                ; 00608947 | g_CurrentHandleCount
    CMP EAX,dword ptr [0x00685214]      ; 0060894c | g_MaxHandleCount
    JNC 0x00608958                      ; 00608952
        ;   XREF to: 00608958 (CONDITIONAL_JUMP)  ; LAB_00608958
    XOR EAX,EAX                         ; 00608954
    JMP 0x00608985                      ; 00608956
        ;   XREF to: 00608985 (UNCONDITIONAL_JUMP)  ; LAB_00608985
    TEST EAX,EAX                        ; 00608958
        ;   Label: LAB_00608958
    JLE 0x00608980                      ; 0060895a
        ;   XREF to: 00608980 (CONDITIONAL_JUMP)  ; LAB_00608980
    MOV EBX,dword ptr [0x00685270]      ; 0060895c | g_CurrentHandleCount
    MOV EDX,ECX                         ; 00608962
    XOR EAX,EAX                         ; 00608964
    SHL EBX,0x2                         ; 00608966
    CMP dword ptr [EDX + EAX*0x1],0x0   ; 00608969
        ;   Label: LAB_00608969
    JNZ 0x00608979                      ; 0060896d
        ;   XREF to: 00608979 (CONDITIONAL_JUMP)  ; LAB_00608979
    XOR EAX,EAX                         ; 0060896f
    MOV dword ptr [0x0068526c],ECX      ; 00608971 | g_IOControlBlock
    POP EBX                             ; 00608977
    RET                                 ; 00608978
    ADD EAX,0x4                         ; 00608979
        ;   Label: LAB_00608979
    CMP EAX,EBX                         ; 0060897c
    JL 0x00608969                       ; 0060897e
        ;   XREF to: 00608969 (CONDITIONAL_JUMP)  ; LAB_00608969
    MOV EAX,0x1                         ; 00608980
        ;   Label: LAB_00608980
    MOV dword ptr [0x0068526c],ECX      ; 00608985 | g_IOControlBlock
        ;   Label: LAB_00608985
    POP EBX                             ; 0060898b
    RET                                 ; 0060898c

