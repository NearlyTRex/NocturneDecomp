; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_script_cpp_CScript_startDialogLine_FUN_00530150(CScript *this_ptr,char *actor_specifier,char *sound_name,char *dialog_text)
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
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bd78
;
; Referenced Globals:
;   undefined4 DAT_005cfa50
;   undefined4 DAT_005cfa58
;   undefined4 DAT_005cfa60
;   undefined4 DAT_006045f8
;   CDemonActorType g_CCharacterClassInfo
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01ed6808
;   undefined4 DAT_01ed701c
;
; Called Functions:
;   core_script.cpp_getActor_FUN_005289b0
;   core_sound.cpp_CSound_getSoundDuration_FUN_00560b10
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530150
        ;   Label: core_script.cpp_CScript_startDialogLine_FUN_00530150
    PUSH ESI                            ; 00530151
    PUSH EDI                            ; 00530152
    PUSH EBP                            ; 00530153
    MOV EBP,ESP                         ; 00530154
    SUB ESP,0x18                        ; 00530156
    AND ESP,0xfffffff8                  ; 00530159
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053015c
    MOV ESI,dword ptr [EBP + 0x20]      ; 0053015f
    XOR EDX,EDX                         ; 00530162
    FLDZ                                ; 00530164
    MOV dword ptr [ESP + 0x10],EDX      ; 00530166
    FCOMP float ptr [EBX + 0x450]       ; 0053016a
    FNSTSW AX                           ; 00530170
    SAHF                                ; 00530172
    JA 0x005301bd                       ; 00530173
        ;   XREF to: 005301bd (CONDITIONAL_JUMP)  ; LAB_005301bd
    MOV EAX,dword ptr [EBX + 0x450]     ; 00530175
    MOV dword ptr [ESP],EAX             ; 0053017b
    PUSH 0x7e2cb4                       ; 0053017e | g_CCharacterClassInfo
        ;   Label: LAB_0053017e
    MOV ECX,dword ptr [0x007e2cec]      ; 00530183 | g_CCharacterClassInfo.name_hash
    PUSH ECX                            ; 00530189
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053018a
    PUSH EDI                            ; 0053018d
    CALL core_script.cpp_getActor_FUN_005289b0 ; 0053018e
        ;   XREF to: 005289b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005289b0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00530193
    MOV dword ptr [EBX + 0x4],EAX       ; 00530196
    TEST EAX,EAX                        ; 00530199
    JNZ 0x00530262                      ; 0053019b
        ;   XREF to: 00530262 (CONDITIONAL_JUMP)  ; LAB_00530262
    CMP dword ptr [0x01ed701c],0x0      ; 005301a1 | DAT_01ed701c
    JZ 0x0053024f                       ; 005301a8
        ;   XREF to: 0053024f (CONDITIONAL_JUMP)  ; LAB_0053024f
    MOV dword ptr [ESP + 0xc],EAX       ; 005301ae
    MOV EAX,dword ptr [ESP + 0xc]       ; 005301b2
    MOV ESP,EBP                         ; 005301b6
    POP EBP                             ; 005301b8
    POP EDI                             ; 005301b9
    POP ESI                             ; 005301ba
    POP EBX                             ; 005301bb
    RET                                 ; 005301bc
    MOV EAX,ESP                         ; 005301bd
        ;   Label: LAB_005301bd
    PUSH EAX                            ; 005301bf
    PUSH 0x5cfa50                       ; 005301c0 | DAT_005cfa50
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005301c5
    PUSH ECX                            ; 005301c8
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 005301c9
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 005301ce
    CMP EAX,0x1                         ; 005301d1
    JZ 0x0053017e                       ; 005301d4
        ;   XREF to: 0053017e (CONDITIONAL_JUMP)  ; LAB_0053017e
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005301d6
    PUSH EDI                            ; 005301d9
    MOV EAX,[0x006045f8]                ; 005301da | DAT_006045f8
    PUSH EAX                            ; 005301df
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_00560b10 ; 005301e0
        ;   XREF to: 00560b10 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_00560b10(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005301e5
    FLD float ptr [ESP + 0x1c]          ; 005301e9
    ADD ESP,0x8                         ; 005301ed
    FST float ptr [ESP]                 ; 005301f0
    FLDZ                                ; 005301f3
    FCOMPP                              ; 005301f5
    FNSTSW AX                           ; 005301f7
    SAHF                                ; 005301f9
    JA 0x00530216                       ; 005301fa
        ;   XREF to: 00530216 (CONDITIONAL_JUMP)  ; LAB_00530216
    CMP dword ptr [0x01ed6808],0x0      ; 005301fc | DAT_01ed6808
        ;   Label: LAB_005301fc
    JNZ 0x0053017e                      ; 00530203
        ;   XREF to: 0053017e (CONDITIONAL_JUMP)  ; LAB_0053017e
    MOV dword ptr [ESP + 0x10],0x1      ; 00530209
    JMP 0x0053017e                      ; 00530211
        ;   XREF to: 0053017e (UNCONDITIONAL_JUMP)  ; LAB_0053017e
    PUSH EDI                            ; 00530216
        ;   Label: LAB_00530216
    PUSH 0x1ed7020                      ; 00530217
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0053021c
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00530221
    MOV EDI,ESI                         ; 00530224
    SUB ECX,ECX                         ; 00530226
    DEC ECX                             ; 00530228
    XOR EAX,EAX                         ; 00530229
    SCASB.REPNE ES:EDI                  ; 0053022b
    NOT ECX                             ; 0053022d
    DEC ECX                             ; 0053022f
    XOR EDI,EDI                         ; 00530230
    MOV dword ptr [ESP + 0x4],ECX       ; 00530232
    MOV dword ptr [ESP + 0x8],EDI       ; 00530236
    FILD qword ptr [ESP + 0x4]          ; 0053023a
    FMUL double ptr [0x005cfa58]        ; 0053023e | DAT_005cfa58
    FADD double ptr [0x005cfa60]        ; 00530244 | DAT_005cfa60
    FSTP float ptr [ESP]                ; 0053024a
    JMP 0x005301fc                      ; 0053024d
        ;   XREF to: 005301fc (UNCONDITIONAL_JUMP)  ; LAB_005301fc
    MOV dword ptr [ESP + 0xc],0xbf800000 ; 0053024f
        ;   Label: LAB_0053024f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00530257
    MOV ESP,EBP                         ; 0053025b
    POP EBP                             ; 0053025d
    POP EDI                             ; 0053025e
    POP ESI                             ; 0053025f
    POP EBX                             ; 00530260
    RET                                 ; 00530261
    MOV EDX,dword ptr [EBX + 0x14]      ; 00530262
        ;   Label: LAB_00530262
    MOV dword ptr [EBX + 0x8],EAX       ; 00530265
    TEST EDX,EDX                        ; 00530268
    JZ 0x005302ec                       ; 0053026a
        ;   XREF to: 005302ec (CONDITIONAL_JUMP)  ; LAB_005302ec
    CMP dword ptr [0x01ed6808],0x0      ; 00530270 | DAT_01ed6808
        ;   Label: LAB_00530270
    JNZ 0x005302da                      ; 00530277
        ;   XREF to: 005302da (CONDITIONAL_JUMP)  ; LAB_005302da
    LEA EDI,[EBX + 0x50]                ; 00530279
    PUSH EDI                            ; 0053027c
    MOV AL,byte ptr [ESI]               ; 0053027d
        ;   Label: LAB_0053027d
    MOV byte ptr [EDI],AL               ; 0053027f
    CMP AL,0x0                          ; 00530281
    JZ 0x00530295                       ; 00530283
        ;   XREF to: 00530295 (CONDITIONAL_JUMP)  ; LAB_00530295
    MOV AL,byte ptr [ESI + 0x1]         ; 00530285
    ADD ESI,0x2                         ; 00530288
    MOV byte ptr [EDI + 0x1],AL         ; 0053028b
    ADD EDI,0x2                         ; 0053028e
    CMP AL,0x0                          ; 00530291
    JNZ 0x0053027d                      ; 00530293
        ;   XREF to: 0053027d (CONDITIONAL_JUMP)  ; LAB_0053027d
    POP EDI                             ; 00530295
        ;   Label: LAB_00530295
    MOV EAX,dword ptr [EBX + 0x4]       ; 00530296
    TEST EAX,EAX                        ; 00530299
    JZ 0x005302a8                       ; 0053029b
        ;   XREF to: 005302a8 (CONDITIONAL_JUMP)  ; LAB_005302a8
    MOV ECX,EAX                         ; 0053029d
    MOV EAX,dword ptr [ESP]             ; 0053029f
    MOV dword ptr [ECX + 0x27b4],EAX    ; 005302a2
    CMP dword ptr [ESP + 0x10],0x0      ; 005302a8
        ;   Label: LAB_005302a8
    JZ 0x005302da                       ; 005302ad
        ;   XREF to: 005302da (CONDITIONAL_JUMP)  ; LAB_005302da
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 005302af
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x2                            ; 005302b4
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 005302b6
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 005302bb
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005302be
    PUSH ECX                            ; 005302c1
    PUSH EBX                            ; 005302c2
    MOV ESI,dword ptr [0x006045f8]      ; 005302c3 | DAT_006045f8
    PUSH ESI                            ; 005302c9
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 005302ca
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005302cf
    MOV dword ptr [EBX + 0x28],EAX      ; 005302d2
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 005302d5
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    MOV EAX,dword ptr [ESP]             ; 005302da
        ;   Label: LAB_005302da
    MOV dword ptr [ESP + 0xc],EAX       ; 005302dd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005302e1
    MOV ESP,EBP                         ; 005302e5
    POP EBP                             ; 005302e7
    POP EDI                             ; 005302e8
    POP ESI                             ; 005302e9
    POP EBX                             ; 005302ea
    RET                                 ; 005302eb
    MOV ECX,dword ptr [EBX + 0x4]       ; 005302ec
        ;   Label: LAB_005302ec
    CMP ECX,dword ptr [EBX + 0xc]       ; 005302ef
    JZ 0x00530270                       ; 005302f2
        ;   XREF to: 00530270 (CONDITIONAL_JUMP)  ; LAB_00530270
    MOV EAX,dword ptr [EBX + 0x4]       ; 005302f8
    MOV dword ptr [EBX + 0x10],0x1      ; 005302fb
    MOV dword ptr [EBX + 0xc],EAX       ; 00530302
    JMP 0x00530270                      ; 00530305
        ;   XREF to: 00530270 (UNCONDITIONAL_JUMP)  ; LAB_00530270

