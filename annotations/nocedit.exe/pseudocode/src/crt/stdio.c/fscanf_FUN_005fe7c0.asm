; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_fscanf_FUN_005fe7c0(_FILE *file,char *format,...)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[83]:
;   core_actor.cpp_CDemonActor_load_FUN_0040b050 at 0040b08e
;   core_actor.cpp_archiveClothList_FUN_0040be60 at 0040bea4
;   core_actor.cpp_archiveFloat_FUN_0040b770 at 0040b78c
;   core_actor.cpp_archiveInteger_FUN_0040b7f0 at 0040b80d
;   core_actor.cpp_archiveLocation_FUN_0040b480 at 0040b4a9
;   core_actor.cpp_archiveOrientation_FUN_0040b3e0 at 0040b404
;   core_actor.cpp_archivePartStatus_FUN_0040bae0 at 0040bb29
;   core_actor.cpp_archiveQuaternion_FUN_0040b520 at 0040b548
;   core_actor.cpp_archiveRules_FUN_0040c000 at 0040c044
;   core_actor.cpp_archiveString_FUN_0040b5c0 at 0040b63f
;   ... and 73 more
;
; Called Functions:
;   crt_stdio.c_vfscanf_FUN_005fe738
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe7c0
        ;   Label: crt_stdio.c_fscanf_FUN_005fe7c0
    SUB ESP,0x4                         ; 005fe7c1
    LEA EAX,[ESP + 0x14]                ; 005fe7c4
    MOV dword ptr [ESP],EAX             ; 005fe7c8
    MOV EAX,ESP                         ; 005fe7cb
    PUSH EAX                            ; 005fe7cd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005fe7ce
    PUSH EDX                            ; 005fe7d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fe7d3
    PUSH EBX                            ; 005fe7d7
    CALL crt_stdio.c_vfscanf_FUN_005fe738 ; 005fe7d8
        ;   XREF to: 005fe738 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vfscanf_FUN_005fe738(_FILE * file, char * format, va_list_t args)
    ADD ESP,0xc                         ; 005fe7dd
    ADD ESP,0x4                         ; 005fe7e0
    POP EBX                             ; 005fe7e3
    RET                                 ; 005fe7e4

