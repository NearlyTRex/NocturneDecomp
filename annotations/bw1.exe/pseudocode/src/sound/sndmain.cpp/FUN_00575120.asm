; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575120(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_0050ba70 at 0050c90f
;   FUN_00574ee0 at 00574f32
;   FUN_00575260 at 00575271
;   FUN_00575280 at 00575291
;   FUN_005752a0 at 005752b1
;   FUN_005760b0 at 00576295
;   FUN_0057cb30 at 0057cb7f
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f41b4
;   TerminatedCString s_setSoundOutputMode_can_t_005f41c9
;   undefined4 DAT_006232e8
;   undefined4 DAT_006232ec
;   undefined4 DAT_006232f0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c80650
;
; Called Functions:
;   FUN_005030e0
;   FUN_0056f470
;   FUN_00575550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575120
        ;   Label: FUN_00575120
    PUSH EDI                            ; 00575121
    PUSH EBP                            ; 00575122
    SUB ESP,0x4                         ; 00575123
    CALL FUN_00575550                   ; 00575126
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; undefined FUN_00575550()
    TEST EAX,EAX                        ; 0057512b
    JNZ 0x00575160                      ; 0057512d
        ;   XREF to: 00575160 (CONDITIONAL_JUMP)  ; LAB_00575160
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057512f
        ;   Label: LAB_0057512f
    MOV [0x006232e8],EAX                ; 00575133 | DAT_006232e8
    MOV EAX,dword ptr [ESP + 0x18]      ; 00575138
    MOV [0x006232ec],EAX                ; 0057513c | DAT_006232ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00575141
    MOV EBX,dword ptr [0x02c80650]      ; 00575145 | DAT_02c80650
    MOV [0x006232f0],EAX                ; 0057514b | DAT_006232f0
    TEST EBX,EBX                        ; 00575150
    JNZ 0x00575185                      ; 00575152
        ;   XREF to: 00575185 (CONDITIONAL_JUMP)  ; LAB_00575185
    MOV EAX,0x1                         ; 00575154
        ;   Label: LAB_00575154
    ADD ESP,0x4                         ; 00575159
        ;   Label: LAB_00575159
    POP EBP                             ; 0057515c
    POP EDI                             ; 0057515d
    POP EBX                             ; 0057515e
    RET                                 ; 0057515f
    MOV EDX,0x5f41b4                    ; 00575160 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00575160
    MOV ECX,0x1479                      ; 00575165
    PUSH 0x5f41c9                       ; 0057516a | = "setSoundOutputMode - can't do this wh..."
    MOV dword ptr [0x01d1d400],EDX      ; 0057516f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00575175 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0057517b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00575180
    JMP 0x0057512f                      ; 00575183
        ;   XREF to: 0057512f (UNCONDITIONAL_JUMP)  ; LAB_0057512f
    MOV ECX,ESP                         ; 00575185
        ;   Label: LAB_00575185
    PUSH ECX                            ; 00575187
    PUSH EAX                            ; 00575188
    MOV EDI,dword ptr [ESP + 0x20]      ; 00575189
    PUSH EDI                            ; 0057518d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0057518e
    PUSH EBP                            ; 00575192
    MOV EDX,dword ptr [EBX]             ; 00575193
    PUSH EBX                            ; 00575195
    CALL dword ptr [EDX + 0xc]          ; 00575196
    ADD ESP,0x14                        ; 00575199
    TEST EAX,EAX                        ; 0057519c
    JZ 0x00575159                       ; 0057519e
        ;   XREF to: 00575159 (CONDITIONAL_JUMP)  ; LAB_00575159
    MOV EAX,dword ptr [ESP]             ; 005751a0
    TEST EAX,EAX                        ; 005751a3
    JLE 0x00575154                      ; 005751a5
        ;   XREF to: 00575154 (CONDITIONAL_JUMP)  ; LAB_00575154
    PUSH 0x4                            ; 005751a7
    PUSH EAX                            ; 005751a9
    CALL FUN_0056f470                   ; 005751aa
        ;   XREF to: 0056f470 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f470()
    ADD ESP,0x8                         ; 005751af
    MOV EAX,0x1                         ; 005751b2
    ADD ESP,0x4                         ; 005751b7
    POP EBP                             ; 005751ba
    POP EDI                             ; 005751bb
    POP EBX                             ; 005751bc
    RET                                 ; 005751bd

