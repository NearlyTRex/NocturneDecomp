; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_script_cpp_CScript_startDialogLine_FUN_00529750(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)
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
;   core_script.cpp_CScript_step_FUN_00522350 at 005247dc
;
; Referenced Globals:
;   undefined4 DAT_005e4d9b
;   undefined4 DAT_005e4da3
;   undefined4 DAT_005e4dab
;   undefined4 DAT_0061c068
;   CDemonActorType g_CCharacterClassInfo
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01e650f8
;   undefined4 DAT_01e6590c
;
; Called Functions:
;   core_script.cpp_getActor_FUN_00521290
;   core_sound.cpp_CSound_getSoundDuration_FUN_0055af90
;   core_sound.cpp_CSound_playSound_FUN_0055ae30
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529750
        ;   Label: core_script.cpp_CScript_startDialogLine_FUN_00529750
    PUSH ESI                            ; 00529751
    PUSH EDI                            ; 00529752
    PUSH EBP                            ; 00529753
    MOV EBP,ESP                         ; 00529754
    SUB ESP,0x18                        ; 00529756
    AND ESP,0xfffffff8                  ; 00529759
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052975c
    MOV ESI,dword ptr [EBP + 0x20]      ; 0052975f
    XOR EDX,EDX                         ; 00529762
    FLDZ                                ; 00529764
    MOV dword ptr [ESP + 0x10],EDX      ; 00529766
    FCOMP float ptr [EBX + 0x450]       ; 0052976a
    FNSTSW AX                           ; 00529770
    SAHF                                ; 00529772
    JA 0x005297bd                       ; 00529773
        ;   XREF to: 005297bd (CONDITIONAL_JUMP)  ; LAB_005297bd
    MOV EAX,dword ptr [EBX + 0x450]     ; 00529775
    MOV dword ptr [ESP],EAX             ; 0052977b
    PUSH 0x7bdc5c                       ; 0052977e | g_CCharacterClassInfo
        ;   Label: LAB_0052977e
    MOV ECX,dword ptr [0x007bdc94]      ; 00529783 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00529789
    MOV EDI,dword ptr [EBP + 0x18]      ; 0052978a
    PUSH EDI                            ; 0052978d
    CALL core_script.cpp_getActor_FUN_00521290 ; 0052978e
        ;   XREF to: 00521290 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_00521290(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00529793
    MOV dword ptr [EBX + 0x4],EAX       ; 00529796
    TEST EAX,EAX                        ; 00529799
    JNZ 0x00529862                      ; 0052979b
        ;   XREF to: 00529862 (CONDITIONAL_JUMP)  ; LAB_00529862
    CMP dword ptr [0x01e6590c],0x0      ; 005297a1 | DAT_01e6590c
    JZ 0x0052984f                       ; 005297a8
        ;   XREF to: 0052984f (CONDITIONAL_JUMP)  ; LAB_0052984f
    MOV dword ptr [ESP + 0xc],EAX       ; 005297ae
    MOV EAX,dword ptr [ESP + 0xc]       ; 005297b2
    MOV ESP,EBP                         ; 005297b6
    POP EBP                             ; 005297b8
    POP EDI                             ; 005297b9
    POP ESI                             ; 005297ba
    POP EBX                             ; 005297bb
    RET                                 ; 005297bc
    MOV EAX,ESP                         ; 005297bd
        ;   Label: LAB_005297bd
    PUSH EAX                            ; 005297bf
    PUSH 0x5e4d9b                       ; 005297c0 | DAT_005e4d9b
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005297c5
    PUSH ECX                            ; 005297c8
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 005297c9
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 005297ce
    CMP EAX,0x1                         ; 005297d1
    JZ 0x0052977e                       ; 005297d4
        ;   XREF to: 0052977e (CONDITIONAL_JUMP)  ; LAB_0052977e
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005297d6
    PUSH EDI                            ; 005297d9
    MOV EAX,[0x0061c068]                ; 005297da | DAT_0061c068
    PUSH EAX                            ; 005297df
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_0055af90 ; 005297e0
        ;   XREF to: 0055af90 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_0055af90(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005297e5
    FLD float ptr [ESP + 0x1c]          ; 005297e9
    ADD ESP,0x8                         ; 005297ed
    FST float ptr [ESP]                 ; 005297f0
    FLDZ                                ; 005297f3
    FCOMPP                              ; 005297f5
    FNSTSW AX                           ; 005297f7
    SAHF                                ; 005297f9
    JA 0x00529816                       ; 005297fa
        ;   XREF to: 00529816 (CONDITIONAL_JUMP)  ; LAB_00529816
    CMP dword ptr [0x01e650f8],0x0      ; 005297fc | DAT_01e650f8
        ;   Label: LAB_005297fc
    JNZ 0x0052977e                      ; 00529803
        ;   XREF to: 0052977e (CONDITIONAL_JUMP)  ; LAB_0052977e
    MOV dword ptr [ESP + 0x10],0x1      ; 00529809
    JMP 0x0052977e                      ; 00529811
        ;   XREF to: 0052977e (UNCONDITIONAL_JUMP)  ; LAB_0052977e
    PUSH EDI                            ; 00529816
        ;   Label: LAB_00529816
    PUSH 0x1e65910                      ; 00529817
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0052981c
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00529821
    MOV EDI,ESI                         ; 00529824
    SUB ECX,ECX                         ; 00529826
    DEC ECX                             ; 00529828
    XOR EAX,EAX                         ; 00529829
    SCASB.REPNE ES:EDI                  ; 0052982b
    NOT ECX                             ; 0052982d
    DEC ECX                             ; 0052982f
    XOR EDI,EDI                         ; 00529830
    MOV dword ptr [ESP + 0x4],ECX       ; 00529832
    MOV dword ptr [ESP + 0x8],EDI       ; 00529836
    FILD qword ptr [ESP + 0x4]          ; 0052983a
    FMUL double ptr [0x005e4da3]        ; 0052983e | DAT_005e4da3
    FADD double ptr [0x005e4dab]        ; 00529844 | DAT_005e4dab
    FSTP float ptr [ESP]                ; 0052984a
    JMP 0x005297fc                      ; 0052984d
        ;   XREF to: 005297fc (UNCONDITIONAL_JUMP)  ; LAB_005297fc
    MOV dword ptr [ESP + 0xc],0xbf800000 ; 0052984f
        ;   Label: LAB_0052984f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00529857
    MOV ESP,EBP                         ; 0052985b
    POP EBP                             ; 0052985d
    POP EDI                             ; 0052985e
    POP ESI                             ; 0052985f
    POP EBX                             ; 00529860
    RET                                 ; 00529861
    MOV EDX,dword ptr [EBX + 0x14]      ; 00529862
        ;   Label: LAB_00529862
    MOV dword ptr [EBX + 0x8],EAX       ; 00529865
    TEST EDX,EDX                        ; 00529868
    JZ 0x005298ec                       ; 0052986a
        ;   XREF to: 005298ec (CONDITIONAL_JUMP)  ; LAB_005298ec
    CMP dword ptr [0x01e650f8],0x0      ; 00529870 | DAT_01e650f8
        ;   Label: LAB_00529870
    JNZ 0x005298da                      ; 00529877
        ;   XREF to: 005298da (CONDITIONAL_JUMP)  ; LAB_005298da
    LEA EDI,[EBX + 0x50]                ; 00529879
    PUSH EDI                            ; 0052987c
    MOV AL,byte ptr [ESI]               ; 0052987d
        ;   Label: LAB_0052987d
    MOV byte ptr [EDI],AL               ; 0052987f
    CMP AL,0x0                          ; 00529881
    JZ 0x00529895                       ; 00529883
        ;   XREF to: 00529895 (CONDITIONAL_JUMP)  ; LAB_00529895
    MOV AL,byte ptr [ESI + 0x1]         ; 00529885
    ADD ESI,0x2                         ; 00529888
    MOV byte ptr [EDI + 0x1],AL         ; 0052988b
    ADD EDI,0x2                         ; 0052988e
    CMP AL,0x0                          ; 00529891
    JNZ 0x0052987d                      ; 00529893
        ;   XREF to: 0052987d (CONDITIONAL_JUMP)  ; LAB_0052987d
    POP EDI                             ; 00529895
        ;   Label: LAB_00529895
    MOV EAX,dword ptr [EBX + 0x4]       ; 00529896
    TEST EAX,EAX                        ; 00529899
    JZ 0x005298a8                       ; 0052989b
        ;   XREF to: 005298a8 (CONDITIONAL_JUMP)  ; LAB_005298a8
    MOV ECX,EAX                         ; 0052989d
    MOV EAX,dword ptr [ESP]             ; 0052989f
    MOV dword ptr [ECX + 0x2820],EAX    ; 005298a2
    CMP dword ptr [ESP + 0x10],0x0      ; 005298a8
        ;   Label: LAB_005298a8
    JZ 0x005298da                       ; 005298ad
        ;   XREF to: 005298da (CONDITIONAL_JUMP)  ; LAB_005298da
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 005298af
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x2                            ; 005298b4
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00550310 ; 005298b6
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00550310(int channel_index)
    ADD ESP,0x4                         ; 005298bb
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005298be
    PUSH ECX                            ; 005298c1
    PUSH EBX                            ; 005298c2
    MOV ESI,dword ptr [0x0061c068]      ; 005298c3 | DAT_0061c068
    PUSH ESI                            ; 005298c9
    CALL core_sound.cpp_CSound_playSound_FUN_0055ae30 ; 005298ca
        ;   XREF to: 0055ae30 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0055ae30(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005298cf
    MOV dword ptr [EBX + 0x28],EAX      ; 005298d2
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 005298d5
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,dword ptr [ESP]             ; 005298da
        ;   Label: LAB_005298da
    MOV dword ptr [ESP + 0xc],EAX       ; 005298dd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005298e1
    MOV ESP,EBP                         ; 005298e5
    POP EBP                             ; 005298e7
    POP EDI                             ; 005298e8
    POP ESI                             ; 005298e9
    POP EBX                             ; 005298ea
    RET                                 ; 005298eb
    MOV ECX,dword ptr [EBX + 0x4]       ; 005298ec
        ;   Label: LAB_005298ec
    CMP ECX,dword ptr [EBX + 0xc]       ; 005298ef
    JZ 0x00529870                       ; 005298f2
        ;   XREF to: 00529870 (CONDITIONAL_JUMP)  ; LAB_00529870
    MOV EAX,dword ptr [EBX + 0x4]       ; 005298f8
    MOV dword ptr [EBX + 0x10],0x1      ; 005298fb
    MOV dword ptr [EBX + 0xc],EAX       ; 00529902
    JMP 0x00529870                      ; 00529905
        ;   XREF to: 00529870 (UNCONDITIONAL_JUMP)  ; LAB_00529870

