; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_locale_c_getSystemCP_FUN_100080e0(void)
;
;
; XREF[1]:
;   crt_locale.c__setmbcp_FUN_10007eb0 at 10007ec6
;
; Referenced Globals:
;   undefined4 DAT_10016ef4
;   undefined4 DAT_10017770
;   void* PTR_GetACP_1024218c = 0024254a
;   void* PTR_GetOEMCP_10242218 = 00242554
;
; *****************************************************************************

section .text

    MOV dword ptr [0x10016ef4],0x0      ; 100080e0 | DAT_10016ef4
        ;   Label: crt_locale.c_getSystemCP_FUN_100080e0
    MOV EAX,dword ptr [ESP + 0x4]       ; 100080ea
    CMP EAX,-0x2                        ; 100080ee
    JNZ 0x10008103                      ; 100080f1
        ;   XREF to: 10008103 (CONDITIONAL_JUMP)  ; LAB_10008103
    MOV dword ptr [0x10016ef4],0x1      ; 100080f3 | DAT_10016ef4
    JMP dword ptr [0x10242218]          ; 100080fd | PTR_GetOEMCP_10242218
    CMP EAX,-0x3                        ; 10008103
        ;   Label: LAB_10008103
    JNZ 0x10008118                      ; 10008106
        ;   XREF to: 10008118 (CONDITIONAL_JUMP)  ; LAB_10008118
    MOV dword ptr [0x10016ef4],0x1      ; 10008108 | DAT_10016ef4
    JMP dword ptr [0x1024218c]          ; 10008112 | PTR_GetACP_1024218c
    CMP EAX,-0x4                        ; 10008118
        ;   Label: LAB_10008118
    JNZ 0x1000812c                      ; 1000811b
        ;   XREF to: 1000812c (CONDITIONAL_JUMP)  ; LAB_1000812c
    MOV dword ptr [0x10016ef4],0x1      ; 1000811d | DAT_10016ef4
    MOV EAX,[0x10017770]                ; 10008127 | DAT_10017770
    RET                                 ; 1000812c
        ;   Label: LAB_1000812c

