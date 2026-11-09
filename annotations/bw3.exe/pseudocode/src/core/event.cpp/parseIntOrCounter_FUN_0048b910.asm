; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseIntOrCounter_FUN_0048b910(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_getCounterValue_FUN_00494d00
;   crt_stdio.c_sscanf_FUN_005a5b9c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048b910
        ;   Label: core_event.cpp_parseIntOrCounter_FUN_0048b910
    MOV EAX,ESP                         ; 0048b913
    PUSH EAX                            ; 0048b915
    PUSH 0x5bddc8                       ; 0048b916
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048b91b
    PUSH EDX                            ; 0048b91f
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048b920
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 0048b925
    CMP EAX,0x1                         ; 0048b928
    JNZ 0x0048b934                      ; 0048b92b
        ;   XREF to: 0048b934 (CONDITIONAL_JUMP)  ; LAB_0048b934
    MOV EAX,dword ptr [ESP]             ; 0048b92d
    ADD ESP,0x4                         ; 0048b930
    RET                                 ; 0048b933
    PUSH EBX                            ; 0048b934
        ;   Label: LAB_0048b934
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048b935
    PUSH ECX                            ; 0048b939
    MOV EBX,dword ptr [0x005fba60]      ; 0048b93a | DAT_005fba60
    PUSH EBX                            ; 0048b940
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00494d00 ; 0048b941
        ;   XREF to: 00494d00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00494d00(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0048b946
    POP EBX                             ; 0048b949
    ADD ESP,0x4                         ; 0048b94a
    RET                                 ; 0048b94d

