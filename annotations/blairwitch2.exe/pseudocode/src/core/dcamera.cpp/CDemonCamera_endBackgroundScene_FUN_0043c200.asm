; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera *this_ptr,int restore_zbuffer)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   restore_zbuffer
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e517
;   core_set.cpp_FUN_0052f2a0 at 0052f787
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01467158
;   undefined4 DAT_0146715c
;   undefined4 DAT_01467160
;   undefined4 DAT_01467164
;   undefined4 DAT_01467168
;   undefined4 DAT_01468424
;   undefined4 DAT_01468428
;   undefined4 DAT_0146842c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c2b64c
;   ... and 9 more
;
; Called Functions:
;   core_dstrendr.cpp_memcpyMMX_FUN_00470201
;   engine_matrix.c_popViewport_FUN_0046b740
;   engine_special.cpp_FUN_00560030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c200
        ;   Label: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200
    PUSH ESI                            ; 0043c201
    PUSH EDI                            ; 0043c202
    PUSH EBP                            ; 0043c203
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043c204
    MOV EDX,dword ptr [0x01467158]      ; 0043c208 | DAT_01467158
    DEC EDX                             ; 0043c20e
    MOV dword ptr [0x01467158],EDX      ; 0043c20f | DAT_01467158
    JZ 0x0043c21c                       ; 0043c215
        ;   XREF to: 0043c21c (CONDITIONAL_JUMP)  ; LAB_0043c21c
    POP EBP                             ; 0043c217
        ;   Label: LAB_0043c217
    POP EDI                             ; 0043c218
    POP ESI                             ; 0043c219
    POP EBX                             ; 0043c21a
    RET                                 ; 0043c21b
    MOV EBX,dword ptr [0x0060b280]      ; 0043c21c | DAT_0060b280
        ;   Label: LAB_0043c21c
    PUSH EBX                            ; 0043c222 | DAT_01ba5c50
    CALL engine_matrix.c_popViewport_FUN_0046b740 ; 0043c223
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0046b740()
    MOV EAX,[0x01c35e38]                ; 0043c228 | DAT_01c35e38
    MOV dword ptr [EBP + 0x1c0],EAX     ; 0043c22d
    MOV EAX,[0x01c35e3c]                ; 0043c233 | DAT_01c35e3c
    MOV ESI,0x1467164                   ; 0043c238
    MOV dword ptr [EBP + 0x1c4],EAX     ; 0043c23d
    MOV EAX,[0x01c35e40]                ; 0043c243 | DAT_01c35e40
    MOV EDI,0x1c2a38c                   ; 0043c248
    MOV dword ptr [EBP + 0x1c8],EAX     ; 0043c24d
    MOV EAX,[0x01c35e44]                ; 0043c253 | DAT_01c35e44
    MOV ECX,dword ptr [0x006141bc]      ; 0043c258 | DAT_006141bc
    MOV dword ptr [EBP + 0x1cc],EAX     ; 0043c25e
    MOV EAX,[0x0146715c]                ; 0043c264 | DAT_0146715c
    ADD ESP,0x4                         ; 0043c269
    MOV [0x006141c0],EAX                ; 0043c26c | DAT_006141c0
    MOV EAX,[0x01467160]                ; 0043c271 | DAT_01467160
    SHL ECX,0x2                         ; 0043c276
    MOV [0x01c37788],EAX                ; 0043c279 | DAT_01c37788
    PUSH EDI                            ; 0043c27e | DAT_01c2a38c
    MOV EAX,ECX                         ; 0043c27f
    SHR ECX,0x2                         ; 0043c281
    MOVSD.REP ES:EDI,ESI                ; 0043c284 | DAT_01467164 | DAT_01c2a38c | DAT_01467168
    MOV CL,AL                           ; 0043c286
    AND CL,0x3                          ; 0043c288
    MOVSB.REP ES:EDI,ESI                ; 0043c28b | DAT_01467168 | DAT_01c2a390
    POP EDI                             ; 0043c28d
    MOV EAX,[0x01468424]                ; 0043c28e | DAT_01468424
    MOV [0x01c35814],EAX                ; 0043c293 | DAT_01c35814
    MOV EAX,[0x01468428]                ; 0043c298 | DAT_01468428
    MOV [0x01c35820],EAX                ; 0043c29d | DAT_01c35820
    MOV EAX,[0x0146842c]                ; 0043c2a2 | DAT_0146842c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043c2a7
    MOV [0x01c3582c],EAX                ; 0043c2ab | DAT_01c3582c
    TEST ESI,ESI                        ; 0043c2b0
    JZ 0x0043c217                       ; 0043c2b2
        ;   XREF to: 0043c217 (CONDITIONAL_JUMP)  ; LAB_0043c217
    MOV EDI,dword ptr [EBP + 0x148]     ; 0043c2b8
    XOR ESI,ESI                         ; 0043c2be
    TEST EDI,EDI                        ; 0043c2c0
    JLE 0x0043c310                      ; 0043c2c2
        ;   XREF to: 0043c310 (CONDITIONAL_JUMP)  ; LAB_0043c310
    XOR EDI,EDI                         ; 0043c2c4
    MOV EDX,dword ptr [EBP + 0x144]     ; 0043c2c6
        ;   Label: LAB_0043c2c6
    IMUL EDX,ESI                        ; 0043c2cc
    MOV EAX,dword ptr [EBP + 0x144]     ; 0043c2cf
    MOV ECX,dword ptr [EDI + 0x1c2b64c] ; 0043c2d5 | DAT_01c2b64c | DAT_01c2b650
    SHL EAX,0x2                         ; 0043c2db
    MOV EBX,dword ptr [EBP + 0x15c]     ; 0043c2de
    PUSH EAX                            ; 0043c2e4
    ADD ECX,EAX                         ; 0043c2e5
    SHL EDX,0x2                         ; 0043c2e7
    PUSH ECX                            ; 0043c2ea
    ADD EDX,EBX                         ; 0043c2eb
    ADD EDI,0x4                         ; 0043c2ed
    PUSH EDX                            ; 0043c2f0
    INC ESI                             ; 0043c2f1
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00470201 ; 0043c2f2
        ;   XREF to: 00470201 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00470201(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [EBP + 0x148]     ; 0043c2f7
    ADD ESP,0xc                         ; 0043c2fd
    CMP ESI,EAX                         ; 0043c300
    JL 0x0043c2c6                       ; 0043c302
        ;   XREF to: 0043c2c6 (CONDITIONAL_JUMP)  ; LAB_0043c2c6
    LEA EAX,[EAX]                       ; 0043c304
    LEA EDX,[EDX]                       ; 0043c30a
    CMP dword ptr [0x01c37788],0x0      ; 0043c310 | DAT_01c37788
        ;   Label: LAB_0043c310
    JZ 0x0043c217                       ; 0043c317
        ;   XREF to: 0043c217 (CONDITIONAL_JUMP)  ; LAB_0043c217
    PUSH 0x0                            ; 0043c31d
    CALL engine_special.cpp_FUN_00560030 ; 0043c31f
        ;   XREF to: 00560030 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00560030(int slot)
    ADD ESP,0x4                         ; 0043c324
    POP EBP                             ; 0043c327
    POP EDI                             ; 0043c328
    POP ESI                             ; 0043c329
    POP EBX                             ; 0043c32a
    RET                                 ; 0043c32b

