; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005785b0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[9]:
;   FUN_0040a050 at 0040a6d1
;   FUN_0043a7a0 at 0043ab13
;   FUN_00485b40 at 00486088
;   FUN_004cbdc0 at 004cc5fd
;   FUN_004e2e70 at 004e3316
;   FUN_0052e940 at 0052ed7e
;   FUN_0053f170 at 0053f6a9
;   FUN_00575800 at 0057607c
;   FUN_0057fc20 at 0058013c
;
; Referenced Globals:
;   TerminatedCString s_s_received_g_damage_hitp_005eced9
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005785b0
        ;   Label: FUN_005785b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005785b1
    CMP dword ptr [EBX + 0x2d0],0x7     ; 005785b5
    JNZ 0x00578625                      ; 005785bc
        ;   XREF to: 00578625 (CONDITIONAL_JUMP)  ; LAB_00578625
    FLD float ptr [EBX + 0x4cc]         ; 005785be
    FLDZ                                ; 005785c4
    FCOMPP                              ; 005785c6
    FNSTSW AX                           ; 005785c8
    SAHF                                ; 005785ca
    JC 0x00578625                       ; 005785cb
        ;   XREF to: 00578625 (CONDITIONAL_JUMP)  ; LAB_00578625
    FLD float ptr [EBX + 0x454]         ; 005785cd
    FSUB float ptr [ESP + 0xc]          ; 005785d3
    FST float ptr [EBX + 0x454]         ; 005785d7
    FLDZ                                ; 005785dd
    FCOMPP                              ; 005785df
    FNSTSW AX                           ; 005785e1
    SAHF                                ; 005785e3
    JBE 0x005785f0                      ; 005785e4
        ;   XREF to: 005785f0 (CONDITIONAL_JUMP)  ; LAB_005785f0
    MOV dword ptr [EBX + 0x454],0x0     ; 005785e6
    SUB ESP,0x8                         ; 005785f0
        ;   Label: LAB_005785f0
    FLD float ptr [EBX + 0x454]         ; 005785f3
    FSTP double ptr [ESP]               ; 005785f9
    FLD float ptr [ESP + 0x14]          ; 005785fc
    SUB ESP,0x8                         ; 00578600
    FSTP double ptr [ESP]               ; 00578603
    PUSH EBX                            ; 00578606
    PUSH 0x5eced9                       ; 00578607 | = "%s received %g damage, hitpoints %g\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0057860c | PTR_DAT_00609ed0
    PUSH ECX                            ; 00578612 | DAT_007c158c
    CALL FUN_00436710                   ; 00578613
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x1c                        ; 00578618
    MOV dword ptr [EBX + 0x4cc],0x3f800000 ; 0057861b
    POP EBX                             ; 00578625
        ;   Label: LAB_00578625
    RET                                 ; 00578626

