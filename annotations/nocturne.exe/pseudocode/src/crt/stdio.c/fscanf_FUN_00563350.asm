; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_stdio_c_fscanf_FUN_00563350(_FILE *param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[49]:
;   core_actor.cpp_CDemonActor_load_FUN_0040c160 at 0040c19e
;   core_actor.cpp_archiveClothList_FUN_0040cf70 at 0040cfb4
;   core_actor.cpp_archiveFloat_FUN_0040c880 at 0040c89c
;   core_actor.cpp_archiveInteger_FUN_0040c900 at 0040c91d
;   core_actor.cpp_archiveLocation_FUN_0040c590 at 0040c5b9
;   core_actor.cpp_archiveOrientation_FUN_0040c4f0 at 0040c514
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0 at 0040cc39
;   core_actor.cpp_archiveQuaternion_FUN_0040c630 at 0040c658
;   core_actor.cpp_archiveRules_FUN_0040d110 at 0040d154
;   core_actor.cpp_archiveString_FUN_0040c6d0 at 0040c74f
;   ... and 39 more
;
; Called Functions:
;   crt_unknown.c_vfscanf_FUN_005632c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563350
        ;   Label: crt_stdio.c_fscanf_FUN_00563350
    SUB ESP,0x4                         ; 00563351
    LEA EAX,[ESP + 0x14]                ; 00563354
    MOV dword ptr [ESP],EAX             ; 00563358
    MOV EAX,ESP                         ; 0056335b
    PUSH EAX                            ; 0056335d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056335e
    PUSH EDX                            ; 00563362
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563363
    PUSH EBX                            ; 00563367
    CALL crt_unknown.c_vfscanf_FUN_005632c8 ; 00563368
        ;   XREF to: 005632c8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_vfscanf_FUN_005632c8(_FILE * file, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0056336d
    ADD ESP,0x4                         ; 00563370
    POP EBX                             ; 00563373
    RET                                 ; 00563374

