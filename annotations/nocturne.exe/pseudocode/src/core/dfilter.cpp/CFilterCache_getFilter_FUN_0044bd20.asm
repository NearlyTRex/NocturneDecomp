; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20(int *param_1,char *param_2,int param_3)
;
;
; XREF[3]:
;   FUN_004c79a0 at 004c7b51
;   core_setutil.cpp_C3DSLight_addFilter_FUN_00515710 at 005157a3
;   core_setutil.cpp_C3DSLight_create_FUN_005151f0 at 005152d1
;
; Referenced Globals:
;   string s_..\\core\\dfilter.cpp_0057be5d
;   string s_CFilterCache::getFilter_-_Too_ma_0057be71
;   string s_..\\core\\dfilter.cpp_0057be9c
;   string s_CFilterCache::getFilter_-_Out_of_0057beb0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_0044beb0
;   core_dfilter.cpp_CDemonFilter_init_FUN_0044c190
;   core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
;   crt_string.c__strcmp_FUN_005649c0
;   FUN_004c8440
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bd20
        ;   Label: core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
    PUSH ESI                            ; 0044bd21
    PUSH EBP                            ; 0044bd22
    MOV EBP,dword ptr [ESP + 0x10]      ; 0044bd23
    MOV EDX,dword ptr [EBP]             ; 0044bd27
    XOR EBX,EBX                         ; 0044bd2a
    TEST EDX,EDX                        ; 0044bd2c
    JLE 0x0044bd54                      ; 0044bd2e
        ;   XREF to: 0044bd54 (CONDITIONAL_JUMP)  ; LAB_0044bd54
    LEA ESI,[EBP + 0x4]                 ; 0044bd30
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044bd33
        ;   Label: LAB_0044bd33
    PUSH EAX                            ; 0044bd37
    PUSH ESI                            ; 0044bd38
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0044bd39
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0044bd3e
    TEST EAX,EAX                        ; 0044bd41
    JZ 0x0044be27                       ; 0044bd43
        ;   XREF to: 0044be27 (CONDITIONAL_JUMP)  ; LAB_0044be27
    INC EBX                             ; 0044bd49
    MOV ECX,dword ptr [EBP]             ; 0044bd4a
    ADD ESI,0x28                        ; 0044bd4d
    CMP EBX,ECX                         ; 0044bd50
    JL 0x0044bd33                       ; 0044bd52
        ;   XREF to: 0044bd33 (CONDITIONAL_JUMP)  ; LAB_0044bd33
    PUSH EDI                            ; 0044bd54
        ;   Label: LAB_0044bd54
    CMP dword ptr [EBP],0x40            ; 0044bd55
    JGE 0x0044be32                      ; 0044bd59
        ;   XREF to: 0044be32 (CONDITIONAL_JUMP)  ; LAB_0044be32
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044bd5f
        ;   Label: LAB_0044bd5f
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044bd63
    LEA EDI,[EBP + 0x4]                 ; 0044bd6a
    ADD EAX,EBX                         ; 0044bd6d
    MOV EDX,dword ptr [EBP]             ; 0044bd6f
    SHL EAX,0x3                         ; 0044bd72
    INC EDX                             ; 0044bd75
    ADD EDI,EAX                         ; 0044bd76
    MOV dword ptr [EBP],EDX             ; 0044bd78
    PUSH EDI                            ; 0044bd7b
    MOV AL,byte ptr [ESI]               ; 0044bd7c
        ;   Label: LAB_0044bd7c
    MOV byte ptr [EDI],AL               ; 0044bd7e
    CMP AL,0x0                          ; 0044bd80
    JZ 0x0044bd94                       ; 0044bd82
        ;   XREF to: 0044bd94 (CONDITIONAL_JUMP)  ; LAB_0044bd94
    MOV AL,byte ptr [ESI + 0x1]         ; 0044bd84
    ADD ESI,0x2                         ; 0044bd87
    MOV byte ptr [EDI + 0x1],AL         ; 0044bd8a
    ADD EDI,0x2                         ; 0044bd8d
    CMP AL,0x0                          ; 0044bd90
    JNZ 0x0044bd7c                      ; 0044bd92
        ;   XREF to: 0044bd7c (CONDITIONAL_JUMP)  ; LAB_0044bd7c
    POP EDI                             ; 0044bd94
        ;   Label: LAB_0044bd94
    PUSH 0x4c                           ; 0044bd95
    CALL FUN_0056497c                   ; 0044bd97
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0044bd9c
    TEST EAX,EAX                        ; 0044bd9f
    JZ 0x0044bdac                       ; 0044bda1
        ;   XREF to: 0044bdac (CONDITIONAL_JUMP)  ; LAB_0044bdac
    PUSH EAX                            ; 0044bda3
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_0044beb0 ; 0044bda4
        ;   XREF to: 0044beb0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CDemonFilter_ctor_FUN_0044beb0()
    ADD ESP,0x4                         ; 0044bda9
    MOV ESI,EAX                         ; 0044bdac
        ;   Label: LAB_0044bdac
    MOV dword ptr [EBP + EBX*0x4 + 0xa04],ESI ; 0044bdae
    TEST ESI,ESI                        ; 0044bdb5
    JNZ 0x0044bddc                      ; 0044bdb7
        ;   XREF to: 0044bddc (CONDITIONAL_JUMP)  ; LAB_0044bddc
    MOV ESI,0x57be9c                    ; 0044bdb9 | = "..\\core\\dfilter.cpp"
    MOV EDI,0x59                        ; 0044bdbe
    PUSH 0x57beb0                       ; 0044bdc3 | = "CFilterCache::getFilter - Out of memory"
    MOV dword ptr [0x01cc4800],ESI      ; 0044bdc8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0044bdce | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044bdd4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044bdd9
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044bddc
        ;   Label: LAB_0044bddc
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044bde3
    ADD ESI,EBP                         ; 0044bde7
    PUSH EAX                            ; 0044bde9
    MOV EDX,dword ptr [ESI + 0xa04]     ; 0044bdea
    PUSH EDX                            ; 0044bdf0
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90 ; 0044bdf1
        ;   XREF to: 0044bf90 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90()
    ADD ESP,0x8                         ; 0044bdf6
    CMP dword ptr [ESP + 0x1c],0x0      ; 0044bdf9
    JZ 0x0044be16                       ; 0044bdfe
        ;   XREF to: 0044be16 (CONDITIONAL_JUMP)  ; LAB_0044be16
    PUSH 0x1                            ; 0044be00
    MOV EDI,dword ptr [ESI + 0xa04]     ; 0044be02
    PUSH 0x3faa9fbe                     ; 0044be08
    PUSH EDI                            ; 0044be0d
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_0044c190 ; 0044be0e
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CDemonFilter_init_FUN_0044c190()
    ADD ESP,0xc                         ; 0044be13
    SHL EBX,0x2                         ; 0044be16
        ;   Label: LAB_0044be16
    LEA EAX,[EBX + EBP*0x1]             ; 0044be19
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0044be1c
    POP EDI                             ; 0044be22
    POP EBP                             ; 0044be23
    POP ESI                             ; 0044be24
    POP EBX                             ; 0044be25
    RET                                 ; 0044be26
    MOV EAX,dword ptr [EBP + EBX*0x4 + 0xa04] ; 0044be27
        ;   Label: LAB_0044be27
    POP EBP                             ; 0044be2e
    POP ESI                             ; 0044be2f
    POP EBX                             ; 0044be30
    RET                                 ; 0044be31
    MOV EDI,0x57be5d                    ; 0044be32 | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_0044be32
    MOV EAX,0x55                        ; 0044be37
    PUSH 0x57be71                       ; 0044be3c | = "CFilterCache::getFilter - Too many fi..."
    MOV dword ptr [0x01cc4800],EDI      ; 0044be41 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0044be47 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044be4c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044be51
    JMP 0x0044bd5f                      ; 0044be54
        ;   XREF to: 0044bd5f (UNCONDITIONAL_JUMP)  ; LAB_0044bd5f

