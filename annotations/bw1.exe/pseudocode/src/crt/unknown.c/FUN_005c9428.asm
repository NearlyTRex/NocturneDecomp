; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c9428(void)
;
; Local Variables:
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   crt_time.c__strftime_FUN_005c2784 at 005c2b53
;   crt_unknown.c_FUN_005c26e0 at 005c26e6
;   crt_unknown.c_FUN_005cc6e0 at 005cc7fb
;
; Referenced Globals:
;   void* PTR_GetTimeZoneInformation_005d05d4 = 001d0fa2
;   undefined4 DAT_005fac00
;   undefined4 DAT_0062688c
;   undefined4 DAT_0062690c
;   undefined1 DAT_0062690d
;   undefined4 DAT_0062698d
;   undefined4 DAT_00626998
;   undefined4 DAT_0062699c
;   undefined4 DAT_006269a0
;   undefined1 DAT_006269a4
;
; Called Functions:
;   crt_env.c_getenv_FUN_005c3050
;   crt_unknown.c_FUN_005c969c
;   crt_unknown.c_FUN_005cc610
;   GetTimeZoneInformation
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c932c
        ;   Label: LAB_005c932c
    PUSH ESI                            ; 005c932d
    SUB ESP,0xac                        ; 005c932e
    MOV AH,byte ptr [0x006269a4]        ; 005c9334 | DAT_006269a4
    TEST AH,0x1                         ; 005c933a
    JZ 0x005c9348                       ; 005c933d
        ;   XREF to: 005c9348 (CONDITIONAL_JUMP)  ; LAB_005c9348
    TEST AH,0x2                         ; 005c933f
    JNZ 0x005c941d                      ; 005c9342
        ;   XREF to: 005c941d (CONDITIONAL_JUMP)  ; LAB_005c941d
    MOV DH,byte ptr [0x006269a4]        ; 005c9348 | DAT_006269a4
        ;   Label: LAB_005c9348
    MOV EAX,ESP                         ; 005c934e
    OR DH,0x2                           ; 005c9350
    PUSH EAX                            ; 005c9353
    MOV byte ptr [0x006269a4],DH        ; 005c9354 | DAT_006269a4
    CALL dword ptr CS:[0x5d05d4]        ; 005c935a | PTR_GetTimeZoneInformation_005d05d4
    CMP EAX,0x1                         ; 005c9361
    JC 0x005c941d                       ; 005c9364
        ;   XREF to: 005c941d (CONDITIONAL_JUMP)  ; LAB_005c941d
    JBE 0x005c93a1                      ; 005c936a
        ;   XREF to: 005c93a1 (CONDITIONAL_JUMP)  ; LAB_005c93a1
    CMP EAX,0x2                         ; 005c936c
    JNZ 0x005c941d                      ; 005c936f
        ;   XREF to: 005c941d (CONDITIONAL_JUMP)  ; LAB_005c941d
    MOV dword ptr [0x0062699c],0x1      ; 005c9375 | DAT_0062699c
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005c937f
    MOV EAX,EDX                         ; 005c9386
    SHL EAX,0x4                         ; 005c9388
    SUB EAX,EDX                         ; 005c938b
    SHL EAX,0x2                         ; 005c938d
    MOV EBX,EAX                         ; 005c9390
    MOV [0x006269a0],EAX                ; 005c9392 | DAT_006269a0
    NEG EBX                             ; 005c9397
    MOV dword ptr [0x006269a0],EBX      ; 005c9399 | DAT_006269a0
    JMP 0x005c93a9                      ; 005c939f
        ;   XREF to: 005c93a9 (UNCONDITIONAL_JUMP)  ; LAB_005c93a9
    XOR ECX,ECX                         ; 005c93a1
        ;   Label: LAB_005c93a1
    MOV dword ptr [0x0062699c],ECX      ; 005c93a3 | DAT_0062699c
    MOV EDX,dword ptr [ESP + 0x54]      ; 005c93a9
        ;   Label: LAB_005c93a9
    MOV ESI,dword ptr [ESP]             ; 005c93ad
    ADD EDX,ESI                         ; 005c93b0
    MOV EAX,EDX                         ; 005c93b2
    SHL EAX,0x4                         ; 005c93b4
    SUB EAX,EDX                         ; 005c93b7
    SHL EAX,0x2                         ; 005c93b9
    PUSH 0x80                           ; 005c93bc
    MOV [0x00626998],EAX                ; 005c93c1 | DAT_00626998
    LEA EAX,[ESP + 0x8]                 ; 005c93c6
    PUSH EAX                            ; 005c93ca
    PUSH 0x62688c                       ; 005c93cb | DAT_0062688c
    CALL crt_unknown.c_FUN_005cc610     ; 005c93d0
        ;   XREF to: 005cc610 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc610()
    ADD ESP,0xc                         ; 005c93d5
    CMP EAX,-0x1                        ; 005c93d8
    JNZ 0x005c93e7                      ; 005c93db
        ;   XREF to: 005c93e7 (CONDITIONAL_JUMP)  ; LAB_005c93e7
    XOR BH,BH                           ; 005c93dd
    MOV byte ptr [0x0062688c],BH        ; 005c93df | DAT_0062688c
    JMP 0x005c93ef                      ; 005c93e5
        ;   XREF to: 005c93ef (UNCONDITIONAL_JUMP)  ; LAB_005c93ef
    XOR BL,BL                           ; 005c93e7
        ;   Label: LAB_005c93e7
    MOV byte ptr [0x0062690c],BL        ; 005c93e9 | DAT_0062690c
    PUSH 0x80                           ; 005c93ef
        ;   Label: LAB_005c93ef
    LEA EAX,[ESP + 0x5c]                ; 005c93f4
    PUSH EAX                            ; 005c93f8
    PUSH 0x62690d                       ; 005c93f9 | DAT_0062690d
    CALL crt_unknown.c_FUN_005cc610     ; 005c93fe
        ;   XREF to: 005cc610 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc610()
    ADD ESP,0xc                         ; 005c9403
    CMP EAX,-0x1                        ; 005c9406
    JNZ 0x005c9415                      ; 005c9409
        ;   XREF to: 005c9415 (CONDITIONAL_JUMP)  ; LAB_005c9415
    XOR CH,CH                           ; 005c940b
    MOV byte ptr [0x0062690d],CH        ; 005c940d | DAT_0062690d
    JMP 0x005c941d                      ; 005c9413
        ;   XREF to: 005c941d (UNCONDITIONAL_JUMP)  ; LAB_005c941d
    XOR CL,CL                           ; 005c9415
        ;   Label: LAB_005c9415
    MOV byte ptr [0x0062698d],CL        ; 005c9417 | DAT_0062698d
    ADD ESP,0xac                        ; 005c941d
        ;   Label: LAB_005c941d
    POP ESI                             ; 005c9423
    POP EBX                             ; 005c9424
    RET                                 ; 005c9425
    PUSH 0x5fac00                       ; 005c9428 | DAT_005fac00
        ;   Label: crt_unknown.c_FUN_005c9428
    CALL crt_env.c_getenv_FUN_005c3050  ; 005c942d
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 005c9432
    TEST EAX,EAX                        ; 005c9435
    JZ 0x005c932c                       ; 005c9437
        ;   XREF to: 005c932c (CONDITIONAL_JUMP)  ; LAB_005c932c
    PUSH EAX                            ; 005c943d
    CALL crt_unknown.c_FUN_005c969c     ; 005c943e
        ;   XREF to: 005c969c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c969c()
    ADD ESP,0x4                         ; 005c9443
    RET                                 ; 005c9446

