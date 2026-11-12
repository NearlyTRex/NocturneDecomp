; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c03c0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[46]:
;   cockpit_ckptutil.c_FUN_00438e40 at 00438ead
;   core_actor.cpp_CDemonActor_save_FUN_0040adb0 at 0040ae06
;   core_actor.cpp_archiveActor_FUN_0040b6f0 at 0040b73a
;   core_actor.cpp_archiveBox_FUN_0040bbf0 at 0040bc89
;   core_actor.cpp_archiveClothList_FUN_0040bce0 at 0040bde8
;   core_actor.cpp_archiveDescription_FUN_0040b110 at 0040b174
;   core_actor.cpp_archiveFloat_FUN_0040b5f0 at 0040b65d
;   core_actor.cpp_archiveInteger_FUN_0040b670 at 0040b6d9
;   core_actor.cpp_archiveLocation_FUN_0040b300 at 0040b390
;   core_actor.cpp_archiveMotionState_FUN_0040b870 at 0040b909
;   ... and 36 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c4fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c03c0
        ;   Label: crt_unknown.c_FUN_005c03c0
    SUB ESP,0x4                         ; 005c03c1
    LEA EAX,[ESP + 0x14]                ; 005c03c4
    MOV dword ptr [ESP],EAX             ; 005c03c8
    MOV EAX,ESP                         ; 005c03cb
    PUSH EAX                            ; 005c03cd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c03ce
    PUSH EDX                            ; 005c03d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c03d3
    PUSH EBX                            ; 005c03d7
    CALL crt_unknown.c_FUN_005c4fe0     ; 005c03d8
        ;   XREF to: 005c4fe0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4fe0()
    ADD ESP,0xc                         ; 005c03dd
    ADD ESP,0x4                         ; 005c03e0
    POP EBX                             ; 005c03e3
    RET                                 ; 005c03e4

