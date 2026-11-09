; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0(CNPC *this_ptr,char *motion_name)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   core_npc.cpp_FUN_00510b90 at 00510beb
;
; Referenced Globals:
;   TerminatedCString s_s_d_005e1575
;   TerminatedCString s_s_d_005e157b
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_00502fa0
;   core_motion.cpp_FUN_00503860
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510ab0
        ;   Label: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_00510ab0
    PUSH ESI                            ; 00510ab1
    PUSH EDI                            ; 00510ab2
    PUSH EBP                            ; 00510ab3
    SUB ESP,0xc8                        ; 00510ab4
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00510aba
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00510ac1
    PUSH EDX                            ; 00510ac8
    XOR EBX,EBX                         ; 00510ac9
    CALL core_motion.cpp_FUN_00503860   ; 00510acb
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00510ad0
    MOV EBP,EAX                         ; 00510ad3
    XOR EDI,EDI                         ; 00510ad5
    LEA EAX,[EBX + 0x1]                 ; 00510ad7
        ;   Label: LAB_00510ad7
    PUSH EAX                            ; 00510ada
    PUSH ESI                            ; 00510adb
    PUSH 0x5e1575                       ; 00510adc | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00510ae1
    PUSH EAX                            ; 00510ae5
    CALL crt_unknown.c_FUN_005b7790     ; 00510ae6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00510aeb
    PUSH EDI                            ; 00510aee
    LEA EAX,[ESP + 0x4]                 ; 00510aef
    PUSH EAX                            ; 00510af3
    PUSH EBP                            ; 00510af4
    CALL core_motion.cpp_FUN_00502fa0   ; 00510af5
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00510afa
    TEST EAX,EAX                        ; 00510afd
    JL 0x00510b04                       ; 00510aff
        ;   XREF to: 00510b04 (CONDITIONAL_JUMP)  ; LAB_00510b04
    INC EBX                             ; 00510b01
    JMP 0x00510ad7                      ; 00510b02
        ;   XREF to: 00510ad7 (UNCONDITIONAL_JUMP)  ; LAB_00510ad7
    TEST EBX,EBX                        ; 00510b04
        ;   Label: LAB_00510b04
    JZ 0x00510b48                       ; 00510b06
        ;   XREF to: 00510b48 (CONDITIONAL_JUMP)  ; LAB_00510b48
    PUSH EBX                            ; 00510b08
    PUSH 0x1                            ; 00510b09
    CALL core_actor.cpp_FUN_0040cfc0    ; 00510b0b
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00510b10
    PUSH EAX                            ; 00510b13
    PUSH ESI                            ; 00510b14
    PUSH 0x5e157b                       ; 00510b15 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00510b1a
    PUSH EAX                            ; 00510b1e
    CALL crt_unknown.c_FUN_005b7790     ; 00510b1f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00510b24
    PUSH 0x0                            ; 00510b27
        ;   Label: LAB_00510b27
    LEA EAX,[ESP + 0x4]                 ; 00510b29
    PUSH EAX                            ; 00510b2d
    PUSH EBP                            ; 00510b2e
    CALL core_motion.cpp_FUN_00502fa0   ; 00510b2f
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00510b34
    TEST EAX,EAX                        ; 00510b37
    JGE 0x00510b66                      ; 00510b39
        ;   XREF to: 00510b66 (CONDITIONAL_JUMP)  ; LAB_00510b66
    XOR EAX,EAX                         ; 00510b3b
    ADD ESP,0xc8                        ; 00510b3d
    POP EBP                             ; 00510b43
    POP EDI                             ; 00510b44
    POP ESI                             ; 00510b45
    POP EBX                             ; 00510b46
    RET                                 ; 00510b47
    MOV EDI,ESP                         ; 00510b48
        ;   Label: LAB_00510b48
    PUSH EDI                            ; 00510b4a
    MOV AL,byte ptr [ESI]               ; 00510b4b
        ;   Label: LAB_00510b4b
    MOV byte ptr [EDI],AL               ; 00510b4d
    CMP AL,0x0                          ; 00510b4f
    JZ 0x00510b63                       ; 00510b51
        ;   XREF to: 00510b63 (CONDITIONAL_JUMP)  ; LAB_00510b63
    MOV AL,byte ptr [ESI + 0x1]         ; 00510b53
    ADD ESI,0x2                         ; 00510b56
    MOV byte ptr [EDI + 0x1],AL         ; 00510b59
    ADD EDI,0x2                         ; 00510b5c
    CMP AL,0x0                          ; 00510b5f
    JNZ 0x00510b4b                      ; 00510b61
        ;   XREF to: 00510b4b (CONDITIONAL_JUMP)  ; LAB_00510b4b
    POP EDI                             ; 00510b63
        ;   Label: LAB_00510b63
    JMP 0x00510b27                      ; 00510b64
        ;   XREF to: 00510b27 (UNCONDITIONAL_JUMP)  ; LAB_00510b27
    PUSH 0x1                            ; 00510b66
        ;   Label: LAB_00510b66
    PUSH EAX                            ; 00510b68
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00510b69
    PUSH ECX                            ; 00510b70
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00510b71
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 00510b76
    ADD ESP,0xc                         ; 00510b7b
    ADD ESP,0xc8                        ; 00510b7e
    POP EBP                             ; 00510b84
    POP EDI                             ; 00510b85
    POP ESI                             ; 00510b86
    POP EBX                             ; 00510b87
    RET                                 ; 00510b88

