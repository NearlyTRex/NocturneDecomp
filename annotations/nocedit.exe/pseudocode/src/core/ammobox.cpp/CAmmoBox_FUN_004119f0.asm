; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_ammobox.cpp_CAmmoBox_FUN_004119f0(CAmmoBox * this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CHero_00614c69
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004119f0
        ;   Label: core_ammobox.cpp_CAmmoBox_FUN_004119f0
    CMP dword ptr [EAX + 0x314],0x0     ; 004119f4
    JNZ 0x00411a00                      ; 004119fb | LAB_00411a00
        ;   XREF to: 00411a00 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004119fd
        ;   Label: LAB_004119fd
    RET                                 ; 004119ff
    PUSH 0x614c69                       ; 00411a00 | = "CHero" | s_CHero_00614c69 = CHero
        ;   Label: LAB_00411a00
    MOV ECX,dword ptr [ESP + 0xc]       ; 00411a05
    PUSH ECX                            ; 00411a09
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00411a0a | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411a0f
    TEST EAX,EAX                        ; 00411a12
    JZ 0x004119fd                       ; 00411a14 | LAB_004119fd
        ;   XREF to: 004119fd (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00411a16
    RET                                 ; 00411a1b

