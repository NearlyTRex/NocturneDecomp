; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433ae0(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00524940 at 00524caf
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005b87d8
;   TerminatedCString s_CCharacter_chooseNextLay_005b87ed
;   undefined4 DAT_005b882e
;   undefined4 DAT_005b8836
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433ae0
        ;   Label: FUN_00433ae0
    PUSH ESI                            ; 00433ae1
    PUSH EDI                            ; 00433ae2
    PUSH EBP                            ; 00433ae3
    MOV EBP,ESP                         ; 00433ae4
    SUB ESP,0x18                        ; 00433ae6
    AND ESP,0xfffffff8                  ; 00433ae9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00433aec
    MOV ESI,dword ptr [EBP + 0x18]      ; 00433aef
    MOV EDX,dword ptr [EBX + 0x2f00]    ; 00433af2
    TEST EDX,EDX                        ; 00433af8
    JL 0x00433b04                       ; 00433afa
        ;   XREF to: 00433b04 (CONDITIONAL_JUMP)  ; LAB_00433b04
    CMP EDX,dword ptr [EBX + 0x27c4]    ; 00433afc
    JL 0x00433b26                       ; 00433b02
        ;   XREF to: 00433b26 (CONDITIONAL_JUMP)  ; LAB_00433b26
    MOV EDI,0x5b87d8                    ; 00433b04 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_00433b04
    MOV EAX,0x131d                      ; 00433b09
    PUSH 0x5b87ed                       ; 00433b0e | = "CCharacter::chooseNextLayerAction - i..."
    MOV dword ptr [0x01d71de0],EDI      ; 00433b13 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00433b19 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00433b1e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00433b23
    FLD float ptr [EBX + 0x2f04]        ; 00433b26
        ;   Label: LAB_00433b26
    FST double ptr [ESP]                ; 00433b2c
    FCOMP double ptr [0x005b882e]       ; 00433b2f | DAT_005b882e
    FNSTSW AX                           ; 00433b35
    SAHF                                ; 00433b37
    JNC 0x00433bad                      ; 00433b38
        ;   XREF to: 00433bad (CONDITIONAL_JUMP)  ; LAB_00433bad
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 00433b3e
    SHL EAX,0x3                         ; 00433b44
    MOV EDX,EAX                         ; 00433b47
    SHL EAX,0x3                         ; 00433b49
    SUB EAX,EDX                         ; 00433b4c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x27c8] ; 00433b4e
    MOV dword ptr [ESP + 0x8],EAX       ; 00433b55
        ;   Label: LAB_00433b55
    CMP ESI,dword ptr [ESP + 0x8]       ; 00433b59
    JZ 0x00433ba6                       ; 00433b5d
        ;   XREF to: 00433ba6 (CONDITIONAL_JUMP)  ; LAB_00433ba6
    MOV ECX,0x4479c000                  ; 00433b5f
    MOV EDI,dword ptr [EBX + 0x27c4]    ; 00433b64
    MOV dword ptr [ESP + 0x14],ECX      ; 00433b6a
    XOR ECX,ECX                         ; 00433b6e
    TEST EDI,EDI                        ; 00433b70
    JLE 0x00433ba6                      ; 00433b72
        ;   XREF to: 00433ba6 (CONDITIONAL_JUMP)  ; LAB_00433ba6
    SHL ESI,0x2                         ; 00433b74
    LEA EDX,[EBX + 0x27c8]              ; 00433b77
    MOV EDI,dword ptr [EDX + 0x28]      ; 00433b7d
        ;   Label: LAB_00433b7d
    MOV EAX,EDX                         ; 00433b80
    TEST EDI,EDI                        ; 00433b82
    JL 0x00433b8e                       ; 00433b84
        ;   XREF to: 00433b8e (CONDITIONAL_JUMP)  ; LAB_00433b8e
    MOV EDI,dword ptr [EDX]             ; 00433b86
    CMP EDI,dword ptr [ESP + 0x8]       ; 00433b88
    JZ 0x00433bd4                       ; 00433b8c
        ;   XREF to: 00433bd4 (CONDITIONAL_JUMP)  ; LAB_00433bd4
    CMP dword ptr [EAX + 0x28],0x0      ; 00433b8e
        ;   Label: LAB_00433b8e
    JLE 0x00433c0e                      ; 00433b92
        ;   XREF to: 00433c0e (CONDITIONAL_JUMP)  ; LAB_00433c0e
    INC ECX                             ; 00433b98
        ;   Label: LAB_00433b98
    MOV EAX,dword ptr [EBX + 0x27c4]    ; 00433b99
    ADD EDX,0x38                        ; 00433b9f
    CMP ECX,EAX                         ; 00433ba2
    JL 0x00433b7d                       ; 00433ba4
        ;   XREF to: 00433b7d (CONDITIONAL_JUMP)  ; LAB_00433b7d
    MOV ESP,EBP                         ; 00433ba6
        ;   Label: LAB_00433ba6
    POP EBP                             ; 00433ba8
    POP EDI                             ; 00433ba9
    POP ESI                             ; 00433baa
    POP EBX                             ; 00433bab
    RET                                 ; 00433bac
    FLD double ptr [ESP]                ; 00433bad
        ;   Label: LAB_00433bad
    FCOMP double ptr [0x005b8836]       ; 00433bb0 | DAT_005b8836
    FNSTSW AX                           ; 00433bb6
    SAHF                                ; 00433bb8
    JBE 0x00433ba6                      ; 00433bb9
        ;   XREF to: 00433ba6 (CONDITIONAL_JUMP)  ; LAB_00433ba6
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 00433bbb
    SHL EAX,0x3                         ; 00433bc1
    MOV EDX,EAX                         ; 00433bc4
    SHL EAX,0x3                         ; 00433bc6
    SUB EAX,EDX                         ; 00433bc9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x27cc] ; 00433bcb
    JMP 0x00433b55                      ; 00433bd2
        ;   XREF to: 00433b55 (UNCONDITIONAL_JUMP)  ; LAB_00433b55
    IMUL EAX,dword ptr [EDX + 0x4],0x84 ; 00433bd4
        ;   Label: LAB_00433bd4
    ADD EAX,EBX                         ; 00433bdb
    FLD float ptr [EDX + 0x34]          ; 00433bdd
    FADD float ptr [ESI + EAX*0x1 + 0xbc74] ; 00433be0
    FST float ptr [ESP + 0xc]           ; 00433be7
    FCOMP float ptr [ESP + 0x14]        ; 00433beb
    FNSTSW AX                           ; 00433bef
    SAHF                                ; 00433bf1
    JNC 0x00433b98                      ; 00433bf2
        ;   XREF to: 00433b98 (CONDITIONAL_JUMP)  ; LAB_00433b98
    MOV dword ptr [EBX + 0x2f04],0x0    ; 00433bf4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00433bfe
    MOV dword ptr [EBX + 0x2f00],ECX    ; 00433c02
    MOV dword ptr [ESP + 0x14],EAX      ; 00433c08
    JMP 0x00433b98                      ; 00433c0c
        ;   XREF to: 00433b98 (UNCONDITIONAL_JUMP)  ; LAB_00433b98
    MOV EDI,dword ptr [EAX + 0x4]       ; 00433c0e
        ;   Label: LAB_00433c0e
    CMP EDI,dword ptr [ESP + 0x8]       ; 00433c11
    JNZ 0x00433b98                      ; 00433c15
        ;   XREF to: 00433b98 (CONDITIONAL_JUMP)  ; LAB_00433b98
    IMUL EDI,dword ptr [EAX],0x84       ; 00433c17
    ADD EDI,EBX                         ; 00433c1d
    ADD EDI,ESI                         ; 00433c1f
    FLD float ptr [EAX + 0x34]          ; 00433c21
    FADD float ptr [EDI + 0xbc74]       ; 00433c24
    FST float ptr [ESP + 0x10]          ; 00433c2a
    FCOMP float ptr [ESP + 0x14]        ; 00433c2e
    FNSTSW AX                           ; 00433c32
    SAHF                                ; 00433c34
    JNC 0x00433b98                      ; 00433c35
        ;   XREF to: 00433b98 (CONDITIONAL_JUMP)  ; LAB_00433b98
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 00433c3b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00433c45
    MOV dword ptr [EBX + 0x2f00],ECX    ; 00433c49
    MOV dword ptr [ESP + 0x14],EAX      ; 00433c4f
    JMP 0x00433b98                      ; 00433c53
        ;   XREF to: 00433b98 (UNCONDITIONAL_JUMP)  ; LAB_00433b98

