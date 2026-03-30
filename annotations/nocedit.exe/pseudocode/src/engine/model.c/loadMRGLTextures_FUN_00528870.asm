; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
; Local Variables:
; SMRGLTextureBasic Stack[-0x30]:24  SStack_30
; SMRGLTextureBasic * Stack[-0x18]:4  local_18
; SMRGLTextureBasic * Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_model.c_initializeMRGLModel_FUN_00528940 at 00528957
;
; Called Functions:
;   engine_boss.c_modelStructNotSupported5_FUN_0041dc20
;   engine_model.c_getMRGLSize_FUN_00528700
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528870
        ;   Label: engine_model.c_loadMRGLTextures_FUN_00528870
    PUSH ESI                            ; 00528871
    PUSH EDI                            ; 00528872
    PUSH EBP                            ; 00528873
    SUB ESP,0x20                        ; 00528874
    MOV EBX,dword ptr [ESP + 0x34]      ; 00528877
    MOV EDX,dword ptr [EBX]             ; 0052887b
    CMP EDX,0x26                        ; 0052887d
    JZ 0x005288c9                       ; 00528880
        ;   XREF to: 005288c9 (CONDITIONAL_JUMP)  ; LAB_005288c9
    MOV EAX,EBX                         ; 00528882
    MOV dword ptr [ESP + 0x18],EBX      ; 00528884
    TEST EDX,EDX                        ; 00528888
    JZ 0x005288c1                       ; 0052888a
        ;   XREF to: 005288c1 (CONDITIONAL_JUMP)  ; LAB_005288c1
    MOV EBP,dword ptr [EAX]             ; 0052888c
        ;   Label: LAB_0052888c
    CMP EBP,0xd                         ; 0052888e
    JZ 0x00528898                       ; 00528891
        ;   XREF to: 00528898 (CONDITIONAL_JUMP)  ; LAB_00528898
    CMP EBP,0x40                        ; 00528893
    JNZ 0x005288d4                      ; 00528896
        ;   XREF to: 005288d4 (CONDITIONAL_JUMP)  ; LAB_005288d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00528898
        ;   Label: LAB_00528898
    PUSH ESI                            ; 0052889c
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0052889d
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 005288a2
    MOV EBX,dword ptr [ESP + 0x18]      ; 005288a5
        ;   Label: LAB_005288a5
    PUSH EBX                            ; 005288a9
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 005288aa
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 005288af
    LEA ESI,[EBX + EAX*0x1]             ; 005288b2
    MOV dword ptr [ESP + 0x18],ESI      ; 005288b5
    MOV EDI,dword ptr [ESI]             ; 005288b9
    MOV EAX,ESI                         ; 005288bb
    TEST EDI,EDI                        ; 005288bd
    JNZ 0x0052888c                      ; 005288bf
        ;   XREF to: 0052888c (CONDITIONAL_JUMP)  ; LAB_0052888c
    ADD ESP,0x20                        ; 005288c1
        ;   Label: LAB_005288c1
    POP EBP                             ; 005288c4
    POP EDI                             ; 005288c5
    POP ESI                             ; 005288c6
    POP EBX                             ; 005288c7
    RET                                 ; 005288c8
    PUSH EBX                            ; 005288c9
        ;   Label: LAB_005288c9
    CALL engine_boss.c_modelStructNotSupported5_FUN_0041dc20 ; 005288ca
        ;   XREF to: 0041dc20 (UNCONDITIONAL_CALL)  ; void engine_boss.c_modelStructNotSupported5_FUN_0041dc20(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 005288cf
    JMP 0x005288c1                      ; 005288d2
        ;   XREF to: 005288c1 (UNCONDITIONAL_JUMP)  ; LAB_005288c1
    CMP EBP,0x1d                        ; 005288d4
        ;   Label: LAB_005288d4
    JNZ 0x005288a5                      ; 005288d7
        ;   XREF to: 005288a5 (CONDITIONAL_JUMP)  ; LAB_005288a5
    MOV EAX,dword ptr [ESP + 0x18]      ; 005288d9
    XOR EBP,EBP                         ; 005288dd
    MOV EBX,dword ptr [EAX + 0x8]       ; 005288df
    MOV dword ptr [ESP + 0x1c],EAX      ; 005288e2
    TEST EBX,EBX                        ; 005288e6
    JLE 0x005288a5                      ; 005288e8
        ;   XREF to: 005288a5 (CONDITIONAL_JUMP)  ; LAB_005288a5
    LEA EBX,[EAX + 0x1c]                ; 005288ea
    XOR EDI,EDI                         ; 005288ed
        ;   Label: LAB_005288ed
    MOV ESI,EBX                         ; 005288ef
    MOV dword ptr [ESP + 0x4],EDI       ; 005288f1
    LEA EDI,[ESP + 0x8]                 ; 005288f5
    PUSH EDI                            ; 005288f9
    MOV AL,byte ptr [ESI]               ; 005288fa
        ;   Label: LAB_005288fa
    MOV byte ptr [EDI],AL               ; 005288fc
    CMP AL,0x0                          ; 005288fe
    JZ 0x00528912                       ; 00528900
        ;   XREF to: 00528912 (CONDITIONAL_JUMP)  ; LAB_00528912
    MOV AL,byte ptr [ESI + 0x1]         ; 00528902
    ADD ESI,0x2                         ; 00528905
    MOV byte ptr [EDI + 0x1],AL         ; 00528908
    ADD EDI,0x2                         ; 0052890b
    CMP AL,0x0                          ; 0052890e
    JNZ 0x005288fa                      ; 00528910
        ;   XREF to: 005288fa (CONDITIONAL_JUMP)  ; LAB_005288fa
    POP EDI                             ; 00528912
        ;   Label: LAB_00528912
    MOV EDI,ESP                         ; 00528913
    PUSH EDI                            ; 00528915
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 00528916
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 0052891b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052891e
    INC EBP                             ; 00528922
    MOV EDX,dword ptr [EAX + 0x8]       ; 00528923
    ADD EBX,0x20                        ; 00528926
    CMP EBP,EDX                         ; 00528929
    JL 0x005288ed                       ; 0052892b
        ;   XREF to: 005288ed (CONDITIONAL_JUMP)  ; LAB_005288ed
    JMP 0x005288a5                      ; 0052892d
        ;   XREF to: 005288a5 (UNCONDITIONAL_JUMP)  ; LAB_005288a5

