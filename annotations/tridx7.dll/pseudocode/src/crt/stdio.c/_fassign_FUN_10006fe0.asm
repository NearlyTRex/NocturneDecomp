; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__fassign_FUN_10006fe0(int flag,void *value,char *str)
;
; Parameters:
; int              Stack[0x4]:4   flag
; void *           Stack[0x8]:4   value
; char *           Stack[0xc]:4   str
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_fpu.c__install_fp_handlers_FUN_100055b0 at 100055ba
;
; Called Functions:
;   crt_math.c__atodbl_FUN_1000a200
;   crt_math.c__atoflt_FUN_1000a280
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10006fe0
        ;   Label: crt_stdio.c__fassign_FUN_10006fe0
    SUB ESP,0xc                         ; 10006fe4
    CMP dword ptr [ESP + 0x10],0x0      ; 10006fe7
    PUSH EAX                            ; 10006fec
    JZ 0x10007011                       ; 10006fed
        ;   XREF to: 10007011 (CONDITIONAL_JUMP)  ; LAB_10007011
    LEA ECX,[ESP + 0x8]                 ; 10006fef
    PUSH ECX                            ; 10006ff3
    CALL crt_math.c__atodbl_FUN_1000a200 ; 10006ff4
        ;   XREF to: 1000a200 (UNCONDITIONAL_CALL)  ; int crt_math.c__atodbl_FUN_1000a200(_CRT_DOUBLE * result, char * str)
    MOV EAX,dword ptr [ESP + 0xc]       ; 10006ff9
    MOV ECX,dword ptr [ESP + 0x10]      ; 10006ffd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 10007001
    ADD ESP,0x8                         ; 10007005
    MOV dword ptr [EDX],EAX             ; 10007008
    MOV dword ptr [EDX + 0x4],ECX       ; 1000700a
    ADD ESP,0xc                         ; 1000700d
    RET                                 ; 10007010
    LEA ECX,[ESP + 0x4]                 ; 10007011
        ;   Label: LAB_10007011
    PUSH ECX                            ; 10007015
    CALL crt_math.c__atoflt_FUN_1000a280 ; 10007016
        ;   XREF to: 1000a280 (UNCONDITIONAL_CALL)  ; int crt_math.c__atoflt_FUN_1000a280(_CRT_FLOAT * result, char * str) | __atodbl
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000701b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000701f
    ADD ESP,0x8                         ; 10007023
    MOV dword ptr [EDX],ECX             ; 10007026
    ADD ESP,0xc                         ; 10007028
    RET                                 ; 1000702b

