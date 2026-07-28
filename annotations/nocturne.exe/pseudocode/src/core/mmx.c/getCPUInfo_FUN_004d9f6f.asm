; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_mmx_c_getCPUInfo_FUN_004d9f6f(uint *param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_005bb118
;   undefined4 DAT_005bb119
;   undefined4 DAT_005bb11a
;   undefined1 DAT_005bb11c
;   undefined1 DAT_005bb121
;
; Called Functions:
;   core_mmx.c_detectIntelProcessor_FUN_004d9eac
;   core_mmx.c_detectMMXSupport_FUN_004d9f59
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d9f6f
        ;   Label: core_mmx.c_getCPUInfo_FUN_004d9f6f
    MOV EBP,ESP                         ; 004d9f70
    PUSH EDI                            ; 004d9f72
    MOV EDI,dword ptr [EBP + 0x8]       ; 004d9f73
    MOV EAX,0x0                         ; 004d9f76
    CMP EDI,0x0                         ; 004d9f7b
    JZ 0x004d9fc0                       ; 004d9f7e
        ;   XREF to: 004d9fc0 (CONDITIONAL_JUMP)  ; LAB_004d9fc0
    CALL core_mmx.c_detectIntelProcessor_FUN_004d9eac ; 004d9f80
        ;   XREF to: 004d9eac (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectIntelProcessor_FUN_004d9eac()
    CALL core_mmx.c_detectMMXSupport_FUN_004d9f59 ; 004d9f85
        ;   XREF to: 004d9f59 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectMMXSupport_FUN_004d9f59()
    MOVZX EAX,byte ptr [0x005bb118]     ; 004d9f8a | DAT_005bb118
    MOV dword ptr [EDI],EAX             ; 004d9f91
    MOVZX EAX,byte ptr [0x005bb119]     ; 004d9f93 | DAT_005bb119
    MOV dword ptr [EDI + 0x4],EAX       ; 004d9f9a
    MOVZX EAX,byte ptr [0x005bb11a]     ; 004d9f9d | DAT_005bb11a
    MOV dword ptr [EDI + 0x8],EAX       ; 004d9fa4
    MOVZX EAX,byte ptr [0x005bb11c]     ; 004d9fa7 | DAT_005bb11c
    MOV dword ptr [EDI + 0xc],EAX       ; 004d9fae
    MOVZX EAX,byte ptr [0x005bb121]     ; 004d9fb1 | DAT_005bb121
    MOV dword ptr [EDI + 0x10],EAX      ; 004d9fb8
    MOV EAX,0x1                         ; 004d9fbb
    POP EDI                             ; 004d9fc0
        ;   Label: LAB_004d9fc0
    LEAVE                               ; 004d9fc1
    RET                                 ; 004d9fc2

