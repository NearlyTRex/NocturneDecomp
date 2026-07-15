; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; errno_t __cdecl crt_stdio_c__cftof_FUN_100071a0(double *value,char *buf,size_t size_in_bytes,int dec)
;
; Parameters:
; double *         Stack[0x4]:4   value
; char *           Stack[0x8]:4   buf
; size_t           Stack[0xc]:4   size_in_bytes
; int              Stack[0x10]:4   dec
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_stdio.c__cfltcvt_FUN_10007380 at 100073a2
;
; Called Functions:
;   crt_stdio.c__cftof2_FUN_10007210
;   crt_stdio.c__fltout2_FUN_1000a350
;   crt_stdio.c__fptostr_FUN_1000a2c0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 100071a0
        ;   Label: crt_stdio.c__cftof_FUN_100071a0
    LEA EAX,[ESP + 0x10]                ; 100071a3
    PUSH ESI                            ; 100071a7
    LEA ECX,[ESP + 0x4]                 ; 100071a8
    PUSH EDI                            ; 100071ac
    PUSH EAX                            ; 100071ad
    PUSH ECX                            ; 100071ae
    MOV EAX,dword ptr [ESP + 0x3c]      ; 100071af
    MOV EDX,dword ptr [EAX + 0x4]       ; 100071b3
    MOV ECX,dword ptr [EAX]             ; 100071b6
    PUSH EDX                            ; 100071b8
    PUSH ECX                            ; 100071b9
    CALL crt_stdio.c__fltout2_FUN_1000a350 ; 100071ba
        ;   XREF to: 1000a350 (UNCONDITIONAL_CALL)  ; STRFLT crt_stdio.c__fltout2_FUN_1000a350(_CRT_DOUBLE dbl, STRFLT flt, char * result_str, size_t size_in_bytes)
    LEA ECX,[ESP + 0x18]                ; 100071bf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 100071c3
    MOV ESI,dword ptr [ESP + 0x4c]      ; 100071c7
    ADD ESP,0x10                        ; 100071cb
    ADD EAX,ESI                         ; 100071ce
    PUSH ECX                            ; 100071d0
    MOV EDI,dword ptr [ESP + 0x3c]      ; 100071d1
    PUSH EAX                            ; 100071d5
    MOV EAX,dword ptr [ESP + 0x10]      ; 100071d6
    SUB EAX,0x2d                        ; 100071da
    CMP EAX,0x1                         ; 100071dd
    SBB EAX,EAX                         ; 100071e0
    NEG EAX                             ; 100071e2
    ADD EAX,EDI                         ; 100071e4
    PUSH EAX                            ; 100071e6
    CALL crt_stdio.c__fptostr_FUN_1000a2c0 ; 100071e7
        ;   XREF to: 1000a2c0 (UNCONDITIONAL_CALL)  ; errno_t crt_stdio.c__fptostr_FUN_1000a2c0(char * buf, size_t size_in_bytes, int digits, STRFLT pt_flt)
    LEA EAX,[ESP + 0x14]                ; 100071ec
    ADD ESP,0xc                         ; 100071f0
    PUSH 0x0                            ; 100071f3
    PUSH EAX                            ; 100071f5
    PUSH ESI                            ; 100071f6
    PUSH EDI                            ; 100071f7
    CALL crt_stdio.c__cftof2_FUN_10007210 ; 100071f8
        ;   XREF to: 10007210 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c__cftof2_FUN_10007210(char * buf, uint dec, int * pflt, char is_g)
    ADD ESP,0x10                        ; 100071fd
    MOV EAX,EDI                         ; 10007200
    POP EDI                             ; 10007202
    POP ESI                             ; 10007203
    ADD ESP,0x28                        ; 10007204
    RET                                 ; 10007207

