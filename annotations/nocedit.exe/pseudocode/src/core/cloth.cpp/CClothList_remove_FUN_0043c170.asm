; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_cloth.cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fcab
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0061860f
;   TerminatedCString s_CClothList_remove_invali_00618621
;   TerminatedCString s_core_cloth_cpp_00618644
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c170
        ;   Label: core_cloth.cpp_CClothList_remove_FUN_0043c170
    PUSH ESI                            ; 0043c171
    PUSH EDI                            ; 0043c172
    PUSH EBP                            ; 0043c173
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043c174
    TEST EBP,EBP                        ; 0043c178
    JL 0x0043c184                       ; 0043c17a
        ;   XREF to: 0043c184 (CONDITIONAL_JUMP)  ; LAB_0043c184
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043c17c
    CMP EBP,dword ptr [EAX]             ; 0043c180
    JL 0x0043c1a7                       ; 0043c182
        ;   XREF to: 0043c1a7 (CONDITIONAL_JUMP)  ; LAB_0043c1a7
    MOV ECX,0x61860f                    ; 0043c184 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043c184
    MOV EBX,0x5e4                       ; 0043c189
    PUSH 0x618621                       ; 0043c18e | = "CClothList::remove - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 0043c193 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0043c199 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043c19f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043c1a4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043c1a7
        ;   Label: LAB_0043c1a7
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043c1ab
    MOV EDI,0x5e8                       ; 0043c1b2
    ADD EAX,EDX                         ; 0043c1b7
    MOV ESI,0x618644                    ; 0043c1b9 | = "..\\core\\cloth.cpp"
    MOV dword ptr [0x02f0d944],EDI      ; 0043c1be | g_CurrentDebugLine
    MOV EAX,dword ptr [EAX + 0x194]     ; 0043c1c4
    MOV dword ptr [0x0067d20c],ESI      ; 0043c1ca | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 0043c1d0
    JZ 0x0043c1e8                       ; 0043c1d2
        ;   XREF to: 0043c1e8 (CONDITIONAL_JUMP)  ; LAB_0043c1e8
    PUSH 0x0                            ; 0043c1d4
    PUSH EAX                            ; 0043c1d6
    CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 ; 0043c1d7
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00()
    ADD ESP,0x8                         ; 0043c1dc
    PUSH EAX                            ; 0043c1df
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0043c1e0
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0043c1e5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043c1e8
        ;   Label: LAB_0043c1e8
    INC EBP                             ; 0043c1ec
    CMP EBP,dword ptr [EAX]             ; 0043c1ed
    JGE 0x0043c250                      ; 0043c1ef
        ;   XREF to: 0043c250 (CONDITIONAL_JUMP)  ; LAB_0043c250
    LEA ECX,[EBP*0x4 + 0x0]             ; 0043c1f1
    LEA ESI,[EAX + 0x4]                 ; 0043c1f8
    ADD ECX,EAX                         ; 0043c1fb
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043c1fd
    ADD EAX,EBP                         ; 0043c204
    SHL EAX,0x3                         ; 0043c206
    LEA EBX,[EAX + -0x28]               ; 0043c209
    ADD EBX,ESI                         ; 0043c20c
    LEA EDX,[EAX + ESI*0x1]             ; 0043c20e
    MOV ESI,EDX                         ; 0043c211
        ;   Label: LAB_0043c211
    MOV EDI,EBX                         ; 0043c213
    ADD ECX,0x4                         ; 0043c215
    PUSH EDI                            ; 0043c218
    MOV AL,byte ptr [ESI]               ; 0043c219
        ;   Label: LAB_0043c219
    MOV byte ptr [EDI],AL               ; 0043c21b
    CMP AL,0x0                          ; 0043c21d
    JZ 0x0043c231                       ; 0043c21f
        ;   XREF to: 0043c231 (CONDITIONAL_JUMP)  ; LAB_0043c231
    MOV AL,byte ptr [ESI + 0x1]         ; 0043c221
    ADD ESI,0x2                         ; 0043c224
    MOV byte ptr [EDI + 0x1],AL         ; 0043c227
    ADD EDI,0x2                         ; 0043c22a
    CMP AL,0x0                          ; 0043c22d
    JNZ 0x0043c219                      ; 0043c22f
        ;   XREF to: 0043c219 (CONDITIONAL_JUMP)  ; LAB_0043c219
    POP EDI                             ; 0043c231
        ;   Label: LAB_0043c231
    MOV EAX,dword ptr [ECX + 0x190]     ; 0043c232
    MOV dword ptr [ECX + 0x18c],EAX     ; 0043c238
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043c23e
    INC EBP                             ; 0043c242
    ADD EBX,0x28                        ; 0043c243
    MOV ESI,dword ptr [EAX]             ; 0043c246
    ADD EDX,0x28                        ; 0043c248
    CMP EBP,ESI                         ; 0043c24b
    JL 0x0043c211                       ; 0043c24d
        ;   XREF to: 0043c211 (CONDITIONAL_JUMP)  ; LAB_0043c211
    NOP                                 ; 0043c24f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043c250
        ;   Label: LAB_0043c250
    MOV EBP,dword ptr [EAX]             ; 0043c254
    DEC EBP                             ; 0043c256
    MOV dword ptr [EAX],EBP             ; 0043c257
    LEA EAX,[EBP*0x4 + 0x0]             ; 0043c259
    ADD EAX,EBP                         ; 0043c260
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043c262
    SHL EAX,0x3                         ; 0043c266
    ADD EAX,EDX                         ; 0043c269
    MOV byte ptr [EAX + 0x4],0x0        ; 0043c26b
    MOV EAX,dword ptr [EDX]             ; 0043c26f
    SHL EAX,0x2                         ; 0043c271
    ADD EAX,EDX                         ; 0043c274
    MOV dword ptr [EAX + 0x194],0x0     ; 0043c276
    POP EBP                             ; 0043c280
    POP EDI                             ; 0043c281
    POP ESI                             ; 0043c282
    POP EBX                             ; 0043c283
    RET                                 ; 0043c284

