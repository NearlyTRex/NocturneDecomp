; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a3140(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[46]:
;   cockpit_ckptutil.c_FUN_00436a50 at 00436abd
;   core_actor.cpp_CDemonActor_save_FUN_0040aff0 at 0040b046
;   core_actor.cpp_archiveActor_FUN_0040b930 at 0040b97a
;   core_actor.cpp_archiveBox_FUN_0040be30 at 0040bec9
;   core_actor.cpp_archiveClothList_FUN_0040bf20 at 0040c028
;   core_actor.cpp_archiveDescription_FUN_0040b350 at 0040b3b4
;   core_actor.cpp_archiveFloat_FUN_0040b830 at 0040b89d
;   core_actor.cpp_archiveInteger_FUN_0040b8b0 at 0040b919
;   core_actor.cpp_archiveLocation_FUN_0040b540 at 0040b5d0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0 at 0040bb49
;   ... and 36 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a7e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3140
        ;   Label: crt_unknown.c_FUN_005a3140
    SUB ESP,0x4                         ; 005a3141
    LEA EAX,[ESP + 0x14]                ; 005a3144
    MOV dword ptr [ESP],EAX             ; 005a3148
    MOV EAX,ESP                         ; 005a314b
    PUSH EAX                            ; 005a314d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a314e
    PUSH EDX                            ; 005a3152
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3153
    PUSH EBX                            ; 005a3157
    CALL crt_unknown.c_FUN_005a7e50     ; 005a3158
        ;   XREF to: 005a7e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7e50()
    ADD ESP,0xc                         ; 005a315d
    ADD ESP,0x4                         ; 005a3160
    POP EBX                             ; 005a3163
    RET                                 ; 005a3164

