; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004eada0(int param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_005e471d
;
; Called Functions:
;   core_motion.cpp_FUN_00524150
;   core_motion.cpp_FUN_00524a00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004eada0
        ;   Label: core_hero.cpp_FUN_004eada0
    TEST EDX,EDX                        ; 004eada4
    JZ 0x004eadb6                       ; 004eada6
        ;   XREF to: 004eadb6 (CONDITIONAL_JUMP)  ; LAB_004eadb6
    LEA EAX,[EAX]                       ; 004eada8
    MOV EDX,EDX                         ; 004eadae
    PUSH EDX                            ; 004eadb6
        ;   Label: LAB_004eadb6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004eadb7
    PUSH 0x5e471d                       ; 004eadbb | = "GETGRABBED"
    ADD EAX,0x158                       ; 004eadc0
    PUSH EAX                            ; 004eadc5
    CALL core_motion.cpp_FUN_00524a00   ; 004eadc6
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eadcb
    PUSH EAX                            ; 004eadce
    CALL core_motion.cpp_FUN_00524150   ; 004eadcf
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004eadd4
    TEST EAX,EAX                        ; 004eadd7
    JGE 0x004eadb0                      ; 004eadd9
        ;   XREF to: 004eadb0 (CONDITIONAL_JUMP)  ; caseD_2
    LEA EAX,[EAX]                       ; 004eaddb
    MOV ECX,ECX                         ; 004eadde

