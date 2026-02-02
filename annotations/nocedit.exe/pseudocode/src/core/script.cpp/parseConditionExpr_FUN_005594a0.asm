; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_parseConditionExpr_FUN_005594a0(char **cursor,char *out_buffer)
;
; Parameters:
; char * *         Stack[0x4]:4   cursor
; char *           Stack[0x8]:4   out_buffer
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055be43
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;   int g_ScriptEventsEnabled
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004add00
;   core_script.cpp_parseArgument_FUN_005593f0
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 005594a0
        ;   Label: core_script.cpp_parseConditionExpr_FUN_005594a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005594a2
    PUSH EDX                            ; 005594a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 005594a7
    PUSH ECX                            ; 005594ab
    CALL core_script.cpp_parseArgument_FUN_005593f0 ; 005594ac
        ;   XREF to: 005593f0 (UNCONDITIONAL_CALL)  ; char * core_script.cpp_parseArgument_FUN_005593f0(char * * cursor, char * out_buffer, int max_length)
    ADD ESP,0xc                         ; 005594b1
    TEST EAX,EAX                        ; 005594b4
    JNZ 0x005594c1                      ; 005594b6
        ;   XREF to: 005594c1 (CONDITIONAL_JUMP)  ; LAB_005594c1
    CMP dword ptr [0x0310ec9c],0x0      ; 005594b8 | g_ScriptEventsEnabled
    JNZ 0x005594c2                      ; 005594bf
        ;   XREF to: 005594c2 (CONDITIONAL_JUMP)  ; LAB_005594c2
    RET                                 ; 005594c1
        ;   Label: LAB_005594c1
    PUSH EDI                            ; 005594c2
        ;   Label: LAB_005594c2
    PUSH ESI                            ; 005594c3
    MOV ESI,dword ptr [ESP + 0x10]      ; 005594c4
    PUSH ESI                            ; 005594c8
    MOV EDI,dword ptr [0x006793d0]      ; 005594c9 | g_CEventListPtr
    PUSH EDI                            ; 005594cf | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004add00 ; 005594d0
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004add00(CEventList * this_ptr)
    ADD ESP,0x8                         ; 005594d5
    POP ESI                             ; 005594d8
    POP EDI                             ; 005594d9
    RET                                 ; 005594da

