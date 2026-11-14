; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_CSpike_process_FUN_00566a80(CSpike *this_ptr,float delta_time)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005d5b2a
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566a80
        ;   Label: core_spike.cpp_CSpike_process_FUN_00566a80
    PUSH ESI                            ; 00566a81
    PUSH EDI                            ; 00566a82
    PUSH EBP                            ; 00566a83
    SUB ESP,0x58                        ; 00566a84
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00566a87
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00566a8b
    TEST EDX,EDX                        ; 00566a91
    JZ 0x00566a9e                       ; 00566a93
        ;   XREF to: 00566a9e (CONDITIONAL_JUMP)  ; LAB_00566a9e
    CMP EDX,0x1                         ; 00566a95
    JNZ 0x00566c1c                      ; 00566a98
        ;   XREF to: 00566c1c (CONDITIONAL_JUMP)  ; LAB_00566c1c
    LEA EAX,[EBX + 0x2f0]               ; 00566a9e
        ;   Label: LAB_00566a9e
    PUSH EAX                            ; 00566aa4
    MOV EBP,dword ptr [0x005fba60]      ; 00566aa5 | DAT_005fba60
    PUSH EBP                            ; 00566aab
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00566aac
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00566ab1
    TEST EAX,EAX                        ; 00566ab4
    JZ 0x00566ac2                       ; 00566ab6
        ;   XREF to: 00566ac2 (CONDITIONAL_JUMP)  ; LAB_00566ac2
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00566ab8
    LEA EAX,[EBX + 0x354]               ; 00566ac2
        ;   Label: LAB_00566ac2
    PUSH EAX                            ; 00566ac8
    MOV EAX,[0x005fba60]                ; 00566ac9 | DAT_005fba60
    PUSH EAX                            ; 00566ace
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00566acf
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00566ad4
    TEST EAX,EAX                        ; 00566ad7
    JZ 0x00566c69                       ; 00566ad9
        ;   XREF to: 00566c69 (CONDITIONAL_JUMP)  ; LAB_00566c69
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00566adf
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 00566ae9
        ;   Label: LAB_00566ae9
    TEST ECX,ECX                        ; 00566aef
    JZ 0x00566c14                       ; 00566af1
        ;   XREF to: 00566c14 (CONDITIONAL_JUMP)  ; LAB_00566c14
    CMP ECX,0x2                         ; 00566af7
    JNZ 0x00566b06                      ; 00566afa
        ;   XREF to: 00566b06 (CONDITIONAL_JUMP)  ; LAB_00566b06
    MOV dword ptr [EBX + 0x2d8],0x3     ; 00566afc
    FLD float ptr [EBX + 0x488]         ; 00566b06
        ;   Label: LAB_00566b06
    FSUB float ptr [ESP + 0x70]         ; 00566b0c
    FST float ptr [EBX + 0x488]         ; 00566b10
    FLDZ                                ; 00566b16
    FCOMPP                              ; 00566b18
    FNSTSW AX                           ; 00566b1a
    SAHF                                ; 00566b1c
    JC 0x00566c14                       ; 00566b1d
        ;   XREF to: 00566c14 (CONDITIONAL_JUMP)  ; LAB_00566c14
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 00566b23
    MOV dword ptr [EBX + 0x488],0x0     ; 00566b29
    TEST EDI,EDI                        ; 00566b33
    JNZ 0x00566c7b                      ; 00566b35
        ;   XREF to: 00566c7b (CONDITIONAL_JUMP)  ; LAB_00566c7b
    MOV dword ptr [EBX + 0x2d8],0x1     ; 00566b3b
    MOV dword ptr [EBX + 0x55c],EDI     ; 00566b45
    LEA EDI,[ESP + 0x18]                ; 00566b4b
        ;   Label: LAB_00566b4b
    LEA ESI,[EBX + 0x20]                ; 00566b4f
    MOVSD ES:EDI,ESI                    ; 00566b52
    MOVSD ES:EDI,ESI                    ; 00566b53
    MOVSD ES:EDI,ESI                    ; 00566b54
    FLD float ptr [EBX + 0x2ec]         ; 00566b55
    FMUL float ptr [EBX + 0x55c]        ; 00566b5b
    XOR EAX,EAX                         ; 00566b61
    FSTP float ptr [ESP + 0x54]         ; 00566b63
    MOV dword ptr [ESP + 0x30],EAX      ; 00566b67
    MOV dword ptr [ESP + 0x34],EAX      ; 00566b6b
    MOV EAX,dword ptr [ESP + 0x54]      ; 00566b6f
    MOV dword ptr [ESP + 0x38],EAX      ; 00566b73
    LEA EAX,[ESP + 0x30]                ; 00566b77
    PUSH EAX                            ; 00566b7b
    PUSH EBX                            ; 00566b7c
    LEA ESI,[ESP + 0x2c]                ; 00566b7d
    LEA EDI,[ESP + 0x8]                 ; 00566b81
    CALL core_actor.cpp_FUN_00408b00    ; 00566b85
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x2c]                ; 00566b8a
    ADD ESP,0x8                         ; 00566b8e
    LEA EAX,[EBX + 0x2e0]               ; 00566b91
    MOVSD ES:EDI,ESI                    ; 00566b97
    MOVSD ES:EDI,ESI                    ; 00566b98
    MOVSD ES:EDI,ESI                    ; 00566b99
    FLD float ptr [EAX]                 ; 00566b9a
    FLD float ptr [EAX + 0x4]           ; 00566b9c
    FLD float ptr [EAX + 0x8]           ; 00566b9f
    LEA EDI,[ESP + 0xc]                 ; 00566ba2
    LEA ESI,[ESP + 0x3c]                ; 00566ba6
    FXCH ST2                            ; 00566baa
    FADD float ptr [ESP]                ; 00566bac
    FXCH                                ; 00566baf
    FADD float ptr [ESP + 0x4]          ; 00566bb1
    FXCH ST2                            ; 00566bb5
    FADD float ptr [ESP + 0x8]          ; 00566bb7
    FXCH                                ; 00566bbb
    FSTP float ptr [ESP + 0x3c]         ; 00566bbd
    FXCH                                ; 00566bc1
    FSTP float ptr [ESP + 0x40]         ; 00566bc3
    FSTP float ptr [ESP + 0x44]         ; 00566bc7
    MOVSD ES:EDI,ESI                    ; 00566bcb
    MOVSD ES:EDI,ESI                    ; 00566bcc
    MOVSD ES:EDI,ESI                    ; 00566bcd
    LEA EDX,[EBX + 0x20]                ; 00566bce
    MOV EAX,dword ptr [ESP + 0xc]       ; 00566bd1
    FLD float ptr [ESP + 0x18]          ; 00566bd5
    MOV dword ptr [EDX],EAX             ; 00566bd9
    MOV EAX,dword ptr [ESP + 0x10]      ; 00566bdb
    FSUB float ptr [EDX]                ; 00566bdf
    FMUL ST0                            ; 00566be1
    MOV dword ptr [EDX + 0x4],EAX       ; 00566be3
    FLD float ptr [ESP + 0x1c]          ; 00566be6
    FSUB float ptr [EDX + 0x4]          ; 00566bea
    FMUL ST0                            ; 00566bed
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566bef
    FLD float ptr [ESP + 0x20]          ; 00566bf3
    MOV dword ptr [EDX + 0x8],EAX       ; 00566bf7
    FXCH                                ; 00566bfa
    FADDP ST2,ST0                       ; 00566bfc
    FSUB float ptr [EDX + 0x8]          ; 00566bfe
    FMUL ST0                            ; 00566c01
    FADDP                               ; 00566c03
    FCOMP double ptr [0x005d5b2a]       ; 00566c05 | DAT_005d5b2a
    FNSTSW AX                           ; 00566c0b
    SAHF                                ; 00566c0d
    JA 0x00566d9d                       ; 00566c0e
        ;   XREF to: 00566d9d (CONDITIONAL_JUMP)  ; LAB_00566d9d
    ADD ESP,0x58                        ; 00566c14
        ;   Label: LAB_00566c14
    POP EBP                             ; 00566c17
    POP EDI                             ; 00566c18
    POP ESI                             ; 00566c19
    POP EBX                             ; 00566c1a
    RET                                 ; 00566c1b
    LEA EAX,[EBX + 0x3b8]               ; 00566c1c
        ;   Label: LAB_00566c1c
    PUSH EAX                            ; 00566c22
    MOV ESI,dword ptr [0x005fba60]      ; 00566c23 | DAT_005fba60
    PUSH ESI                            ; 00566c29
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00566c2a
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00566c2f
    TEST EAX,EAX                        ; 00566c32
    JZ 0x00566c40                       ; 00566c34
        ;   XREF to: 00566c40 (CONDITIONAL_JUMP)  ; LAB_00566c40
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00566c36
    LEA EAX,[EBX + 0x41c]               ; 00566c40
        ;   Label: LAB_00566c40
    PUSH EAX                            ; 00566c46
    MOV EDI,dword ptr [0x005fba60]      ; 00566c47 | DAT_005fba60
    PUSH EDI                            ; 00566c4d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00566c4e
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00566c53
    TEST EAX,EAX                        ; 00566c56
    JZ 0x00566c69                       ; 00566c58
        ;   XREF to: 00566c69 (CONDITIONAL_JUMP)  ; LAB_00566c69
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00566c5a
    JMP 0x00566b06                      ; 00566c64
        ;   XREF to: 00566b06 (UNCONDITIONAL_JUMP)  ; LAB_00566b06
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00566c69
        ;   Label: LAB_00566c69
    JZ 0x00566ae9                       ; 00566c70
        ;   XREF to: 00566ae9 (CONDITIONAL_JUMP)  ; LAB_00566ae9
    JMP 0x00566b06                      ; 00566c76
        ;   XREF to: 00566b06 (UNCONDITIONAL_JUMP)  ; LAB_00566b06
    CMP EDI,0x1                         ; 00566c7b
        ;   Label: LAB_00566c7b
    JNZ 0x00566d16                      ; 00566c7e
        ;   XREF to: 00566d16 (CONDITIONAL_JUMP)  ; LAB_00566d16
    FLD float ptr [ESP + 0x70]          ; 00566c84
    FDIV float ptr [EBX + 0x480]        ; 00566c88
    FADD float ptr [EBX + 0x55c]        ; 00566c8e
    FST float ptr [EBX + 0x55c]         ; 00566c94
    FLD1                                ; 00566c9a
    FCOMPP                              ; 00566c9c
    FNSTSW AX                           ; 00566c9e
    SAHF                                ; 00566ca0
    JNC 0x00566b4b                      ; 00566ca1
        ;   XREF to: 00566b4b (CONDITIONAL_JUMP)  ; LAB_00566b4b
    MOV dword ptr [EBX + 0x2d8],0x2     ; 00566ca7
    MOV EDI,dword ptr [EBX + 0x2d4]     ; 00566cb1
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 00566cb7
    CMP EDI,0x2                         ; 00566cc1
    JZ 0x00566cdc                       ; 00566cc4
        ;   XREF to: 00566cdc (CONDITIONAL_JUMP)  ; LAB_00566cdc
    CMP EDI,0x1                         ; 00566cc6
    JZ 0x00566ceb                       ; 00566cc9
        ;   XREF to: 00566ceb (CONDITIONAL_JUMP)  ; LAB_00566ceb
    MOV EAX,dword ptr [EBX + 0x554]     ; 00566ccb
    MOV dword ptr [EBX + 0x488],EAX     ; 00566cd1
    JMP 0x00566b4b                      ; 00566cd7
        ;   XREF to: 00566b4b (UNCONDITIONAL_JUMP)  ; LAB_00566b4b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00566cdc
        ;   Label: LAB_00566cdc
    JMP 0x00566b4b                      ; 00566ce6
        ;   XREF to: 00566b4b (UNCONDITIONAL_JUMP)  ; LAB_00566b4b
    PUSH 0x3fa00000                     ; 00566ceb
        ;   Label: LAB_00566ceb
    PUSH 0x3f400000                     ; 00566cf0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00566cf5
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x5c],EAX      ; 00566cfa
    FLD float ptr [ESP + 0x5c]          ; 00566cfe
    FMUL float ptr [EBX + 0x554]        ; 00566d02
    ADD ESP,0x8                         ; 00566d08
    FSTP float ptr [EBX + 0x488]        ; 00566d0b
    JMP 0x00566b4b                      ; 00566d11
        ;   XREF to: 00566b4b (UNCONDITIONAL_JUMP)  ; LAB_00566b4b
    CMP EDI,0x2                         ; 00566d16
        ;   Label: LAB_00566d16
    JNZ 0x00566d34                      ; 00566d19
        ;   XREF to: 00566d34 (CONDITIONAL_JUMP)  ; LAB_00566d34
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 00566d1b
    MOV dword ptr [EBX + 0x2d8],0x3     ; 00566d25
    JMP 0x00566b4b                      ; 00566d2f
        ;   XREF to: 00566b4b (UNCONDITIONAL_JUMP)  ; LAB_00566b4b
    CMP EDI,0x3                         ; 00566d34
        ;   Label: LAB_00566d34
    JNZ 0x00566b4b                      ; 00566d37
        ;   XREF to: 00566b4b (CONDITIONAL_JUMP)  ; LAB_00566b4b
    FLD float ptr [ESP + 0x70]          ; 00566d3d
    FDIV float ptr [EBX + 0x484]        ; 00566d41
    FSUBR float ptr [EBX + 0x55c]       ; 00566d47
    FST float ptr [EBX + 0x55c]         ; 00566d4d
    FLDZ                                ; 00566d53
    FCOMPP                              ; 00566d55
    FNSTSW AX                           ; 00566d57
    SAHF                                ; 00566d59
    JBE 0x00566b4b                      ; 00566d5a
        ;   XREF to: 00566b4b (CONDITIONAL_JUMP)  ; LAB_00566b4b
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00566d60
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 00566d6a
    MOV dword ptr [EBX + 0x55c],0x0     ; 00566d70
    CMP ECX,0x2                         ; 00566d7a
    JZ 0x00566cdc                       ; 00566d7d
        ;   XREF to: 00566cdc (CONDITIONAL_JUMP)  ; LAB_00566cdc
    CMP ECX,0x1                         ; 00566d83
    JZ 0x00566ceb                       ; 00566d86
        ;   XREF to: 00566ceb (CONDITIONAL_JUMP)  ; LAB_00566ceb
    MOV EAX,dword ptr [EBX + 0x554]     ; 00566d8c
    MOV dword ptr [EBX + 0x488],EAX     ; 00566d92
    JMP 0x00566b4b                      ; 00566d98
        ;   XREF to: 00566b4b (UNCONDITIONAL_JUMP)  ; LAB_00566b4b
    PUSH EBX                            ; 00566d9d
        ;   Label: LAB_00566d9d
    CALL core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0 ; 00566d9e
        ;   XREF to: 00566fd0 (UNCONDITIONAL_CALL)  ; void core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0(CSpike * this_ptr)
    ADD ESP,0x4                         ; 00566da3
    ADD ESP,0x58                        ; 00566da6
    POP EBP                             ; 00566da9
    POP EDI                             ; 00566daa
    POP ESI                             ; 00566dab
    POP EBX                             ; 00566dac
    RET                                 ; 00566dad

