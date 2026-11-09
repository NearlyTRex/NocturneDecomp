; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_freopen_FUN_005b91a4(undefined4 param_1,undefined1 *param_2,int param_3)
;
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e4716
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f418
;
; Called Functions:
;   crt_unknown.c_FUN_005b8e60
;   crt_unknown.c_FUN_005b8f9c
;   crt_unknown.c_FUN_005b9124
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b91a4
        ;   Label: crt_stdio.c_freopen_FUN_005b91a4
    PUSH ESI                            ; 005b91a5
    PUSH EDI                            ; 005b91a6
    PUSH EBP                            ; 005b91a7
    SUB ESP,0x4                         ; 005b91a8
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b91ab
    MOV EAX,ESP                         ; 005b91af
    PUSH EAX                            ; 005b91b1
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b91b2
    PUSH EDX                            ; 005b91b6
    CALL crt_unknown.c_FUN_005b8e60     ; 005b91b7
        ;   XREF to: 005b8e60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8e60()
    ADD ESP,0x8                         ; 005b91bc
    MOV EDI,EAX                         ; 005b91bf
    TEST EAX,EAX                        ; 005b91c1
    JZ 0x005b922e                       ; 005b91c3
        ;   XREF to: 005b922e (CONDITIONAL_JUMP)  ; LAB_005b922e
    MOV EBX,dword ptr [ESI + 0x10]      ; 005b91c5
    PUSH EBX                            ; 005b91c8
    CALL dword ptr [0x0061f2a8]         ; 005b91c9 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV ECX,dword ptr [0x0061f418]      ; 005b91cf | DAT_0061f418
    ADD ESP,0x4                         ; 005b91d5
    TEST ECX,ECX                        ; 005b91d8
    JZ 0x005b91e6                       ; 005b91da
        ;   XREF to: 005b91e6 (CONDITIONAL_JUMP)  ; LAB_005b91e6
    PUSH EBX                            ; 005b91dc
    CALL dword ptr [0x0061f418]         ; 005b91dd | DAT_0061f418
    ADD ESP,0x4                         ; 005b91e3
    PUSH ESI                            ; 005b91e6
        ;   Label: LAB_005b91e6
    CALL crt_unknown.c_FUN_005b9124     ; 005b91e7
        ;   XREF to: 005b9124 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9124()
    ADD ESP,0x4                         ; 005b91ec
    MOV ESI,EAX                         ; 005b91ef
    TEST EAX,EAX                        ; 005b91f1
    JZ 0x005b9222                       ; 005b91f3
        ;   XREF to: 005b9222 (CONDITIONAL_JUMP)  ; LAB_005b9222
    MOV ESI,dword ptr [EAX + 0xc]       ; 005b91f5
    AND ESI,0x4000                      ; 005b91f8
    PUSH EAX                            ; 005b91fe
    MOV dword ptr [EAX + 0xc],ESI       ; 005b91ff
    PUSH 0x0                            ; 005b9202
    MOV EBP,dword ptr [ESP + 0x8]       ; 005b9204
    PUSH EBP                            ; 005b9208
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b9209
    XOR EAX,EAX                         ; 005b920d
    PUSH EDI                            ; 005b920f
    MOV AL,byte ptr [ESI]               ; 005b9210
    PUSH EAX                            ; 005b9212
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b9213
    PUSH EAX                            ; 005b9217
    CALL crt_unknown.c_FUN_005b8f9c     ; 005b9218
        ;   XREF to: 005b8f9c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8f9c()
    ADD ESP,0x18                        ; 005b921d
    MOV ESI,EAX                         ; 005b9220
    PUSH EBX                            ; 005b9222
        ;   Label: LAB_005b9222
    CALL dword ptr [0x0061f2ac]         ; 005b9223 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005b9229
    MOV EAX,ESI                         ; 005b922c
    ADD ESP,0x4                         ; 005b922e
        ;   Label: LAB_005b922e
    POP EBP                             ; 005b9231
    POP EDI                             ; 005b9232
    POP ESI                             ; 005b9233
    POP EBX                             ; 005b9234
    RET                                 ; 005b9235

