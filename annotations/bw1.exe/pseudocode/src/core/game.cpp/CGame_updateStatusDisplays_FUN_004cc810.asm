; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_004cc810(CGame *this_ptr)
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
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfa79
;
; Referenced Globals:
;   undefined4 DAT_01cd0aec
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc810
        ;   Label: core_game.cpp_CGame_updateStatusDisplays_FUN_004cc810
    PUSH ESI                            ; 004cc811
    PUSH EDI                            ; 004cc812
    PUSH EBP                            ; 004cc813
    MOV EBP,ESP                         ; 004cc814
    SUB ESP,0x18                        ; 004cc816
    AND ESP,0xfffffff8                  ; 004cc819
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cc81c
    FLD float ptr [EBX + 0x294]         ; 004cc81f
    FSUBR float ptr [EBX + 0x3b4]       ; 004cc825
    FST float ptr [EBX + 0x3b4]         ; 004cc82b
    FLDZ                                ; 004cc831
    FCOMPP                              ; 004cc833
    FNSTSW AX                           ; 004cc835
    SAHF                                ; 004cc837
    JA 0x004cc8ef                       ; 004cc838
        ;   XREF to: 004cc8ef (CONDITIONAL_JUMP)  ; LAB_004cc8ef
    FLD float ptr [EBX + 0x294]         ; 004cc83e
        ;   Label: LAB_004cc83e
    FSUBR float ptr [0x01cd0aec]        ; 004cc844 | DAT_01cd0aec
    FST float ptr [0x01cd0aec]          ; 004cc84a | DAT_01cd0aec
    FLDZ                                ; 004cc850
    FCOMPP                              ; 004cc852
    FNSTSW AX                           ; 004cc854
    SAHF                                ; 004cc856
    JBE 0x004cc861                      ; 004cc857
        ;   XREF to: 004cc861 (CONDITIONAL_JUMP)  ; LAB_004cc861
    XOR EDX,EDX                         ; 004cc859
    MOV dword ptr [0x01cd0aec],EDX      ; 004cc85b | DAT_01cd0aec
    MOV ECX,dword ptr [EBX + 0x3bc]     ; 004cc861
        ;   Label: LAB_004cc861
    XOR ESI,ESI                         ; 004cc867
    TEST ECX,ECX                        ; 004cc869
    JLE 0x004cc8e8                      ; 004cc86b
        ;   XREF to: 004cc8e8 (CONDITIONAL_JUMP)  ; LAB_004cc8e8
    LEA EAX,[EBX + 0x3c0]               ; 004cc871
    LEA EDI,[EBX + 0x8c0]               ; 004cc877
    MOV dword ptr [ESP + 0x10],EAX      ; 004cc87d
    MOV dword ptr [ESP + 0x8],EDI       ; 004cc881
    ADD EAX,0x100                       ; 004cc885
    LEA EDI,[EBX + 0x8d4]               ; 004cc88a
    MOV dword ptr [ESP + 0xc],EAX       ; 004cc890
    MOV dword ptr [ESP + 0x4],EDI       ; 004cc894
    MOV EDI,EBX                         ; 004cc898
    FLD float ptr [EBX + 0x294]         ; 004cc89a
        ;   Label: LAB_004cc89a
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cc8a0
    FSUBR float ptr [EDI + 0x8d4]       ; 004cc8a7
    MOV dword ptr [ESP + 0x14],EAX      ; 004cc8ad
    FST float ptr [EDI + 0x8d4]         ; 004cc8b1
    FLDZ                                ; 004cc8b7
    FCOMPP                              ; 004cc8b9
    FNSTSW AX                           ; 004cc8bb
    SAHF                                ; 004cc8bd
    JNC 0x004cc8fe                      ; 004cc8be
        ;   XREF to: 004cc8fe (CONDITIONAL_JUMP)  ; LAB_004cc8fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cc8c0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cc8c4
    INC ESI                             ; 004cc8c8
    ADD EDI,0x4                         ; 004cc8c9
    ADD EDX,0x100                       ; 004cc8cc
    ADD ECX,0x100                       ; 004cc8d2
    MOV dword ptr [ESP + 0x10],EDX      ; 004cc8d8
    MOV dword ptr [ESP + 0xc],ECX       ; 004cc8dc
    CMP ESI,dword ptr [EBX + 0x3bc]     ; 004cc8e0
    JL 0x004cc89a                       ; 004cc8e6
        ;   XREF to: 004cc89a (CONDITIONAL_JUMP)  ; LAB_004cc89a
    MOV ESP,EBP                         ; 004cc8e8
        ;   Label: LAB_004cc8e8
    POP EBP                             ; 004cc8ea
    POP EDI                             ; 004cc8eb
    POP ESI                             ; 004cc8ec
    POP EBX                             ; 004cc8ed
    RET                                 ; 004cc8ee
    MOV dword ptr [EBX + 0x3b4],0x0     ; 004cc8ef
        ;   Label: LAB_004cc8ef
    JMP 0x004cc83e                      ; 004cc8f9
        ;   XREF to: 004cc83e (UNCONDITIONAL_JUMP)  ; LAB_004cc83e
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 004cc8fe
        ;   Label: LAB_004cc8fe
    DEC EAX                             ; 004cc904
    MOV dword ptr [EBX + 0x3bc],EAX     ; 004cc905
    SUB EAX,ESI                         ; 004cc90b
    SHL EAX,0x8                         ; 004cc90d
    PUSH EAX                            ; 004cc910
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cc911
    PUSH EDX                            ; 004cc915
    MOV ECX,dword ptr [ESP + 0x18]      ; 004cc916
    PUSH ECX                            ; 004cc91a
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004cc91b
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 004cc920
    SUB EAX,ESI                         ; 004cc926
    ADD ESP,0xc                         ; 004cc928
    SHL EAX,0x2                         ; 004cc92b
    PUSH EAX                            ; 004cc92e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cc92f
    ADD EAX,0x4                         ; 004cc933
    MOV dword ptr [ESP + 0x4],EAX       ; 004cc936
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cc93a
    ADD EAX,dword ptr [ESP + 0x4]       ; 004cc93e
    MOV ECX,dword ptr [ESP + 0x18]      ; 004cc942
    PUSH EAX                            ; 004cc946
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cc947
    ADD EAX,ECX                         ; 004cc94b
    PUSH EAX                            ; 004cc94d
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004cc94e
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3bc]     ; 004cc953
    SUB EAX,ESI                         ; 004cc959
    ADD ESP,0xc                         ; 004cc95b
    SHL EAX,0x2                         ; 004cc95e
    MOV EDX,dword ptr [ESP]             ; 004cc961
    PUSH EAX                            ; 004cc964
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cc965
    ADD EAX,EDX                         ; 004cc969
    MOV ECX,dword ptr [ESP + 0x18]      ; 004cc96b
    PUSH EAX                            ; 004cc96f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cc970
    ADD EAX,ECX                         ; 004cc974
    PUSH EAX                            ; 004cc976
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004cc977
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004cc97c
    CMP ESI,dword ptr [EBX + 0x3bc]     ; 004cc97f
    JL 0x004cc89a                       ; 004cc985
        ;   XREF to: 004cc89a (CONDITIONAL_JUMP)  ; LAB_004cc89a
    MOV ESP,EBP                         ; 004cc98b
    POP EBP                             ; 004cc98d
    POP EDI                             ; 004cc98e
    POP ESI                             ; 004cc98f
    POP EBX                             ; 004cc990
    RET                                 ; 004cc991

