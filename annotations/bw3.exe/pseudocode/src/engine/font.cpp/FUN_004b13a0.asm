; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b13a0(int param_1)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004b33d0 at 004b34d5
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004ed980
;   engine_mini3d.cpp_FUN_004edad0
;   engine_mini3d.cpp_FUN_004edc90
;   engine_mini3d.cpp_FUN_004edca0
;   engine_mini3d.cpp_FUN_004edcb0
;   engine_mini3d.cpp_FUN_004ee5b0
;   engine_mini3d.cpp_FUN_004f02b0
;   engine_palette.cpp_FUN_00509d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b13a0
        ;   Label: engine_font.cpp_FUN_004b13a0
    PUSH EBP                            ; 004b13a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004b13a2
    CMP dword ptr [EBX + 0x4210],0x0    ; 004b13a6
    JNZ 0x004b13d8                      ; 004b13ad
        ;   XREF to: 004b13d8 (CONDITIONAL_JUMP)  ; LAB_004b13d8
    CMP dword ptr [EBX + 0x1dd8],0x0    ; 004b13af
    JLE 0x004b13c1                      ; 004b13b6
        ;   XREF to: 004b13c1 (CONDITIONAL_JUMP)  ; LAB_004b13c1
    CMP dword ptr [EBX + 0x1ddc],0x0    ; 004b13b8
    JG 0x004b13ea                       ; 004b13bf
        ;   XREF to: 004b13ea (CONDITIONAL_JUMP)  ; LAB_004b13ea
    MOV dword ptr [EBX + 0x1ddc],0x0    ; 004b13c1
        ;   Label: LAB_004b13c1
    MOV dword ptr [EBX + 0x1dd8],0x0    ; 004b13cb
    POP EBP                             ; 004b13d5
    POP EBX                             ; 004b13d6
    RET                                 ; 004b13d7
    MOV EDX,dword ptr [EBX + 0x4214]    ; 004b13d8
        ;   Label: LAB_004b13d8
    PUSH EDX                            ; 004b13de
    CALL engine_palette.cpp_FUN_00509d90 ; 004b13df
        ;   XREF to: 00509d90 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_FUN_00509d90()
    ADD ESP,0x4                         ; 004b13e4
    POP EBP                             ; 004b13e7
    POP EBX                             ; 004b13e8
    RET                                 ; 004b13e9
    PUSH EDI                            ; 004b13ea
        ;   Label: LAB_004b13ea
    LEA EAX,[EBX + 0x1db4]              ; 004b13eb
    PUSH EAX                            ; 004b13f1
    CALL engine_mini3d.cpp_FUN_004ed980 ; 004b13f2
        ;   XREF to: 004ed980 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed980()
    ADD ESP,0x4                         ; 004b13f7
    PUSH 0x0                            ; 004b13fa
    CALL engine_mini3d.cpp_FUN_004edad0 ; 004b13fc
        ;   XREF to: 004edad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edad0()
    ADD ESP,0x4                         ; 004b1401
    CALL engine_mini3d.cpp_FUN_004f02b0 ; 004b1404
        ;   XREF to: 004f02b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f02b0()
    CALL engine_mini3d.cpp_FUN_004edc90 ; 004b1409
        ;   XREF to: 004edc90 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edc90()
    CALL engine_mini3d.cpp_FUN_004edca0 ; 004b140e
        ;   XREF to: 004edca0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edca0()
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004b1413
    MOV EDX,EAX                         ; 004b1419
    MOV ECX,0x3                         ; 004b141b
    SAR EDX,0x1f                        ; 004b1420
    IDIV ECX                            ; 004b1423
    PUSH EAX                            ; 004b1425
    MOV EDI,dword ptr [EBX + 0x1dd4]    ; 004b1426
    PUSH EDI                            ; 004b142c
    MOV EBP,dword ptr [EBX + 0x1dd8]    ; 004b142d
    PUSH EBP                            ; 004b1433
    MOV EAX,dword ptr [EBX + 0x1dd0]    ; 004b1434
    PUSH EAX                            ; 004b143a
    CALL engine_mini3d.cpp_FUN_004ee5b0 ; 004b143b
        ;   XREF to: 004ee5b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ee5b0()
    ADD ESP,0x10                        ; 004b1440
    CALL engine_mini3d.cpp_FUN_004edcb0 ; 004b1443
        ;   XREF to: 004edcb0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcb0()
    PUSH 0xc0                           ; 004b1448
    CALL engine_mini3d.cpp_FUN_004edad0 ; 004b144d
        ;   XREF to: 004edad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edad0()
    ADD ESP,0x4                         ; 004b1452
    POP EDI                             ; 004b1455
    JMP 0x004b13c1                      ; 004b1456
        ;   XREF to: 004b13c1 (UNCONDITIONAL_JUMP)  ; LAB_004b13c1

