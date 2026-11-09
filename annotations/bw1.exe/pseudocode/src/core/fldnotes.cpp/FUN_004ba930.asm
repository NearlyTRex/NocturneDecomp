; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004ba930(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0152d254
;   undefined4 DAT_01c4f020
;   undefined4 CAlphaBitmap_01cc7cc0.field12_0xc
;   undefined4 CAlphaBitmap_01cc7cc0.field16_0x10
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_FUN_0040d660
;   engine_font.cpp_FUN_004c1dd0
;   engine_font.cpp_FUN_004c4510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba930
        ;   Label: core_fldnotes.cpp_FUN_004ba930
    PUSH ESI                            ; 004ba931
    PUSH EDI                            ; 004ba932
    PUSH EBP                            ; 004ba933
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ba934
    PUSH -0x1                           ; 004ba938
    PUSH 0x0                            ; 004ba93a
    MOV EDX,dword ptr [ESI + 0x4]       ; 004ba93c
    PUSH EDX                            ; 004ba93f
    MOV ECX,dword ptr [ESI]             ; 004ba940
    PUSH ECX                            ; 004ba942
    LEA EAX,[ESI + 0x1c]                ; 004ba943
    PUSH EAX                            ; 004ba946
    MOV EBX,dword ptr [ESI + 0x11c]     ; 004ba947
    PUSH EBX                            ; 004ba94d
    CALL engine_font.cpp_FUN_004c1dd0   ; 004ba94e
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    MOV EDI,dword ptr [ESI + 0x18]      ; 004ba953
    ADD ESP,0x18                        ; 004ba956
    TEST EDI,EDI                        ; 004ba959
    JNZ 0x004ba962                      ; 004ba95b
        ;   XREF to: 004ba962 (CONDITIONAL_JUMP)  ; LAB_004ba962
    POP EBP                             ; 004ba95d
    POP EDI                             ; 004ba95e
    POP ESI                             ; 004ba95f
    POP EBX                             ; 004ba960
    RET                                 ; 004ba961
    PUSH 0x78                           ; 004ba962
        ;   Label: LAB_004ba962
    MOV EBP,dword ptr [ESI + 0x11c]     ; 004ba964
    PUSH EBP                            ; 004ba96a
    CALL engine_font.cpp_FUN_004c4510   ; 004ba96b
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV EDI,dword ptr [ESI + 0x4]       ; 004ba970
    MOV EDX,dword ptr [0x0152d254]      ; 004ba973 | DAT_0152d254
    ADD EDI,EAX                         ; 004ba979
    MOV EAX,dword ptr [ESI + 0x11c]     ; 004ba97b
    ADD ESP,0x8                         ; 004ba981
    CMP EAX,EDX                         ; 004ba984
    JNZ 0x004ba9e6                      ; 004ba986
        ;   XREF to: 004ba9e6 (CONDITIONAL_JUMP)  ; LAB_004ba9e6
    MOV EDX,dword ptr [0x01cc7ccc]      ; 004ba988 | CAlphaBitmap_01cc7cc0.field12_0xc
    MOV EBX,dword ptr [ESI + 0x8]       ; 004ba98e
    MOV ESI,dword ptr [ESI]             ; 004ba991
    CMP EBX,EDX                         ; 004ba993
    JLE 0x004ba9c0                      ; 004ba995
        ;   XREF to: 004ba9c0 (CONDITIONAL_JUMP)  ; LAB_004ba9c0
    PUSH 0xffff                         ; 004ba997
        ;   Label: LAB_004ba997
    PUSH EDI                            ; 004ba99c
    PUSH ESI                            ; 004ba99d
    PUSH 0x1cc7cc0                      ; 004ba99e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004ba9a3
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV ECX,dword ptr [0x01cc7ccc]      ; 004ba9a8 | CAlphaBitmap_01cc7cc0.field12_0xc
    ADD ESP,0x10                        ; 004ba9ae
    SUB EBX,ECX                         ; 004ba9b1
    ADD ESI,ECX                         ; 004ba9b3
    CMP EBX,ECX                         ; 004ba9b5
    JG 0x004ba997                       ; 004ba9b7
        ;   XREF to: 004ba997 (CONDITIONAL_JUMP)  ; LAB_004ba997
    LEA EAX,[EAX]                       ; 004ba9b9
    NOP                                 ; 004ba9bf
    MOV EAX,[0x01cc7cd0]                ; 004ba9c0 | CAlphaBitmap_01cc7cc0.field16_0x10
        ;   Label: LAB_004ba9c0
    PUSH 0xffff                         ; 004ba9c5
    DEC EAX                             ; 004ba9ca
    PUSH EAX                            ; 004ba9cb
    DEC EBX                             ; 004ba9cc
    PUSH EBX                            ; 004ba9cd
    PUSH 0x0                            ; 004ba9ce
    PUSH 0x0                            ; 004ba9d0
    PUSH EDI                            ; 004ba9d2
    PUSH ESI                            ; 004ba9d3
    PUSH 0x1cc7cc0                      ; 004ba9d4
    CALL engine_alphabit.cpp_FUN_0040d660 ; 004ba9d9
        ;   XREF to: 0040d660 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d660()
    ADD ESP,0x20                        ; 004ba9de
    POP EBP                             ; 004ba9e1
    POP EDI                             ; 004ba9e2
    POP ESI                             ; 004ba9e3
    POP EBX                             ; 004ba9e4
    RET                                 ; 004ba9e5
    MOV EBX,dword ptr [ESI]             ; 004ba9e6
        ;   Label: LAB_004ba9e6
    ADD EBX,dword ptr [ESI + 0x8]       ; 004ba9e8
    LEA EAX,[EBX + -0x1]                ; 004ba9eb
    PUSH EAX                            ; 004ba9ee
    PUSH EDI                            ; 004ba9ef
    MOV EAX,dword ptr [ESI]             ; 004ba9f0
    XOR ECX,ECX                         ; 004ba9f2
    PUSH EAX                            ; 004ba9f4
    MOV dword ptr [0x01c4f020],ECX      ; 004ba9f5 | DAT_01c4f020
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004ba9fb
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004baa00
    POP EBP                             ; 004baa03
    POP EDI                             ; 004baa04
    POP ESI                             ; 004baa05
    POP EBX                             ; 004baa06
    RET                                 ; 004baa07

