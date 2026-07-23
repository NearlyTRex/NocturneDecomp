; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_wateract_cpp_CWaterActor_ctor_FUN_00551220(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_none_005975cb
;   undefined4 s_one_005975cb+1
;   undefined4 s_ne_005975cb+2
;   undefined4 s_e_005975cb+3
;   TerminatedCString s_none_005975d0
;   undefined4 s_one_005975d0+1
;   undefined4 s_ne_005975d0+2
;   undefined4 s_e_005975d0+3
;   undefined1* PTR_core_wateract.cpp_CWaterActor_setup_FUN_00551370_005a3ef4 = 00551370
;   undefined4 DAT_005a3fd0
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00551220
        ;   Label: core_wateract.cpp_CWaterActor_ctor_FUN_00551220
    PUSH EDI                            ; 00551221
    MOV EDX,dword ptr [ESP + 0xc]       ; 00551222
    PUSH EDX                            ; 00551226
    CALL core_actor.cpp_FUN_00409d30    ; 00551227
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 0055122c
    PUSH 0x5a3fd0                       ; 0055122f | DAT_005a3fd0
    PUSH 0x3e8                          ; 00551234
    ADD EAX,0x294                       ; 00551239
    PUSH EAX                            ; 0055123e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0055123f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    LEA EDX,[EAX + 0xfffffd6c]          ; 00551244
    MOV dword ptr [EDX + 0x14c],0x5a3ef4 ; 0055124a | PTR_core_wateract.cpp_CWaterActor_setup_FUN_00551370_005a3ef4
    MOV dword ptr [EDX + 0x150],0x40800000 ; 00551254
    MOV dword ptr [EDX + 0x154],0x3dcccccd ; 0055125e
    MOV dword ptr [EDX + 0x158],0x40800000 ; 00551268
    MOV dword ptr [EDX + 0x15c],0x8000  ; 00551272
    MOV dword ptr [EDX + 0x2b220],0x0   ; 0055127c
    MOV dword ptr [EDX + 0x2b224],0x0   ; 00551286
    MOV dword ptr [EDX + 0xfc],0x1      ; 00551290
    MOV dword ptr [EDX + 0xf8],0x0      ; 0055129a
    MOV dword ptr [EDX + 0x164],0x3f800000 ; 005512a4
    MOV dword ptr [EDX + 0x168],0x3f800000 ; 005512ae
    MOV dword ptr [EDX + 0x160],0x0     ; 005512b8
    MOV ESI,0x5975cb                    ; 005512c2 | = "none"
    MOV dword ptr [EDX + 0x274],0x0     ; 005512c7
    ADD ESP,0xc                         ; 005512d1
    MOV byte ptr [EDX + 0x16c],0x0      ; 005512d4
    LEA EDI,[EDX + 0x1ac]               ; 005512db
    MOV byte ptr [EDX + 0x18c],0x0      ; 005512e1
    PUSH EDI                            ; 005512e8
    MOV AL,byte ptr [ESI]               ; 005512e9 | = "none" | s_ne_005975cb+2
        ;   Label: LAB_005512e9
    MOV byte ptr [EDI],AL               ; 005512eb
    CMP AL,0x0                          ; 005512ed
    JZ 0x00551301                       ; 005512ef
        ;   XREF to: 00551301 (CONDITIONAL_JUMP)  ; LAB_00551301
    MOV AL,byte ptr [ESI + 0x1]         ; 005512f1 | s_one_005975cb+1 | s_e_005975cb+3
    ADD ESI,0x2                         ; 005512f4
    MOV byte ptr [EDI + 0x1],AL         ; 005512f7
    ADD EDI,0x2                         ; 005512fa
    CMP AL,0x0                          ; 005512fd
    JNZ 0x005512e9                      ; 005512ff
        ;   XREF to: 005512e9 (CONDITIONAL_JUMP)  ; LAB_005512e9
    POP EDI                             ; 00551301
        ;   Label: LAB_00551301
    MOV ESI,0x5975d0                    ; 00551302 | = "none"
    LEA EDI,[EDX + 0x210]               ; 00551307
    PUSH EDI                            ; 0055130d
    MOV AL,byte ptr [ESI]               ; 0055130e | = "none" | s_ne_005975d0+2
        ;   Label: LAB_0055130e
    MOV byte ptr [EDI],AL               ; 00551310
    CMP AL,0x0                          ; 00551312
    JZ 0x00551326                       ; 00551314
        ;   XREF to: 00551326 (CONDITIONAL_JUMP)  ; LAB_00551326
    MOV AL,byte ptr [ESI + 0x1]         ; 00551316 | s_one_005975d0+1 | s_e_005975d0+3
    ADD ESI,0x2                         ; 00551319
    MOV byte ptr [EDI + 0x1],AL         ; 0055131c
    ADD EDI,0x2                         ; 0055131f
    CMP AL,0x0                          ; 00551322
    JNZ 0x0055130e                      ; 00551324
        ;   XREF to: 0055130e (CONDITIONAL_JUMP)  ; LAB_0055130e
    POP EDI                             ; 00551326
        ;   Label: LAB_00551326
    MOV dword ptr [EDX + 0x278],0x0     ; 00551327
    MOV dword ptr [EDX + 0x27c],0x3f800000 ; 00551331
    MOV dword ptr [EDX + 0x280],0x0     ; 0055133b
    MOV dword ptr [EDX + 0x28c],0xff    ; 00551345
    MOV EAX,dword ptr [EDX + 0x28c]     ; 0055134f
    MOV dword ptr [EDX + 0x288],EAX     ; 00551355
    MOV dword ptr [EDX + 0x284],EAX     ; 0055135b
    MOV EAX,EDX                         ; 00551361
    POP EDI                             ; 00551363
    POP ESI                             ; 00551364
    RET                                 ; 00551365

