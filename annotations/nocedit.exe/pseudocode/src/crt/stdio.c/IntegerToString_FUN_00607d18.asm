; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl crt_stdio_c_IntegerToString_FUN_00607d18(int value,char *buffer,int base)
;
; Parameters:
; int              Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
;
; XREF[5]:
;   crt_process.c_build_file_info_env_FUN_0060ffd0 at 00610143
;   crt_stdio.c_FormatFixedPoint_FUN_0060305c at 00603099
;   crt_stdio.c_FormatHexWithPadding_FUN_00602ff8 at 00603008
;   crt_thread.c_create_thread_with_sync_FUN_0060f960 at 0060f9d2
;   crt_time.c__strftime_FUN_006002d4 at 00600534
;
; Called Functions:
;   crt_stdlib.c_itoa_FUN_00607cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607d18
        ;   Label: crt_stdio.c_IntegerToString_FUN_00607d18
    MOV EAX,dword ptr [ESP + 0x8]       ; 00607d19
    MOV EBX,dword ptr [ESP + 0xc]       ; 00607d1d
    MOV ECX,dword ptr [ESP + 0x10]      ; 00607d21
    MOV EDX,EBX                         ; 00607d25
    CMP ECX,0xa                         ; 00607d27
    JNZ 0x00607d38                      ; 00607d2a
        ;   XREF to: 00607d38 (CONDITIONAL_JUMP)  ; LAB_00607d38
    TEST EAX,EAX                        ; 00607d2c
    JGE 0x00607d38                      ; 00607d2e
        ;   XREF to: 00607d38 (CONDITIONAL_JUMP)  ; LAB_00607d38
    NEG EAX                             ; 00607d30
    LEA EDX,[EBX + 0x1]                 ; 00607d32
    MOV byte ptr [EBX],0x2d             ; 00607d35
    PUSH ECX                            ; 00607d38
        ;   Label: LAB_00607d38
    PUSH EDX                            ; 00607d39
    PUSH EAX                            ; 00607d3a
    CALL crt_stdlib.c_itoa_FUN_00607cc0 ; 00607d3b
        ;   XREF to: 00607cc0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_itoa_FUN_00607cc0(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 00607d40
    MOV EAX,EBX                         ; 00607d43
    POP EBX                             ; 00607d45
    RET                                 ; 00607d46

