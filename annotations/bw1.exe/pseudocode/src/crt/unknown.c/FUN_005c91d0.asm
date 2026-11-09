; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_005c91d0(undefined4 *param_1,uint param_2)
;
;
; XREF[4]:
;   crt_stdlib.c__fullpath_FUN_005c2500 at 005c2549
;   crt_unknown.c_FUN_005c26ae at 005c26ae
;   crt_unknown.c_FUN_005c6c7c at 005c6ce8
;   crt_unknown.c_FUN_005c8094 at 005c80e7
;
; Referenced Globals:
;   void* PTR_GetCurrentDirectoryA_005d0584 = 001d0e28
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c862c
;   GetCurrentDirectoryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c91d0
        ;   Label: crt_unknown.c_FUN_005c91d0
    PUSH ESI                            ; 005c91d1
    PUSH EDI                            ; 005c91d2
    SUB ESP,0x104                       ; 005c91d3
    MOV EBX,dword ptr [ESP + 0x114]     ; 005c91d9
    MOV ESI,dword ptr [ESP + 0x118]     ; 005c91e0
    MOV EAX,ESP                         ; 005c91e7
    PUSH EAX                            ; 005c91e9
    PUSH 0x104                          ; 005c91ea
    CALL dword ptr CS:[0x5d0584]        ; 005c91ef | PTR_GetCurrentDirectoryA_005d0584
    MOV EDI,EAX                         ; 005c91f6
    TEST EAX,EAX                        ; 005c91f8
    JNZ 0x005c9205                      ; 005c91fa
        ;   XREF to: 005c9205 (CONDITIONAL_JUMP)  ; LAB_005c9205
    CALL crt_unknown.c_FUN_005c862c     ; 005c91fc
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    XOR EAX,EAX                         ; 005c9201
    JMP 0x005c926e                      ; 005c9203
        ;   XREF to: 005c926e (UNCONDITIONAL_JUMP)  ; LAB_005c926e
    TEST EBX,EBX                        ; 005c9205
        ;   Label: LAB_005c9205
    JNZ 0x005c9235                      ; 005c9207
        ;   XREF to: 005c9235 (CONDITIONAL_JUMP)  ; LAB_005c9235
    INC EAX                             ; 005c9209
    CMP ESI,EAX                         ; 005c920a
    JBE 0x005c9210                      ; 005c920c
        ;   XREF to: 005c9210 (CONDITIONAL_JUMP)  ; LAB_005c9210
    MOV EAX,ESI                         ; 005c920e
    PUSH EAX                            ; 005c9210
        ;   Label: LAB_005c9210
    CALL crt_unknown.c_FUN_005c08d0     ; 005c9211
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005c9216
    MOV EBX,EAX                         ; 005c9219
    TEST EAX,EAX                        ; 005c921b
    JNZ 0x005c924f                      ; 005c921d
        ;   XREF to: 005c924f (CONDITIONAL_JUMP)  ; LAB_005c924f
    PUSH 0x5                            ; 005c921f
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c9221
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c9226
    XOR EAX,EAX                         ; 005c9229
    ADD ESP,0x104                       ; 005c922b
    POP EDI                             ; 005c9231
    POP ESI                             ; 005c9232
    POP EBX                             ; 005c9233
    RET                                 ; 005c9234
    CMP EAX,ESI                         ; 005c9235
        ;   Label: LAB_005c9235
    JBE 0x005c924f                      ; 005c9237
        ;   XREF to: 005c924f (CONDITIONAL_JUMP)  ; LAB_005c924f
    PUSH 0xe                            ; 005c9239
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c923b
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c9240
    XOR EAX,EAX                         ; 005c9243
    ADD ESP,0x104                       ; 005c9245
    POP EDI                             ; 005c924b
    POP ESI                             ; 005c924c
    POP EBX                             ; 005c924d
    RET                                 ; 005c924e
    LEA ECX,[EDI + 0x1]                 ; 005c924f
        ;   Label: LAB_005c924f
    MOV ESI,ESP                         ; 005c9252
    MOV EDI,EBX                         ; 005c9254
    PUSH ES                             ; 005c9256
    MOV AX,DS                           ; 005c9257
    MOV ES,AX                           ; 005c9259
    PUSH EDI                            ; 005c925b
    MOV EAX,ECX                         ; 005c925c
    SHR ECX,0x2                         ; 005c925e
    MOVSD.REP ES:EDI,ESI                ; 005c9261
    MOV CL,AL                           ; 005c9263
    AND CL,0x3                          ; 005c9265
    MOVSB.REP ES:EDI,ESI                ; 005c9268
    POP EDI                             ; 005c926a
    POP ES                              ; 005c926b
    MOV EAX,EBX                         ; 005c926c
    ADD ESP,0x104                       ; 005c926e
        ;   Label: LAB_005c926e
    POP EDI                             ; 005c9274
    POP ESI                             ; 005c9275
    POP EBX                             ; 005c9276
    RET                                 ; 005c9277

