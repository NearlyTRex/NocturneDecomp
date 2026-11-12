; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fscanf_FUN_005b8100(_FILE *file,char *format)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[48]:
;   core_actor.cpp_CDemonActor_load_FUN_0040b1c0 at 0040b1fe
;   core_actor.cpp_archiveClothList_FUN_0040bfd0 at 0040c014
;   core_actor.cpp_archiveFloat_FUN_0040b8e0 at 0040b8fc
;   core_actor.cpp_archiveInteger_FUN_0040b960 at 0040b97d
;   core_actor.cpp_archiveLocation_FUN_0040b5f0 at 0040b619
;   core_actor.cpp_archiveOrientation_FUN_0040b550 at 0040b574
;   core_actor.cpp_archivePartStatus_FUN_0040bc50 at 0040bc99
;   core_actor.cpp_archiveQuaternion_FUN_0040b690 at 0040b6b8
;   core_actor.cpp_archiveRules_FUN_0040c170 at 0040c1b4
;   core_actor.cpp_archiveString_FUN_0040b730 at 0040b7af
;   ... and 38 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b8078
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8100
        ;   Label: crt_stdio.c_fscanf_FUN_005b8100
    SUB ESP,0x4                         ; 005b8101
    LEA EAX,[ESP + 0x14]                ; 005b8104
    MOV dword ptr [ESP],EAX             ; 005b8108
    MOV EAX,ESP                         ; 005b810b
    PUSH EAX                            ; 005b810d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b810e
    PUSH EDX                            ; 005b8112
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8113
    PUSH EBX                            ; 005b8117
    CALL crt_unknown.c_FUN_005b8078     ; 005b8118
        ;   XREF to: 005b8078 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8078()
    ADD ESP,0xc                         ; 005b811d
    ADD ESP,0x4                         ; 005b8120
    POP EBX                             ; 005b8123
    RET                                 ; 005b8124

