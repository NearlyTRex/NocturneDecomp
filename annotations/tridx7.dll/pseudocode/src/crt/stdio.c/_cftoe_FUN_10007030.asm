; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; errno_t __cdecl crt_stdio_c__cftoe_FUN_10007030(double *value,char *buf,size_t size_in_bytes,int dec,int caps)
;
; Parameters:
; double *         Stack[0x4]:4   value
; char *           Stack[0x8]:4   buf
; size_t           Stack[0xc]:4   size_in_bytes
; int              Stack[0x10]:4   dec
; int              Stack[0x14]:4   caps
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_stdio.c__cfltcvt_FUN_10007380 at 100073dc
;
; Called Functions:
;   crt_stdio.c__cftoe2_FUN_100070b0
;   crt_stdio.c__fltout2_FUN_1000a350
;   crt_stdio.c__fptostr_FUN_1000a2c0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 10007030
        ;   Label: crt_stdio.c__cftoe_FUN_10007030
    LEA EAX,[ESP + 0x10]                ; 10007033
    PUSH ESI                            ; 10007037
    LEA ECX,[ESP + 0x4]                 ; 10007038
    PUSH EDI                            ; 1000703c
    PUSH EAX                            ; 1000703d
    PUSH ECX                            ; 1000703e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 1000703f
    MOV EDX,dword ptr [EAX + 0x4]       ; 10007043
    MOV ECX,dword ptr [EAX]             ; 10007046
    PUSH EDX                            ; 10007048
    PUSH ECX                            ; 10007049
    CALL crt_stdio.c__fltout2_FUN_1000a350 ; 1000704a
        ;   XREF to: 1000a350 (UNCONDITIONAL_CALL)  ; STRFLT crt_stdio.c__fltout2_FUN_1000a350(_CRT_DOUBLE dbl, STRFLT flt, char * result_str, size_t size_in_bytes)
    LEA ECX,[ESP + 0x18]                ; 1000704f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 10007053
    MOV EDI,dword ptr [ESP + 0x48]      ; 10007057
    ADD ESP,0x10                        ; 1000705b
    LEA EAX,[ESI + 0x1]                 ; 1000705e
    TEST ESI,ESI                        ; 10007061
    PUSH ECX                            ; 10007063
    PUSH EAX                            ; 10007064
    MOV ECX,0x1                         ; 10007065
    JG 0x1000706e                       ; 1000706a
        ;   XREF to: 1000706e (CONDITIONAL_JUMP)  ; LAB_1000706e
    XOR ECX,ECX                         ; 1000706c
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000706e
        ;   Label: LAB_1000706e
    SUB EAX,0x2d                        ; 10007072
    CMP EAX,0x1                         ; 10007075
    SBB EAX,EAX                         ; 10007078
    NEG EAX                             ; 1000707a
    ADD ECX,EAX                         ; 1000707c
    ADD ECX,EDI                         ; 1000707e
    PUSH ECX                            ; 10007080
    CALL crt_stdio.c__fptostr_FUN_1000a2c0 ; 10007081
        ;   XREF to: 1000a2c0 (UNCONDITIONAL_CALL)  ; errno_t crt_stdio.c__fptostr_FUN_1000a2c0(char * buf, size_t size_in_bytes, int digits, STRFLT pt_flt)
    LEA ECX,[ESP + 0x14]                ; 10007086
    MOV EDX,dword ptr [ESP + 0x4c]      ; 1000708a
    ADD ESP,0xc                         ; 1000708e
    PUSH 0x0                            ; 10007091
    PUSH ECX                            ; 10007093
    PUSH EDX                            ; 10007094
    PUSH ESI                            ; 10007095
    PUSH EDI                            ; 10007096
    CALL crt_stdio.c__cftoe2_FUN_100070b0 ; 10007097
        ;   XREF to: 100070b0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c__cftoe2_FUN_100070b0(char * buf, int dec, int caps, int * pflt, ...)
    ADD ESP,0x14                        ; 1000709c
    MOV EAX,EDI                         ; 1000709f
    POP EDI                             ; 100070a1
    POP ESI                             ; 100070a2
    ADD ESP,0x28                        ; 100070a3
    RET                                 ; 100070a6

