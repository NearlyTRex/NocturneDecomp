; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_mmx_c_getCPUInfo_FUN_004f7d2f(uint *param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_00600698
;   undefined4 DAT_00600699
;   undefined4 DAT_0060069a
;   undefined1 DAT_0060069c
;   undefined1 DAT_006006a1
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_004f7c6c
;   core_mmx.c_detectMMXSupport_FUN_004f7d19
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004f7d2f
        ;   Label: core_mmx.c_getCPUInfo_FUN_004f7d2f
    MOV EBP,ESP                         ; 004f7d30
    PUSH EDI                            ; 004f7d32
    MOV EDI,dword ptr [EBP + 0x8]       ; 004f7d33
    MOV EAX,0x0                         ; 004f7d36
    CMP EDI,0x0                         ; 004f7d3b
    JZ 0x004f7d80                       ; 004f7d3e
        ;   XREF to: 004f7d80 (CONDITIONAL_JUMP)  ; LAB_004f7d80
    CALL core_mmx.c_detectIntelProcessor_FUN_004f7c6c ; 004f7d40
        ;   XREF to: 004f7c6c (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_004f7c6c()
    CALL core_mmx.c_detectMMXSupport_FUN_004f7d19 ; 004f7d45
        ;   XREF to: 004f7d19 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_004f7d19()
    MOVZX EAX,byte ptr [0x00600698]     ; 004f7d4a | DAT_00600698
    MOV dword ptr [EDI],EAX             ; 004f7d51
    MOVZX EAX,byte ptr [0x00600699]     ; 004f7d53 | DAT_00600699
    MOV dword ptr [EDI + 0x4],EAX       ; 004f7d5a
    MOVZX EAX,byte ptr [0x0060069a]     ; 004f7d5d | DAT_0060069a
    MOV dword ptr [EDI + 0x8],EAX       ; 004f7d64
    MOVZX EAX,byte ptr [0x0060069c]     ; 004f7d67 | DAT_0060069c
    MOV dword ptr [EDI + 0xc],EAX       ; 004f7d6e
    MOVZX EAX,byte ptr [0x006006a1]     ; 004f7d71 | DAT_006006a1
    MOV dword ptr [EDI + 0x10],EAX      ; 004f7d78
    MOV EAX,0x1                         ; 004f7d7b
    POP EDI                             ; 004f7d80
        ;   Label: LAB_004f7d80
    LEAVE                               ; 004f7d81
    RET                                 ; 004f7d82

