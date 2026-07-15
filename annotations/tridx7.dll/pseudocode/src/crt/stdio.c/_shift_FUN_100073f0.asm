; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__shift_FUN_100073f0(char *str,int dist)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   dist
;
; XREF[2]:
;   crt_stdio.c__cftoe2_FUN_100070b0 at 100070e1
;   crt_stdio.c__cftof2_FUN_10007210 at 10007268
;
; Called Functions:
;   crt_string.c_memcpy_FUN_1000a4a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100073f0
        ;   Label: crt_stdio.c__shift_FUN_100073f0
    PUSH EDI                            ; 100073f1
    MOV ESI,dword ptr [ESP + 0x10]      ; 100073f2
    TEST ESI,ESI                        ; 100073f6
    JZ 0x10007418                       ; 100073f8
        ;   XREF to: 10007418 (CONDITIONAL_JUMP)  ; LAB_10007418
    MOV EDX,dword ptr [ESP + 0xc]       ; 100073fa
    MOV ECX,0xffffffff                  ; 100073fe
    MOV EDI,EDX                         ; 10007403
    SUB EAX,EAX                         ; 10007405
    SCASB.REPNE ES:EDI                  ; 10007407
    NOT ECX                             ; 10007409
    PUSH ECX                            ; 1000740b
    PUSH EDX                            ; 1000740c
    ADD EDX,ESI                         ; 1000740d
    PUSH EDX                            ; 1000740f
    CALL crt_string.c_memcpy_FUN_1000a4a0 ; 10007410
        ;   XREF to: 1000a4a0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_1000a4a0(void * dst, void * src, size_t size)
    ADD ESP,0xc                         ; 10007415
    POP EDI                             ; 10007418
        ;   Label: LAB_10007418
    POP ESI                             ; 10007419
    RET                                 ; 1000741a

