; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433880(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0042b0e0 at 0042b2b6
;
; Called Functions:
;   FUN_004fb9c0
;   FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433880
        ;   Label: FUN_00433880
    PUSH ESI                            ; 00433881
    PUSH EDI                            ; 00433882
    PUSH EBP                            ; 00433883
    SUB ESP,0x18                        ; 00433884
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433887
    CMP byte ptr [EAX + 0x24a8],0x0     ; 0043388b
    JZ 0x00433a2e                       ; 00433892
        ;   XREF to: 00433a2e (CONDITIONAL_JUMP)  ; LAB_00433a2e
    ADD EAX,0x84                        ; 00433898
    XOR EBX,EBX                         ; 0043389d
    IMUL EDX,EBX,0x84                   ; 0043389f
        ;   Label: LAB_0043389f
    ADD EDX,dword ptr [ESP + 0x2c]      ; 004338a5
    MOV ECX,EAX                         ; 004338a9
    ADD EDX,0x4                         ; 004338ab
        ;   Label: LAB_004338ab
    MOV dword ptr [EDX + 0xbc70],0x501502f9 ; 004338ae
    CMP EDX,ECX                         ; 004338b8
    JNZ 0x004338ab                      ; 004338ba
        ;   XREF to: 004338ab (CONDITIONAL_JUMP)  ; LAB_004338ab
    INC EBX                             ; 004338bc
    ADD EAX,0x84                        ; 004338bd
    CMP EBX,0x21                        ; 004338c2
    JL 0x0043389f                       ; 004338c5
        ;   XREF to: 0043389f (CONDITIONAL_JUMP)  ; LAB_0043389f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004338c7
    ADD EAX,0x158                       ; 004338cb
    PUSH EAX                            ; 004338d0
    CALL FUN_004fc310                   ; 004338d1
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 004338d6
    MOV EDI,EAX                         ; 004338d9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004338db
    MOV EBX,dword ptr [EAX + 0x27c4]    ; 004338df
    XOR ESI,ESI                         ; 004338e5
    TEST EBX,EBX                        ; 004338e7
    JLE 0x0043397c                      ; 004338e9
        ;   XREF to: 0043397c (CONDITIONAL_JUMP)  ; LAB_0043397c
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004338ef
    ADD EAX,0x27c8                      ; 004338f3
    ADD EBP,0x27d0                      ; 004338f8
    MOV dword ptr [ESP + 0x4],EAX       ; 004338fe
    IMUL EBX,ESI,0x38                   ; 00433902
        ;   Label: LAB_00433902
    PUSH 0x1                            ; 00433905
    PUSH EBP                            ; 00433907
    MOV ECX,dword ptr [ESP + 0xc]       ; 00433908
    PUSH EDI                            ; 0043390c
    ADD EBX,ECX                         ; 0043390d
    CALL FUN_004fb9c0                   ; 0043390f
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    MOV dword ptr [EBX + 0x2c],EAX      ; 00433914
    IMUL EAX,EAX,0x120                  ; 00433917
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x1c8c] ; 0043391d
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00433924
    MOV dword ptr [EBX + 0x30],EAX      ; 00433927
    IMUL EAX,ECX,0x120                  ; 0043392a
    FILD dword ptr [EBX + 0x30]         ; 00433930
    FDIV float ptr [EDI + EAX*0x1 + 0x1c48] ; 00433933
    ADD ESP,0xc                         ; 0043393a
    MOV EAX,dword ptr [EBX + 0x28]      ; 0043393d
    FSTP float ptr [EBX + 0x34]         ; 00433940
    TEST EAX,EAX                        ; 00433943
    JL 0x00433960                       ; 00433945
        ;   XREF to: 00433960 (CONDITIONAL_JUMP)  ; LAB_00433960
    IMUL EAX,dword ptr [EBX],0x84       ; 00433947
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043394d
    ADD EDX,EAX                         ; 00433951
    MOV EAX,dword ptr [EBX + 0x4]       ; 00433953
    MOV ECX,dword ptr [EBX + 0x34]      ; 00433956
    MOV dword ptr [EDX + EAX*0x4 + 0xbc74],ECX ; 00433959
    CMP dword ptr [EBX + 0x28],0x0      ; 00433960
        ;   Label: LAB_00433960
    JLE 0x00433a36                      ; 00433964
        ;   XREF to: 00433a36 (CONDITIONAL_JUMP)  ; LAB_00433a36
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043396a
        ;   Label: LAB_0043396a
    INC ESI                             ; 0043396e
    MOV EDX,dword ptr [EAX + 0x27c4]    ; 0043396f
    ADD EBP,0x38                        ; 00433975
    CMP ESI,EDX                         ; 00433978
    JL 0x00433902                       ; 0043397a
        ;   XREF to: 00433902 (CONDITIONAL_JUMP)  ; LAB_00433902
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043397c
        ;   Label: LAB_0043397c
    XOR EAX,EAX                         ; 00433980
    LEA ECX,[EDX + EAX*0x1]             ; 00433982
        ;   Label: LAB_00433982
    ADD EAX,0x4                         ; 00433985
    ADD EDX,0x84                        ; 00433988
    MOV dword ptr [ECX + 0xbc74],0x0    ; 0043398e
    CMP EAX,0x84                        ; 00433998
    JNZ 0x00433982                      ; 0043399d
        ;   XREF to: 00433982 (CONDITIONAL_JUMP)  ; LAB_00433982
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043399f
    MOV dword ptr [ESP + 0x8],EAX       ; 004339a3
    ADD EAX,0x1104                      ; 004339a7
    MOV dword ptr [ESP],EAX             ; 004339ac
    MOV EAX,dword ptr [ESP + 0x8]       ; 004339af
        ;   Label: LAB_004339af
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004339b3
    XOR EDI,EDI                         ; 004339b7
    MOV dword ptr [ESP + 0xc],EAX       ; 004339b9
    ADD EBP,0x84                        ; 004339bd
    MOV dword ptr [ESP + 0x10],EAX      ; 004339c3
    IMUL ECX,EDI,0x84                   ; 004339c7
        ;   Label: LAB_004339c7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004339cd
    MOV EDX,dword ptr [ESP + 0xc]       ; 004339d1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004339d5
    ADD ECX,EBX                         ; 004339d9
    MOV EBX,EBP                         ; 004339db
    FLD float ptr [ESI + 0xbc74]        ; 004339dd
        ;   Label: LAB_004339dd
    FADD float ptr [ECX + 0xbc74]       ; 004339e3
    FST float ptr [ESP + 0x14]          ; 004339e9
    FCOMP float ptr [EDX + 0xbc74]      ; 004339ed
    FNSTSW AX                           ; 004339f3
    SAHF                                ; 004339f5
    JC 0x00433a54                       ; 004339f6
        ;   XREF to: 00433a54 (CONDITIONAL_JUMP)  ; LAB_00433a54
    ADD ECX,0x4                         ; 004339f8
        ;   Label: LAB_004339f8
    ADD EDX,0x4                         ; 004339fb
    CMP ECX,EBX                         ; 004339fe
    JNZ 0x004339dd                      ; 00433a00
        ;   XREF to: 004339dd (CONDITIONAL_JUMP)  ; LAB_004339dd
    MOV ESI,dword ptr [ESP + 0x10]      ; 00433a02
    INC EDI                             ; 00433a06
    ADD ESI,0x4                         ; 00433a07
    ADD EBP,0x84                        ; 00433a0a
    MOV dword ptr [ESP + 0x10],ESI      ; 00433a10
    CMP EDI,0x21                        ; 00433a14
    JL 0x004339c7                       ; 00433a17
        ;   XREF to: 004339c7 (CONDITIONAL_JUMP)  ; LAB_004339c7
    MOV EDI,dword ptr [ESP + 0x8]       ; 00433a19
    ADD EDI,0x84                        ; 00433a1d
    MOV EBP,dword ptr [ESP]             ; 00433a23
    MOV dword ptr [ESP + 0x8],EDI       ; 00433a26
    CMP EDI,EBP                         ; 00433a2a
    JNZ 0x004339af                      ; 00433a2c
        ;   XREF to: 004339af (CONDITIONAL_JUMP)  ; LAB_004339af
    ADD ESP,0x18                        ; 00433a2e
        ;   Label: LAB_00433a2e
    POP EBP                             ; 00433a31
    POP EDI                             ; 00433a32
    POP ESI                             ; 00433a33
    POP EBX                             ; 00433a34
    RET                                 ; 00433a35
    IMUL EAX,dword ptr [EBX + 0x4],0x84 ; 00433a36
        ;   Label: LAB_00433a36
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00433a3d
    ADD EDX,EAX                         ; 00433a41
    MOV EAX,dword ptr [EBX]             ; 00433a43
    MOV ECX,dword ptr [EBX + 0x34]      ; 00433a45
    MOV dword ptr [EDX + EAX*0x4 + 0xbc74],ECX ; 00433a48
    JMP 0x0043396a                      ; 00433a4f
        ;   XREF to: 0043396a (UNCONDITIONAL_JUMP)  ; LAB_0043396a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00433a54
        ;   Label: LAB_00433a54
    MOV dword ptr [EDX + 0xbc74],EAX    ; 00433a58
    JMP 0x004339f8                      ; 00433a5e
        ;   XREF to: 004339f8 (UNCONDITIONAL_JUMP)  ; LAB_004339f8

