; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_FUN_00432c70(CCharacter *this_ptr,char *motion_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005474c4
;
; Called Functions:
;   core_motion.cpp_FUN_005240c0
;   core_motion.cpp_FUN_00524a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432c70
        ;   Label: core_charactr.cpp_FUN_00432c70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00432c71
    PUSH 0x0                            ; 00432c75
    MOV EDX,dword ptr [ESP + 0x10]      ; 00432c77
    PUSH EDX                            ; 00432c7b
    LEA EAX,[EBX + 0x158]               ; 00432c7c
    PUSH EAX                            ; 00432c82
    MOV dword ptr [EBX + 0x2758],0x0    ; 00432c83
    CALL core_motion.cpp_FUN_00524a00   ; 00432c8d
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00432c92
    PUSH EAX                            ; 00432c95
    CALL core_motion.cpp_FUN_005240c0   ; 00432c96
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00432c9b
    MOV dword ptr [EBX + 0x2754],EAX    ; 00432c9e
    TEST EAX,EAX                        ; 00432ca4
    SETGE AL                            ; 00432ca6
    AND EAX,0xff                        ; 00432ca9
    POP EBX                             ; 00432cae
    RET                                 ; 00432caf

