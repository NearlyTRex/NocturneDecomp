; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList *this_ptr,char *motion_name,int error_on_not_found)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; int              Stack[0xc]:4   error_on_not_found
;
; XREF[23]:
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0 at 00434448
;   core_charactr.cpp_CCharacter_initGesture_FUN_00432c70 at 00432c96
;   core_doc.cpp_CDoc_setup_FUN_00469060 at 00469250
;   core_doc.cpp_FUN_0046caa0 at 0046e5d9
;   core_doc.cpp_FUN_0046ea80 at 0046ed28
;   core_doc.cpp_FUN_0046f200 at 0046f2f6
;   core_event.cpp_FUN_004a1d00 at 004a631f
;   core_gabriela.cpp_CGabriella_setup_FUN_004c6390 at 004c6564
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004e0870 at 004e0c15
;   core_hostage.cpp_CHostage_setup_FUN_004ed630 at 004ed7ea
;   ... and 13 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005ead50
;   TerminatedCString s_Can_t_find_motion_s_in_m_005ead63
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005240c0
        ;   Label: core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
    PUSH ESI                            ; 005240c1
    PUSH EDI                            ; 005240c2
    PUSH EBP                            ; 005240c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005240c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005240c8
    MOV EDX,dword ptr [EDI + 0x1c24]    ; 005240cc
    XOR EBX,EBX                         ; 005240d2
    TEST EDX,EDX                        ; 005240d4
    JLE 0x005240fd                      ; 005240d6
        ;   XREF to: 005240fd (CONDITIONAL_JUMP)  ; LAB_005240fd
    LEA ESI,[EDI + 0x1c28]              ; 005240d8
    PUSH EBP                            ; 005240de
        ;   Label: LAB_005240de
    PUSH ESI                            ; 005240df
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005240e0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005240e5
    TEST EAX,EAX                        ; 005240e8
    JZ 0x0052410e                       ; 005240ea
        ;   XREF to: 0052410e (CONDITIONAL_JUMP)  ; LAB_0052410e
    INC EBX                             ; 005240ec
    MOV ECX,dword ptr [EDI + 0x1c24]    ; 005240ed
    ADD ESI,0x120                       ; 005240f3
    CMP EBX,ECX                         ; 005240f9
    JL 0x005240de                       ; 005240fb
        ;   XREF to: 005240de (CONDITIONAL_JUMP)  ; LAB_005240de
    CMP dword ptr [ESP + 0x1c],0x0      ; 005240fd
        ;   Label: LAB_005240fd
    JNZ 0x00524115                      ; 00524102
        ;   XREF to: 00524115 (CONDITIONAL_JUMP)  ; LAB_00524115
    MOV EAX,0xffffffff                  ; 00524104
    POP EBP                             ; 00524109
    POP EDI                             ; 0052410a
    POP ESI                             ; 0052410b
    POP EBX                             ; 0052410c
    RET                                 ; 0052410d
    MOV EAX,EBX                         ; 0052410e
        ;   Label: LAB_0052410e
    POP EBP                             ; 00524110
    POP EDI                             ; 00524111
    POP ESI                             ; 00524112
    POP EBX                             ; 00524113
    RET                                 ; 00524114
    PUSH EBP                            ; 00524115
        ;   Label: LAB_00524115
    MOV ESI,0x5ead50                    ; 00524116 | = "..\\core\\motion.cpp"
    MOV EDI,0x13f                       ; 0052411b
    PUSH 0x5ead63                       ; 00524120 | = "Can't find motion \"%s\" in motion list"
    MOV dword ptr [0x01d1d400],ESI      ; 00524125 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0052412b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00524131
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00524136
    MOV EAX,0xffffffff                  ; 00524139
    POP EBP                             ; 0052413e
    POP EDI                             ; 0052413f
    POP ESI                             ; 00524140
    POP EBX                             ; 00524141
    RET                                 ; 00524142

