; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dtrace_cpp_FUN_0048afa0(undefined4 param_1,char *param_2)
;
;
; XREF[1]:
;   core_set.cpp_FUN_0054d3c0 at 0054de47
;
; Referenced Globals:
;   undefined4 DAT_005db944
;   undefined4 DAT_005db947
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048adc0
;   crt_stdio.c_fclose_FUN_005c0d10
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048afa0
        ;   Label: core_dtrace.cpp_FUN_0048afa0
    PUSH 0x5db944                       ; 0048afa1 | DAT_005db944
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048afa6
    PUSH EDX                            ; 0048afaa
    PUSH 0x5db947                       ; 0048afab | DAT_005db947
    CALL engine_dosio.cpp_FUN_00479180  ; 0048afb0
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 0048afb5
    ADD ESP,0xc                         ; 0048afb7
    TEST EAX,EAX                        ; 0048afba
    JNZ 0x0048afc0                      ; 0048afbc
        ;   XREF to: 0048afc0 (CONDITIONAL_JUMP)  ; LAB_0048afc0
    POP EBX                             ; 0048afbe
    RET                                 ; 0048afbf
    PUSH EAX                            ; 0048afc0
        ;   Label: LAB_0048afc0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048afc1
    PUSH ECX                            ; 0048afc5
    CALL core_dtrace.cpp_FUN_0048adc0   ; 0048afc6
        ;   XREF to: 0048adc0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048adc0()
    ADD ESP,0x8                         ; 0048afcb
    PUSH EBX                            ; 0048afce
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0048afcf
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EAX,0x1                         ; 0048afd4
    ADD ESP,0x4                         ; 0048afd9
    POP EBX                             ; 0048afdc
    RET                                 ; 0048afdd

