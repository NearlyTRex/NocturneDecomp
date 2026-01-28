; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004e9040(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_factoryFunc_FUN_004e9000 at 004e901a
;
; Referenced Globals:
;   TerminatedCString s_HEADLITE_RAW_0062df62
;   undefined4 s_EADLITE.RAW_0062df63
;   undefined4 s_ADLITE.RAW_0062df64
;   undefined4 s_DLITE.RAW_0062df65
;   TerminatedCString s_true_0062df6f
;   undefined4 s_rue_0062df70
;   undefined4 s_ue_0062df71
;   undefined4 s_e_0062df72
;   TerminatedCString s_s_7YEARS_RAW_0062df74
;   undefined4 s_YEARS.RAW_0062df75
;   undefined4 s_EARS.RAW_0062df76
;   undefined4 s_ARS.RAW_0062df77
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonActor_vtable g_CGlassVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_mirror.cpp_CMirror_ctor_FUN_005213c0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e9040
        ;   Label: core_glass.cpp_CGlass_ctor_FUN_004e9040
    PUSH EDI                            ; 004e9041
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e9042
    PUSH EDX                            ; 004e9046
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004e9047
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e904c
    ADD EAX,0x1ec                       ; 004e904f
    PUSH EAX                            ; 004e9054
    CALL core_mirror.cpp_CMirror_ctor_FUN_005213c0 ; 004e9055
        ;   XREF to: 005213c0 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_CMirror_ctor_FUN_005213c0(CMirror * this_ptr)
    ADD ESP,0x4                         ; 004e905a
    PUSH 0x6598c0                       ; 004e905d | g_CVectorTypeInfo
    PUSH 0x19                           ; 004e9062
    ADD EAX,0x1a0                       ; 004e9064
    PUSH EAX                            ; 004e9069
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004e906a
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffc74]          ; 004e906f
    MOV dword ptr [EDX + 0x154],0x65eef4 ; 004e9075 | g_CGlassVTable
    MOV ESI,0x62df62                    ; 004e907f | = "HEADLITE.RAW"
    MOV dword ptr [EDX + 0x158],0x40800000 ; 004e9084
    ADD ESP,0xc                         ; 004e908e
    MOV dword ptr [EDX + 0x15c],0x40800000 ; 004e9091
    LEA EDI,[EDX + 0x16c]               ; 004e909b
    MOV dword ptr [EDX + 0x160],0x3dcccccd ; 004e90a1
    PUSH EDI                            ; 004e90ab
    MOV AL,byte ptr [ESI]               ; 004e90ac | = "HEADLITE.RAW" | s_ADLITE.RAW_0062df64
        ;   Label: LAB_004e90ac
    MOV byte ptr [EDI],AL               ; 004e90ae
    CMP AL,0x0                          ; 004e90b0
    JZ 0x004e90c4                       ; 004e90b2
        ;   XREF to: 004e90c4 (CONDITIONAL_JUMP)  ; LAB_004e90c4
    MOV AL,byte ptr [ESI + 0x1]         ; 004e90b4 | s_EADLITE.RAW_0062df63 | s_DLITE.RAW_0062df65
    ADD ESI,0x2                         ; 004e90b7
    MOV byte ptr [EDI + 0x1],AL         ; 004e90ba
    ADD EDI,0x2                         ; 004e90bd
    CMP AL,0x0                          ; 004e90c0
    JNZ 0x004e90ac                      ; 004e90c2
        ;   XREF to: 004e90ac (CONDITIONAL_JUMP)  ; LAB_004e90ac
    POP EDI                             ; 004e90c4
        ;   Label: LAB_004e90c4
    MOV dword ptr [EDX + 0x168],0x0     ; 004e90c5
    MOV dword ptr [EDX + 0x164],0xd     ; 004e90cf
    MOV dword ptr [EDX + 0x17c],0x8000  ; 004e90d9
    MOV dword ptr [EDX + 0x180],0x0     ; 004e90e3
    MOV ESI,0x62df6f                    ; 004e90ed | = "true"
    MOV byte ptr [EDX + 0x184],0x0      ; 004e90f2
    LEA EDI,[EDX + 0x30c]               ; 004e90f9
    MOV dword ptr [EDX + 0x1e8],0x0     ; 004e90ff
    PUSH EDI                            ; 004e9109
    MOV AL,byte ptr [ESI]               ; 004e910a | = "true" | s_ue_0062df71
        ;   Label: LAB_004e910a
    MOV byte ptr [EDI],AL               ; 004e910c
    CMP AL,0x0                          ; 004e910e
    JZ 0x004e9122                       ; 004e9110
        ;   XREF to: 004e9122 (CONDITIONAL_JUMP)  ; LAB_004e9122
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9112 | s_rue_0062df70 | s_e_0062df72
    ADD ESI,0x2                         ; 004e9115
    MOV byte ptr [EDI + 0x1],AL         ; 004e9118
    ADD EDI,0x2                         ; 004e911b
    CMP AL,0x0                          ; 004e911e
    JNZ 0x004e910a                      ; 004e9120
        ;   XREF to: 004e910a (CONDITIONAL_JUMP)  ; LAB_004e910a
    POP EDI                             ; 004e9122
        ;   Label: LAB_004e9122
    MOV ESI,0x62df74                    ; 004e9123 | = "7YEARS.RAW"
    LEA EDI,[EDX + 0x37c]               ; 004e9128
    MOV dword ptr [EDX + 0x370],0x0     ; 004e912e
    PUSH EDI                            ; 004e9138
    MOV AL,byte ptr [ESI]               ; 004e9139 | = "7YEARS.RAW" | s_EARS.RAW_0062df76
        ;   Label: LAB_004e9139
    MOV byte ptr [EDI],AL               ; 004e913b
    CMP AL,0x0                          ; 004e913d
    JZ 0x004e9151                       ; 004e913f
        ;   XREF to: 004e9151 (CONDITIONAL_JUMP)  ; LAB_004e9151
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9141 | s_YEARS.RAW_0062df75 | s_ARS.RAW_0062df77
    ADD ESI,0x2                         ; 004e9144
    MOV byte ptr [EDI + 0x1],AL         ; 004e9147
    ADD EDI,0x2                         ; 004e914a
    CMP AL,0x0                          ; 004e914d
    JNZ 0x004e9139                      ; 004e914f
        ;   XREF to: 004e9139 (CONDITIONAL_JUMP)  ; LAB_004e9139
    POP EDI                             ; 004e9151
        ;   Label: LAB_004e9151
    MOV dword ptr [EDX + 0x378],0x0     ; 004e9152
    MOV dword ptr [EDX + 0x374],0xd     ; 004e915c
    MOV EAX,EDX                         ; 004e9166
    MOV dword ptr [EDX + 0xb3c],0x0     ; 004e9168
    POP EDI                             ; 004e9172
    POP ESI                             ; 004e9173
    RET                                 ; 004e9174

