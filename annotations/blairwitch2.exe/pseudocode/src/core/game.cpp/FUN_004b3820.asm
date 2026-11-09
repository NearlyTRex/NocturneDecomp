; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b3820(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b659c
;
; Referenced Globals:
;   undefined4 DAT_01cb807c
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3820
        ;   Label: core_game.cpp_FUN_004b3820
    PUSH ESI                            ; 004b3821
    PUSH EDI                            ; 004b3822
    PUSH EBP                            ; 004b3823
    MOV EBP,ESP                         ; 004b3824
    SUB ESP,0x18                        ; 004b3826
    AND ESP,0xfffffff8                  ; 004b3829
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b382c
    FLD float ptr [EBX + 0x284]         ; 004b382f
    FSUBR float ptr [EBX + 0x3a4]       ; 004b3835
    FST float ptr [EBX + 0x3a4]         ; 004b383b
    FLDZ                                ; 004b3841
    FCOMPP                              ; 004b3843
    FNSTSW AX                           ; 004b3845
    SAHF                                ; 004b3847
    JA 0x004b38ff                       ; 004b3848
        ;   XREF to: 004b38ff (CONDITIONAL_JUMP)  ; LAB_004b38ff
    FLD float ptr [EBX + 0x284]         ; 004b384e
        ;   Label: LAB_004b384e
    FSUBR float ptr [0x01cb807c]        ; 004b3854 | DAT_01cb807c
    FST float ptr [0x01cb807c]          ; 004b385a | DAT_01cb807c
    FLDZ                                ; 004b3860
    FCOMPP                              ; 004b3862
    FNSTSW AX                           ; 004b3864
    SAHF                                ; 004b3866
    JBE 0x004b3871                      ; 004b3867
        ;   XREF to: 004b3871 (CONDITIONAL_JUMP)  ; LAB_004b3871
    XOR EDX,EDX                         ; 004b3869
    MOV dword ptr [0x01cb807c],EDX      ; 004b386b | DAT_01cb807c
    MOV ECX,dword ptr [EBX + 0x3ac]     ; 004b3871
        ;   Label: LAB_004b3871
    XOR ESI,ESI                         ; 004b3877
    TEST ECX,ECX                        ; 004b3879
    JLE 0x004b38f8                      ; 004b387b
        ;   XREF to: 004b38f8 (CONDITIONAL_JUMP)  ; LAB_004b38f8
    LEA EAX,[EBX + 0x3b0]               ; 004b3881
    LEA EDI,[EBX + 0x8b0]               ; 004b3887
    MOV dword ptr [ESP + 0x10],EAX      ; 004b388d
    MOV dword ptr [ESP + 0x8],EDI       ; 004b3891
    ADD EAX,0x100                       ; 004b3895
    LEA EDI,[EBX + 0x8c4]               ; 004b389a
    MOV dword ptr [ESP + 0xc],EAX       ; 004b38a0
    MOV dword ptr [ESP + 0x4],EDI       ; 004b38a4
    MOV EDI,EBX                         ; 004b38a8
    FLD float ptr [EBX + 0x284]         ; 004b38aa
        ;   Label: LAB_004b38aa
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b38b0
    FSUBR float ptr [EDI + 0x8c4]       ; 004b38b7
    MOV dword ptr [ESP + 0x14],EAX      ; 004b38bd
    FST float ptr [EDI + 0x8c4]         ; 004b38c1
    FLDZ                                ; 004b38c7
    FCOMPP                              ; 004b38c9
    FNSTSW AX                           ; 004b38cb
    SAHF                                ; 004b38cd
    JNC 0x004b390e                      ; 004b38ce
        ;   XREF to: 004b390e (CONDITIONAL_JUMP)  ; LAB_004b390e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b38d0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b38d4
    INC ESI                             ; 004b38d8
    ADD EDI,0x4                         ; 004b38d9
    ADD EDX,0x100                       ; 004b38dc
    ADD ECX,0x100                       ; 004b38e2
    MOV dword ptr [ESP + 0x10],EDX      ; 004b38e8
    MOV dword ptr [ESP + 0xc],ECX       ; 004b38ec
    CMP ESI,dword ptr [EBX + 0x3ac]     ; 004b38f0
    JL 0x004b38aa                       ; 004b38f6
        ;   XREF to: 004b38aa (CONDITIONAL_JUMP)  ; LAB_004b38aa
    MOV ESP,EBP                         ; 004b38f8
        ;   Label: LAB_004b38f8
    POP EBP                             ; 004b38fa
    POP EDI                             ; 004b38fb
    POP ESI                             ; 004b38fc
    POP EBX                             ; 004b38fd
    RET                                 ; 004b38fe
    MOV dword ptr [EBX + 0x3a4],0x0     ; 004b38ff
        ;   Label: LAB_004b38ff
    JMP 0x004b384e                      ; 004b3909
        ;   XREF to: 004b384e (UNCONDITIONAL_JUMP)  ; LAB_004b384e
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 004b390e
        ;   Label: LAB_004b390e
    DEC EAX                             ; 004b3914
    MOV dword ptr [EBX + 0x3ac],EAX     ; 004b3915
    SUB EAX,ESI                         ; 004b391b
    SHL EAX,0x8                         ; 004b391d
    PUSH EAX                            ; 004b3920
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3921
    PUSH EDX                            ; 004b3925
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b3926
    PUSH ECX                            ; 004b392a
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004b392b
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 004b3930
    SUB EAX,ESI                         ; 004b3936
    ADD ESP,0xc                         ; 004b3938
    SHL EAX,0x2                         ; 004b393b
    PUSH EAX                            ; 004b393e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b393f
    ADD EAX,0x4                         ; 004b3943
    MOV dword ptr [ESP + 0x4],EAX       ; 004b3946
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b394a
    ADD EAX,dword ptr [ESP + 0x4]       ; 004b394e
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b3952
    PUSH EAX                            ; 004b3956
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b3957
    ADD EAX,ECX                         ; 004b395b
    PUSH EAX                            ; 004b395d
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004b395e
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 004b3963
    SUB EAX,ESI                         ; 004b3969
    ADD ESP,0xc                         ; 004b396b
    SHL EAX,0x2                         ; 004b396e
    MOV EDX,dword ptr [ESP]             ; 004b3971
    PUSH EAX                            ; 004b3974
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b3975
    ADD EAX,EDX                         ; 004b3979
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b397b
    PUSH EAX                            ; 004b397f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b3980
    ADD EAX,ECX                         ; 004b3984
    PUSH EAX                            ; 004b3986
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004b3987
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b398c
    CMP ESI,dword ptr [EBX + 0x3ac]     ; 004b398f
    JL 0x004b38aa                       ; 004b3995
        ;   XREF to: 004b38aa (CONDITIONAL_JUMP)  ; LAB_004b38aa
    MOV ESP,EBP                         ; 004b399b
    POP EBP                             ; 004b399d
    POP EDI                             ; 004b399e
    POP ESI                             ; 004b399f
    POP EBX                             ; 004b39a0
    RET                                 ; 004b39a1

