; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_init_FUN_00462590(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_setup_FUN_00422f60 at 00422f7e
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cf82e
;   core_setutil.cpp_C3DSLight_create_FUN_0055cf80 at 0055cfce
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d8ee4
;   TerminatedCString s_CDemonCamera_init_Unable_005d8ef7
;   undefined4 DAT_005d8f2c
;   CDemonFilter* g_GlobalFilters = 0152c39c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_dlight.cpp_FUN_00462670
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_malloc_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462590
        ;   Label: core_dlight.cpp_CDemonLight_init_FUN_00462590
    PUSH EBP                            ; 00462591
    SUB ESP,0x4                         ; 00462592
    MOV EBX,dword ptr [ESP + 0x10]      ; 00462595
    PUSH EBX                            ; 00462599
    CALL core_dlight.cpp_FUN_00462670   ; 0046259a
        ;   XREF to: 00462670 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_00462670()
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0046259f
    IMUL EDX,dword ptr [EBX + 0x1cc4]   ; 004625a5
    ADD EDX,EDX                         ; 004625ac
    ADD ESP,0x4                         ; 004625ae
    ADD EDX,0x210                       ; 004625b1
    PUSH EDX                            ; 004625b7
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004625b8
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004625bd
    MOV dword ptr [EBX + 0x2f98],EAX    ; 004625c0
    TEST EAX,EAX                        ; 004625c6
    JZ 0x0046263c                       ; 004625c8
        ;   XREF to: 0046263c (CONDITIONAL_JUMP)  ; LAB_0046263c
    MOV EAX,dword ptr [EBX + 0x2f98]    ; 004625ca
        ;   Label: LAB_004625ca
    ADD EAX,0x10                        ; 004625d0
    AND AL,0xf0                         ; 004625d3
    MOV dword ptr [EBX + 0x2f94],EAX    ; 004625d5
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 004625db
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 004625e1
    IMUL EDX,EAX                        ; 004625e7
    MOV EAX,EDX                         ; 004625ea
    SAR EDX,0x1f                        ; 004625ec
    SHL EDX,0x3                         ; 004625ef
    SBB EAX,EDX                         ; 004625f2
    SAR EAX,0x3                         ; 004625f4
    PUSH EAX                            ; 004625f7
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 004625f8
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    FLD float ptr [EBX + 0x2fa8]        ; 004625fd
    FMUL double ptr [0x005d8f2c]        ; 00462603 | DAT_005d8f2c
    ADD ESP,0x4                         ; 00462609
    MOV dword ptr [EBX + 0x2fa0],EAX    ; 0046260c
    PUSH 0x0                            ; 00462612
    CALL crt_math.c_round_FUN_005c03a0  ; 00462614
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH 0x0                            ; 00462619
    FISTP dword ptr [ESP + 0x8]         ; 0046261b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046261f
    PUSH 0x0                            ; 00462623
    MOV EDX,dword ptr [EAX*0x4 + 0x611328] ; 00462625 | g_GlobalFilters
    PUSH EDX                            ; 0046262c
    PUSH EBX                            ; 0046262d
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 0046262e
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00462633
    ADD ESP,0x4                         ; 00462636
    POP EBP                             ; 00462639
    POP EBX                             ; 0046263a
    RET                                 ; 0046263b
    PUSH EDI                            ; 0046263c
        ;   Label: LAB_0046263c
    MOV EDI,0x5d8ee4                    ; 0046263d | = "..\\core\\dlight.cpp"
    MOV EBP,0x6c                        ; 00462642
    PUSH 0x5d8ef7                       ; 00462647 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01d1d400],EDI      ; 0046264c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00462652 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00462658
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0046265d
    POP EDI                             ; 00462660
    JMP 0x004625ca                      ; 00462661
        ;   XREF to: 004625ca (UNCONDITIONAL_JUMP)  ; LAB_004625ca

