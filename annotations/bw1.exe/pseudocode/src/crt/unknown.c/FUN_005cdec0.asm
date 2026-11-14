; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cdec0(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005cc9f0 at 005cc9ff
;   crt_unknown.c_FUN_005cdf00 at 005cdf4a
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdec0
        ;   Label: crt_unknown.c_FUN_005cdec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cdec1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005cdec5
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cdec9 | DAT_02c9f6e0
    JZ 0x005cdef3                       ; 005cded0
        ;   XREF to: 005cdef3 (CONDITIONAL_JUMP)  ; LAB_005cdef3
    XOR EDX,EDX                         ; 005cded2
    MOV DL,byte ptr [EAX]               ; 005cded4
    MOV DL,byte ptr [EDX + 0x2c9f6f1]   ; 005cded6
    AND DL,0x1                          ; 005cdedc
    AND EDX,0xff                        ; 005cdedf
    JZ 0x005cdef3                       ; 005cdee5
        ;   XREF to: 005cdef3 (CONDITIONAL_JUMP)  ; LAB_005cdef3
    MOV DL,byte ptr [EAX]               ; 005cdee7
    MOV byte ptr [EBX],DL               ; 005cdee9
    MOV AL,byte ptr [EAX + 0x1]         ; 005cdeeb
    MOV byte ptr [EBX + 0x1],AL         ; 005cdeee
    POP EBX                             ; 005cdef1
    RET                                 ; 005cdef2
    MOV AL,byte ptr [EAX]               ; 005cdef3
        ;   Label: LAB_005cdef3
    MOV byte ptr [EBX],AL               ; 005cdef5
    POP EBX                             ; 005cdef7
    RET                                 ; 005cdef8

