; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkaddr_0059c270_cpp_CGameHook_formatFlag_FUN_0059c380(CGameHook *this_ptr,undefined4 param_2,int param_3,char *param_4)
;
; Parameters:
; CGameHook *      Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; char *           Stack[0x10]:4   param_4
;
; XREF[1]:
;   unkaddr_0059c270.cpp_CGameHook_showDebugMenu_FUN_0059c3d0 at 0059c43e
;
; Referenced Globals:
;   TerminatedCString s_s_OFF_i_005ef700
;   TerminatedCString s_s_ON_i_005ef70c
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059c380
        ;   Label: unkaddr_0059c270.cpp_CGameHook_formatFlag_FUN_0059c380
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059c384
    MOV ECX,dword ptr [ESP + 0x10]      ; 0059c388
    TEST EAX,EAX                        ; 0059c38c
    JNZ 0x0059c3a1                      ; 0059c38e
        ;   XREF to: 0059c3a1 (CONDITIONAL_JUMP)  ; LAB_0059c3a1
    PUSH EAX                            ; 0059c390
    PUSH EDX                            ; 0059c391
    PUSH 0x5ef700                       ; 0059c392 | = "%s:OFF (%i)"
    PUSH ECX                            ; 0059c397
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0059c398
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0059c39d
    RET                                 ; 0059c3a0
    PUSH EAX                            ; 0059c3a1
        ;   Label: LAB_0059c3a1
    PUSH EDX                            ; 0059c3a2
    PUSH 0x5ef70c                       ; 0059c3a3 | = "%s:ON (%i)"
    PUSH ECX                            ; 0059c3a8
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0059c3a9
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0059c3ae
    RET                                 ; 0059c3b1

