; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_process_FUN_0055d1a0(int param_1,CDemonLight *param_2,int param_3)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_process_FUN_005542c0 at 0055435f
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005f1311
;   TerminatedCString s_C3DSLight_process_NULL_C_005f1325
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01c43530
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 g_CDemonSetInstance.camera_enabled_flag
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d1a0
        ;   Label: core_setutil.cpp_C3DSLight_process_FUN_0055d1a0
    PUSH ESI                            ; 0055d1a1
    PUSH EDI                            ; 0055d1a2
    PUSH EBP                            ; 0055d1a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055d1a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0055d1a8
    TEST ESI,ESI                        ; 0055d1ac
    JZ 0x0055d320                       ; 0055d1ae
        ;   XREF to: 0055d320 (CONDITIONAL_JUMP)  ; LAB_0055d320
    CMP dword ptr [EBX + 0x11ec],0x0    ; 0055d1b4
        ;   Label: LAB_0055d1b4
    JZ 0x0055d2a9                       ; 0055d1bb
        ;   XREF to: 0055d2a9 (CONDITIONAL_JUMP)  ; LAB_0055d2a9
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0055d1c1
    FLD float ptr [EBX + EAX*0x4 + 0x16f4] ; 0055d1c7
    FLDZ                                ; 0055d1ce
    FCOMPP                              ; 0055d1d0
    FNSTSW AX                           ; 0055d1d2
    SAHF                                ; 0055d1d4
    JNC 0x0055d23c                      ; 0055d1d5
        ;   XREF to: 0055d23c (CONDITIONAL_JUMP)  ; LAB_0055d23c
    MOV EDX,dword ptr [0x0061d95c]      ; 0055d1d7 | g_CGamePtr
    LEA EAX,[EBX + 0x1894]              ; 0055d1dd
    FLD float ptr [EDX + 0x294]         ; 0055d1e3 | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 0055d1e9
    FSTP float ptr [EAX]                ; 0055d1eb
    MOV EDX,dword ptr [EBX + 0x1890]    ; 0055d1ed
    SHL EDX,0x2                         ; 0055d1f3
    ADD EDX,EBX                         ; 0055d1f6
    FLD float ptr [EBX + 0x1894]        ; 0055d1f8
    FCOMP float ptr [EDX + 0x16f4]      ; 0055d1fe
    FNSTSW AX                           ; 0055d204
    SAHF                                ; 0055d206
    JBE 0x0055d23c                      ; 0055d207
        ;   XREF to: 0055d23c (CONDITIONAL_JUMP)  ; LAB_0055d23c
    FLD float ptr [EDX + 0x16f4]        ; 0055d209
    MOV EBP,dword ptr [EBX + 0x1890]    ; 0055d20f
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0055d215
    FSUBR float ptr [EBX + 0x1894]      ; 0055d21b
    INC EBP                             ; 0055d221
    FSTP float ptr [EBX + 0x1894]       ; 0055d222
    MOV dword ptr [EBX + 0x1890],EBP    ; 0055d228
    CMP EBP,EDX                         ; 0055d22e
    JL 0x0055d23c                       ; 0055d230
        ;   XREF to: 0055d23c (CONDITIONAL_JUMP)  ; LAB_0055d23c
    MOV dword ptr [EBX + 0x1890],0x0    ; 0055d232
    MOV EAX,[0x01c43530]                ; 0055d23c | DAT_01c43530
        ;   Label: LAB_0055d23c
    MOV EDX,dword ptr [EBX + 0x17f8]    ; 0055d241
    IMUL EDX                            ; 0055d247
    SHRD EAX,EDX,0x10                   ; 0055d249
    MOV ECX,dword ptr [EBX + 0x1800]    ; 0055d24d
    MOV EDX,dword ptr [EBX + 0x17fc]    ; 0055d253
    ADD ECX,EAX                         ; 0055d259
    MOV EAX,[0x01c43530]                ; 0055d25b | DAT_01c43530
    MOV dword ptr [EBX + 0x1800],ECX    ; 0055d260
    IMUL EDX                            ; 0055d266
    SHRD EAX,EDX,0x10                   ; 0055d268
    MOV EDI,dword ptr [EBX + 0x1804]    ; 0055d26c
    ADD EDI,EAX                         ; 0055d272
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0055d274
    MOV dword ptr [EBX + 0x1804],EDI    ; 0055d278
    TEST EBP,EBP                        ; 0055d27e
    JZ 0x0055d2a9                       ; 0055d280
        ;   XREF to: 0055d2a9 (CONDITIONAL_JUMP)  ; LAB_0055d2a9
    PUSH EDI                            ; 0055d282
    MOV EDX,dword ptr [EBX + 0x1800]    ; 0055d283
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0055d289
    PUSH EDX                            ; 0055d28f
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 0055d290
    PUSH ECX                            ; 0055d297
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 0055d298
    PUSH EDI                            ; 0055d29f
    PUSH ESI                            ; 0055d2a0
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 0055d2a1
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0055d2a6
    FLD float ptr [EBX + 0x11e0]        ; 0055d2a9
        ;   Label: LAB_0055d2a9
    FLD1                                ; 0055d2af
    FCOMPP                              ; 0055d2b1
    FNSTSW AX                           ; 0055d2b3
    SAHF                                ; 0055d2b5
    JBE 0x0055d30c                      ; 0055d2b6
        ;   XREF to: 0055d30c (CONDITIONAL_JUMP)  ; LAB_0055d30c
    MOV EDX,dword ptr [0x0061d95c]      ; 0055d2b8 | g_CGamePtr
    LEA EAX,[EBX + 0x11e8]              ; 0055d2be
    FLD float ptr [EDX + 0x294]         ; 0055d2c4 | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 0055d2ca
    FSTP float ptr [EAX]                ; 0055d2cc
    FLD float ptr [EBX + 0x11e8]        ; 0055d2ce
    FCOMP float ptr [EBX + 0x11e4]      ; 0055d2d4
    FNSTSW AX                           ; 0055d2da
    SAHF                                ; 0055d2dc
    JBE 0x0055d2f1                      ; 0055d2dd
        ;   XREF to: 0055d2f1 (CONDITIONAL_JUMP)  ; LAB_0055d2f1
    FLD float ptr [EBX + 0x11e4]        ; 0055d2df
    FSUBR float ptr [EBX + 0x11e8]      ; 0055d2e5
    FSTP float ptr [EBX + 0x11e8]       ; 0055d2eb
    FLD float ptr [EBX + 0x11e8]        ; 0055d2f1
        ;   Label: LAB_0055d2f1
    FCOMP float ptr [EBX + 0x11e0]      ; 0055d2f7
    FNSTSW AX                           ; 0055d2fd
    SAHF                                ; 0055d2ff
    JBE 0x0055d348                      ; 0055d300
        ;   XREF to: 0055d348 (CONDITIONAL_JUMP)  ; LAB_0055d348
    MOV dword ptr [ESI + 0x1cb4],0x0    ; 0055d302
    MOV EAX,[0x00622c18]                ; 0055d30c | g_CDemonSetPtr
        ;   Label: LAB_0055d30c
    MOV EAX,dword ptr [EAX + 0x15aeb4]  ; 0055d311 | g_CDemonSetInstance.camera_enabled_flag
    TEST EAX,EAX                        ; 0055d317
    JZ 0x0055d354                       ; 0055d319
        ;   XREF to: 0055d354 (CONDITIONAL_JUMP)  ; LAB_0055d354
    POP EBP                             ; 0055d31b
    POP EDI                             ; 0055d31c
    POP ESI                             ; 0055d31d
    POP EBX                             ; 0055d31e
    RET                                 ; 0055d31f
    MOV EDX,0x5f1311                    ; 0055d320 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0055d320
    MOV ECX,0x351                       ; 0055d325
    PUSH 0x5f1325                       ; 0055d32a | = "C3DSLight::process - NULL CDemonLight..."
    MOV dword ptr [0x01d1d400],EDX      ; 0055d32f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0055d335 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055d33b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055d340
    JMP 0x0055d1b4                      ; 0055d343
        ;   XREF to: 0055d1b4 (UNCONDITIONAL_JUMP)  ; LAB_0055d1b4
    MOV dword ptr [ESI + 0x1cb4],0x1    ; 0055d348
        ;   Label: LAB_0055d348
    JMP 0x0055d30c                      ; 0055d352
        ;   XREF to: 0055d30c (UNCONDITIONAL_JUMP)  ; LAB_0055d30c
    MOV dword ptr [ESI + 0x1cb4],EAX    ; 0055d354
        ;   Label: LAB_0055d354
    POP EBP                             ; 0055d35a
    POP EDI                             ; 0055d35b
    POP ESI                             ; 0055d35c
    POP EBX                             ; 0055d35d
    RET                                 ; 0055d35e

