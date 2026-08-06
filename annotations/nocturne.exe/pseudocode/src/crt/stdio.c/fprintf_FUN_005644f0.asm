; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fprintf_FUN_005644f0(_FILE *file,char *format,...)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   cockpit_ckptutil.c_FUN_0042ee00 at 0042ee6d
;   core_actor.cpp_CDemonActor_save_FUN_0040c040 at 0040c096
;   core_actor.cpp_archiveActor_FUN_0040c980 at 0040c9ca
;   core_actor.cpp_archiveBox_FUN_0040ce80 at 0040cf19
;   core_actor.cpp_archiveClothList_FUN_0040cf70 at 0040d078
;   core_actor.cpp_archiveDescription_FUN_0040c3a0 at 0040c404
;   core_actor.cpp_archiveFloat_FUN_0040c880 at 0040c8ed
;   core_actor.cpp_archiveInteger_FUN_0040c900 at 0040c969
;   core_actor.cpp_archiveLocation_FUN_0040c590 at 0040c620
;   core_actor.cpp_archiveMotionState_FUN_0040cb00 at 0040cb99
;   ... and 29 more
;
; Called Functions:
;   crt_unknown.c_FUN_0056ae10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005644f0
        ;   Label: crt_stdio.c_fprintf_FUN_005644f0
    SUB ESP,0x4                         ; 005644f1
    LEA EAX,[ESP + 0x14]                ; 005644f4
    MOV dword ptr [ESP],EAX             ; 005644f8
    MOV EAX,ESP                         ; 005644fb
    PUSH EAX                            ; 005644fd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005644fe
    PUSH EDX                            ; 00564502
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564503
    PUSH EBX                            ; 00564507
    CALL crt_unknown.c_FUN_0056ae10     ; 00564508
        ;   XREF to: 0056ae10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056ae10()
    ADD ESP,0xc                         ; 0056450d
    ADD ESP,0x4                         ; 00564510
    POP EBX                             ; 00564513
    RET                                 ; 00564514

