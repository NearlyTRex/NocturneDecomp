; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_004543b0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 at 00454518
;   core_elephant.cpp_CElephantGun_onFired_FUN_00477fd0 at 00478093
;   core_fire.cpp_loadDynamiteAssets_FUN_004876a0 at 004876a5
;   core_gun.cpp_CGun_fire_FUN_004b27c0 at 004b2b15
;   core_shotgun.cpp_CShotgun_onFired_FUN_00516620 at 005166f2
;   core_tommygun.cpp_FUN_00545c30 at 00546022
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057ce51
;   TerminatedCString s_Can_t_load_s_because_key_0057ce64
;   undefined4 DAT_01abb658
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
;   core_main.c_FUN_004c8440
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004543b0
        ;   Label: core_dmodel.cpp_loadModel_FUN_004543b0
    PUSH ESI                            ; 004543b1
    PUSH EDI                            ; 004543b2
    PUSH EBP                            ; 004543b3
    MOV EBP,ESP                         ; 004543b4
    MOV EDI,dword ptr [EBP + 0x14]      ; 004543b6
    MOV EDX,dword ptr [0x01abb658]      ; 004543b9 | DAT_01abb658
    XOR ESI,ESI                         ; 004543bf
    TEST EDX,EDX                        ; 004543c1
    JLE 0x004543e9                      ; 004543c3
        ;   XREF to: 004543e9 (CONDITIONAL_JUMP)  ; LAB_004543e9
    MOV EBX,0x1abb65c                   ; 004543c5
    PUSH EDI                            ; 004543ca
        ;   Label: LAB_004543ca
    PUSH EBX                            ; 004543cb
    CALL crt_string.c__stricmp_FUN_00564520 ; 004543cc
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004543d1
    TEST EAX,EAX                        ; 004543d4
    JZ 0x0045444b                       ; 004543d6
        ;   XREF to: 0045444b (CONDITIONAL_JUMP)  ; LAB_0045444b
    MOV ECX,dword ptr [0x01abb658]      ; 004543d8 | DAT_01abb658
    INC ESI                             ; 004543de
    ADD EBX,0x398                       ; 004543df
    CMP ESI,ECX                         ; 004543e5
    JL 0x004543ca                       ; 004543e7
        ;   XREF to: 004543ca (CONDITIONAL_JUMP)  ; LAB_004543ca
    CMP dword ptr [0x01abb658],0x100    ; 004543e9 | DAT_01abb658
        ;   Label: LAB_004543e9
    JL 0x0045441d                       ; 004543f3
        ;   XREF to: 0045441d (CONDITIONAL_JUMP)  ; LAB_0045441d
    PUSH 0x100                          ; 004543f5
    PUSH EDI                            ; 004543fa
    MOV ESI,0x57ce51                    ; 004543fb | = "..\\core\\dmodel.cpp"
    MOV EAX,0x4cd                       ; 00454400
    PUSH 0x57ce64                       ; 00454405 | = "Can't load %s because keyFrame model ..."
    MOV dword ptr [0x01cc4800],ESI      ; 0045440a | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00454410 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00454415
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 0045441a
    MOV EDX,dword ptr [0x01abb658]      ; 0045441d | DAT_01abb658
        ;   Label: LAB_0045441d
    IMUL EBX,EDX,0x398                  ; 00454423
    PUSH EDI                            ; 00454429
    ADD EBX,0x1abb65c                   ; 0045442a
    LEA ECX,[EDX + 0x1]                 ; 00454430
    PUSH EBX                            ; 00454433
    MOV dword ptr [0x01abb658],ECX      ; 00454434 | DAT_01abb658
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 ; 0045443a
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0045443f
    PUSH EBX                            ; 00454442
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950 ; 00454443
        ;   XREF to: 00453950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00454448
    MOV EAX,EBX                         ; 0045444b
        ;   Label: LAB_0045444b
    POP EBP                             ; 0045444d
    POP EDI                             ; 0045444e
    POP ESI                             ; 0045444f
    POP EBX                             ; 00454450
    RET                                 ; 00454451

