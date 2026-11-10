; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_004f9600(undefined4 param_1,float param_2)
;
;
; XREF[1]:
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea5fd
;
; Referenced Globals:
;   undefined4 DAT_005c9265
;   undefined4 DAT_005c926d
;   undefined4 DAT_005c9275
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01d8863c
;   undefined4 DAT_01d88640
;   undefined4 DAT_01d88644
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004f9600
        ;   Label: core_moon.cpp_FUN_004f9600
    FLD float ptr [ESP + 0x10]          ; 004f9603
    FMUL double ptr [0x005c9265]        ; 004f9607 | DAT_005c9265
    FADD float ptr [0x01d88644]         ; 004f960d | DAT_01d88644
    FST float ptr [0x01d88644]          ; 004f9613 | DAT_01d88644
    FCOMP double ptr [0x005c926d]       ; 004f9619 | DAT_005c926d
    FNSTSW AX                           ; 004f961f
    SAHF                                ; 004f9621
    JNC 0x004f9654                      ; 004f9622
        ;   XREF to: 004f9654 (CONDITIONAL_JUMP)  ; LAB_004f9654
    MOV EAX,[0x01c5fad0]                ; 004f9624 | DAT_01c5fad0
        ;   Label: LAB_004f9624
    MOV EDX,dword ptr [0x01d8863c]      ; 004f9629 | DAT_01d8863c
    SHL EAX,0x5                         ; 004f962f
    ADD EDX,EAX                         ; 004f9632
    MOV EAX,[0x01c5fad0]                ; 004f9634 | DAT_01c5fad0
    MOV ECX,dword ptr [0x01d88640]      ; 004f9639 | DAT_01d88640
    SHL EAX,0x4                         ; 004f963f
    ADD ECX,EAX                         ; 004f9642
    MOV dword ptr [0x01d8863c],EDX      ; 004f9644 | DAT_01d8863c
    MOV dword ptr [0x01d88640],ECX      ; 004f964a | DAT_01d88640
    ADD ESP,0x8                         ; 004f9650
    RET                                 ; 004f9653
    FLD float ptr [0x01d88644]          ; 004f9654 | DAT_01d88644
        ;   Label: LAB_004f9654
    FADD float ptr [0x005c9275]         ; 004f965a | DAT_005c9275
    FSTP float ptr [0x01d88644]         ; 004f9660 | DAT_01d88644
    JMP 0x004f9624                      ; 004f9666
        ;   XREF to: 004f9624 (UNCONDITIONAL_JUMP)  ; LAB_004f9624

