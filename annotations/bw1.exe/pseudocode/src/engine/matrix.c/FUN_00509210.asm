; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509210(void)
;
;
; XREF[2]:
;   FUN_00496ee0 at 004975b2
;   thunk_FUN_00509210 at 00483c40
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005e77ed
;   TerminatedCString s_s_3D_Window_unbalance_005e7800
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;   undefined4 DAT_01c51d44
;   ... and 8 more
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d1dfd0]      ; 00509210 | DAT_01d1dfd0
        ;   Label: FUN_00509210
    DEC EDX                             ; 00509216
    MOV dword ptr [0x01d1dfd0],EDX      ; 00509217 | DAT_01d1dfd0
    TEST EDX,EDX                        ; 0050921d
    JL 0x00509314                       ; 0050921f
        ;   XREF to: 00509314 (CONDITIONAL_JUMP)  ; LAB_00509314
    MOV EAX,[0x01d1dfd0]                ; 00509225 | DAT_01d1dfd0
        ;   Label: LAB_00509225
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e09c] ; 0050922a
    MOV dword ptr [0x01c51d38],EDX      ; 00509231 | DAT_01c51d38
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e0c4] ; 00509237
    MOV dword ptr [0x01c51d3c],EDX      ; 0050923e | DAT_01c51d3c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e0ec] ; 00509244
    MOV dword ptr [0x01c51d40],EDX      ; 0050924b | DAT_01c51d40
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e114] ; 00509251
    MOV dword ptr [0x01c51d44],EDX      ; 00509258 | DAT_01c51d44
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e13c] ; 0050925e
    MOV dword ptr [0x01c51d48],EDX      ; 00509265 | DAT_01c51d48
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e164] ; 0050926b
    MOV dword ptr [0x01c51d4c],EDX      ; 00509272 | DAT_01c51d4c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e18c] ; 00509278
    MOV dword ptr [0x01c51d50],EDX      ; 0050927f | DAT_01c51d50
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e1b4] ; 00509285
    MOV dword ptr [0x01c51d54],EDX      ; 0050928c | DAT_01c51d54
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e1dc] ; 00509292
    MOV dword ptr [0x01c51d58],EDX      ; 00509299 | DAT_01c51d58
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1dfd4] ; 0050929f
    MOV dword ptr [0x01c4eff8],EDX      ; 005092a6 | DAT_01c4eff8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1dffc] ; 005092ac
    MOV dword ptr [0x01c4effc],EDX      ; 005092b3 | DAT_01c4effc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e024] ; 005092b9
    MOV dword ptr [0x01c4f000],EDX      ; 005092c0 | DAT_01c4f000
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e04c] ; 005092c6
    MOV dword ptr [0x01c4f004],EDX      ; 005092cd | DAT_01c4f004
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e074] ; 005092d3
    MOV dword ptr [0x0061b4c4],EDX      ; 005092da | DAT_0061b4c4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e204] ; 005092e0
    MOV dword ptr [0x01c4f008],EDX      ; 005092e7 | DAT_01c4f008
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e22c] ; 005092ed
    MOV dword ptr [0x01c4f010],EDX      ; 005092f4 | DAT_01c4f010
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1e254] ; 005092fa
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1e27c] ; 00509301
    MOV dword ptr [0x01c4f00c],EDX      ; 00509308 | DAT_01c4f00c
    MOV [0x01c4f014],EAX                ; 0050930e | DAT_01c4f014
    RET                                 ; 00509313
    PUSH ESI                            ; 00509314
        ;   Label: LAB_00509314
    PUSH EBX                            ; 00509315
    MOV EBX,0x5e77ed                    ; 00509316 | = "..\\engine\\matrix.c"
    MOV ESI,0x56c                       ; 0050931b
    PUSH 0x5e7800                       ; 00509320 | = "3D Window unbalance"
    MOV dword ptr [0x01d1d400],EBX      ; 00509325 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0050932b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00509331
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00509336
    POP EBX                             ; 00509339
    POP ESI                             ; 0050933a
    JMP 0x00509225                      ; 0050933b
        ;   XREF to: 00509225 (UNCONDITIONAL_JUMP)  ; LAB_00509225

