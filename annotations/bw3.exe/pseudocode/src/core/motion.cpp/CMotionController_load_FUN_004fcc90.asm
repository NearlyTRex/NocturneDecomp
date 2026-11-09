; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_load_FUN_004fcc90(CMotionController *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_actor.cpp_FUN_0040bab0 at 0040bae9
;
; Referenced Globals:
;   undefined4 DAT_005c9d9c
;   TerminatedCString s_d_f_005c9d9e
;   TerminatedCString s_f_005c9da4
;   TerminatedCString s_core_motion_cpp_005c9db1
;   TerminatedCString s_CMotionController_load_e_005c9dc4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcc90
        ;   Label: core_motion.cpp_CMotionController_load_FUN_004fcc90
    PUSH EDI                            ; 004fcc91
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fcc92
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fcc96
    PUSH ESI                            ; 004fcc9a
    PUSH 0x5c9d9c                       ; 004fcc9b | DAT_005c9d9c
    PUSH EDI                            ; 004fcca0
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fcca1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 004fcca6
    LEA ESI,[EBX + 0x8]                 ; 004fcca9
    PUSH ESI                            ; 004fccac
    LEA EAX,[EBX + 0x4]                 ; 004fccad
    PUSH EAX                            ; 004fccb0
    PUSH 0x5c9d9e                       ; 004fccb1 | = "%d,%f"
    MOV byte ptr [EBX + 0x30],0x0       ; 004fccb6
    PUSH EDI                            ; 004fccba
    MOV dword ptr [EBX + 0x4],0xffffffff ; 004fccbb
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fccc2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004fccc7
    CMP EAX,0x2                         ; 004fccca
    JNZ 0x004fcce7                      ; 004fcccd
        ;   XREF to: 004fcce7 (CONDITIONAL_JUMP)  ; LAB_004fcce7
    MOV EBX,EDI                         ; 004fcccf
        ;   Label: LAB_004fcccf
    POP ESI                             ; 004fccd1
    PUSH EBX                            ; 004fccd2
        ;   Label: LAB_004fccd2
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 004fccd3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 004fccd8
    TEST EAX,EAX                        ; 004fccdb
    JL 0x004fcce4                       ; 004fccdd
        ;   XREF to: 004fcce4 (CONDITIONAL_JUMP)  ; LAB_004fcce4
    CMP EAX,0xa                         ; 004fccdf
    JNZ 0x004fccd2                      ; 004fcce2
        ;   XREF to: 004fccd2 (CONDITIONAL_JUMP)  ; LAB_004fccd2
    POP EDI                             ; 004fcce4
        ;   Label: LAB_004fcce4
    POP EBX                             ; 004fcce5
    RET                                 ; 004fcce6
    PUSH ESI                            ; 004fcce7
        ;   Label: LAB_004fcce7
    ADD EBX,0x30                        ; 004fcce8
    PUSH EBX                            ; 004fcceb
    PUSH 0x5c9da4                       ; 004fccec | = "\"%[^\"]\" , %f"
    PUSH EDI                            ; 004fccf1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004fccf2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004fccf7
    CMP EAX,0x2                         ; 004fccfa
    JZ 0x004fcccf                       ; 004fccfd
        ;   XREF to: 004fcccf (CONDITIONAL_JUMP)  ; LAB_004fcccf
    MOV EDX,0x5c9db1                    ; 004fccff | = "..\\core\\motion.cpp"
    MOV ECX,0x583                       ; 004fcd04
    PUSH 0x5c9dc4                       ; 004fcd09 | = "CMotionController::load - error parsi..."
    MOV dword ptr [0x01d71de0],EDX      ; 004fcd0e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004fcd14 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fcd1a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fcd1f
    JMP 0x004fcccf                      ; 004fcd22
        ;   XREF to: 004fcccf (UNCONDITIONAL_JUMP)  ; LAB_004fcccf

