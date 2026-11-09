; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_load_FUN_00525380(CMotionController *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_actor.cpp_FUN_0040b870 at 0040b8a9
;
; Referenced Globals:
;   undefined4 DAT_005eaf8b
;   TerminatedCString s_d_f_005eaf8d
;   TerminatedCString s_f_005eaf93
;   TerminatedCString s_core_motion_cpp_005eafa0
;   TerminatedCString s_CMotionController_load_e_005eafb3
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525380
        ;   Label: core_motion.cpp_CMotionController_load_FUN_00525380
    PUSH EDI                            ; 00525381
    MOV EBX,dword ptr [ESP + 0xc]       ; 00525382
    MOV EDI,dword ptr [ESP + 0x10]      ; 00525386
    PUSH ESI                            ; 0052538a
    PUSH 0x5eaf8b                       ; 0052538b | DAT_005eaf8b
    PUSH EDI                            ; 00525390
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00525391
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 00525396
    LEA ESI,[EBX + 0x8]                 ; 00525399
    PUSH ESI                            ; 0052539c
    LEA EAX,[EBX + 0x4]                 ; 0052539d
    PUSH EAX                            ; 005253a0
    PUSH 0x5eaf8d                       ; 005253a1 | = "%d,%f"
    MOV byte ptr [EBX + 0x30],0x0       ; 005253a6
    PUSH EDI                            ; 005253aa
    MOV dword ptr [EBX + 0x4],0xffffffff ; 005253ab
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005253b2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 005253b7
    CMP EAX,0x2                         ; 005253ba
    JNZ 0x005253d7                      ; 005253bd
        ;   XREF to: 005253d7 (CONDITIONAL_JUMP)  ; LAB_005253d7
    MOV EBX,EDI                         ; 005253bf
        ;   Label: LAB_005253bf
    POP ESI                             ; 005253c1
    PUSH EBX                            ; 005253c2
        ;   Label: LAB_005253c2
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 005253c3
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 005253c8
    TEST EAX,EAX                        ; 005253cb
    JL 0x005253d4                       ; 005253cd
        ;   XREF to: 005253d4 (CONDITIONAL_JUMP)  ; LAB_005253d4
    CMP EAX,0xa                         ; 005253cf
    JNZ 0x005253c2                      ; 005253d2
        ;   XREF to: 005253c2 (CONDITIONAL_JUMP)  ; LAB_005253c2
    POP EDI                             ; 005253d4
        ;   Label: LAB_005253d4
    POP EBX                             ; 005253d5
    RET                                 ; 005253d6
    PUSH ESI                            ; 005253d7
        ;   Label: LAB_005253d7
    ADD EBX,0x30                        ; 005253d8
    PUSH EBX                            ; 005253db
    PUSH 0x5eaf93                       ; 005253dc | = "\"%[^\"]\" , %f"
    PUSH EDI                            ; 005253e1
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005253e2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 005253e7
    CMP EAX,0x2                         ; 005253ea
    JZ 0x005253bf                       ; 005253ed
        ;   XREF to: 005253bf (CONDITIONAL_JUMP)  ; LAB_005253bf
    MOV EDX,0x5eafa0                    ; 005253ef | = "..\\core\\motion.cpp"
    MOV ECX,0x57e                       ; 005253f4
    PUSH 0x5eafb3                       ; 005253f9 | = "CMotionController::load - error parsi..."
    MOV dword ptr [0x01d1d400],EDX      ; 005253fe | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00525404 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052540a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052540f
    JMP 0x005253bf                      ; 00525412
        ;   XREF to: 005253bf (UNCONDITIONAL_JUMP)  ; LAB_005253bf

