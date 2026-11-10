; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList *this_ptr,char *motion_name,int error_on_not_found)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; int              Stack[0xc]:4   error_on_not_found
;
; XREF[23]:
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a3d0 at 0042a458
;   core_charactr.cpp_CCharacter_initGesture_FUN_004291b0 at 004291d6
;   core_doc.cpp_CDoc_setup_FUN_00450620 at 00450814
;   core_doc.cpp_FUN_00453d80 at 00455111
;   core_doc.cpp_FUN_004555c0 at 00455796
;   core_doc.cpp_FUN_004562a0 at 00456400
;   core_event.cpp_FUN_00489670 at 0048da60
;   core_gabriela.cpp_CGabriella_setup_FUN_004ad3e0 at 004ad5b4
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0 at 004c4495
;   core_hostage.cpp_CHostage_setup_FUN_004d1400 at 004d15ba
;   ... and 13 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005dfaf5
;   TerminatedCString s_Can_t_find_motion_s_in_m_005dfb08
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502f10
        ;   Label: core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
    PUSH ESI                            ; 00502f11
    PUSH EDI                            ; 00502f12
    PUSH EBP                            ; 00502f13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00502f14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00502f18
    MOV EDX,dword ptr [EDI + 0x1c24]    ; 00502f1c
    XOR EBX,EBX                         ; 00502f22
    TEST EDX,EDX                        ; 00502f24
    JLE 0x00502f4d                      ; 00502f26
        ;   XREF to: 00502f4d (CONDITIONAL_JUMP)  ; LAB_00502f4d
    LEA ESI,[EDI + 0x1c28]              ; 00502f28
    PUSH EBP                            ; 00502f2e
        ;   Label: LAB_00502f2e
    PUSH ESI                            ; 00502f2f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00502f30
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00502f35
    TEST EAX,EAX                        ; 00502f38
    JZ 0x00502f5e                       ; 00502f3a
        ;   XREF to: 00502f5e (CONDITIONAL_JUMP)  ; LAB_00502f5e
    INC EBX                             ; 00502f3c
    MOV ECX,dword ptr [EDI + 0x1c24]    ; 00502f3d
    ADD ESI,0x118                       ; 00502f43
    CMP EBX,ECX                         ; 00502f49
    JL 0x00502f2e                       ; 00502f4b
        ;   XREF to: 00502f2e (CONDITIONAL_JUMP)  ; LAB_00502f2e
    CMP dword ptr [ESP + 0x1c],0x0      ; 00502f4d
        ;   Label: LAB_00502f4d
    JNZ 0x00502f65                      ; 00502f52
        ;   XREF to: 00502f65 (CONDITIONAL_JUMP)  ; LAB_00502f65
    MOV EAX,0xffffffff                  ; 00502f54
    POP EBP                             ; 00502f59
    POP EDI                             ; 00502f5a
    POP ESI                             ; 00502f5b
    POP EBX                             ; 00502f5c
    RET                                 ; 00502f5d
    MOV EAX,EBX                         ; 00502f5e
        ;   Label: LAB_00502f5e
    POP EBP                             ; 00502f60
    POP EDI                             ; 00502f61
    POP ESI                             ; 00502f62
    POP EBX                             ; 00502f63
    RET                                 ; 00502f64
    PUSH EBP                            ; 00502f65
        ;   Label: LAB_00502f65
    MOV ESI,0x5dfaf5                    ; 00502f66 | = "..\\core\\motion.cpp"
    MOV EDI,0x12b                       ; 00502f6b
    PUSH 0x5dfb08                       ; 00502f70 | = "Can't find motion \"%s\" in motion list"
    MOV dword ptr [0x01d046a0],ESI      ; 00502f75 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00502f7b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00502f81
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00502f86
    MOV EAX,0xffffffff                  ; 00502f89
    POP EBP                             ; 00502f8e
    POP EDI                             ; 00502f8f
    POP ESI                             ; 00502f90
    POP EBX                             ; 00502f91
    RET                                 ; 00502f92

