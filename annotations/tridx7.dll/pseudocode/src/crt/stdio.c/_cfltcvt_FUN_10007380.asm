; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__cfltcvt_FUN_10007380(double *value,char *buf,int format,size_t size_in_bytes,int precision,int caps)
;
; Parameters:
; double *         Stack[0x4]:4   value
; char *           Stack[0x8]:4   buf
; int              Stack[0xc]:4   format
; size_t           Stack[0x10]:4   size_in_bytes
; int              Stack[0x14]:4   precision
; int              Stack[0x18]:4   caps
;
; XREF[1]:
;   crt_fpu.c__install_fp_handlers_FUN_100055b0 at 100055d8
;
; Called Functions:
;   crt_stdio.c__cftoe_FUN_10007030
;   crt_stdio.c__cftof_FUN_100071a0
;   crt_stdio.c__cftog_FUN_100072d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10007380
        ;   Label: crt_stdio.c__cfltcvt_FUN_10007380
    CMP EAX,0x65                        ; 10007384
    JZ 0x100073c8                       ; 10007387
        ;   XREF to: 100073c8 (CONDITIONAL_JUMP)  ; LAB_100073c8
    CMP EAX,0x45                        ; 10007389
    JZ 0x100073c8                       ; 1000738c
        ;   XREF to: 100073c8 (CONDITIONAL_JUMP)  ; LAB_100073c8
    CMP EAX,0x66                        ; 1000738e
    JNZ 0x100073ab                      ; 10007391
        ;   XREF to: 100073ab (CONDITIONAL_JUMP)  ; LAB_100073ab
    MOV EAX,dword ptr [ESP + 0x10]      ; 10007393
    MOV ECX,dword ptr [ESP + 0x8]       ; 10007397
    MOV EDX,dword ptr [ESP + 0x4]       ; 1000739b
    PUSH EAX                            ; 1000739f
    PUSH ECX                            ; 100073a0
    PUSH EDX                            ; 100073a1
    CALL crt_stdio.c__cftof_FUN_100071a0 ; 100073a2
        ;   XREF to: 100071a0 (UNCONDITIONAL_CALL)  ; errno_t crt_stdio.c__cftof_FUN_100071a0(double * value, char * buf, size_t size_in_bytes, int dec)
    ADD ESP,0xc                         ; 100073a7
    RET                                 ; 100073aa
    MOV EAX,dword ptr [ESP + 0x14]      ; 100073ab
        ;   Label: LAB_100073ab
    MOV ECX,dword ptr [ESP + 0x10]      ; 100073af
    MOV EDX,dword ptr [ESP + 0x8]       ; 100073b3
    PUSH EAX                            ; 100073b7
    MOV EAX,dword ptr [ESP + 0x8]       ; 100073b8
    PUSH ECX                            ; 100073bc
    PUSH EDX                            ; 100073bd
    PUSH EAX                            ; 100073be
    CALL crt_stdio.c__cftog_FUN_100072d0 ; 100073bf
        ;   XREF to: 100072d0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__cftog_FUN_100072d0(double * value, char * buf, size_t size_in_bytes, int caps)
    ADD ESP,0x10                        ; 100073c4
    RET                                 ; 100073c7
    MOV EAX,dword ptr [ESP + 0x14]      ; 100073c8
        ;   Label: LAB_100073c8
    MOV ECX,dword ptr [ESP + 0x10]      ; 100073cc
    MOV EDX,dword ptr [ESP + 0x8]       ; 100073d0
    PUSH EAX                            ; 100073d4
    MOV EAX,dword ptr [ESP + 0x8]       ; 100073d5
    PUSH ECX                            ; 100073d9
    PUSH EDX                            ; 100073da
    PUSH EAX                            ; 100073db
    CALL crt_stdio.c__cftoe_FUN_10007030 ; 100073dc
        ;   XREF to: 10007030 (UNCONDITIONAL_CALL)  ; errno_t crt_stdio.c__cftoe_FUN_10007030(double * value, char * buf, size_t size_in_bytes, int dec, ...)
    ADD ESP,0x10                        ; 100073e1
    RET                                 ; 100073e4

