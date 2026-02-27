; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_script_cpp_CScript_getDialogDuration_FUN_0055ff00(CScript *this_ptr,int param_2,char *param_3,char *param_4)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   param_3
; char *           Stack[0x10]:4   param_4
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c587
;
; Referenced Globals:
;   TerminatedCString s_f_006431a0
;   double DOUBLE_006431a8 = 0.0200000000000000
;   double DOUBLE_006431b0 = 0.400000000000000
;   CSound* g_CSoundPtr = 03f6af64
;   CDemonActorType g_CCharacterClassInfo
;   undefined4 g_CCharacterClassInfo.name_hash
;   int g_ScriptEventsEnabled
;   int g_ActorLookedUpByVariable
;   CPickList g_ScriptPickList
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_script.cpp_getActor_FUN_005594e0
;   core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   crt_stdio.c_sscanf_FUN_0060013c
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ff00
        ;   Label: core_script.cpp_CScript_getDialogDuration_FUN_0055ff00
    PUSH ESI                            ; 0055ff01
    PUSH EDI                            ; 0055ff02
    PUSH EBP                            ; 0055ff03
    MOV EBP,ESP                         ; 0055ff04
    SUB ESP,0x18                        ; 0055ff06
    AND ESP,0xfffffff8                  ; 0055ff09
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055ff0c
    MOV ESI,dword ptr [EBP + 0x20]      ; 0055ff0f
    XOR EDX,EDX                         ; 0055ff12
    FLDZ                                ; 0055ff14
    MOV dword ptr [ESP + 0x10],EDX      ; 0055ff16
    FCOMP float ptr [EBX + 0x454]       ; 0055ff1a
    FNSTSW AX                           ; 0055ff20
    SAHF                                ; 0055ff22
    JA 0x0055ff6d                       ; 0055ff23
        ;   XREF to: 0055ff6d (CONDITIONAL_JUMP)  ; LAB_0055ff6d
    MOV EAX,dword ptr [EBX + 0x454]     ; 0055ff25
    MOV dword ptr [ESP],EAX             ; 0055ff2b
    PUSH 0x823c14                       ; 0055ff2e | g_CCharacterClassInfo
        ;   Label: LAB_0055ff2e
    MOV ECX,dword ptr [0x00823c4c]      ; 0055ff33 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0055ff39
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055ff3a
    PUSH EDI                            ; 0055ff3d
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0055ff3e
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 0055ff43
    MOV dword ptr [EBX + 0x4],EAX       ; 0055ff46
    TEST EAX,EAX                        ; 0055ff49
    JNZ 0x00560012                      ; 0055ff4b
        ;   XREF to: 00560012 (CONDITIONAL_JUMP)  ; LAB_00560012
    CMP dword ptr [0x0310f4ac],0x0      ; 0055ff51 | g_ActorLookedUpByVariable
    JZ 0x0055ffff                       ; 0055ff58
        ;   XREF to: 0055ffff (CONDITIONAL_JUMP)  ; LAB_0055ffff
    MOV dword ptr [ESP + 0xc],EAX       ; 0055ff5e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055ff62
    MOV ESP,EBP                         ; 0055ff66
    POP EBP                             ; 0055ff68
    POP EDI                             ; 0055ff69
    POP ESI                             ; 0055ff6a
    POP EBX                             ; 0055ff6b
    RET                                 ; 0055ff6c
    MOV EAX,ESP                         ; 0055ff6d
        ;   Label: LAB_0055ff6d
    PUSH EAX                            ; 0055ff6f
    PUSH 0x6431a0                       ; 0055ff70 | = "%f"
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0055ff75
    PUSH ECX                            ; 0055ff78
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0055ff79
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 0055ff7e
    CMP EAX,0x1                         ; 0055ff81
    JZ 0x0055ff2e                       ; 0055ff84
        ;   XREF to: 0055ff2e (CONDITIONAL_JUMP)  ; LAB_0055ff2e
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0055ff86
    PUSH EDI                            ; 0055ff89
    MOV EAX,[0x00681ef8]                ; 0055ff8a | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 0055ff8f | g_CSoundInstance
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0 ; 0055ff90
        ;   XREF to: 005b3ba0 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0055ff95
    FLD float ptr [ESP + 0x1c]          ; 0055ff99
    ADD ESP,0x8                         ; 0055ff9d
    FST float ptr [ESP]                 ; 0055ffa0
    FLDZ                                ; 0055ffa3
    FCOMPP                              ; 0055ffa5
    FNSTSW AX                           ; 0055ffa7
    SAHF                                ; 0055ffa9
    JA 0x0055ffc6                       ; 0055ffaa
        ;   XREF to: 0055ffc6 (CONDITIONAL_JUMP)  ; LAB_0055ffc6
    CMP dword ptr [0x0310ec9c],0x0      ; 0055ffac | g_ScriptEventsEnabled
        ;   Label: LAB_0055ffac
    JNZ 0x0055ff2e                      ; 0055ffb3
        ;   XREF to: 0055ff2e (CONDITIONAL_JUMP)  ; LAB_0055ff2e
    MOV dword ptr [ESP + 0x10],0x1      ; 0055ffb9
    JMP 0x0055ff2e                      ; 0055ffc1
        ;   XREF to: 0055ff2e (UNCONDITIONAL_JUMP)  ; LAB_0055ff2e
    PUSH EDI                            ; 0055ffc6
        ;   Label: LAB_0055ffc6
    PUSH 0x310f4b0                      ; 0055ffc7 | g_ScriptPickList
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0055ffcc
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0055ffd1
    MOV EDI,ESI                         ; 0055ffd4
    SUB ECX,ECX                         ; 0055ffd6
    DEC ECX                             ; 0055ffd8
    XOR EAX,EAX                         ; 0055ffd9
    SCASB.REPNE ES:EDI                  ; 0055ffdb
    NOT ECX                             ; 0055ffdd
    DEC ECX                             ; 0055ffdf
    XOR EDI,EDI                         ; 0055ffe0
    MOV dword ptr [ESP + 0x4],ECX       ; 0055ffe2
    MOV dword ptr [ESP + 0x8],EDI       ; 0055ffe6
    FILD qword ptr [ESP + 0x4]          ; 0055ffea
    FMUL double ptr [0x006431a8]        ; 0055ffee | DOUBLE_006431a8
    FADD double ptr [0x006431b0]        ; 0055fff4 | DOUBLE_006431b0
    FSTP float ptr [ESP]                ; 0055fffa
    JMP 0x0055ffac                      ; 0055fffd
        ;   XREF to: 0055ffac (UNCONDITIONAL_JUMP)  ; LAB_0055ffac
    MOV dword ptr [ESP + 0xc],0xbf800000 ; 0055ffff
        ;   Label: LAB_0055ffff
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560007
    MOV ESP,EBP                         ; 0056000b
    POP EBP                             ; 0056000d
    POP EDI                             ; 0056000e
    POP ESI                             ; 0056000f
    POP EBX                             ; 00560010
    RET                                 ; 00560011
    MOV EDX,dword ptr [EBX + 0x14]      ; 00560012
        ;   Label: LAB_00560012
    MOV dword ptr [EBX + 0x8],EAX       ; 00560015
    TEST EDX,EDX                        ; 00560018
    JZ 0x0056009c                       ; 0056001a
        ;   XREF to: 0056009c (CONDITIONAL_JUMP)  ; LAB_0056009c
    CMP dword ptr [0x0310ec9c],0x0      ; 00560020 | g_ScriptEventsEnabled
        ;   Label: LAB_00560020
    JNZ 0x0056008a                      ; 00560027
        ;   XREF to: 0056008a (CONDITIONAL_JUMP)  ; LAB_0056008a
    LEA EDI,[EBX + 0x54]                ; 00560029
    PUSH EDI                            ; 0056002c
    MOV AL,byte ptr [ESI]               ; 0056002d
        ;   Label: LAB_0056002d
    MOV byte ptr [EDI],AL               ; 0056002f
    CMP AL,0x0                          ; 00560031
    JZ 0x00560045                       ; 00560033
        ;   XREF to: 00560045 (CONDITIONAL_JUMP)  ; LAB_00560045
    MOV AL,byte ptr [ESI + 0x1]         ; 00560035
    ADD ESI,0x2                         ; 00560038
    MOV byte ptr [EDI + 0x1],AL         ; 0056003b
    ADD EDI,0x2                         ; 0056003e
    CMP AL,0x0                          ; 00560041
    JNZ 0x0056002d                      ; 00560043
        ;   XREF to: 0056002d (CONDITIONAL_JUMP)  ; LAB_0056002d
    POP EDI                             ; 00560045
        ;   Label: LAB_00560045
    MOV EAX,dword ptr [EBX + 0x4]       ; 00560046
    TEST EAX,EAX                        ; 00560049
    JZ 0x00560058                       ; 0056004b
        ;   XREF to: 00560058 (CONDITIONAL_JUMP)  ; LAB_00560058
    MOV ECX,EAX                         ; 0056004d
    MOV EAX,dword ptr [ESP]             ; 0056004f
    MOV dword ptr [ECX + 0x2618],EAX    ; 00560052
    CMP dword ptr [ESP + 0x10],0x0      ; 00560058
        ;   Label: LAB_00560058
    JZ 0x0056008a                       ; 0056005d
        ;   XREF to: 0056008a (CONDITIONAL_JUMP)  ; LAB_0056008a
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0056005f
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x2                            ; 00560064
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 00560066
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
    ADD ESP,0x4                         ; 0056006b
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0056006e
    PUSH ECX                            ; 00560071
    PUSH EBX                            ; 00560072
    MOV ESI,dword ptr [0x00681ef8]      ; 00560073 | g_CSoundPtr
    PUSH ESI                            ; 00560079 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 0056007a
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0056007f
    MOV dword ptr [EBX + 0x24],EAX      ; 00560082
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 00560085
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EAX,dword ptr [ESP]             ; 0056008a
        ;   Label: LAB_0056008a
    MOV dword ptr [ESP + 0xc],EAX       ; 0056008d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560091
    MOV ESP,EBP                         ; 00560095
    POP EBP                             ; 00560097
    POP EDI                             ; 00560098
    POP ESI                             ; 00560099
    POP EBX                             ; 0056009a
    RET                                 ; 0056009b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056009c
        ;   Label: LAB_0056009c
    CMP ECX,dword ptr [EBX + 0xc]       ; 0056009f
    JZ 0x00560020                       ; 005600a2
        ;   XREF to: 00560020 (CONDITIONAL_JUMP)  ; LAB_00560020
    MOV EAX,dword ptr [EBX + 0x4]       ; 005600a8
    MOV dword ptr [EBX + 0x10],0x1      ; 005600ab
    MOV dword ptr [EBX + 0xc],EAX       ; 005600b2
    JMP 0x00560020                      ; 005600b5
        ;   XREF to: 00560020 (UNCONDITIONAL_JUMP)  ; LAB_00560020

