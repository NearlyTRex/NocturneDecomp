; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005191f0(int param_1,char *param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_getDeformableModel_FUN_0051f570 at 0051f629
;
; Referenced Globals:
;   TerminatedCString s_rt_00591693
;   TerminatedCString s_models_00591696
;   TerminatedCString s_core_skeleton_cpp_0059169d
;   TerminatedCString s_CDeformableModel_load_Ca_005916b2
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
;   crt_stdio.c_fclose_FUN_00563380
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005191f0
        ;   Label: core_skeleton.cpp_CDeformableModel_load_FUN_005191f0
    PUSH ESI                            ; 005191f1
    PUSH EDI                            ; 005191f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005191f3
    MOV EDI,dword ptr [ESP + 0x10]      ; 005191f7
    MOV ESI,EBX                         ; 005191fb
    ADD EDI,0x2a70                      ; 005191fd
    PUSH EDI                            ; 00519203
    MOV AL,byte ptr [ESI]               ; 00519204
        ;   Label: LAB_00519204
    MOV byte ptr [EDI],AL               ; 00519206
    CMP AL,0x0                          ; 00519208
    JZ 0x0051921c                       ; 0051920a
        ;   XREF to: 0051921c (CONDITIONAL_JUMP)  ; LAB_0051921c
    MOV AL,byte ptr [ESI + 0x1]         ; 0051920c
    ADD ESI,0x2                         ; 0051920f
    MOV byte ptr [EDI + 0x1],AL         ; 00519212
    ADD EDI,0x2                         ; 00519215
    CMP AL,0x0                          ; 00519218
    JNZ 0x00519204                      ; 0051921a
        ;   XREF to: 00519204 (CONDITIONAL_JUMP)  ; LAB_00519204
    POP EDI                             ; 0051921c
        ;   Label: LAB_0051921c
    PUSH 0x591693                       ; 0051921d | = "rt"
    PUSH EBX                            ; 00519222
    PUSH 0x591696                       ; 00519223 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00519228
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0051922d
    MOV EDI,EAX                         ; 00519230
    TEST EAX,EAX                        ; 00519232
    JZ 0x00519251                       ; 00519234
        ;   XREF to: 00519251 (CONDITIONAL_JUMP)  ; LAB_00519251
    PUSH EDI                            ; 00519236
        ;   Label: LAB_00519236
    MOV EBX,dword ptr [ESP + 0x14]      ; 00519237
    PUSH EBX                            ; 0051923b
    CALL core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280 ; 0051923c
        ;   XREF to: 00519280 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280()
    ADD ESP,0x8                         ; 00519241
    PUSH EDI                            ; 00519244
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00519245
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0051924a
    POP EDI                             ; 0051924d
    POP ESI                             ; 0051924e
    POP EBX                             ; 0051924f
    RET                                 ; 00519250
    PUSH EBX                            ; 00519251
        ;   Label: LAB_00519251
    MOV EDX,0x59169d                    ; 00519252 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x4b2                       ; 00519257
    PUSH 0x5916b2                       ; 0051925c | = "CDeformableModel::load - Can't open %s"
    MOV dword ptr [0x01cc4800],EDX      ; 00519261 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00519267 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051926d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00519272
    JMP 0x00519236                      ; 00519275
        ;   XREF to: 00519236 (UNCONDITIONAL_JUMP)  ; LAB_00519236

