; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet *this_ptr,CDemonLight *light)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[6]:
;   core_boxactor.cpp_CLightActor_process_FUN_0041f3d0 at 0041f5e1
;   core_elephant.cpp_CElephantGun_process_FUN_004777a0 at 0047787b
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7b8e
;   core_set.cpp_CDemonSet_renderScene_FUN_00509a80 at 00509ac8
;   core_shotgun.cpp_CShotgun_process_FUN_00515db0 at 00515e8b
;   core_weapon.cpp_CWeapon_process_FUN_00554030 at 00554160
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_0059058a
;   TerminatedCString s_Too_many_dynamic_lights_0059059a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01fba2d8
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a970
        ;   Label: core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
    PUSH ESI                            ; 0050a971
    MOV ESI,dword ptr [0x01fba2d8]      ; 0050a972 | DAT_01fba2d8
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050a978
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0050a97c
    JZ 0x0050a9ba                       ; 0050a983
        ;   XREF to: 0050a9ba (CONDITIONAL_JUMP)  ; LAB_0050a9ba
    TEST ESI,ESI                        ; 0050a985
    JLE 0x0050a9a1                      ; 0050a987
        ;   XREF to: 0050a9a1 (CONDITIONAL_JUMP)  ; LAB_0050a9a1
    LEA EDX,[ESI*0x4 + 0x0]             ; 0050a989
    XOR EAX,EAX                         ; 0050a990
    CMP EBX,dword ptr [EAX + 0x1fba2dc] ; 0050a992
        ;   Label: LAB_0050a992
    JZ 0x0050a9ba                       ; 0050a998
        ;   XREF to: 0050a9ba (CONDITIONAL_JUMP)  ; LAB_0050a9ba
    ADD EAX,0x4                         ; 0050a99a
    CMP EAX,EDX                         ; 0050a99d
    JL 0x0050a992                       ; 0050a99f
        ;   XREF to: 0050a992 (CONDITIONAL_JUMP)  ; LAB_0050a992
    MOV dword ptr [0x01fba2d8],ESI      ; 0050a9a1 | DAT_01fba2d8
        ;   Label: LAB_0050a9a1
    CMP ESI,0x4                         ; 0050a9a7
    JGE 0x0050a9c3                      ; 0050a9aa
        ;   XREF to: 0050a9c3 (CONDITIONAL_JUMP)  ; LAB_0050a9c3
    MOV ESI,dword ptr [0x01fba2d8]      ; 0050a9ac | DAT_01fba2d8
        ;   Label: LAB_0050a9ac
    INC ESI                             ; 0050a9b2
    MOV dword ptr [ESI*0x4 + 0x1fba2d8],EBX ; 0050a9b3 | DAT_01fba2d8
    MOV dword ptr [0x01fba2d8],ESI      ; 0050a9ba | DAT_01fba2d8
        ;   Label: LAB_0050a9ba
    POP ESI                             ; 0050a9c0
    POP EBX                             ; 0050a9c1
    RET                                 ; 0050a9c2
    PUSH EDI                            ; 0050a9c3
        ;   Label: LAB_0050a9c3
    MOV ECX,0x59058a                    ; 0050a9c4 | = "..\\core\\set.cpp"
    MOV EDI,0x865                       ; 0050a9c9
    PUSH 0x59059a                       ; 0050a9ce | = "Too many dynamic lights!"
    MOV dword ptr [0x01cc4800],ECX      ; 0050a9d3 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 0050a9d9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050a9df
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0050a9e4
    POP EDI                             ; 0050a9e7
    JMP 0x0050a9ac                      ; 0050a9e8
        ;   XREF to: 0050a9ac (UNCONDITIONAL_JUMP)  ; LAB_0050a9ac

