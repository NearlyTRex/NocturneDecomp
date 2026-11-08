; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004fc350(int *param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[15]:
;   FUN_004286c0 at 004286d5
;   FUN_004331a0 at 004331fc
;   FUN_00458530 at 00458545
;   FUN_004c6eb0 at 004c6f29
;   FUN_004c8dd0 at 004c8def
;   FUN_004d2c20 at 004d2c74
;   FUN_00518cd0 at 005190ba
;   FUN_0051b550 at 0051b8ad
;   FUN_0051c1c0 at 0051c1e4
;   FUN_0051e380 at 0051e3b0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc350
        ;   Label: FUN_004fc350
    PUSH EBP                            ; 004fc351
    MOV EBP,ESP                         ; 004fc352
    SUB ESP,0xc                         ; 004fc354
    AND ESP,0xfffffff8                  ; 004fc357
    MOV EDX,dword ptr [EBP + 0xc]       ; 004fc35a
    MOV EBX,dword ptr [EBP + 0x10]      ; 004fc35d
    FLDZ                                ; 004fc360
    FLD float ptr [EDX + 0x14]          ; 004fc362
    FSTP double ptr [ESP]               ; 004fc365
    FCOMP double ptr [ESP]              ; 004fc368
    FNSTSW AX                           ; 004fc36b
    SAHF                                ; 004fc36d
    JNC 0x004fc3bd                      ; 004fc36e
        ;   XREF to: 004fc3bd (CONDITIONAL_JUMP)  ; LAB_004fc3bd
    MOV ECX,dword ptr [EDX + 0x18]      ; 004fc370
    LEA EAX,[ECX*0x8 + 0x0]             ; 004fc373
    ADD EAX,ECX                         ; 004fc37a
    SHL EAX,0x5                         ; 004fc37c
    MOV ECX,dword ptr [EDX]             ; 004fc37f
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 004fc381
    JZ 0x004fc3b4                       ; 004fc388
        ;   XREF to: 004fc3b4 (CONDITIONAL_JUMP)  ; LAB_004fc3b4
    MOV EDX,dword ptr [EDX + 0x4]       ; 004fc38a
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fc38d
    ADD EAX,EDX                         ; 004fc394
    SHL EAX,0x5                         ; 004fc396
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 004fc399
    JNZ 0x004fc3e1                      ; 004fc3a0
        ;   XREF to: 004fc3e1 (CONDITIONAL_JUMP)  ; LAB_004fc3e1
    FLD1                                ; 004fc3a2
    FSUB double ptr [ESP]               ; 004fc3a4
    FSTP float ptr [ESP + 0x8]          ; 004fc3a7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fc3ab
        ;   Label: LAB_004fc3ab
    MOV ESP,EBP                         ; 004fc3af
    POP EBP                             ; 004fc3b1
    POP EBX                             ; 004fc3b2
    RET                                 ; 004fc3b3
    MOV EAX,dword ptr [EDX + 0x14]      ; 004fc3b4
        ;   Label: LAB_004fc3b4
    MOV dword ptr [ESP + 0x8],EAX       ; 004fc3b7
    JMP 0x004fc3ab                      ; 004fc3bb
        ;   XREF to: 004fc3ab (UNCONDITIONAL_JUMP)  ; LAB_004fc3ab
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fc3bd
        ;   Label: LAB_004fc3bd
    LEA EAX,[ECX*0x8 + 0x0]             ; 004fc3c0
    ADD ECX,EAX                         ; 004fc3c7
    SHL ECX,0x5                         ; 004fc3c9
    MOV EAX,dword ptr [EDX]             ; 004fc3cc
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 004fc3ce
    JNZ 0x004fc3e1                      ; 004fc3d5
        ;   XREF to: 004fc3e1 (CONDITIONAL_JUMP)  ; LAB_004fc3e1
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004fc3d7
    JMP 0x004fc3ab                      ; 004fc3df
        ;   XREF to: 004fc3ab (UNCONDITIONAL_JUMP)  ; LAB_004fc3ab
    XOR EAX,EAX                         ; 004fc3e1
        ;   Label: LAB_004fc3e1
    MOV dword ptr [ESP + 0x8],EAX       ; 004fc3e3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fc3e7
    MOV ESP,EBP                         ; 004fc3eb
    POP EBP                             ; 004fc3ed
    POP EBX                             ; 004fc3ee
    RET                                 ; 004fc3ef

