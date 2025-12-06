; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_006093e8()
;
;
; XREF[1]:
;   crt_unknown.c_staticFinal_FUN_00608fc0 at 00608fca
;
; Referenced Globals:
;   undefined4 g_FreeListHeadPointer
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006093e8
        ;   Label: crt_unknown.c_FUN_006093e8
    CMP dword ptr [0x03f9b204],0x0      ; 006093e9 | undefined4 g_FreeListHeadPointer
    JZ 0x0060940c                       ; 006093f0 | LAB_0060940c
        ;   XREF to: 0060940c (CONDITIONAL_JUMP)
    MOV EAX,[0x03f9b204]                ; 006093f2 | undefined4 g_FreeListHeadPointer
        ;   Label: LAB_006093f2
    PUSH EAX                            ; 006093f7
    MOV EBX,dword ptr [EAX]             ; 006093f8
    CALL crt_memory.c_free_FUN_00601cd0 ; 006093fa | void crt_memory.c_free_FUN_00601cd0(void * ptr)
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006093ff
    MOV dword ptr [0x03f9b204],EBX      ; 00609402 | undefined4 g_FreeListHeadPointer
    TEST EBX,EBX                        ; 00609408
    JNZ 0x006093f2                      ; 0060940a | LAB_006093f2
        ;   XREF to: 006093f2 (CONDITIONAL_JUMP)
    POP EBX                             ; 0060940c
        ;   Label: LAB_0060940c
    RET                                 ; 0060940d

