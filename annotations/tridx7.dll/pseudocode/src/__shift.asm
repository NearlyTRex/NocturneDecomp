; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __shift(char *param_1,int param_2)
;
;
; XREF[2]:
;   __cftoe2 at 100070e1
;   __cftof2 at 10007268
;
; Called Functions:
;   FID_conflict:_memcpy
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100073f0
        ;   Label: __shift
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
    CALL FID_conflict:_memcpy           ; 10007410
        ;   XREF to: 1000a4a0 (UNCONDITIONAL_CALL)  ; void * FID_conflict:_memcpy(void * _Dst, void * _Src, size_t _Size)
    ADD ESP,0xc                         ; 10007415
    POP EDI                             ; 10007418
        ;   Label: LAB_10007418
    POP ESI                             ; 10007419
    RET                                 ; 1000741a

