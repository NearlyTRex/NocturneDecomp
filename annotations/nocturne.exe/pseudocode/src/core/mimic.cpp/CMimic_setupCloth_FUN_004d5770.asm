; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_004d49f0 at 004d4b4b
;
; Referenced Globals:
;   TerminatedCString s_s_attacking_hero_00589487
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 g_CGabriellaActorType_01c713e8.name_hash
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_cloth.cpp_CCloth_setup_FUN_004359e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5770
        ;   Label: core_mimic.cpp_CMimic_setupCloth_FUN_004d5770
    PUSH ESI                            ; 004d5771
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d5772
    LEA EAX,[EBX + 0x150]               ; 004d5776
    PUSH EAX                            ; 004d577c
    LEA EAX,[EBX + 0x30]                ; 004d577d
    PUSH EAX                            ; 004d5780
    LEA EAX,[EBX + 0x20]                ; 004d5781
    PUSH EAX                            ; 004d5784
    LEA ESI,[EBX + 0xbdec]              ; 004d5785
    PUSH ESI                            ; 004d578b
    MOV dword ptr [EBX + 0x4691c],0x2   ; 004d578c
    CALL core_cloth.cpp_CCloth_setup_FUN_004359e0 ; 004d5796
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_004359e0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 004d579b
    MOV EDX,dword ptr [0x01c71420]      ; 004d579e | g_CGabriellaActorType_01c713e8.name_hash
    MOV EAX,[0x01cae0e8]                ; 004d57a4 | DAT_01cae0e8
    PUSH EDX                            ; 004d57a9
    MOV ECX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d57aa
    PUSH ECX                            ; 004d57b1
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d57b2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 004d57b7
    ADD ESP,0x8                         ; 004d57b9
    TEST EAX,EAX                        ; 004d57bc
    JNZ 0x004d581b                      ; 004d57be
        ;   XREF to: 004d581b (CONDITIONAL_JUMP)  ; LAB_004d581b
    MOV EAX,[0x01cae0e8]                ; 004d57c0 | DAT_01cae0e8
        ;   Label: LAB_004d57c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d57c5
    SUB ESP,0x4                         ; 004d57cc
    FLD float ptr [EAX + 0x158]         ; 004d57cf
    ADD EAX,0x150                       ; 004d57d5
    FSTP float ptr [ESP]                ; 004d57da
    PUSH EAX                            ; 004d57dd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004d57de
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d57e3
    PUSH EAX                            ; 004d57e6
    LEA ESI,[EBX + 0x150]               ; 004d57e7
    PUSH ESI                            ; 004d57ed
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 004d57ee
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 004d57f3
    PUSH 0x1                            ; 004d57f6
    PUSH 0x1                            ; 004d57f8
    PUSH ESI                            ; 004d57fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004d57fb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5800
    PUSH EBX                            ; 004d5803
    PUSH 0x589487                       ; 004d5804 | = "%s attacking hero\n"
    MOV EBX,dword ptr [0x005ad350]      ; 004d5809 | PTR_DAT_005ad350
    PUSH EBX                            ; 004d580f | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004d5810
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 004d5815
    POP ESI                             ; 004d5818
    POP EBX                             ; 004d5819
    RET                                 ; 004d581a
    PUSH EDI                            ; 004d581b
        ;   Label: LAB_004d581b
    MOV ECX,dword ptr [ESI + 0x104]     ; 004d581c
    LEA EAX,[ECX*0x8 + 0x0]             ; 004d5822
    ADD EAX,ECX                         ; 004d5829
    SHL EAX,0x3                         ; 004d582b
    LEA EDI,[EBX + 0xc184]              ; 004d582e
    SUB EAX,ECX                         ; 004d5834
    LEA ESI,[EDX + 0x1fe14]             ; 004d5836
    LEA ECX,[EAX*0x4 + 0x0]             ; 004d583c
    PUSH EDI                            ; 004d5843
    MOV EAX,ECX                         ; 004d5844
    SHR ECX,0x2                         ; 004d5846
    MOVSD.REP ES:EDI,ESI                ; 004d5849
    MOV CL,AL                           ; 004d584b
    AND CL,0x3                          ; 004d584d
    MOVSB.REP ES:EDI,ESI                ; 004d5850
    POP EDI                             ; 004d5852
    POP EDI                             ; 004d5853
    JMP 0x004d57c0                      ; 004d5854
        ;   XREF to: 004d57c0 (UNCONDITIONAL_JUMP)  ; LAB_004d57c0

