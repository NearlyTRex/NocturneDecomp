; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004944fe(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f578
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_FUN_004c1dd0
;   engine_font.cpp_FUN_004c4510
;   engine_mini3d.cpp_FUN_00512320
;   shape_edittool.cpp_FUN_00496ee0
;   wincore_wddvmem.cpp_FUN_005acff0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004944fe
        ;   Label: shape_edittool.cpp_FUN_004944fe
    PUSH EBX                            ; 00494500
    PUSH ESI                            ; 00494501
    PUSH EDI                            ; 00494502
    PUSH EBP                            ; 00494503
    SUB ESP,0x404                       ; 00494504
    CMP dword ptr [0x01c3eb50],0x0      ; 0049450a | DAT_01c3eb50
    JZ 0x004945d0                       ; 00494511
        ;   XREF to: 004945d0 (CONDITIONAL_JUMP)  ; LAB_004945d0
    MOV EAX,[0x01c3eb50]                ; 00494517 | DAT_01c3eb50
        ;   Label: LAB_00494517
    PUSH 0x6a                           ; 0049451c
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0049451e
    PUSH EAX                            ; 00494524
    MOV dword ptr [0x01c3f538],EDX      ; 00494525 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 0049452b
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00494530
    MOV [0x01c3f53c],EAX                ; 00494533 | DAT_01c3f53c
    LEA EAX,[ESP + 0x420]               ; 00494538
    MOV dword ptr [ESP + 0x400],EAX     ; 0049453f
    LEA EAX,[ESP + 0x400]               ; 00494546
    PUSH EAX                            ; 0049454d
    MOV ESI,dword ptr [ESP + 0x420]     ; 0049454e
    PUSH ESI                            ; 00494555
    LEA EAX,[ESP + 0x8]                 ; 00494556
    PUSH EAX                            ; 0049455a
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 0049455b
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00494560
    MOV EBP,dword ptr [ESP + 0x418]     ; 00494563
    XOR EDI,EDI                         ; 0049456a
    PUSH EBP                            ; 0049456c
    MOV dword ptr [ESP + 0x404],EDI     ; 0049456d
    CALL shape_edittool.cpp_FUN_00496ee0 ; 00494574
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 00494579
    PUSH 0xffff                         ; 0049457c
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00494581
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00494586
    PUSH 0x3f800000                     ; 00494589
    CALL engine_mini3d.cpp_FUN_00512320 ; 0049458e
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    ADD ESP,0x4                         ; 00494593
    PUSH -0x1                           ; 00494596
    MOV EAX,[0x01c3f578]                ; 00494598 | DAT_01c3f578
    PUSH EAX                            ; 0049459d
    MOV EDX,dword ptr [0x01c4f00c]      ; 0049459e | DAT_01c4f00c
    PUSH EDX                            ; 004945a4
    MOV ECX,dword ptr [0x01c4f008]      ; 004945a5 | DAT_01c4f008
    PUSH ECX                            ; 004945ab
    LEA EAX,[ESP + 0x10]                ; 004945ac
    PUSH EAX                            ; 004945b0
    MOV EBX,dword ptr [0x01c3eb50]      ; 004945b1 | DAT_01c3eb50
    PUSH EBX                            ; 004945b7
    CALL engine_font.cpp_FUN_004c1dd0   ; 004945b8
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004945bd
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004945c0
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    ADD ESP,0x404                       ; 004945c5
    POP EBP                             ; 004945cb
    POP EDI                             ; 004945cc
    POP ESI                             ; 004945cd
    POP EBX                             ; 004945ce
    RET                                 ; 004945cf
    MOV ECX,0x5dbc68                    ; 004945d0
        ;   Label: LAB_004945d0
    MOV EBX,0xa4                        ; 004945d5
    PUSH 0x5dbc7e                       ; 004945da
    MOV dword ptr [0x01d1d400],ECX      ; 004945df | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004945e5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004945eb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004945f0
    JMP 0x00494517                      ; 004945f3
        ;   XREF to: 00494517 (UNCONDITIONAL_JUMP)  ; LAB_00494517

