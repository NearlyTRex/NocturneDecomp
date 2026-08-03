; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *param_1)
;
;
; Referenced Globals:
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   undefined4 DAT_005c168c
;   CKeys g_CKeys_01cc30e4
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   crt_string.c__stricmp_FUN_00564520
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;   wincore_winrun.cpp_wasKeyPressed_FUN_00558b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474ea0
        ;   Label: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
    PUSH ESI                            ; 00474ea1
    PUSH EDI                            ; 00474ea2
    PUSH EBP                            ; 00474ea3
    SUB ESP,0x4                         ; 00474ea4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00474ea7
    PUSH 0x1c                           ; 00474eab
    MOV EAX,[0x005bac64]                ; 00474ead | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474eb2 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474eb3 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474eb5
    ADD ESP,0x8                         ; 00474eb8
    TEST EAX,EAX                        ; 00474ebb
    JZ 0x00474ed7                       ; 00474ebd
        ;   XREF to: 00474ed7 (CONDITIONAL_JUMP)  ; LAB_00474ed7
    MOV EDX,dword ptr [EBX + 0x118]     ; 00474ebf
    PUSH EDX                            ; 00474ec5
    PUSH EBX                            ; 00474ec6
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040 ; 00474ec7
        ;   XREF to: 00476040 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00474ecc
    TEST EAX,EAX                        ; 00474ecf
    JNZ 0x0047509f                      ; 00474ed1
        ;   XREF to: 0047509f (CONDITIONAL_JUMP)  ; LAB_0047509f
    PUSH 0x1                            ; 00474ed7
        ;   Label: LAB_00474ed7
    MOV EAX,[0x005bac64]                ; 00474ed9 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474ede | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474edf | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474ee1
    ADD ESP,0x8                         ; 00474ee4
    TEST EAX,EAX                        ; 00474ee7
    JNZ 0x004750b3                      ; 00474ee9
        ;   XREF to: 004750b3 (CONDITIONAL_JUMP)  ; LAB_004750b3
    PUSH 0x1d                           ; 00474eef
    MOV EAX,[0x005bac64]                ; 00474ef1 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474ef6 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474ef7 | g_CKeys_01cc30e4
    CALL dword ptr [ECX]                ; 00474ef9
    ADD ESP,0x8                         ; 00474efb
    TEST EAX,EAX                        ; 00474efe
    JNZ 0x004750c0                      ; 00474f00
        ;   XREF to: 004750c0 (CONDITIONAL_JUMP)  ; LAB_004750c0
    LEA EBP,[EBX + 0xa8]                ; 00474f06
        ;   Label: LAB_00474f06
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00558b70 ; 00474f0c
        ;   XREF to: 00558b70 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00558b70()
        ;   Label: LAB_00474f0c
    TEST EAX,EAX                        ; 00474f11
    JNZ 0x00475103                      ; 00474f13
        ;   XREF to: 00475103 (CONDITIONAL_JUMP)  ; LAB_00475103
    PUSH 0x48                           ; 00474f19
    MOV EAX,[0x005bac64]                ; 00474f1b | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474f20 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474f21 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474f23
    ADD ESP,0x8                         ; 00474f26
    TEST EAX,EAX                        ; 00474f29
    JZ 0x00474f41                       ; 00474f2b
        ;   XREF to: 00474f41 (CONDITIONAL_JUMP)  ; LAB_00474f41
    MOV ECX,dword ptr [EBX + 0x118]     ; 00474f2d
    MOV byte ptr [EBX + 0xa8],0x0       ; 00474f33
    DEC ECX                             ; 00474f3a
    MOV dword ptr [EBX + 0x118],ECX     ; 00474f3b
    PUSH 0x50                           ; 00474f41
        ;   Label: LAB_00474f41
    MOV EAX,[0x005bac64]                ; 00474f43 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474f48 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474f49 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474f4b
    ADD ESP,0x8                         ; 00474f4e
    TEST EAX,EAX                        ; 00474f51
    JZ 0x00474f69                       ; 00474f53
        ;   XREF to: 00474f69 (CONDITIONAL_JUMP)  ; LAB_00474f69
    MOV ESI,dword ptr [EBX + 0x118]     ; 00474f55
    MOV byte ptr [EBX + 0xa8],0x0       ; 00474f5b
    INC ESI                             ; 00474f62
    MOV dword ptr [EBX + 0x118],ESI     ; 00474f63
    PUSH 0x47                           ; 00474f69
        ;   Label: LAB_00474f69
    MOV EAX,[0x005bac64]                ; 00474f6b | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474f70 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474f71 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474f73
    ADD ESP,0x8                         ; 00474f76
    TEST EAX,EAX                        ; 00474f79
    JZ 0x00474f8e                       ; 00474f7b
        ;   XREF to: 00474f8e (CONDITIONAL_JUMP)  ; LAB_00474f8e
    MOV byte ptr [EBX + 0xa8],0x0       ; 00474f7d
    MOV dword ptr [EBX + 0x118],0x0     ; 00474f84
    PUSH 0x4f                           ; 00474f8e
        ;   Label: LAB_00474f8e
    MOV EAX,[0x005bac64]                ; 00474f90 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474f95 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474f96 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474f98
    ADD ESP,0x8                         ; 00474f9b
    TEST EAX,EAX                        ; 00474f9e
    JZ 0x00474fb1                       ; 00474fa0
        ;   XREF to: 00474fb1 (CONDITIONAL_JUMP)  ; LAB_00474fb1
    MOV EAX,dword ptr [EBX]             ; 00474fa2
    MOV byte ptr [EBX + 0xa8],0x0       ; 00474fa4
    MOV dword ptr [EBX + 0x118],EAX     ; 00474fab
    PUSH 0x49                           ; 00474fb1
        ;   Label: LAB_00474fb1
    MOV EAX,[0x005bac64]                ; 00474fb3 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474fb8 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474fb9 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474fbb
    ADD ESP,0x8                         ; 00474fbe
    TEST EAX,EAX                        ; 00474fc1
    JZ 0x00474ff4                       ; 00474fc3
        ;   XREF to: 00474ff4 (CONDITIONAL_JUMP)  ; LAB_00474ff4
    MOV EDI,dword ptr [EBX + 0x118]     ; 00474fc5
    MOV EAX,dword ptr [EBX + 0x120]     ; 00474fcb
    MOV EBP,dword ptr [EBX + 0x11c]     ; 00474fd1
    MOV byte ptr [EBX + 0xa8],0x0       ; 00474fd7
    SUB EDI,EAX                         ; 00474fde
    MOV EAX,dword ptr [EBX + 0x120]     ; 00474fe0
    MOV dword ptr [EBX + 0x118],EDI     ; 00474fe6
    SUB EBP,EAX                         ; 00474fec
    MOV dword ptr [EBX + 0x11c],EBP     ; 00474fee
    PUSH 0x51                           ; 00474ff4
        ;   Label: LAB_00474ff4
    MOV EAX,[0x005bac64]                ; 00474ff6 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 00474ffb | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 00474ffc | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00474ffe
    ADD ESP,0x8                         ; 00475001
    TEST EAX,EAX                        ; 00475004
    JZ 0x00475037                       ; 00475006
        ;   XREF to: 00475037 (CONDITIONAL_JUMP)  ; LAB_00475037
    MOV EDX,dword ptr [EBX + 0x118]     ; 00475008
    MOV EAX,dword ptr [EBX + 0x120]     ; 0047500e
    MOV ECX,dword ptr [EBX + 0x11c]     ; 00475014
    MOV byte ptr [EBX + 0xa8],0x0       ; 0047501a
    ADD EDX,EAX                         ; 00475021
    MOV EAX,dword ptr [EBX + 0x120]     ; 00475023
    MOV dword ptr [EBX + 0x118],EDX     ; 00475029
    ADD ECX,EAX                         ; 0047502f
    MOV dword ptr [EBX + 0x11c],ECX     ; 00475031
    PUSH 0x4b                           ; 00475037
        ;   Label: LAB_00475037
    MOV EAX,[0x005bac64]                ; 00475039 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0047503e | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 0047503f | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00475041
    ADD ESP,0x8                         ; 00475044
    TEST EAX,EAX                        ; 00475047
    JZ 0x00475066                       ; 00475049
        ;   XREF to: 00475066 (CONDITIONAL_JUMP)  ; LAB_00475066
    MOV ESI,dword ptr [EBX + 0x118]     ; 0047504b
    MOV EAX,dword ptr [EBX + 0x124]     ; 00475051
    MOV byte ptr [EBX + 0xa8],0x0       ; 00475057
    SUB ESI,EAX                         ; 0047505e
    MOV dword ptr [EBX + 0x118],ESI     ; 00475060
    PUSH 0x4d                           ; 00475066
        ;   Label: LAB_00475066
    MOV EAX,[0x005bac64]                ; 00475068 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0047506d | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 0047506e | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 00475070
    ADD ESP,0x8                         ; 00475073
    TEST EAX,EAX                        ; 00475076
    JZ 0x00475095                       ; 00475078
        ;   XREF to: 00475095 (CONDITIONAL_JUMP)  ; LAB_00475095
    MOV EDI,dword ptr [EBX + 0x118]     ; 0047507a
    MOV EAX,dword ptr [EBX + 0x124]     ; 00475080
    MOV byte ptr [EBX + 0xa8],0x0       ; 00475086
    ADD EDI,EAX                         ; 0047508d
    MOV dword ptr [EBX + 0x118],EDI     ; 0047508f
    XOR EAX,EAX                         ; 00475095
        ;   Label: LAB_00475095
    ADD ESP,0x4                         ; 00475097
    POP EBP                             ; 0047509a
    POP EDI                             ; 0047509b
    POP ESI                             ; 0047509c
    POP EBX                             ; 0047509d
    RET                                 ; 0047509e
    MOV dword ptr [EBX + 0x10c],0x1     ; 0047509f
        ;   Label: LAB_0047509f
    XOR EAX,EAX                         ; 004750a9
    ADD ESP,0x4                         ; 004750ab
    POP EBP                             ; 004750ae
    POP EDI                             ; 004750af
    POP ESI                             ; 004750b0
    POP EBX                             ; 004750b1
    RET                                 ; 004750b2
    MOV EAX,0xffffffff                  ; 004750b3
        ;   Label: LAB_004750b3
    ADD ESP,0x4                         ; 004750b8
    POP EBP                             ; 004750bb
    POP EDI                             ; 004750bc
    POP ESI                             ; 004750bd
    POP EBX                             ; 004750be
    RET                                 ; 004750bf
    PUSH 0x52                           ; 004750c0
        ;   Label: LAB_004750c0
    MOV EAX,[0x005bac64]                ; 004750c2 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004750c7 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 004750c8 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 004750ca
    ADD ESP,0x8                         ; 004750cd
    TEST EAX,EAX                        ; 004750d0
    JZ 0x004750dd                       ; 004750d2
        ;   XREF to: 004750dd (CONDITIONAL_JUMP)  ; LAB_004750dd
    PUSH EBX                            ; 004750d4
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380 ; 004750d5
        ;   XREF to: 00474380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004750da
    PUSH 0x2e                           ; 004750dd
        ;   Label: LAB_004750dd
    MOV EAX,[0x005bac64]                ; 004750df | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004750e4 | g_CKeys_01cc30e4
    MOV ECX,dword ptr [EAX]             ; 004750e5 | g_CKeys_01cc30e4
    CALL dword ptr [ECX + 0x4]          ; 004750e7
    ADD ESP,0x8                         ; 004750ea
    TEST EAX,EAX                        ; 004750ed
    JZ 0x00474f06                       ; 004750ef
        ;   XREF to: 00474f06 (CONDITIONAL_JUMP)  ; LAB_00474f06
    PUSH EBX                            ; 004750f5
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380 ; 004750f6
        ;   XREF to: 00474380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004750fb
    JMP 0x00474f06                      ; 004750fe
        ;   XREF to: 00474f06 (UNCONDITIONAL_JUMP)  ; LAB_00474f06
    MOV EAX,[0x005bac64]                ; 00475103 | g_CKeys_PTR_005bac64
        ;   Label: LAB_00475103
    PUSH EAX                            ; 00475108 | g_CKeys_01cc30e4
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0 ; 00475109
        ;   XREF to: 004c41d0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0047510e
    MOV dword ptr [ESP],EAX             ; 00475111
    CMP EAX,0x8                         ; 00475114
    JNZ 0x00475120                      ; 00475117
        ;   XREF to: 00475120 (CONDITIONAL_JUMP)  ; LAB_00475120
    MOV byte ptr [EBX + 0xa8],0x0       ; 00475119
    MOV AH,byte ptr [EBX + 0x14]        ; 00475120
        ;   Label: LAB_00475120
    TEST AH,AH                          ; 00475123
    JNZ 0x004751ce                      ; 00475125
        ;   XREF to: 004751ce (CONDITIONAL_JUMP)  ; LAB_004751ce
    MOV AL,byte ptr [ESP]               ; 0047512b
    INC AL                              ; 0047512e
    AND EAX,0xff                        ; 00475130
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00475135 | DAT_005c168c
    JZ 0x00475163                       ; 0047513c
        ;   XREF to: 00475163 (CONDITIONAL_JUMP)  ; LAB_00475163
    MOV EDI,EBP                         ; 0047513e
    SUB ECX,ECX                         ; 00475140
    DEC ECX                             ; 00475142
    XOR EAX,EAX                         ; 00475143
    SCASB.REPNE ES:EDI                  ; 00475145
    NOT ECX                             ; 00475147
    DEC ECX                             ; 00475149
    CMP ECX,0x63                        ; 0047514a
    JNC 0x00475163                      ; 0047514d
        ;   XREF to: 00475163 (CONDITIONAL_JUMP)  ; LAB_00475163
    LEA EAX,[EBX + ECX*0x1]             ; 0047514f
    MOV DL,byte ptr [ESP]               ; 00475152
    MOV byte ptr [EAX + 0xa8],DL        ; 00475155
    MOV byte ptr [ECX + EBX*0x1 + 0xa9],0x0 ; 0047515b
    CMP byte ptr [EBX + 0xa8],0x0       ; 00475163
        ;   Label: LAB_00475163
    JZ 0x00474f0c                       ; 0047516a
        ;   XREF to: 00474f0c (CONDITIONAL_JUMP)  ; LAB_00474f0c
    MOV EDX,dword ptr [EBX + 0x118]     ; 00475170
    PUSH EDX                            ; 00475176
    PUSH EBX                            ; 00475177
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00475178
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0047517d
    PUSH EAX                            ; 00475180
    PUSH EBP                            ; 00475181
    CALL crt_string.c__stricmp_FUN_00564520 ; 00475182
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00475187
    TEST EAX,EAX                        ; 0047518a
    JLE 0x004751c2                      ; 0047518c
        ;   XREF to: 004751c2 (CONDITIONAL_JUMP)  ; LAB_004751c2
    MOV ESI,dword ptr [EBX]             ; 0047518e
        ;   Label: LAB_0047518e
    MOV EAX,dword ptr [EBX + 0x118]     ; 00475190
    CMP EAX,ESI                         ; 00475196
    JGE 0x00474f0c                      ; 00475198
        ;   XREF to: 00474f0c (CONDITIONAL_JUMP)  ; LAB_00474f0c
    PUSH EAX                            ; 0047519e
    PUSH EBX                            ; 0047519f
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004751a0
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004751a5
    PUSH EAX                            ; 004751a8
    PUSH EBP                            ; 004751a9
    CALL crt_string.c__stricmp_FUN_00564520 ; 004751aa
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004751af
    TEST EAX,EAX                        ; 004751b2
    JLE 0x00474f0c                      ; 004751b4
        ;   XREF to: 00474f0c (CONDITIONAL_JUMP)  ; LAB_00474f0c
    INC dword ptr [EBX + 0x118]         ; 004751ba
    JMP 0x0047518e                      ; 004751c0
        ;   XREF to: 0047518e (UNCONDITIONAL_JUMP)  ; LAB_0047518e
    MOV dword ptr [EBX + 0x118],0x0     ; 004751c2
        ;   Label: LAB_004751c2
    JMP 0x0047518e                      ; 004751cc
        ;   XREF to: 0047518e (UNCONDITIONAL_JUMP)  ; LAB_0047518e
    MOV ESI,EBX                         ; 004751ce
        ;   Label: LAB_004751ce
    XOR EDI,EDI                         ; 004751d0
    TEST AH,AH                          ; 004751d2
    JZ 0x00474f0c                       ; 004751d4
        ;   XREF to: 00474f0c (CONDITIONAL_JUMP)  ; LAB_00474f0c
    CMP EDI,dword ptr [EBX]             ; 004751da
        ;   Label: LAB_004751da
    JGE 0x00474f0c                      ; 004751dc
        ;   XREF to: 00474f0c (CONDITIONAL_JUMP)  ; LAB_00474f0c
    XOR EAX,EAX                         ; 004751e2
    MOV AL,byte ptr [ESI + 0x14]        ; 004751e4
    PUSH EAX                            ; 004751e7
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004751e8
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004751ed
    CMP EAX,dword ptr [ESP]             ; 004751f0
    JNZ 0x0047521c                      ; 004751f3
        ;   XREF to: 0047521c (CONDITIONAL_JUMP)  ; LAB_0047521c
    PUSH EBX                            ; 004751f5
    MOV dword ptr [EBX + 0x118],EDI     ; 004751f6
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0 ; 004751fc
        ;   XREF to: 00475db0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0()
    ADD ESP,0x4                         ; 00475201
    MOV ECX,dword ptr [EBX + 0x118]     ; 00475204
    PUSH ECX                            ; 0047520a
    PUSH EBX                            ; 0047520b
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040 ; 0047520c
        ;   XREF to: 00476040 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 00475211
    TEST EAX,EAX                        ; 00475214
    JNZ 0x0047509f                      ; 00475216
        ;   XREF to: 0047509f (CONDITIONAL_JUMP)  ; LAB_0047509f
    INC EDI                             ; 0047521c
        ;   Label: LAB_0047521c
    MOV CH,byte ptr [ESI + 0x15]        ; 0047521d
    INC ESI                             ; 00475220
    TEST CH,CH                          ; 00475221
    JNZ 0x004751da                      ; 00475223
        ;   XREF to: 004751da (CONDITIONAL_JUMP)  ; LAB_004751da
    JMP 0x00474f0c                      ; 00475225
        ;   XREF to: 00474f0c (UNCONDITIONAL_JUMP)  ; LAB_00474f0c

