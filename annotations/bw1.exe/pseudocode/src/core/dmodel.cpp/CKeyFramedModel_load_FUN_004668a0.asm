; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[5]:
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0 at 0043e7a0
;   core_dmodel.cpp_loadModel_FUN_00468780 at 0046880a
;   core_level.cpp_FUN_004fe840 at 004fe8c5
;   core_moon.cpp_CMoon_init_FUN_00521c50 at 00521c82
;   core_set.cpp_FUN_0054d3c0 at 0054df30
;
; Referenced Globals:
;   undefined4 DAT_005d92ac
;   TerminatedCString s_models_005d92af
;   TerminatedCString s_core_dmodel_cpp_005d92b6
;   TerminatedCString s_Can_t_open_keyframed_mod_005d92c9
;   undefined4 DAT_005d92e7
;   TerminatedCString s_models_005d92ea
;   TerminatedCString s_core_dmodel_cpp_005d92f1
;   TerminatedCString s_Can_t_open_keyframed_mod_005d9304
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00467a30
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004669f0
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0
;   core_dmodel.cpp_FUN_00467160
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_ungetc_FUN_005c0700
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004668a0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0
    PUSH ESI                            ; 004668a1
    PUSH EDI                            ; 004668a2
    PUSH EBP                            ; 004668a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004668a4
    PUSH EBX                            ; 004668a8
    CALL core_dmodel.cpp_FUN_00467160   ; 004668a9
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 004668ae
    PUSH 0x5d92ac                       ; 004668b1 | DAT_005d92ac
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004668b6
    PUSH EDX                            ; 004668ba
    PUSH 0x5d92af                       ; 004668bb | = "models"
    CALL engine_dosio.cpp_FUN_00479180  ; 004668c0
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004668c5
    MOV EBP,EAX                         ; 004668c8
    TEST EAX,EAX                        ; 004668ca
    JZ 0x004669ae                       ; 004668cc
        ;   XREF to: 004669ae (CONDITIONAL_JUMP)  ; LAB_004669ae
    MOV ESI,dword ptr [ESP + 0x18]      ; 004668d2
        ;   Label: LAB_004668d2
    MOV EDI,EBX                         ; 004668d6
    PUSH EDI                            ; 004668d8
    MOV AL,byte ptr [ESI]               ; 004668d9
        ;   Label: LAB_004668d9
    MOV byte ptr [EDI],AL               ; 004668db
    CMP AL,0x0                          ; 004668dd
    JZ 0x004668f1                       ; 004668df
        ;   XREF to: 004668f1 (CONDITIONAL_JUMP)  ; LAB_004668f1
    MOV AL,byte ptr [ESI + 0x1]         ; 004668e1
    ADD ESI,0x2                         ; 004668e4
    MOV byte ptr [EDI + 0x1],AL         ; 004668e7
    ADD EDI,0x2                         ; 004668ea
    CMP AL,0x0                          ; 004668ed
    JNZ 0x004668d9                      ; 004668ef
        ;   XREF to: 004668d9 (CONDITIONAL_JUMP)  ; LAB_004668d9
    POP EDI                             ; 004668f1
        ;   Label: LAB_004668f1
    PUSH EBP                            ; 004668f2
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 004668f3
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 004668f8
    PUSH EBP                            ; 004668fb
    PUSH EAX                            ; 004668fc
    MOV ESI,EAX                         ; 004668fd
    CALL crt_stdio.c_ungetc_FUN_005c0700 ; 004668ff
        ;   XREF to: 005c0700 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005c0700()
    ADD ESP,0x8                         ; 00466904
    CMP ESI,0x2f                        ; 00466907
    JNZ 0x004669db                      ; 0046690a
        ;   XREF to: 004669db (CONDITIONAL_JUMP)  ; LAB_004669db
    PUSH EBP                            ; 00466910
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00466911
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00466916
    PUSH 0x5d92e7                       ; 00466919 | DAT_005d92e7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046691e
    PUSH EBP                            ; 00466922
    PUSH 0x5d92ea                       ; 00466923 | = "models"
    CALL engine_dosio.cpp_FUN_00479180  ; 00466928
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046692d
    MOV EBP,EAX                         ; 00466930
    TEST EAX,EAX                        ; 00466932
    JNZ 0x0046695d                      ; 00466934
        ;   XREF to: 0046695d (CONDITIONAL_JUMP)  ; LAB_0046695d
    MOV ECX,dword ptr [ESP + 0x18]      ; 00466936
    PUSH ECX                            ; 0046693a
    MOV EAX,0x5d92f1                    ; 0046693b | = "..\\core\\dmodel.cpp"
    MOV EDX,0xc5                        ; 00466940
    PUSH 0x5d9304                       ; 00466945 | = "Can't open keyframed model %s"
    MOV [0x01d1d400],EAX                ; 0046694a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0046694f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00466955
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0046695a
    PUSH EBP                            ; 0046695d
        ;   Label: LAB_0046695d
    PUSH EBX                            ; 0046695e
    CALL core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0 ; 0046695f
        ;   XREF to: 00466be0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0(CKeyFramedModel * this_ptr, _FILE * file)
    ADD ESP,0x8                         ; 00466964
        ;   Label: LAB_00466964
    PUSH EBP                            ; 00466967
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00466968
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0046696d
    PUSH EBX                            ; 00466970
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00467a30 ; 00466971
        ;   XREF to: 00467a30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00467a30(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00466976
    MOV ESI,dword ptr [EBX + 0x120]     ; 00466979
    XOR EDX,EDX                         ; 0046697f
    TEST ESI,ESI                        ; 00466981
    JLE 0x004669a0                      ; 00466983
        ;   XREF to: 004669a0 (CONDITIONAL_JUMP)  ; LAB_004669a0
    MOV EAX,EBX                         ; 00466985
    MOV dword ptr [EAX + 0x128],0x0     ; 00466987
        ;   Label: LAB_00466987
    INC EDX                             ; 00466991
    MOV EDI,dword ptr [EBX + 0x120]     ; 00466992
    ADD EAX,0x48                        ; 00466998
    CMP EDX,EDI                         ; 0046699b
    JL 0x00466987                       ; 0046699d
        ;   XREF to: 00466987 (CONDITIONAL_JUMP)  ; LAB_00466987
    NOP                                 ; 0046699f
    PUSH EBX                            ; 004669a0
        ;   Label: LAB_004669a0
    CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880 ; 004669a1
        ;   XREF to: 00467880 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004669a6
    POP EBP                             ; 004669a9
    POP EDI                             ; 004669aa
    POP ESI                             ; 004669ab
    POP EBX                             ; 004669ac
    RET                                 ; 004669ad
    MOV EDI,dword ptr [ESP + 0x18]      ; 004669ae
        ;   Label: LAB_004669ae
    PUSH EDI                            ; 004669b2
    MOV ECX,0x5d92b6                    ; 004669b3 | = "..\\core\\dmodel.cpp"
    MOV ESI,0xb8                        ; 004669b8
    PUSH 0x5d92c9                       ; 004669bd | = "Can't open keyframed model %s"
    MOV dword ptr [0x01d1d400],ECX      ; 004669c2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004669c8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004669ce
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004669d3
    JMP 0x004668d2                      ; 004669d6
        ;   XREF to: 004668d2 (UNCONDITIONAL_JUMP)  ; LAB_004668d2
    PUSH EBP                            ; 004669db
        ;   Label: LAB_004669db
    PUSH EBX                            ; 004669dc
    CALL core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004669f0 ; 004669dd
        ;   XREF to: 004669f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004669f0(CKeyFramedModel * this_ptr, _FILE * file)
    JMP 0x00466964                      ; 004669e2
        ;   XREF to: 00466964 (UNCONDITIONAL_JUMP)  ; LAB_00466964

