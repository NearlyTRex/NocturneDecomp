; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa450(undefined4 param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004fb0e0 at 004fb11d
;
; Referenced Globals:
;   undefined4 DAT_005c96a3
;
; Called Functions:
;   FUN_004fa490
;   FUN_004fa6d0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004fa450
        ;   Label: FUN_004fa450
    FCOMP double ptr [0x005c96a3]       ; 004fa454 | DAT_005c96a3
    FNSTSW AX                           ; 004fa45a
    SAHF                                ; 004fa45c
    JNC 0x004fa460                      ; 004fa45d
        ;   XREF to: 004fa460 (CONDITIONAL_JUMP)  ; LAB_004fa460
    RET                                 ; 004fa45f
    PUSH EBX                            ; 004fa460
        ;   Label: LAB_004fa460
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa461
    PUSH EDX                            ; 004fa465
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fa466
    PUSH dword ptr [ESP + 0x10]         ; 004fa46a
    PUSH ECX                            ; 004fa46e
    CALL FUN_004fa490                   ; 004fa46f
        ;   XREF to: 004fa490 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa490()
    ADD ESP,0xc                         ; 004fa474
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fa477
    PUSH dword ptr [ESP + 0xc]          ; 004fa47b
    PUSH EBX                            ; 004fa47f
    CALL FUN_004fa6d0                   ; 004fa480
        ;   XREF to: 004fa6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa6d0()
    ADD ESP,0x8                         ; 004fa485
    POP EBX                             ; 004fa488
    RET                                 ; 004fa489

