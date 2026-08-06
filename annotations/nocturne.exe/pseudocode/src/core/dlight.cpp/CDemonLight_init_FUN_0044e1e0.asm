; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0 at 0041f3be
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dc41
;   core_setutil.cpp_C3DSLight_create_FUN_005151f0 at 0051523e
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0057c53e
;   TerminatedCString s_CDemonCamera_init_Unable_0057c551
;   double DOUBLE_0057c586 = 7
;   undefined4 DAT_005ad51c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_dlight.cpp_CDemonLight_FUN_0044e2c0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e1e0
        ;   Label: core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
    PUSH EBP                            ; 0044e1e1
    SUB ESP,0x4                         ; 0044e1e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044e1e5
    PUSH EBX                            ; 0044e1e9
    CALL core_dlight.cpp_CDemonLight_FUN_0044e2c0 ; 0044e1ea
        ;   XREF to: 0044e2c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_FUN_0044e2c0(CDemonLight * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0044e1ef
    IMUL EDX,dword ptr [EBX + 0x1cc4]   ; 0044e1f5
    ADD EDX,EDX                         ; 0044e1fc
    ADD ESP,0x4                         ; 0044e1fe
    ADD EDX,0x210                       ; 0044e201
    PUSH EDX                            ; 0044e207
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044e208
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0044e20d
    MOV dword ptr [EBX + 0x2f98],EAX    ; 0044e210
    TEST EAX,EAX                        ; 0044e216
    JZ 0x0044e28c                       ; 0044e218
        ;   XREF to: 0044e28c (CONDITIONAL_JUMP)  ; LAB_0044e28c
    MOV EAX,dword ptr [EBX + 0x2f98]    ; 0044e21a
        ;   Label: LAB_0044e21a
    ADD EAX,0x10                        ; 0044e220
    AND AL,0xf0                         ; 0044e223
    MOV dword ptr [EBX + 0x2f94],EAX    ; 0044e225
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0044e22b
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044e231
    IMUL EDX,EAX                        ; 0044e237
    MOV EAX,EDX                         ; 0044e23a
    SAR EDX,0x1f                        ; 0044e23c
    SHL EDX,0x3                         ; 0044e23f
    SBB EAX,EDX                         ; 0044e242
    SAR EAX,0x3                         ; 0044e244
    PUSH EAX                            ; 0044e247
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0044e248
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    FLD float ptr [EBX + 0x2fa8]        ; 0044e24d
    FMUL double ptr [0x0057c586]        ; 0044e253 | DOUBLE_0057c586
    ADD ESP,0x4                         ; 0044e259
    MOV dword ptr [EBX + 0x2fa0],EAX    ; 0044e25c
    PUSH 0x0                            ; 0044e262
    CALL crt_math.c_round_FUN_00563a30  ; 0044e264
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH 0x0                            ; 0044e269
    FISTP dword ptr [ESP + 0x8]         ; 0044e26b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044e26f
    PUSH 0x0                            ; 0044e273
    MOV EDX,dword ptr [EAX*0x4 + 0x5ad51c] ; 0044e275 | DAT_005ad51c
    PUSH EDX                            ; 0044e27c
    PUSH EBX                            ; 0044e27d
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 0044e27e
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0044e283
    ADD ESP,0x4                         ; 0044e286
    POP EBP                             ; 0044e289
    POP EBX                             ; 0044e28a
    RET                                 ; 0044e28b
    PUSH EDI                            ; 0044e28c
        ;   Label: LAB_0044e28c
    MOV EDI,0x57c53e                    ; 0044e28d | = "..\\core\\dlight.cpp"
    MOV EBP,0x6c                        ; 0044e292
    PUSH 0x57c551                       ; 0044e297 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01cc4800],EDI      ; 0044e29c | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 0044e2a2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0044e2a8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0044e2ad
    POP EDI                             ; 0044e2b0
    JMP 0x0044e21a                      ; 0044e2b1
        ;   XREF to: 0044e21a (UNCONDITIONAL_JUMP)  ; LAB_0044e21a

