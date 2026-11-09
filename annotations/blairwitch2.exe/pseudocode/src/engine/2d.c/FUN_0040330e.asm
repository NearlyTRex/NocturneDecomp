; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_2d_c_FUN_0040330e(undefined1 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_drawText_FUN_00401fe0
;   wincore_wddvmem.cpp_FUN_00589560
;   wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0040330e
        ;   Label: engine_2d.c_FUN_0040330e
    PUSH EBX                            ; 00403310
    PUSH ESI                            ; 00403311
    PUSH EDI                            ; 00403312
    PUSH EBP                            ; 00403313
    SUB ESP,0x104                       ; 00403314
    MOV ESI,dword ptr [ESP + 0x118]     ; 0040331a
    MOV EBP,dword ptr [ESP + 0x120]     ; 00403321
    MOV EDI,dword ptr [ESP + 0x124]     ; 00403328
    MOV byte ptr [ESI],0x0              ; 0040332f
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00403332
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EBX,EBX                         ; 00403337
    PUSH ESI                            ; 00403339
        ;   Label: LAB_00403339
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0040333a
    PUSH EDX                            ; 00403341
    PUSH 0x5ca1ae                       ; 00403342
    LEA EAX,[ESP + 0xc]                 ; 00403347
    PUSH EAX                            ; 0040334b
    CALL crt_unknown.c_FUN_005b7790     ; 0040334c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00403351
    PUSH EDI                            ; 00403354
    PUSH EBP                            ; 00403355
    LEA EAX,[ESP + 0x8]                 ; 00403356
    PUSH EAX                            ; 0040335a
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0040335b
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00403360
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 00403363
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_0058ead0 ; 00403368
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_0058ead0()
    AND EAX,0xff                        ; 0040336d
    MOV dword ptr [ESP + 0x100],EAX     ; 00403372
    CMP EAX,0xd                         ; 00403379
    JZ 0x004033cb                       ; 0040337c
        ;   XREF to: 004033cb (CONDITIONAL_JUMP)  ; LAB_004033cb
    CMP EAX,0x1b                        ; 0040337e
    JZ 0x004033c8                       ; 00403381
        ;   XREF to: 004033c8 (CONDITIONAL_JUMP)  ; LAB_004033c8
    CMP EAX,0x8                         ; 00403383
    JNZ 0x00403393                      ; 00403386
        ;   XREF to: 00403393 (CONDITIONAL_JUMP)  ; LAB_00403393
    TEST EBX,EBX                        ; 00403388
    JLE 0x00403393                      ; 0040338a
        ;   XREF to: 00403393 (CONDITIONAL_JUMP)  ; LAB_00403393
    DEC EBX                             ; 0040338c
    LEA EAX,[ESI + EBX*0x1]             ; 0040338d
    MOV byte ptr [EAX],0x0              ; 00403390
    MOV ECX,dword ptr [ESP + 0x100]     ; 00403393
        ;   Label: LAB_00403393
    CMP ECX,0x1f                        ; 0040339a
    JLE 0x00403339                      ; 0040339d
        ;   XREF to: 00403339 (CONDITIONAL_JUMP)  ; LAB_00403339
    CMP ECX,0x80                        ; 0040339f
    JGE 0x00403339                      ; 004033a5
        ;   XREF to: 00403339 (CONDITIONAL_JUMP)  ; LAB_00403339
    CMP EBX,dword ptr [ESP + 0x11c]     ; 004033a7
    JGE 0x00403339                      ; 004033ae
        ;   XREF to: 00403339 (CONDITIONAL_JUMP)  ; LAB_00403339
    LEA EAX,[ESI + EBX*0x1]             ; 004033b0
    MOV DL,byte ptr [ESP + 0x100]       ; 004033b3
    INC EBX                             ; 004033ba
    MOV byte ptr [EAX],DL               ; 004033bb
    LEA EAX,[ESI + EBX*0x1]             ; 004033bd
    MOV byte ptr [EAX],0x0              ; 004033c0
    JMP 0x00403339                      ; 004033c3
        ;   XREF to: 00403339 (UNCONDITIONAL_JUMP)  ; LAB_00403339
    MOV byte ptr [ESI],0x0              ; 004033c8
        ;   Label: LAB_004033c8
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004033cb
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
        ;   Label: LAB_004033cb
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004033d0
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x100]     ; 004033d5
    ADD ESP,0x104                       ; 004033dc
    POP EBP                             ; 004033e2
    POP EDI                             ; 004033e3
    POP ESI                             ; 004033e4
    POP EBX                             ; 004033e5
    RET                                 ; 004033e6

