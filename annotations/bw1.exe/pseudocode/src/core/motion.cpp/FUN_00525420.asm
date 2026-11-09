; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_FUN_0040b870 at 0040b92c
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005eafe0
;   TerminatedCString s_Tried_to_save_motion_con_005eaff3
;   TerminatedCString s_s_s_g_current_motion_nam_005eb03e
;   TerminatedCString s_s_s_g_current_motion_nam_005eb070
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525420
        ;   Label: core_motion.cpp_FUN_00525420
    PUSH EDI                            ; 00525421
    PUSH EBP                            ; 00525422
    MOV EBP,ESP                         ; 00525423
    MOV EBX,dword ptr [EBP + 0x10]      ; 00525425
    CMP byte ptr [EBX + 0x30],0x0       ; 00525428
    JNZ 0x00525481                      ; 0052542c
        ;   XREF to: 00525481 (CONDITIONAL_JUMP)  ; LAB_00525481
    CMP dword ptr [EBX],0x0             ; 0052542e
    JNZ 0x00525455                      ; 00525431
        ;   XREF to: 00525455 (CONDITIONAL_JUMP)  ; LAB_00525455
    MOV EDI,0x5eafe0                    ; 00525433 | = "..\\core\\motion.cpp"
    MOV EAX,0x596                       ; 00525438
    PUSH 0x5eaff3                       ; 0052543d | = "Tried to save motion controller state..."
    MOV dword ptr [0x01d1d400],EDI      ; 00525442 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00525448 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052544d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00525452
    SUB ESP,0x8                         ; 00525455
        ;   Label: LAB_00525455
    FLD float ptr [EBX + 0x8]           ; 00525458
    FSTP double ptr [ESP]               ; 0052545b
    PUSH EBX                            ; 0052545e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0052545f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00525464
    PUSH EAX                            ; 00525467
    MOV EDX,dword ptr [EBP + 0x18]      ; 00525468
    PUSH EDX                            ; 0052546b
    PUSH 0x5eb03e                       ; 0052546c | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 00525471
    PUSH ECX                            ; 00525474
    CALL crt_unknown.c_FUN_005c03c0     ; 00525475
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x18                        ; 0052547a
    POP EBP                             ; 0052547d
    POP EDI                             ; 0052547e
    POP EBX                             ; 0052547f
    RET                                 ; 00525480
    SUB ESP,0x8                         ; 00525481
        ;   Label: LAB_00525481
    FLD float ptr [EBX + 0x8]           ; 00525484
    ADD EBX,0x30                        ; 00525487
    FSTP double ptr [ESP]               ; 0052548a
    PUSH EBX                            ; 0052548d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052548e
    PUSH EDX                            ; 00525491
    PUSH 0x5eb070                       ; 00525492 | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 00525497
    PUSH ECX                            ; 0052549a
    CALL crt_unknown.c_FUN_005c03c0     ; 0052549b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x18                        ; 005254a0
    POP EBP                             ; 005254a3
    POP EDI                             ; 005254a4
    POP EBX                             ; 005254a5
    RET                                 ; 005254a6

