; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_stdio_c_fprintf_FUN_005644f0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[34]:
;   FUN_004a3b90 at 004a3c84
;   FUN_004d8720 at 004d8762
;   FUN_005055f0 at 00505602
;   core_actor.cpp_CDemonActor_save_FUN_0040c040 at 0040c096
;   core_actor.cpp_FUN_0040cb00 at 0040cb99
;   core_actor.cpp_FUN_0040ce80 at 0040cf19
;   core_actor.cpp_archiveActor_FUN_0040c980 at 0040c9ca
;   core_actor.cpp_archiveClothList_FUN_0040cf70 at 0040d078
;   core_actor.cpp_archiveDescription_FUN_0040c3a0 at 0040c404
;   core_actor.cpp_archiveFloat_FUN_0040c880 at 0040c8ed
;   ... and 24 more
;
; Called Functions:
;   FUN_0056ae10
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
    CALL FUN_0056ae10                   ; 00564508
        ;   XREF to: 0056ae10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ae10()
    ADD ESP,0xc                         ; 0056450d
    ADD ESP,0x4                         ; 00564510
    POP EBX                             ; 00564513
    RET                                 ; 00564514

