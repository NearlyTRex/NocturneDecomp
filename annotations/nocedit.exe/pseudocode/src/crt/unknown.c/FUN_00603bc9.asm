; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00603bc9()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   crt_fltused.c_staticInit_FUN_005fde60 at 005fde62
;   crt_strtod.c_staticInit_FUN_00603bb0 at 00603bb6
;
; Called Functions:
;   crt_string.c_strtod_main_FUN_00605d5d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00603bc9
        ;   Label: crt_unknown.c_FUN_00603bc9
    MOV EBP,ESP                         ; 00603bca
    SUB ESP,0x8                         ; 00603bcc
    PUSH 0x0                            ; 00603bcf
    MOV EDX,dword ptr [EBP + 0x8]       ; 00603bd1
    PUSH EDX                            ; 00603bd4
    CALL crt_string.c_strtod_main_FUN_00605d5d ; 00603bd5 | double crt_string.c_strtod_main_FUN_00605d5d(char * str, char * * endptr)
        ;   XREF to: 00605d5d (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x8],EAX      ; 00603bda
    MOV dword ptr [EBP + -0x4],EDX      ; 00603bdd
    ADD ESP,0x8                         ; 00603be0
    MOV EAX,dword ptr [EBP + 0xc]       ; 00603be3
    MOV EDX,dword ptr [EBP + -0x8]      ; 00603be6
    MOV dword ptr [EAX],EDX             ; 00603be9
    MOV EDX,dword ptr [EBP + -0x4]      ; 00603beb
    MOV dword ptr [EAX + 0x4],EDX       ; 00603bee
    MOV ESP,EBP                         ; 00603bf1
    POP EBP                             ; 00603bf3
    RET                                 ; 00603bf4

