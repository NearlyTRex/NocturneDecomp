; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_00569040 at 00569045
;
; Referenced Globals:
;   TerminatedCString s_none_006458e7
;   undefined4 s_one_006458e8
;   undefined4 s_ne_006458e9
;   undefined4 s_e_006458ea
;   TerminatedCString s_none_006458ec
;   undefined4 s_one_006458ed
;   undefined4 s_ne_006458ee
;   undefined4 s_e_006458ef
;   WatcomTypeInfo g_C3DSCameraTypeInfo
;   WatcomTypeInfo g_C3DSLightTypeInfo
;   WatcomTypeInfo g_SRoomTypeInfo
;   WatcomTypeInfo g_SVDBoxTypeInfo
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005690c0
        ;   Label: core_set.cpp_CDemonSet_ctor_FUN_005690c0
    PUSH ESI                            ; 005690c1
    PUSH EDI                            ; 005690c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005690c3
    PUSH 0x6628b0                       ; 005690c7 | g_C3DSCameraTypeInfo
    PUSH 0xfa                           ; 005690cc
    ADD EBX,0x4                         ; 005690d1
    PUSH EBX                            ; 005690d4
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005690d5
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005690da
    PUSH 0x6628d0                       ; 005690dd | g_C3DSLightTypeInfo
    PUSH 0xc8                           ; 005690e2
    ADD EAX,0x19a2c                     ; 005690e7
    PUSH EAX                            ; 005690ec
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005690ed
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005690f2
    PUSH 0x6628f0                       ; 005690f5 | g_SRoomTypeInfo
    PUSH 0x14                           ; 005690fa
    ADD EAX,0x141490                    ; 005690fc
    PUSH EAX                            ; 00569101
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00569102
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00569107
    PUSH 0x662910                       ; 0056910a | g_SVDBoxTypeInfo
    PUSH 0xfa                           ; 0056910f
    ADD EAX,0x554                       ; 00569114
    PUSH EAX                            ; 00569119
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0056911a
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EBX,[EAX + 0xffea4bec]          ; 0056911f
    MOV dword ptr [EBX],0x0             ; 00569125
    MOV dword ptr [EBX + 0x19a2c],0x0   ; 0056912b
    MOV dword ptr [EBX + 0x15ae98],0xffffffff ; 00569135
    MOV dword ptr [EBX + 0x15ae9c],0xffffffff ; 0056913f
    MOV byte ptr [EBX + 0x14d0f0],0x0   ; 00569149
    MOV dword ptr [EBX + 0x14d154],0x0  ; 00569150
    MOV dword ptr [EBX + 0x14f098],0x0  ; 0056915a
    MOV dword ptr [EBX + 0x150fdc],0x0  ; 00569164
    MOV dword ptr [EBX + 0x152f20],0x0  ; 0056916e
    MOV dword ptr [EBX + 0x154e64],0x0  ; 00569178
    MOV dword ptr [EBX + 0x15f6e4],0x0  ; 00569182
    MOV dword ptr [EBX + 0x156da8],0x0  ; 0056918c
    MOV dword ptr [EBX + 0x158cec],0x0  ; 00569196
    MOV dword ptr [EBX + 0x15aea0],0x1  ; 005691a0
    MOV dword ptr [EBX + 0x15aea4],0xffffffff ; 005691aa
    MOV dword ptr [EBX + 0x15aea8],0xffffffff ; 005691b4
    MOV dword ptr [EBX + 0x15aeac],0x0  ; 005691be
    MOV dword ptr [EBX + 0x15aeb8],0x0  ; 005691c8
    MOV dword ptr [EBX + 0x15aebc],0x0  ; 005691d2
    ADD ESP,0xc                         ; 005691dc
    MOV dword ptr [EBX + 0x15ac80],0x0  ; 005691df
    MOV dword ptr [EBX + 0x15ac84],0x0  ; 005691e9
    MOV dword ptr [EBX + 0x15ac8c],0x0  ; 005691f3
    MOV ESI,0x6458e7                    ; 005691fd | = "none"
    MOV dword ptr [EBX + 0x15ac90],0x0  ; 00569202
    LEA EDI,[EBX + 0x15ac98]            ; 0056920c
    MOV dword ptr [EBX + 0x15ac94],0x0  ; 00569212
    PUSH EDI                            ; 0056921c
    MOV AL,byte ptr [ESI]               ; 0056921d | = "none" | s_ne_006458e9
        ;   Label: LAB_0056921d
    MOV byte ptr [EDI],AL               ; 0056921f
    CMP AL,0x0                          ; 00569221
    JZ 0x00569235                       ; 00569223
        ;   XREF to: 00569235 (CONDITIONAL_JUMP)  ; LAB_00569235
    MOV AL,byte ptr [ESI + 0x1]         ; 00569225 | s_one_006458e8 | s_e_006458ea
    ADD ESI,0x2                         ; 00569228
    MOV byte ptr [EDI + 0x1],AL         ; 0056922b
    ADD EDI,0x2                         ; 0056922e
    CMP AL,0x0                          ; 00569231
    JNZ 0x0056921d                      ; 00569233
        ;   XREF to: 0056921d (CONDITIONAL_JUMP)  ; LAB_0056921d
    POP EDI                             ; 00569235
        ;   Label: LAB_00569235
    PUSH EBX                            ; 00569236
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 00569237
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x15f6e0],0x0  ; 0056923c
    MOV dword ptr [EBX + 0x15acac],0x0  ; 00569246
    MOV dword ptr [EBX + 0x15f67c],0x2  ; 00569250
    MOV dword ptr [EBX + 0x15aeb4],0x0  ; 0056925a
    MOV dword ptr [EBX + 0x15acb0],0x0  ; 00569264
    MOV dword ptr [EBX + 0x161628],0x0  ; 0056926e
    MOV dword ptr [EBX + 0x15acb4],0x0  ; 00569278
    MOV dword ptr [EBX + 0x161654],0x0  ; 00569282
    MOV dword ptr [EBX + 0x15b410],0x0  ; 0056928c
    MOV dword ptr [EBX + 0x15ae88],0x10000 ; 00569296
    MOV dword ptr [EBX + 0x15ae8c],0x10000 ; 005692a0
    MOV ESI,0x6458ec                    ; 005692aa | = "none"
    MOV dword ptr [EBX + 0x15ae90],0x10000 ; 005692af
    ADD ESP,0x4                         ; 005692b9
    MOV dword ptr [EBX + 0x161658],0x0  ; 005692bc
    LEA EDI,[EBX + 0x15ae50]            ; 005692c6
    MOV dword ptr [EBX + 0x15ae4c],0x0  ; 005692cc
    PUSH EDI                            ; 005692d6
    MOV AL,byte ptr [ESI]               ; 005692d7 | = "none" | s_ne_006458ee
        ;   Label: LAB_005692d7
    MOV byte ptr [EDI],AL               ; 005692d9
    CMP AL,0x0                          ; 005692db
    JZ 0x005692ef                       ; 005692dd
        ;   XREF to: 005692ef (CONDITIONAL_JUMP)  ; LAB_005692ef
    MOV AL,byte ptr [ESI + 0x1]         ; 005692df | s_one_006458ed | s_e_006458ef
    ADD ESI,0x2                         ; 005692e2
    MOV byte ptr [EDI + 0x1],AL         ; 005692e5
    ADD EDI,0x2                         ; 005692e8
    CMP AL,0x0                          ; 005692eb
    JNZ 0x005692d7                      ; 005692ed
        ;   XREF to: 005692d7 (CONDITIONAL_JUMP)  ; LAB_005692d7
    POP EDI                             ; 005692ef
        ;   Label: LAB_005692ef
    MOV dword ptr [EBX + 0x15ac88],0x0  ; 005692f0
    MOV dword ptr [EBX + 0x15ac7c],0x0  ; 005692fa
    MOV dword ptr [EBX + 0x15ae70],0x0  ; 00569304
    MOV dword ptr [EBX + 0x15ae74],0xffff6f78 ; 0056930e
    MOV dword ptr [EBX + 0x15ae78],0xffff6f78 ; 00569318
    MOV dword ptr [EBX + 0x15ae7c],0x9088 ; 00569322
    MOV dword ptr [EBX + 0x15ae80],0x280 ; 0056932c
    MOV dword ptr [EBX + 0x15ae84],0x0  ; 00569336
    MOV EAX,EBX                         ; 00569340
    MOV dword ptr [EBX + 0x15ac78],0x0  ; 00569342
    POP EDI                             ; 0056934c
    POP ESI                             ; 0056934d
    POP EBX                             ; 0056934e
    RET                                 ; 0056934f

