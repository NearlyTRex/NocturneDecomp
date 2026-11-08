; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005084b0(void)
;
;
; XREF[1]:
;   thunk_FUN_005084b0 at 004839a0
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005e7736
;   TerminatedCString s_Matrix_unbalance2_005e7749
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d50
;   undefined4 DAT_01c51d54
;   undefined4 DAT_01c51d58
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   ... and 5 more
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d1dd74]      ; 005084b0 | DAT_01d1dd74
        ;   Label: FUN_005084b0
    DEC EDX                             ; 005084b6
    MOV dword ptr [0x01d1dd74],EDX      ; 005084b7 | DAT_01d1dd74
    TEST EDX,EDX                        ; 005084bd
    JL 0x0050858d                       ; 005084bf
        ;   XREF to: 0050858d (CONDITIONAL_JUMP)  ; LAB_0050858d
    MOV EAX,[0x01d1dd74]                ; 005084c5 | DAT_01d1dd74
        ;   Label: LAB_005084c5
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1dd78] ; 005084ca
    MOV dword ptr [0x01c51d5c],EDX      ; 005084d1 | DAT_01c51d5c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1dda0] ; 005084d7
    MOV dword ptr [0x01c51d60],EDX      ; 005084de | DAT_01c51d60
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1ddc8] ; 005084e4
    MOV dword ptr [0x01c51d64],EDX      ; 005084eb | DAT_01c51d64
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1ddf0] ; 005084f1
    MOV dword ptr [0x01c51d68],EDX      ; 005084f8 | DAT_01c51d68
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1de18] ; 005084fe
    MOV dword ptr [0x01c51d6c],EDX      ; 00508505 | DAT_01c51d6c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1de40] ; 0050850b
    MOV dword ptr [0x01c51d70],EDX      ; 00508512 | DAT_01c51d70
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1de68] ; 00508518
    MOV dword ptr [0x01c51d74],EDX      ; 0050851f | DAT_01c51d74
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1de90] ; 00508525
    MOV dword ptr [0x01c51d78],EDX      ; 0050852c | DAT_01c51d78
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1deb8] ; 00508532
    MOV dword ptr [0x01c51d7c],EDX      ; 00508539 | DAT_01c51d7c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1dee0] ; 0050853f
    MOV dword ptr [0x01c51d2c],EDX      ; 00508546 | DAT_01c51d2c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1df08] ; 0050854c
    MOV dword ptr [0x01c51d30],EDX      ; 00508553 | DAT_01c51d30
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1df30] ; 00508559
    MOV dword ptr [0x01c51d34],EDX      ; 00508560 | DAT_01c51d34
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1df58] ; 00508566
    MOV dword ptr [0x01c51d50],EDX      ; 0050856d | DAT_01c51d50
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1df80] ; 00508573
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dfa8] ; 0050857a
    MOV dword ptr [0x01c51d54],EDX      ; 00508581 | DAT_01c51d54
    MOV [0x01c51d58],EAX                ; 00508587 | DAT_01c51d58
    RET                                 ; 0050858c
    PUSH ESI                            ; 0050858d
        ;   Label: LAB_0050858d
    PUSH EBX                            ; 0050858e
    MOV EBX,0x5e7736                    ; 0050858f | = "..\\engine\\matrix.c"
    MOV ESI,0x358                       ; 00508594
    PUSH 0x5e7749                       ; 00508599 | = "Matrix unbalance2"
    MOV dword ptr [0x01d1d400],EBX      ; 0050859e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005085a4 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005085aa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005085af
    POP EBX                             ; 005085b2
    POP ESI                             ; 005085b3
    JMP 0x005084c5                      ; 005085b4
        ;   XREF to: 005084c5 (UNCONDITIONAL_JUMP)  ; LAB_005084c5

