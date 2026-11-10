; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_loadSkeleton_FUN_005501e0(char *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750 at 00548762
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d2297
;   TerminatedCString s_Can_t_load_s_because_ske_005d22ac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cd28bc
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CSkeleton_load_FUN_00547c20
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005501e0
        ;   Label: core_skeleton.cpp_loadSkeleton_FUN_005501e0
    PUSH ESI                            ; 005501e1
    PUSH EDI                            ; 005501e2
    PUSH EBP                            ; 005501e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005501e4
    MOV ESI,0x280305c                   ; 005501e8
    XOR EBX,EBX                         ; 005501ed
    ADD ESI,0x1de28                     ; 005501ef
    IMUL EAX,EBX,0x1ec9c                ; 005501f5
        ;   Label: LAB_005501f5
    PUSH EBP                            ; 005501fb
    MOV EDI,0x280305c                   ; 005501fc
    PUSH ESI                            ; 00550201
    ADD EDI,EAX                         ; 00550202
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00550204
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00550209
    TEST EAX,EAX                        ; 0055020c
    JZ 0x00550283                       ; 0055020e
        ;   XREF to: 00550283 (CONDITIONAL_JUMP)  ; LAB_00550283
    INC EBX                             ; 00550214
    ADD ESI,0x1ec9c                     ; 00550215
    CMP EBX,0x28                        ; 0055021b
    JL 0x005501f5                       ; 0055021e
        ;   XREF to: 005501f5 (CONDITIONAL_JUMP)  ; LAB_005501f5
    MOV EDX,dword ptr [0x02cd28bc]      ; 00550220 | DAT_02cd28bc
    XOR EBX,EBX                         ; 00550226
    XOR EAX,EAX                         ; 00550228
    TEST EDX,EDX                        ; 0055022a
    JZ 0x00550243                       ; 0055022c
        ;   XREF to: 00550243 (CONDITIONAL_JUMP)  ; LAB_00550243
    ADD EBX,0x4                         ; 0055022e
        ;   Label: LAB_0055022e
    INC EAX                             ; 00550231
    CMP EBX,0xa0                        ; 00550232
    JGE 0x00550296                      ; 00550238
        ;   XREF to: 00550296 (CONDITIONAL_JUMP)  ; LAB_00550296
    CMP dword ptr [EBX + 0x2cd28bc],0x0 ; 0055023a
    JNZ 0x0055022e                      ; 00550241
        ;   XREF to: 0055022e (CONDITIONAL_JUMP)  ; LAB_0055022e
    MOV ESI,EAX                         ; 00550243
        ;   Label: LAB_00550243
    SHL EAX,0x3                         ; 00550245
    SUB EAX,ESI                         ; 00550248
    SHL EAX,0x4                         ; 0055024a
    ADD EAX,ESI                         ; 0055024d
    SHL EAX,0x2                         ; 0055024f
    MOV ESI,EAX                         ; 00550252
    SHL EAX,0x3                         ; 00550254
    ADD EAX,ESI                         ; 00550257
    MOV ESI,EAX                         ; 00550259
    SHL EAX,0x5                         ; 0055025b
    SUB EAX,ESI                         ; 0055025e
    MOV ESI,0x280305c                   ; 00550260
    PUSH EBP                            ; 00550265
    ADD ESI,EAX                         ; 00550266
    PUSH ESI                            ; 00550268
    MOV EDI,0x1                         ; 00550269
    CALL core_skeleton.cpp_CSkeleton_load_FUN_00547c20 ; 0055026e
        ;   XREF to: 00547c20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_load_FUN_00547c20(CSkeleton * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00550273
    MOV EAX,ESI                         ; 00550276
    MOV dword ptr [EBX + 0x2cd28bc],EDI ; 00550278
    POP EBP                             ; 0055027e
    POP EDI                             ; 0055027f
    POP ESI                             ; 00550280
    POP EBX                             ; 00550281
    RET                                 ; 00550282
    MOV ECX,0x1                         ; 00550283
        ;   Label: LAB_00550283
    MOV EAX,EDI                         ; 00550288
    MOV dword ptr [EBX*0x4 + 0x2cd28bc],ECX ; 0055028a | DAT_02cd28bc
    POP EBP                             ; 00550291
    POP EDI                             ; 00550292
    POP ESI                             ; 00550293
    POP EBX                             ; 00550294
    RET                                 ; 00550295
    PUSH 0x28                           ; 00550296
        ;   Label: LAB_00550296
    PUSH EBP                            ; 00550298
    MOV EAX,0x5d2297                    ; 00550299 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x10ac                      ; 0055029e
    PUSH 0x5d22ac                       ; 005502a3 | = "Can't load %s because skeleton manage..."
    MOV [0x01d71de0],EAX                ; 005502a8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005502ad | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005502b3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005502b8
    XOR EAX,EAX                         ; 005502bb
    POP EBP                             ; 005502bd
    POP EDI                             ; 005502be
    POP ESI                             ; 005502bf
    POP EBX                             ; 005502c0
    RET                                 ; 005502c1

