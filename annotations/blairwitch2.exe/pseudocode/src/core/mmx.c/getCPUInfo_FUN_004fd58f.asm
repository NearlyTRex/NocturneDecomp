; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_mmx_c_getCPUInfo_FUN_004fd58f(uint *param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_006182d8
;   undefined4 DAT_006182d9
;   undefined4 DAT_006182da
;   undefined1 DAT_006182dc
;   undefined1 DAT_006182e1
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_004fd4cc
;   core_mmx.c_detectMMXSupport_FUN_004fd579
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004fd58f
        ;   Label: core_mmx.c_getCPUInfo_FUN_004fd58f
    MOV EBP,ESP                         ; 004fd590
    PUSH EDI                            ; 004fd592
    MOV EDI,dword ptr [EBP + 0x8]       ; 004fd593
    MOV EAX,0x0                         ; 004fd596
    CMP EDI,0x0                         ; 004fd59b
    JZ 0x004fd5e0                       ; 004fd59e
        ;   XREF to: 004fd5e0 (CONDITIONAL_JUMP)  ; LAB_004fd5e0
    CALL core_mmx.c_detectIntelProcessor_FUN_004fd4cc ; 004fd5a0
        ;   XREF to: 004fd4cc (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_004fd4cc()
    CALL core_mmx.c_detectMMXSupport_FUN_004fd579 ; 004fd5a5
        ;   XREF to: 004fd579 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_004fd579()
    MOVZX EAX,byte ptr [0x006182d8]     ; 004fd5aa | DAT_006182d8
    MOV dword ptr [EDI],EAX             ; 004fd5b1
    MOVZX EAX,byte ptr [0x006182d9]     ; 004fd5b3 | DAT_006182d9
    MOV dword ptr [EDI + 0x4],EAX       ; 004fd5ba
    MOVZX EAX,byte ptr [0x006182da]     ; 004fd5bd | DAT_006182da
    MOV dword ptr [EDI + 0x8],EAX       ; 004fd5c4
    MOVZX EAX,byte ptr [0x006182dc]     ; 004fd5c7 | DAT_006182dc
    MOV dword ptr [EDI + 0xc],EAX       ; 004fd5ce
    MOVZX EAX,byte ptr [0x006182e1]     ; 004fd5d1 | DAT_006182e1
    MOV dword ptr [EDI + 0x10],EAX      ; 004fd5d8
    MOV EAX,0x1                         ; 004fd5db
    POP EDI                             ; 004fd5e0
        ;   Label: LAB_004fd5e0
    LEAVE                               ; 004fd5e1
    RET                                 ; 004fd5e2

