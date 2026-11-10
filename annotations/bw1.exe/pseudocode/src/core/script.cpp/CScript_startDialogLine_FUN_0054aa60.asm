; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_script_cpp_CScript_startDialogLine_FUN_0054aa60(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   actor_specifier
; char *           Stack[0xc]:4   sound_name
; char *           Stack[0x10]:4   dialog_text
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00546691
;
; Referenced Globals:
;   undefined4 DAT_005efdbf
;   undefined4 DAT_005efdc7
;   undefined4 DAT_005efdcf
;   undefined4 DAT_006236b8
;   CDemonActorType g_CCharacterClassInfo
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01e810a8
;   undefined4 DAT_01e818bc
;
; Called Functions:
;   core_script.cpp_getActor_FUN_005433c0
;   core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;   crt_stdio.c_sscanf_FUN_005c2cac
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   sound_sndmain.cpp_FUN_00572980
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054aa60
        ;   Label: core_script.cpp_CScript_startDialogLine_FUN_0054aa60
    PUSH ESI                            ; 0054aa61
    PUSH EDI                            ; 0054aa62
    PUSH EBP                            ; 0054aa63
    MOV EBP,ESP                         ; 0054aa64
    SUB ESP,0x18                        ; 0054aa66
    AND ESP,0xfffffff8                  ; 0054aa69
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054aa6c
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054aa6f
    XOR EDX,EDX                         ; 0054aa72
    FLDZ                                ; 0054aa74
    MOV dword ptr [ESP + 0x10],EDX      ; 0054aa76
    FCOMP float ptr [EBX + 0x450]       ; 0054aa7a
    FNSTSW AX                           ; 0054aa80
    SAHF                                ; 0054aa82
    JA 0x0054aacd                       ; 0054aa83
        ;   XREF to: 0054aacd (CONDITIONAL_JUMP)  ; LAB_0054aacd
    MOV EAX,dword ptr [EBX + 0x450]     ; 0054aa85
    MOV dword ptr [ESP],EAX             ; 0054aa8b
    PUSH 0x7c6344                       ; 0054aa8e | g_CCharacterClassInfo
        ;   Label: LAB_0054aa8e
    MOV ECX,dword ptr [0x007c637c]      ; 0054aa93 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 0054aa99
    MOV EDI,dword ptr [EBP + 0x18]      ; 0054aa9a
    PUSH EDI                            ; 0054aa9d
    CALL core_script.cpp_getActor_FUN_005433c0 ; 0054aa9e
        ;   XREF to: 005433c0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_getActor_FUN_005433c0()
    ADD ESP,0xc                         ; 0054aaa3
    MOV dword ptr [EBX + 0x4],EAX       ; 0054aaa6
    TEST EAX,EAX                        ; 0054aaa9
    JNZ 0x0054ab72                      ; 0054aaab
        ;   XREF to: 0054ab72 (CONDITIONAL_JUMP)  ; LAB_0054ab72
    CMP dword ptr [0x01e818bc],0x0      ; 0054aab1 | DAT_01e818bc
    JZ 0x0054ab5f                       ; 0054aab8
        ;   XREF to: 0054ab5f (CONDITIONAL_JUMP)  ; LAB_0054ab5f
    MOV dword ptr [ESP + 0xc],EAX       ; 0054aabe
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054aac2
    MOV ESP,EBP                         ; 0054aac6
    POP EBP                             ; 0054aac8
    POP EDI                             ; 0054aac9
    POP ESI                             ; 0054aaca
    POP EBX                             ; 0054aacb
    RET                                 ; 0054aacc
    MOV EAX,ESP                         ; 0054aacd
        ;   Label: LAB_0054aacd
    PUSH EAX                            ; 0054aacf
    PUSH 0x5efdbf                       ; 0054aad0 | DAT_005efdbf
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0054aad5
    PUSH ECX                            ; 0054aad8
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0054aad9
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0054aade
    CMP EAX,0x1                         ; 0054aae1
    JZ 0x0054aa8e                       ; 0054aae4
        ;   XREF to: 0054aa8e (CONDITIONAL_JUMP)  ; LAB_0054aa8e
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0054aae6
    PUSH EDI                            ; 0054aae9
    MOV EAX,[0x006236b8]                ; 0054aaea | DAT_006236b8
    PUSH EAX                            ; 0054aaef
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0 ; 0054aaf0
        ;   XREF to: 0057d9e0 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054aaf5
    FLD float ptr [ESP + 0x1c]          ; 0054aaf9
    ADD ESP,0x8                         ; 0054aafd
    FST float ptr [ESP]                 ; 0054ab00
    FLDZ                                ; 0054ab03
    FCOMPP                              ; 0054ab05
    FNSTSW AX                           ; 0054ab07
    SAHF                                ; 0054ab09
    JA 0x0054ab26                       ; 0054ab0a
        ;   XREF to: 0054ab26 (CONDITIONAL_JUMP)  ; LAB_0054ab26
    CMP dword ptr [0x01e810a8],0x0      ; 0054ab0c | DAT_01e810a8
        ;   Label: LAB_0054ab0c
    JNZ 0x0054aa8e                      ; 0054ab13
        ;   XREF to: 0054aa8e (CONDITIONAL_JUMP)  ; LAB_0054aa8e
    MOV dword ptr [ESP + 0x10],0x1      ; 0054ab19
    JMP 0x0054aa8e                      ; 0054ab21
        ;   XREF to: 0054aa8e (UNCONDITIONAL_JUMP)  ; LAB_0054aa8e
    PUSH EDI                            ; 0054ab26
        ;   Label: LAB_0054ab26
    PUSH 0x1e818c0                      ; 0054ab27
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0054ab2c
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0054ab31
    MOV EDI,ESI                         ; 0054ab34
    SUB ECX,ECX                         ; 0054ab36
    DEC ECX                             ; 0054ab38
    XOR EAX,EAX                         ; 0054ab39
    SCASB.REPNE ES:EDI                  ; 0054ab3b
    NOT ECX                             ; 0054ab3d
    DEC ECX                             ; 0054ab3f
    XOR EDI,EDI                         ; 0054ab40
    MOV dword ptr [ESP + 0x4],ECX       ; 0054ab42
    MOV dword ptr [ESP + 0x8],EDI       ; 0054ab46
    FILD qword ptr [ESP + 0x4]          ; 0054ab4a
    FMUL double ptr [0x005efdc7]        ; 0054ab4e | DAT_005efdc7
    FADD double ptr [0x005efdcf]        ; 0054ab54 | DAT_005efdcf
    FSTP float ptr [ESP]                ; 0054ab5a
    JMP 0x0054ab0c                      ; 0054ab5d
        ;   XREF to: 0054ab0c (UNCONDITIONAL_JUMP)  ; LAB_0054ab0c
    MOV dword ptr [ESP + 0xc],0xbf800000 ; 0054ab5f
        ;   Label: LAB_0054ab5f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054ab67
    MOV ESP,EBP                         ; 0054ab6b
    POP EBP                             ; 0054ab6d
    POP EDI                             ; 0054ab6e
    POP ESI                             ; 0054ab6f
    POP EBX                             ; 0054ab70
    RET                                 ; 0054ab71
    MOV EDX,dword ptr [EBX + 0x14]      ; 0054ab72
        ;   Label: LAB_0054ab72
    MOV dword ptr [EBX + 0x8],EAX       ; 0054ab75
    TEST EDX,EDX                        ; 0054ab78
    JZ 0x0054abfc                       ; 0054ab7a
        ;   XREF to: 0054abfc (CONDITIONAL_JUMP)  ; LAB_0054abfc
    CMP dword ptr [0x01e810a8],0x0      ; 0054ab80 | DAT_01e810a8
        ;   Label: LAB_0054ab80
    JNZ 0x0054abea                      ; 0054ab87
        ;   XREF to: 0054abea (CONDITIONAL_JUMP)  ; LAB_0054abea
    LEA EDI,[EBX + 0x50]                ; 0054ab89
    PUSH EDI                            ; 0054ab8c
    MOV AL,byte ptr [ESI]               ; 0054ab8d
        ;   Label: LAB_0054ab8d
    MOV byte ptr [EDI],AL               ; 0054ab8f
    CMP AL,0x0                          ; 0054ab91
    JZ 0x0054aba5                       ; 0054ab93
        ;   XREF to: 0054aba5 (CONDITIONAL_JUMP)  ; LAB_0054aba5
    MOV AL,byte ptr [ESI + 0x1]         ; 0054ab95
    ADD ESI,0x2                         ; 0054ab98
    MOV byte ptr [EDI + 0x1],AL         ; 0054ab9b
    ADD EDI,0x2                         ; 0054ab9e
    CMP AL,0x0                          ; 0054aba1
    JNZ 0x0054ab8d                      ; 0054aba3
        ;   XREF to: 0054ab8d (CONDITIONAL_JUMP)  ; LAB_0054ab8d
    POP EDI                             ; 0054aba5
        ;   Label: LAB_0054aba5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0054aba6
    TEST EAX,EAX                        ; 0054aba9
    JZ 0x0054abb8                       ; 0054abab
        ;   XREF to: 0054abb8 (CONDITIONAL_JUMP)  ; LAB_0054abb8
    MOV ECX,EAX                         ; 0054abad
    MOV EAX,dword ptr [ESP]             ; 0054abaf
    MOV dword ptr [ECX + 0x27b4],EAX    ; 0054abb2
    CMP dword ptr [ESP + 0x10],0x0      ; 0054abb8
        ;   Label: LAB_0054abb8
    JZ 0x0054abea                       ; 0054abbd
        ;   XREF to: 0054abea (CONDITIONAL_JUMP)  ; LAB_0054abea
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0054abbf
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x2                            ; 0054abc4
    CALL sound_sndmain.cpp_FUN_00572980 ; 0054abc6
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572980(int channel_index)
    ADD ESP,0x4                         ; 0054abcb
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0054abce
    PUSH ECX                            ; 0054abd1
    PUSH EBX                            ; 0054abd2
    MOV ESI,dword ptr [0x006236b8]      ; 0054abd3 | DAT_006236b8
    PUSH ESI                            ; 0054abd9
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 0054abda
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0054abdf
    MOV dword ptr [EBX + 0x28],EAX      ; 0054abe2
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0054abe5
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EAX,dword ptr [ESP]             ; 0054abea
        ;   Label: LAB_0054abea
    MOV dword ptr [ESP + 0xc],EAX       ; 0054abed
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054abf1
    MOV ESP,EBP                         ; 0054abf5
    POP EBP                             ; 0054abf7
    POP EDI                             ; 0054abf8
    POP ESI                             ; 0054abf9
    POP EBX                             ; 0054abfa
    RET                                 ; 0054abfb
    MOV ECX,dword ptr [EBX + 0x4]       ; 0054abfc
        ;   Label: LAB_0054abfc
    CMP ECX,dword ptr [EBX + 0xc]       ; 0054abff
    JZ 0x0054ab80                       ; 0054ac02
        ;   XREF to: 0054ab80 (CONDITIONAL_JUMP)  ; LAB_0054ab80
    MOV EAX,dword ptr [EBX + 0x4]       ; 0054ac08
    MOV dword ptr [EBX + 0x10],0x1      ; 0054ac0b
    MOV dword ptr [EBX + 0xc],EAX       ; 0054ac12
    JMP 0x0054ab80                      ; 0054ac15
        ;   XREF to: 0054ab80 (UNCONDITIONAL_JUMP)  ; LAB_0054ab80

