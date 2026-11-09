; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_mmx_c_getCPUInfo_FUN_0051c54f(uint *param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_0061f7b8
;   undefined4 DAT_0061f7b9
;   undefined4 DAT_0061f7ba
;   undefined1 DAT_0061f7bc
;   undefined1 DAT_0061f7c1
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_0051c48c
;   core_mmx.c_detectMMXSupport_FUN_0051c539
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0051c54f
        ;   Label: core_mmx.c_getCPUInfo_FUN_0051c54f
    MOV EBP,ESP                         ; 0051c550
    PUSH EDI                            ; 0051c552
    MOV EDI,dword ptr [EBP + 0x8]       ; 0051c553
    MOV EAX,0x0                         ; 0051c556
    CMP EDI,0x0                         ; 0051c55b
    JZ 0x0051c5a0                       ; 0051c55e
        ;   XREF to: 0051c5a0 (CONDITIONAL_JUMP)  ; LAB_0051c5a0
    CALL core_mmx.c_detectIntelProcessor_FUN_0051c48c ; 0051c560
        ;   XREF to: 0051c48c (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_0051c48c()
    CALL core_mmx.c_detectMMXSupport_FUN_0051c539 ; 0051c565
        ;   XREF to: 0051c539 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_0051c539()
    MOVZX EAX,byte ptr [0x0061f7b8]     ; 0051c56a | DAT_0061f7b8
    MOV dword ptr [EDI],EAX             ; 0051c571
    MOVZX EAX,byte ptr [0x0061f7b9]     ; 0051c573 | DAT_0061f7b9
    MOV dword ptr [EDI + 0x4],EAX       ; 0051c57a
    MOVZX EAX,byte ptr [0x0061f7ba]     ; 0051c57d | DAT_0061f7ba
    MOV dword ptr [EDI + 0x8],EAX       ; 0051c584
    MOVZX EAX,byte ptr [0x0061f7bc]     ; 0051c587 | DAT_0061f7bc
    MOV dword ptr [EDI + 0xc],EAX       ; 0051c58e
    MOVZX EAX,byte ptr [0x0061f7c1]     ; 0051c591 | DAT_0061f7c1
    MOV dword ptr [EDI + 0x10],EAX      ; 0051c598
    MOV EAX,0x1                         ; 0051c59b
    POP EDI                             ; 0051c5a0
        ;   Label: LAB_0051c5a0
    LEAVE                               ; 0051c5a1
    RET                                 ; 0051c5a2

