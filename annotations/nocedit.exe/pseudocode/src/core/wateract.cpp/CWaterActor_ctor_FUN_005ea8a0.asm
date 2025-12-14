; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor * this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_wateract.cpp_FUN_005ea860 at 005ea87a
;
; Referenced Globals:
;   TerminatedCString s_none_00657268
;   undefined4 s_one_00657269
;   undefined4 s_ne_0065726a
;   undefined4 s_e_0065726b
;   TerminatedCString s_none_0065726d
;   undefined4 s_one_0065726e
;   undefined4 s_ne_0065726f
;   undefined4 s_e_00657270
;   CDemonActor_vtable PTR_core_wateract.cpp_FUN_00665334
;   WatcomTypeInfo g_SWaterVertexTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ea8a0
        ;   Label: core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
    PUSH EDI                            ; 005ea8a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ea8a2
    PUSH EDX                            ; 005ea8a6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005ea8a7
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ea8ac
    PUSH 0x665420                       ; 005ea8af | g_SWaterVertexTypeInfo
    PUSH 0x3e8                          ; 005ea8b4
    ADD EAX,0x29c                       ; 005ea8b9
    PUSH EAX                            ; 005ea8be
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005ea8bf
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffd64]          ; 005ea8c4
    MOV dword ptr [EDX + 0x154],0x665334 ; 005ea8ca | PTR_core_wateract.cpp_FUN_00665334
    MOV dword ptr [EDX + 0x158],0x40800000 ; 005ea8d4
    MOV dword ptr [EDX + 0x15c],0x3dcccccd ; 005ea8de
    MOV dword ptr [EDX + 0x160],0x40800000 ; 005ea8e8
    MOV dword ptr [EDX + 0x164],0x8000  ; 005ea8f2
    MOV dword ptr [EDX + 0x2b228],0x0   ; 005ea8fc
    MOV dword ptr [EDX + 0x2b22c],0x0   ; 005ea906
    MOV dword ptr [EDX + 0xfc],0x1      ; 005ea910
    MOV dword ptr [EDX + 0xf8],0x0      ; 005ea91a
    MOV dword ptr [EDX + 0x16c],0x3f800000 ; 005ea924
    MOV dword ptr [EDX + 0x170],0x3f800000 ; 005ea92e
    MOV dword ptr [EDX + 0x168],0x0     ; 005ea938
    MOV ESI,0x657268                    ; 005ea942 | = "none"
    MOV dword ptr [EDX + 0x27c],0x0     ; 005ea947
    ADD ESP,0xc                         ; 005ea951
    MOV byte ptr [EDX + 0x174],0x0      ; 005ea954
    LEA EDI,[EDX + 0x1b4]               ; 005ea95b
    MOV byte ptr [EDX + 0x194],0x0      ; 005ea961
    PUSH EDI                            ; 005ea968
    MOV AL,byte ptr [ESI]               ; 005ea969 | = "none" | s_ne_0065726a
        ;   Label: LAB_005ea969
    MOV byte ptr [EDI],AL               ; 005ea96b
    CMP AL,0x0                          ; 005ea96d
    JZ 0x005ea981                       ; 005ea96f
        ;   XREF to: 005ea981 (CONDITIONAL_JUMP)  ; LAB_005ea981
    MOV AL,byte ptr [ESI + 0x1]         ; 005ea971 | s_one_00657269 | s_e_0065726b
    ADD ESI,0x2                         ; 005ea974
    MOV byte ptr [EDI + 0x1],AL         ; 005ea977
    ADD EDI,0x2                         ; 005ea97a
    CMP AL,0x0                          ; 005ea97d
    JNZ 0x005ea969                      ; 005ea97f
        ;   XREF to: 005ea969 (CONDITIONAL_JUMP)  ; LAB_005ea969
    POP EDI                             ; 005ea981
        ;   Label: LAB_005ea981
    MOV ESI,0x65726d                    ; 005ea982 | = "none"
    LEA EDI,[EDX + 0x218]               ; 005ea987
    PUSH EDI                            ; 005ea98d
    MOV AL,byte ptr [ESI]               ; 005ea98e | = "none" | s_ne_0065726f
        ;   Label: LAB_005ea98e
    MOV byte ptr [EDI],AL               ; 005ea990
    CMP AL,0x0                          ; 005ea992
    JZ 0x005ea9a6                       ; 005ea994
        ;   XREF to: 005ea9a6 (CONDITIONAL_JUMP)  ; LAB_005ea9a6
    MOV AL,byte ptr [ESI + 0x1]         ; 005ea996 | s_one_0065726e | s_e_00657270
    ADD ESI,0x2                         ; 005ea999
    MOV byte ptr [EDI + 0x1],AL         ; 005ea99c
    ADD EDI,0x2                         ; 005ea99f
    CMP AL,0x0                          ; 005ea9a2
    JNZ 0x005ea98e                      ; 005ea9a4
        ;   XREF to: 005ea98e (CONDITIONAL_JUMP)  ; LAB_005ea98e
    POP EDI                             ; 005ea9a6
        ;   Label: LAB_005ea9a6
    MOV dword ptr [EDX + 0x280],0x0     ; 005ea9a7
    MOV dword ptr [EDX + 0x284],0x3f800000 ; 005ea9b1
    MOV dword ptr [EDX + 0x288],0x0     ; 005ea9bb
    MOV dword ptr [EDX + 0x294],0xff    ; 005ea9c5
    MOV EAX,dword ptr [EDX + 0x294]     ; 005ea9cf
    MOV dword ptr [EDX + 0x290],EAX     ; 005ea9d5
    MOV dword ptr [EDX + 0x28c],EAX     ; 005ea9db
    MOV EAX,EDX                         ; 005ea9e1
    POP EDI                             ; 005ea9e3
    POP ESI                             ; 005ea9e4
    RET                                 ; 005ea9e5

