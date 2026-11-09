; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004f68d0(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor_ptr
; _FILE *          Stack[0xc]:4   file
; CDemonActor *    Stack[0x10]:4   current_actor
; char *           Stack[0x14]:4   description
;
; XREF[1]:
;   core_actor.cpp_archiveActor_FUN_0040b930 at 0040b9a2
;
; Referenced Globals:
;   undefined4 DAT_005c899c
;   undefined4 DAT_005c89a1
;   TerminatedCString s_s_005c89a6
;   undefined4 DAT_005c89af
;   TerminatedCString s_none_00600670
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f68d0
        ;   Label: core_mission.cpp_CDemonMission_saveActor_FUN_004f68d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f68d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f68d5
    CMP EDX,0xff000000                  ; 004f68d9
    JNC 0x004f6914                      ; 004f68df
        ;   XREF to: 004f6914 (CONDITIONAL_JUMP)  ; LAB_004f6914
    MOV EAX,0x600670                    ; 004f68e1 | = "(none)"
    TEST EDX,EDX                        ; 004f68e6
    JZ 0x004f68ec                       ; 004f68e8
        ;   XREF to: 004f68ec (CONDITIONAL_JUMP)  ; LAB_004f68ec
    MOV EAX,EDX                         ; 004f68ea
    PUSH EAX                            ; 004f68ec | = "(none)"
        ;   Label: LAB_004f68ec
    PUSH 0x5c89a1                       ; 004f68ed | DAT_005c89a1
    PUSH EBX                            ; 004f68f2
        ;   Label: LAB_004f68f2
    CALL crt_unknown.c_FUN_005a3140     ; 004f68f3
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004f68f8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f68fb
    TEST EDX,EDX                        ; 004f68ff
    JZ 0x004f691c                       ; 004f6901
        ;   XREF to: 004f691c (CONDITIONAL_JUMP)  ; LAB_004f691c
    PUSH EDX                            ; 004f6903
    PUSH 0x5c89a6                       ; 004f6904 | = "\t\t// %s\n"
    PUSH EBX                            ; 004f6909
    CALL crt_unknown.c_FUN_005a3140     ; 004f690a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004f690f
    POP EBX                             ; 004f6912
    RET                                 ; 004f6913
    PUSH EDX                            ; 004f6914
        ;   Label: LAB_004f6914
    PUSH 0x5c899c                       ; 004f6915 | DAT_005c899c
    JMP 0x004f68f2                      ; 004f691a
        ;   XREF to: 004f68f2 (UNCONDITIONAL_JUMP)  ; LAB_004f68f2
    PUSH 0x5c89af                       ; 004f691c | DAT_005c89af
        ;   Label: LAB_004f691c
    PUSH EBX                            ; 004f6921
    CALL crt_unknown.c_FUN_005a3140     ; 004f6922
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f6927
    POP EBX                             ; 004f692a
    RET                                 ; 004f692b

