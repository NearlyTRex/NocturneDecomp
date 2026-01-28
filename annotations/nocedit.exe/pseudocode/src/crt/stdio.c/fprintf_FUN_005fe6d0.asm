; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_fprintf_FUN_005fe6d0(FILE *file,char *format,...)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[117]:
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 at 004334ed
;   core_actor.cpp_CDemonActor_save_FUN_0040af30 at 0040af86
;   core_actor.cpp_serializeActor_FUN_0040b870 at 0040b8ba
;   core_actor.cpp_serializeClothList_FUN_0040be60 at 0040bf68
;   core_actor.cpp_serializeDescription_FUN_0040b290 at 0040b2f4
;   core_actor.cpp_serializeFloat_FUN_0040b770 at 0040b7dd
;   core_actor.cpp_serializeInteger_FUN_0040b7f0 at 0040b859
;   core_actor.cpp_serializeLocation_FUN_0040b480 at 0040b510
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0 at 0040ba89
;   core_actor.cpp_serializeOrientation_FUN_0040b3e0 at 0040b467
;   ... and 107 more
;
; Called Functions:
;   crt_stdio.c_vfprintf_FUN_00604850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe6d0
        ;   Label: crt_stdio.c_fprintf_FUN_005fe6d0
    SUB ESP,0x4                         ; 005fe6d1
    LEA EAX,[ESP + 0x14]                ; 005fe6d4
    MOV dword ptr [ESP],EAX             ; 005fe6d8
    MOV EAX,ESP                         ; 005fe6db
    PUSH EAX                            ; 005fe6dd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005fe6de
    PUSH EDX                            ; 005fe6e2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fe6e3
    PUSH EBX                            ; 005fe6e7
    CALL crt_stdio.c_vfprintf_FUN_00604850 ; 005fe6e8
        ;   XREF to: 00604850 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vfprintf_FUN_00604850(FILE * file, char * format, va_list_t args)
    ADD ESP,0xc                         ; 005fe6ed
    ADD ESP,0x4                         ; 005fe6f0
    POP EBX                             ; 005fe6f3
    RET                                 ; 005fe6f4

