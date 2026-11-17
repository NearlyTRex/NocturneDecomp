; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectMMXSupport_FUN_0051c539(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_0051c450 at 0051c456
;   core_mmx.c_getCPUInfo_FUN_0051c54f at 0051c565
;
; Referenced Globals:
;   uint g_UINT_0061f7bd = 0x0
;   uchar g_UCHAR_0061f7c1 = \x00
;   undefined4 g_CHAR_ARRAY_007ddbb4+0x2244c
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0051c539
        ;   Label: core_mmx.c_detectMMXSupport_FUN_0051c539
    MOV EAX,[0x0061f7bd]                ; 0051c53a | g_UINT_0061f7bd
    TEST EAX,0x800000                   ; 0051c53f | g_CHAR_ARRAY_007ddbb4+0x2244c
    JZ 0x0051c54d                       ; 0051c544
        ;   XREF to: 0051c54d (CONDITIONAL_JUMP)  ; LAB_0051c54d
    MOV byte ptr [0x0061f7c1],0x1       ; 0051c546 | g_UCHAR_0061f7c1
    POP EAX                             ; 0051c54d
        ;   Label: LAB_0051c54d
    RET                                 ; 0051c54e

