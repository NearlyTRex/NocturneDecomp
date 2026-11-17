; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectMMXSupport_FUN_004f7d19(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_004f7c30 at 004f7c36
;   core_mmx.c_getCPUInfo_FUN_004f7d2f at 004f7d45
;
; Referenced Globals:
;   uint g_UINT_0060069d = 0x0
;   uchar g_UCHAR_006006a1 = \x00
;   undefined4 g_CHAR_ARRAY_007fa464+0x5b9c
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004f7d19
        ;   Label: core_mmx.c_detectMMXSupport_FUN_004f7d19
    MOV EAX,[0x0060069d]                ; 004f7d1a | g_UINT_0060069d
    TEST EAX,0x800000                   ; 004f7d1f | g_CHAR_ARRAY_007fa464+0x5b9c
    JZ 0x004f7d2d                       ; 004f7d24
        ;   XREF to: 004f7d2d (CONDITIONAL_JUMP)  ; LAB_004f7d2d
    MOV byte ptr [0x006006a1],0x1       ; 004f7d26 | g_UCHAR_006006a1
    POP EAX                             ; 004f7d2d
        ;   Label: LAB_004f7d2d
    RET                                 ; 004f7d2e

