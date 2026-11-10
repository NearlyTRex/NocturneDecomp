; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_save_FUN_004fcd30(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveMotionState_FUN_0040bab0 at 0040bb6c
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005c9df1
;   TerminatedCString s_Tried_to_save_motion_con_005c9e04
;   TerminatedCString s_s_s_g_current_motion_nam_005c9e4f
;   TerminatedCString s_s_s_g_current_motion_nam_005c9e81
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcd30
        ;   Label: core_motion.cpp_CMotionController_save_FUN_004fcd30
    PUSH EDI                            ; 004fcd31
    PUSH EBP                            ; 004fcd32
    MOV EBP,ESP                         ; 004fcd33
    MOV EBX,dword ptr [EBP + 0x10]      ; 004fcd35
    CMP byte ptr [EBX + 0x30],0x0       ; 004fcd38
    JNZ 0x004fcd91                      ; 004fcd3c
        ;   XREF to: 004fcd91 (CONDITIONAL_JUMP)  ; LAB_004fcd91
    CMP dword ptr [EBX],0x0             ; 004fcd3e
    JNZ 0x004fcd65                      ; 004fcd41
        ;   XREF to: 004fcd65 (CONDITIONAL_JUMP)  ; LAB_004fcd65
    MOV EDI,0x5c9df1                    ; 004fcd43 | = "..\\core\\motion.cpp"
    MOV EAX,0x59b                       ; 004fcd48
    PUSH 0x5c9e04                       ; 004fcd4d | = "Tried to save motion controller state..."
    MOV dword ptr [0x01d71de0],EDI      ; 004fcd52 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fcd58 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fcd5d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fcd62
    SUB ESP,0x8                         ; 004fcd65
        ;   Label: LAB_004fcd65
    FLD float ptr [EBX + 0x8]           ; 004fcd68
    FSTP double ptr [ESP]               ; 004fcd6b
    PUSH EBX                            ; 004fcd6e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004fcd6f
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fcd74
    PUSH EAX                            ; 004fcd77
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fcd78
    PUSH EDX                            ; 004fcd7b
    PUSH 0x5c9e4f                       ; 004fcd7c | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fcd81
    PUSH ECX                            ; 004fcd84
    CALL crt_unknown.c_FUN_005a3140     ; 004fcd85
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x18                        ; 004fcd8a
    POP EBP                             ; 004fcd8d
    POP EDI                             ; 004fcd8e
    POP EBX                             ; 004fcd8f
    RET                                 ; 004fcd90
    SUB ESP,0x8                         ; 004fcd91
        ;   Label: LAB_004fcd91
    FLD float ptr [EBX + 0x8]           ; 004fcd94
    ADD EBX,0x30                        ; 004fcd97
    FSTP double ptr [ESP]               ; 004fcd9a
    PUSH EBX                            ; 004fcd9d
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fcd9e
    PUSH EDX                            ; 004fcda1
    PUSH 0x5c9e81                       ; 004fcda2 | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fcda7
    PUSH ECX                            ; 004fcdaa
    CALL crt_unknown.c_FUN_005a3140     ; 004fcdab
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x18                        ; 004fcdb0
    POP EBP                             ; 004fcdb3
    POP EDI                             ; 004fcdb4
    POP EBX                             ; 004fcdb5
    RET                                 ; 004fcdb6

