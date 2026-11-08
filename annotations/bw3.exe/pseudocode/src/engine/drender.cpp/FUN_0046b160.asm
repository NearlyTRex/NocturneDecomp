; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b160(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[16]:
;   FUN_0046b240 at 0046b279
;   FUN_0046b2c0 at 0046b329
;   FUN_0046b370 at 0046b41f
;   FUN_0046b470 at 0046b51f
;   FUN_0046b580 at 0046b5e7
;   FUN_0046b850 at 0046b898
;   FUN_0046b8f0 at 0046b97f
;   FUN_0046ba70 at 0046bada
;   FUN_0046bc20 at 0046bca0
;   FUN_0046be60 at 0046bee1
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005bc460
;   TerminatedCString s_CDemonRenderer_clipAndFi_005bc476
;   undefined4 DAT_007e3e88
;   undefined4 DAT_007e3e8c
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_0043a840
;   FUN_0043bac0
;   FUN_00466d50
;   FUN_004673d0
;   FUN_004e4330
;   FUN_00587cd0
;   FUN_005a1ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b160
        ;   Label: FUN_0046b160
    PUSH ESI                            ; 0046b161
    PUSH EDI                            ; 0046b162
    PUSH EBP                            ; 0046b163
    MOV EDI,dword ptr [ESP + 0x14]      ; 0046b164
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046b168
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046b16c
    CMP dword ptr [EDI + 0x8],0x0       ; 0046b170
    JNZ 0x0046b1a3                      ; 0046b174
        ;   XREF to: 0046b1a3 (CONDITIONAL_JUMP)  ; LAB_0046b1a3
    CMP dword ptr [EDI + 0x10],0x0      ; 0046b176
        ;   Label: LAB_0046b176
    JNZ 0x0046b1d1                      ; 0046b17a
        ;   XREF to: 0046b1d1 (CONDITIONAL_JUMP)  ; LAB_0046b1d1
    CMP dword ptr [EDI + 0x4],0x0       ; 0046b17c
    JZ 0x0046b18b                       ; 0046b180
        ;   XREF to: 0046b18b (CONDITIONAL_JUMP)  ; LAB_0046b18b
    TEST byte ptr [0x01c6e2b4],0x1      ; 0046b182 | DAT_01c6e2b4
    JZ 0x0046b194                       ; 0046b189
        ;   XREF to: 0046b194 (CONDITIONAL_JUMP)  ; LAB_0046b194
    TEST byte ptr [0x01c6e2b4],0x5      ; 0046b18b | DAT_01c6e2b4
        ;   Label: LAB_0046b18b
    JNZ 0x0046b1c8                      ; 0046b192
        ;   XREF to: 0046b1c8 (CONDITIONAL_JUMP)  ; LAB_0046b1c8
    PUSH EBX                            ; 0046b194
        ;   Label: LAB_0046b194
    PUSH ESI                            ; 0046b195
    CALL FUN_004673d0                   ; 0046b196
        ;   XREF to: 004673d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004673d0()
    ADD ESP,0x8                         ; 0046b19b
        ;   Label: LAB_0046b19b
    POP EBP                             ; 0046b19e
        ;   Label: LAB_0046b19e
    POP EDI                             ; 0046b19f
    POP ESI                             ; 0046b1a0
    POP EBX                             ; 0046b1a1
    RET                                 ; 0046b1a2
    MOV ECX,0x5bc460                    ; 0046b1a3 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_0046b1a3
    MOV EBP,0xad                        ; 0046b1a8
    PUSH 0x5bc476                       ; 0046b1ad | = "CDemonRenderer::clipAndFillPoly - Bad..."
    MOV dword ptr [0x01d71de0],ECX      ; 0046b1b2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0046b1b8 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0046b1be
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0046b1c3
    JMP 0x0046b176                      ; 0046b1c6
        ;   XREF to: 0046b176 (UNCONDITIONAL_JUMP)  ; LAB_0046b176
    PUSH EBX                            ; 0046b1c8
        ;   Label: LAB_0046b1c8
    PUSH ESI                            ; 0046b1c9
    CALL FUN_00466d50                   ; 0046b1ca
        ;   XREF to: 00466d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00466d50()
    JMP 0x0046b19b                      ; 0046b1cf
        ;   XREF to: 0046b19b (UNCONDITIONAL_JUMP)  ; LAB_0046b19b
    CMP dword ptr [EDI + 0x4],0x0       ; 0046b1d1
        ;   Label: LAB_0046b1d1
    JZ 0x0046b1e0                       ; 0046b1d5
        ;   XREF to: 0046b1e0 (CONDITIONAL_JUMP)  ; LAB_0046b1e0
    TEST byte ptr [0x01c6e2b4],0x1      ; 0046b1d7 | DAT_01c6e2b4
    JZ 0x0046b201                       ; 0046b1de
        ;   XREF to: 0046b201 (CONDITIONAL_JUMP)  ; LAB_0046b201
    TEST byte ptr [0x01c6e2b4],0x5      ; 0046b1e0 | DAT_01c6e2b4
        ;   Label: LAB_0046b1e0
    JZ 0x0046b201                       ; 0046b1e7
        ;   XREF to: 0046b201 (CONDITIONAL_JUMP)  ; LAB_0046b201
    TEST byte ptr [0x01c6e2b5],0x2      ; 0046b1e9 | DAT_01c6e2b5
    JZ 0x0046b229                       ; 0046b1f0
        ;   XREF to: 0046b229 (CONDITIONAL_JUMP)  ; LAB_0046b229
    PUSH ESI                            ; 0046b1f2
    PUSH EBX                            ; 0046b1f3
    CALL FUN_0043bac0                   ; 0046b1f4
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043bac0()
    ADD ESP,0x8                         ; 0046b1f9
    POP EBP                             ; 0046b1fc
    POP EDI                             ; 0046b1fd
    POP ESI                             ; 0046b1fe
    POP EBX                             ; 0046b1ff
    RET                                 ; 0046b200
    PUSH ESI                            ; 0046b201
        ;   Label: LAB_0046b201
    PUSH EBX                            ; 0046b202
    CALL FUN_00587cd0                   ; 0046b203
        ;   XREF to: 00587cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00587cd0()
    MOV ECX,dword ptr [0x007e3e88]      ; 0046b208 | DAT_007e3e88
    ADD ESP,0x8                         ; 0046b20e
    CMP ECX,0x2                         ; 0046b211
    JLE 0x0046b19e                      ; 0046b214
        ;   XREF to: 0046b19e (CONDITIONAL_JUMP)  ; LAB_0046b19e
    PUSH ECX                            ; 0046b216
    PUSH 0x7e3e8c                       ; 0046b217 | DAT_007e3e8c
    CALL FUN_005a1ea0                   ; 0046b21c
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1ea0()
    ADD ESP,0x8                         ; 0046b221
    POP EBP                             ; 0046b224
    POP EDI                             ; 0046b225
    POP ESI                             ; 0046b226
    POP EBX                             ; 0046b227
    RET                                 ; 0046b228
    PUSH ESI                            ; 0046b229
        ;   Label: LAB_0046b229
    PUSH EBX                            ; 0046b22a
    CALL FUN_0043a840                   ; 0046b22b
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 0046b230
    POP EBP                             ; 0046b233
    POP EDI                             ; 0046b234
    POP ESI                             ; 0046b235
    POP EBX                             ; 0046b236
    RET                                 ; 0046b237

