; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_unknown_c__strtod_FUN_0056a189(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   crt_string.c_strtod_main_FUN_0056f852
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a189
        ;   Label: crt_unknown.c__strtod_FUN_0056a189
    MOV EBP,ESP                         ; 0056a18a
    SUB ESP,0x8                         ; 0056a18c
    PUSH 0x0                            ; 0056a18f
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056a191
    PUSH EDX                            ; 0056a194
    CALL crt_string.c_strtod_main_FUN_0056f852 ; 0056a195
        ;   XREF to: 0056f852 (UNCONDITIONAL_CALL)  ; double crt_string.c_strtod_main_FUN_0056f852(char * str, char * * endptr)
    MOV dword ptr [EBP + -0x8],EAX      ; 0056a19a
    MOV dword ptr [EBP + -0x4],EDX      ; 0056a19d
    ADD ESP,0x8                         ; 0056a1a0
    MOV EAX,dword ptr [EBP + 0xc]       ; 0056a1a3
    MOV EDX,dword ptr [EBP + -0x8]      ; 0056a1a6
    MOV dword ptr [EAX],EDX             ; 0056a1a9
    MOV EDX,dword ptr [EBP + -0x4]      ; 0056a1ab
    MOV dword ptr [EAX + 0x4],EDX       ; 0056a1ae
    MOV ESP,EBP                         ; 0056a1b1
    POP EBP                             ; 0056a1b3
    RET                                 ; 0056a1b4

