; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPush_FUN_005083b0(void)
;
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 at 005106e0
;   core_mimic.cpp_mirrorXTransform_FUN_0050f030 at 0050f033
;   engine_drender.cpp_matrixPush_FUN_00483990 at 00483990
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005e7712
;   TerminatedCString s_Matrix_unbalance_005e7725
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
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d1dd74]                ; 005083b0 | DAT_01d1dd74
        ;   Label: engine_matrix.c_matrixPush_FUN_005083b0
    MOV EDX,dword ptr [0x01c51d2c]      ; 005083b5 | DAT_01c51d2c
    MOV dword ptr [EAX*0x4 + 0x1d1dee0],EDX ; 005083bb
    MOV EDX,dword ptr [0x01c51d30]      ; 005083c2 | DAT_01c51d30
    MOV dword ptr [EAX*0x4 + 0x1d1df08],EDX ; 005083c8
    MOV EDX,dword ptr [0x01c51d34]      ; 005083cf | DAT_01c51d34
    MOV dword ptr [EAX*0x4 + 0x1d1df30],EDX ; 005083d5
    MOV EDX,dword ptr [0x01c51d50]      ; 005083dc | DAT_01c51d50
    MOV dword ptr [EAX*0x4 + 0x1d1df58],EDX ; 005083e2
    MOV EDX,dword ptr [0x01c51d54]      ; 005083e9 | DAT_01c51d54
    MOV dword ptr [EAX*0x4 + 0x1d1df80],EDX ; 005083ef
    MOV EDX,dword ptr [0x01c51d58]      ; 005083f6 | DAT_01c51d58
    MOV dword ptr [EAX*0x4 + 0x1d1dfa8],EDX ; 005083fc
    MOV EDX,dword ptr [0x01c51d5c]      ; 00508403 | DAT_01c51d5c
    MOV dword ptr [EAX*0x4 + 0x1d1dd78],EDX ; 00508409
    MOV EDX,dword ptr [0x01c51d60]      ; 00508410 | DAT_01c51d60
    MOV dword ptr [EAX*0x4 + 0x1d1dda0],EDX ; 00508416
    MOV EDX,dword ptr [0x01c51d64]      ; 0050841d | DAT_01c51d64
    MOV dword ptr [EAX*0x4 + 0x1d1ddc8],EDX ; 00508423
    MOV EDX,dword ptr [0x01c51d68]      ; 0050842a | DAT_01c51d68
    MOV dword ptr [EAX*0x4 + 0x1d1ddf0],EDX ; 00508430
    MOV EDX,dword ptr [0x01c51d6c]      ; 00508437 | DAT_01c51d6c
    MOV dword ptr [EAX*0x4 + 0x1d1de18],EDX ; 0050843d
    MOV EDX,dword ptr [0x01c51d70]      ; 00508444 | DAT_01c51d70
    MOV dword ptr [EAX*0x4 + 0x1d1de40],EDX ; 0050844a
    MOV EDX,dword ptr [0x01c51d74]      ; 00508451 | DAT_01c51d74
    MOV dword ptr [EAX*0x4 + 0x1d1de68],EDX ; 00508457
    MOV EDX,dword ptr [0x01c51d78]      ; 0050845e | DAT_01c51d78
    MOV dword ptr [EAX*0x4 + 0x1d1de90],EDX ; 00508464
    MOV EDX,dword ptr [0x01c51d7c]      ; 0050846b | DAT_01c51d7c
    MOV dword ptr [EAX*0x4 + 0x1d1deb8],EDX ; 00508471
    LEA EDX,[EAX + 0x1]                 ; 00508478
    MOV dword ptr [0x01d1dd74],EDX      ; 0050847b | DAT_01d1dd74
    CMP EDX,0x9                         ; 00508481
    JG 0x00508487                       ; 00508484
        ;   XREF to: 00508487 (CONDITIONAL_JUMP)  ; LAB_00508487
    RET                                 ; 00508486
    PUSH ESI                            ; 00508487
        ;   Label: LAB_00508487
    PUSH EBX                            ; 00508488
    MOV EBX,0x5e7712                    ; 00508489 | = "..\\engine\\matrix.c"
    MOV ESI,0x34b                       ; 0050848e
    PUSH 0x5e7725                       ; 00508493 | = "Matrix unbalance"
    MOV dword ptr [0x01d1d400],EBX      ; 00508498 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0050849e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005084a4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005084a9
    POP EBX                             ; 005084ac
    POP ESI                             ; 005084ad
    RET                                 ; 005084ae

