; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack_esi engine_boss_c_modelStructNotSupported4_FUN_0041a510(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *out_bounds)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
;
; XREF[1]:
;   engine_model.c_getMRGLBounds_FUN_00500970 at 00500dda
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a510
        ;   Label: engine_boss.c_modelStructNotSupported4_FUN_0041a510
    PUSH EDI                            ; 0041a511
    SUB ESP,0x34                        ; 0041a512
    MOV EBX,ESI                         ; 0041a515
    MOV EDX,0x5cc47b                    ; 0041a517
    MOV ECX,0x44                        ; 0041a51c
    PUSH 0x5cc48c                       ; 0041a521
    MOV dword ptr [0x01d046a0],EDX      ; 0041a526 | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0041a52c | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0041a532
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 0041a537
    PUSH 0x34                           ; 0041a53a
    PUSH 0x0                            ; 0041a53c
    LEA EAX,[ESP + 0x8]                 ; 0041a53e
    PUSH EAX                            ; 0041a542
    MOV EDI,ESI                         ; 0041a543
    LEA ESI,[ESP + 0xc]                 ; 0041a545
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0041a549
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,0xd                         ; 0041a54e
    ADD ESP,0xc                         ; 0041a553
    MOVSD.REP ES:EDI,ESI                ; 0041a556
    MOV EAX,EBX                         ; 0041a558
    ADD ESP,0x34                        ; 0041a55a
    POP EDI                             ; 0041a55d
    POP EBX                             ; 0041a55e
    RET                                 ; 0041a55f

