; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040c240(char *className)
;
; Parameters:
; char *           Stack[0x4]:4   className
;
; XREF[2]:
;   core_actor.cpp_createActorByName_FUN_0040c2b0 at 0040c2b8
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0 at 0051a6ee
;
; Referenced Globals:
;   undefined4 DAT_00626114
;   undefined4 DAT_007c3044
;   undefined4 DAT_007c3048
;   undefined4 DAT_007c304c
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005c0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c240
        ;   Label: core_actor.cpp_getActorClassByName_FUN_0040c240
    PUSH ESI                            ; 0040c241
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c242
    XOR EBX,EBX                         ; 0040c246
    XOR EAX,EAX                         ; 0040c248
        ;   Label: LAB_0040c248
    MOV AL,byte ptr [ESI]               ; 0040c24a
    INC ESI                             ; 0040c24c
    TEST EAX,EAX                        ; 0040c24d
    JNZ 0x0040c277                      ; 0040c24f
        ;   XREF to: 0040c277 (CONDITIONAL_JUMP)  ; LAB_0040c277
    MOV EDX,dword ptr [0x007c3044]      ; 0040c251 | DAT_007c3044
    MOV ESI,EBX                         ; 0040c257
    TEST EDX,EDX                        ; 0040c259
    JLE 0x0040c272                      ; 0040c25b
        ;   XREF to: 0040c272 (CONDITIONAL_JUMP)  ; LAB_0040c272
    SHL EDX,0x2                         ; 0040c25d
    MOV EBX,dword ptr [EAX + 0x7c3048]  ; 0040c260 | DAT_007c3048 | DAT_007c304c
        ;   Label: LAB_0040c260
    CMP ESI,dword ptr [EBX + 0x38]      ; 0040c266
    JZ 0x0040c2a8                       ; 0040c269
        ;   XREF to: 0040c2a8 (CONDITIONAL_JUMP)  ; LAB_0040c2a8
    ADD EAX,0x4                         ; 0040c26b
    CMP EAX,EDX                         ; 0040c26e
    JL 0x0040c260                       ; 0040c270
        ;   XREF to: 0040c260 (CONDITIONAL_JUMP)  ; LAB_0040c260
    XOR EAX,EAX                         ; 0040c272
        ;   Label: LAB_0040c272
    POP ESI                             ; 0040c274
    POP EBX                             ; 0040c275
    RET                                 ; 0040c276
    MOV DL,AL                           ; 0040c277
        ;   Label: LAB_0040c277
    INC DL                              ; 0040c279
    AND EDX,0xff                        ; 0040c27b
    TEST byte ptr [EDX + 0x626114],0xe0 ; 0040c281 | DAT_00626114
    JZ 0x0040c248                       ; 0040c288
        ;   XREF to: 0040c248 (CONDITIONAL_JUMP)  ; LAB_0040c248
    PUSH EAX                            ; 0040c28a
    CALL crt_ctype.c_tolower_FUN_005c0820 ; 0040c28b
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005c0820(int character)
    MOV EDX,EBX                         ; 0040c290
    SHL EDX,0x7                         ; 0040c292
    SHR EBX,0x19                        ; 0040c295
    ADD EDX,EBX                         ; 0040c298
    MOV EBX,EAX                         ; 0040c29a
    SHL EBX,0x11                        ; 0040c29c
    ADD EBX,EDX                         ; 0040c29f
    ADD ESP,0x4                         ; 0040c2a1
    ADD EBX,EAX                         ; 0040c2a4
    JMP 0x0040c248                      ; 0040c2a6
        ;   XREF to: 0040c248 (UNCONDITIONAL_JUMP)  ; LAB_0040c248
    MOV EAX,EBX                         ; 0040c2a8
        ;   Label: LAB_0040c2a8
    POP ESI                             ; 0040c2aa
    POP EBX                             ; 0040c2ab
    RET                                 ; 0040c2ac

